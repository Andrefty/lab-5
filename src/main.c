#include "tree.h"
#include "utils.h"

int main()
{
	// Daca testati o anumita functie in main, pentru a afla numarul de noduri
	// dintr-un arbore, folositi functia getNumberOfNodes din fisierul utils.h.
	FILE *f = openFile("../data/test-createbalanced.txt", READ_MODE);
	int treeSize;
	fscanf(f, "%d\n", &treeSize);
	TreeNode* root = createBalanced(treeSize, f);
	return 0;
}
