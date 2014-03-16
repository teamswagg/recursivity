Moyen récursif
==============

Code
----
    int josephus_rec(int n, int m)
    {
      assert(n>0);

      if (n==1)
         return 1;
      else
         return ((josephus_rec(n-1, m)+m-1) % n) + 1;
    }

Cas de base
-----------
josephus\_rec(1, m) = 1

Condition de terminaison
------------------------
n == 1

Précondition
------------
n > 0

Paramètres
----------
* n, le nombre de soldats
* m, tq le m-ième soldats suivant sera le prochain à mourir

Postcondition
-------------
* josephus\_rec(n, m) vaut la position du dernier survivant parmis les n
  soldats
* n = n(0)
* m = m(0)

Récursivité
-----------
Linéaire (simple)

Trace
-----
Pour n=8 et m=3:  

Complexité
----------
O(n)
* Preuve  


