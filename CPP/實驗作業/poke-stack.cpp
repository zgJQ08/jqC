#include <iostream>
#include <vector>
using namespace std;

bool ok(int N, int m) {
    vector<int> A(N);
    for (int i = 0; i < N; i++) A[i] = i + 1;
    A.erase(A.begin());  
    int i = 0;
    while (A.size() > 1) {
        i = (i + m - 1) % A.size();
        if (A[i] == 13) return false;
        A.erase(A.begin() + i);
    }
    return A[0] == 13;
}

int main() {
    int N;
    while (cin >> N && N != -1) {
        int AS = -1;
        for (int m = 1; m < N; ++m) {
            if (ok(N, m)) {
                AS = m;
                break;
            }
        }
        if (AS == -1)
            cout << "no answer\n";
        else
            cout << AS << "\n";
    }
    return 0;
}
