#include <iostream>
#include <vector>

std::vector<int> tab;

// int my_f(int n) {
//     if (tab[n] != -1) {
//         return tab[n];
//     }

//     tab[n] = my_f(n - 1) + my_f(n - 2);
//     return tab[n];
// }

// int main() {
//     int n;
//     std::cin >> n;

//     tab.resize(n + 1, -1);
//     tab[0] = tab[1] = 1;

//     int result = my_f(n);
//     std::cout << result << std::endl;

//     return 0;
// }
