#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char first_name[32];
    char last_name[32];
    int boss_id;
} Employee;

Employee employees[32];
int n;

int find_employee_index(const char *fname, const char *lname) {
    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].first_name, fname) == 0 && 
            strcmp(employees[i].last_name, lname) == 0) {
            return i;
        }
    }
    return -1; // not found
}

// 取得指定員工的上司鏈，以 id 陣列回傳，並回傳上司數量。
// 上司鏈包含該員工自己的上司、上司的上司...直到最高層 (最高層的老闆其 boss_id == 自己的 id)。
int get_boss_chain(int emp_index, int chain[]) {
    int count = 0;
    int current_id = employees[emp_index].boss_id;

    // 如果員工的 boss_id 等於自己，表示此員工是最高層，不存在上層。
    while (current_id != employees[emp_index].id) {
        // 根據 current_id 找到對應的員工
        int found = -1;
        for (int i = 0; i < n; i++) {
            if (employees[i].id == current_id) {
                found = i;
                break;
            }
        }
        if (found == -1) { 
            // 理論上不應發生，因為資料應該是完備的
            break;
        }
        chain[count++] = current_id;
        // 往上繼續找
        if (employees[found].boss_id == employees[found].id) {
            // 表示 found 是最高層了
            break;
        }
        current_id = employees[found].boss_id;
    }
    return count;
}

// 檢查 A 是否為 B 的上司：方法是看 B 的上司鏈中是否包含 A 的 id
int is_supervisor(int A_index, int B_index) {
    int chain[MAX_EMP];
    int c = get_boss_chain(B_index, chain);
    int A_id = employees[A_index].id;
    for (int i = 0; i < c; i++) {
        if (chain[i] == A_id) return 1;
    }
    return 0;
}

// 檢查是否為同事：兩人必須有共同的上司 (不包含彼此)，
// 簡單作法：取得兩人的上司鏈，檢查其中是否有共同的 id。
int is_colleague(int A_index, int B_index) {
    int A_chain[32], B_chain[32];
    int A_count = get_boss_chain(A_index, A_chain);
    int B_count = get_boss_chain(B_index, B_chain);

    for (int i = 0; i < A_count; i++) {
        for (int j = 0; j < B_count; j++) {
            if (A_chain[i] == B_chain[j]) return 1;
        }
    }
    return 0;
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s %s %d", &employees[i].id, 
              employees[i].first_name, employees[i].last_name,
              &employees[i].boss_id);
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        char f1[32], l1[32];
        char f2[32], l2[32];
        scanf("%s %s %s %s", f1, l1, f2, l2);

        int idx1 = find_employee_index(f1, l1);
        int idx2 = find_employee_index(f2, l2);

        // 判斷關係
        // 如果 idx1 是 idx2 的上司
        if (is_supervisor(idx1, idx2)) {
            printf("supervisor\n");
        }
        // 如果 idx2 是 idx1 的上司
        else if (is_supervisor(idx2, idx1)) {
            printf("subordinate\n");
        }
        // 如果是同事
        else if (is_colleague(idx1, idx2)) {
            printf("colleague\n");
        }
        // 都不是
        else {
            printf("unrelated\n");
        }
    }

    return 0;
}
