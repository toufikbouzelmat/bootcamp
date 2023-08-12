#include <stdio.h> 
#include <vector>
#include <set>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;


using namespace std;
  
void SieveOfEratosthenes(int a,int b)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[b + 1];
    memset(prime, true, sizeof(prime));
  
    for (int p = 2; p * p <= b; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= b; i += p)
                prime[i] = false;
        }
    }

        // Print all prime numbers
    int i = a;
    int k = 0;
    while (i <= b)
    {
         if (prime[i] == true)
         {
            cout << i << endl;
            k = 1;
         }
        i++;
    }
    if (k == 0)
        cout << "Absent" << endl;
    
}

int main()
{
    int a,b;
    cin >> a >> b;
    SieveOfEratosthenes(a,b);
}


// bool isPrime(int n)
// {
    
//     if (n <= 1)
//         return false;
//     int sq = sqrt(n);
//     for (int i = 2; i * i <= sq; i++)
//         if (sq % i == 0)
//             return false;
  
//     return true;
// }



// int main()
// {
//     int i = 0;

//     int inter_a;
//     int inter_b;

//     cin >> inter_a >> inter_b;
//     while (i < inter_b)
//     {
//         if (isPrime(inter_a) == true)
//             cout << inter_a << endl;
//         else if (isPrime(inter_a) == false && isPrime(inter_b) == false)
//         {
//             cout << "Absent" << endl;
//             break;
//         }    
//         i++;
//         inter_a++;
//     }
    
// }