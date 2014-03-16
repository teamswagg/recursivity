#include <assert.h>
#include "recursivite.h"

int josephus_rec(int n, int m)
{
   assert(n>0);

   if (n==1)
      return 1;
   else
      return ((josephus_rec(n-1, m)+m-1) % n)+1;

}

