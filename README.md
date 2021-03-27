<h2 align="center">
 lab-05: Arbori binari
</h2>

<h4>Cerințe:</h4>

1. Creati un arbore binar folosind functia ( CreateBalanced(int N) – slide 23 – C5). Toate elementele/nodurile  din arbore au valori (chei)
2. Parcurgeti arborele in inordine (SRD) – folosind o functie implementata iterativ (idee: similar cu parcurgerea in preordine vezi sliduri 17-20 – C5).
Idee implementare: folosti-va de implementarea stivei data.
Stiva este implementata folosind un vector(vezi stack.h). In functia inorderIterative, se transmite
    * radacina arborelui si un vector in care sa stocati valorile obtinute in urma parcurgerii precum si numarul
    * de elemente din arbore presupus cunoscut.

3. Implementati o functie pentru eliberarea spatiul ocupat de un arbore binar (iterativ sau recursiv).
Idee solutie recursiva – traversati arborele in postordine (SDR) si eliberati spatiul pentru nodurile din stanga si dreapta inainte de a elibera spatiul ocupat de radacina. Se elibereaza mai intai spatiul  ocupat de nodurile cele mai din stanga jos, dreapta jos.
Idee solutie iterativa – parcurgeti arborele pe niveluri. Ideea e sa stergeti fiecare nod din coada dupa ce ati adaugat copii acelui nod in coada pentru a fi procesati. Se elibereaza mai intai spatiul  ocupat de nodurile cele mai de sus, tinand minte adresele copiilor.
4. Implementati o functie (iterativ sau recursiv) pentru gasirea celui mai apropiat stramos comun  a doua noduri (Lowest Common Ancestor - LCA) date prin valoarea lor (toate elementele din arbore au valori distincte).
LCA a doua noduri a si b este cel mai adanc (de jos nod) care ii are pe a si b ca descendenti.


![alt text](https://prnt.sc/10x317b)

