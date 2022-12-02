Készíts egy programot, ami kiszámítja egy adott egészből induló Collatz-sorozatot és annak hosszát.
A Collatz-sorozat első eleme egy tetszőleges pozitív egész szám.

A sorozat további elemeit rekurzívan definiáljuk:

a sorozat következő eleme az előző háromszorosánál eggyel nagyobb, ha ez az előző elem páratlan volt,
különben pedig az adott elem fele.

Például a 3-ból induló Collatz-sorozat elemei:m 3, 10, 5, 16, 8, 4, 2, 1. A Collatz-sejtés értelmében ez a sorozat mindig eléri az 1-et, ez a
sorozat utolsó eleme. A 3-ból induló Collatz-sorozat hossza így 8.

A sorozat első elemét parancssorból kérjük be. Pl. ha a bemenet 3, a kimenet a következőképpen nézzen ki:

3, 10, 5, 16, 8, 4, 2, 1
8

A sorozat elemei vesszóvel és szóközzel legyenek elválasztva (az utolsó elem után is lehet vessző és szóköz).
A program semmi mást ne írjon ki a terminálra.
