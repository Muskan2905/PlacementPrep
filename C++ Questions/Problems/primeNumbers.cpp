#include <iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;


bool isPrime(int);

void printPrimeWithoutSieve(int);

void printPrimeWithSieve(int);

int main()
{
   int n, flag;
   cout << "Enter range to print Prime Numbers\n";
   cin >> n;
   cout << "Enter 1 to print prime Numbers without sieve and 2 to print Prime Numbers with Sieve\n";
   cin >> flag;
   if (flag == 1)
      printPrimeWithoutSieve(n);
   else
      printPrimeWithSieve(n);
   cout << endl;
   return 0;
}

bool isPrime(int n)
{
   int i;
   for (i = 2; i <= sqrt(n); i++)
   { //-n/2
      if (n % i == 0)
      {
         return false;
      }
   }
   return true;
}

//without sieve - O(n*sqrt(n))

void printPrimeWithoutSieve(int n)
{
   for (int i = 2; i <= n; i++)
   {
      if (isPrime(i))
      {
         cout << i << ", "; // if it is PN
      }
   }
}

// seive of eratosthenes - O(n(log(logn)))

void printPrimeWithSieve(int n)
{
   int i, j;
   bool prime[100];
   memset(prime,true,sizeof(prime));

   for (i = 2; i <= sqrt(n); i++)
   {
      if (prime[i])
      {
         for (j = i * i; j <= n; j = j + i)
         {
            prime[j] = false;
         }
      }
   }

   for(i=2;i<=n;i++){
      if(prime[i]){
         cout<<i<<",";
      }
   }
}


