#include "recursivite.h"

int josephus_rec(int n, int m)
{
   if (n==1)
      return 0;
   else
      return (josephus_rec(n-1, m)+m) % n;
}

