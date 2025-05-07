#include <iostream>
#include <vector>

using namespace std;

class stack {
    vector<int> Num;

public:
    void pop() {
        if (Num.empty()) {
            cout << "[x] stack是空的" << endl;
        }
        else {
            cout << "Pop 的數值是：" << Num.back() << endl;
            Num.pop_back();
            printStack();
        }
    }

    void push() {
        if (Num.size() >= 10) {
            cout << "[x] Stack 已滿" << endl;
        }
        else {
            int val;
            cout << "請輸入要 push 的數值：";
            cin >> val;
            Num.push_back(val);
            printStack();
        }
    }

    void empty() {
        Num.clear();
        cout << "[v] Stack 已清空。" << endl;
    }

    void top() {
        if (Num.empty()) {
            cout << "[x] Stack 是空的 << endl";
        }
        else {
            cout << "Top 的數值是：" << Num.back() << endl;
        }
    }

    void setNum(int n) {
        int val;
        cout << "請輸入 " << n << " 個數字：" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> val;
            Num.push_back(val);
        }
        printStack();
    }

    void printStack() {
        cout << "目前 Stack：" << endl;
        for (int i = Num.size() - 1; i >= 0; --i) {
            cout << Num[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int op, n;
    stack st;

    cout << "要輸入多少數值呢 : ";
    cin >> n;
    while (n < 1 || n > 10) {
        cout << "[x] 請重新輸入 1~10 之間的數字：";
        cin >> n;
    }

    st.setNum(n);

    // 進入功能選單
    while (true) {
        cout << "\n--- 功能選單 ---" << endl;
        cout << "[1] push" << endl;
        cout << "[2] pop" << endl;
        cout << "[3] empty" << endl;
        cout << "[4] top" << endl;
        cout << "請選擇操作：";
        cin >> op;

        switch (op) {
        case 1:
            st.push();
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.empty();
            break;
        case 4:
            st.top();
            break;
        default:
            cout << "[x] 無效選項" << endl;
            break;
        }
    }

    return 0;
}
