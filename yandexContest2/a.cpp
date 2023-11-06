#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MAX_N = 200000;
const int MAX_L = 200000;
const int BASE = 31;  // Простое число, можно выбрать другое

long long hash_prefix[MAX_N];  // Префиксные хэши строки S
long long base_pow[MAX_L];     // Степени BASE

int main() {
    string S;
    cin >> S;
    int N = S.size();  // Длина строки S

    int Q;
    cin >> Q;  // Количество запросов

    // Предварительно вычисляем префиксные хэши
    base_pow[0] = 1;
    for (int i = 1; i <= N; i++) {
        base_pow[i] = (base_pow[i - 1] * BASE);
    }
    hash_prefix[0] = S[0] - 'a';
    for (int i = 1; i < N; i++) {
        hash_prefix[i] = (hash_prefix[i - 1] * BASE + (S[i] - 'a'));
    }

    for (int i = 0; i < Q; i++) {
        int L, A, B;
        cin >> L >> A >> B;

        // Вычисляем хэши для подстрок
        long long hash_a = hash_prefix[A + L - 1];
        if (A > 0) {
            hash_a -= (hash_prefix[A - 1] * base_pow[L]);
        }

        long long hash_b = hash_prefix[B + L - 1];
        if (B > 0) {
            hash_b -= (hash_prefix[B - 1] * base_pow[L]);
        }

        if (hash_a == hash_b) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
