#include <assert.h>
#include "recursivite.h"

int josephus_rec(int n, int m)
{
   assert(n>0);

   if (n==1)
      return 0;
   else {
      int survivant = josephus_rec(n-1, m) + m;
      return (survivant % n)+1;
   }
}

