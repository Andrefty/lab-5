#include "list.h"
#include "utils.h"

int main()
{
	node *list = NULL;
	FILE *file = openFile(TEST_FILE1, READ_MODE);

	list = makeList(file);
	print(list);
	printf("\n");
	list = removeDuplicates(list);
	print(list);
	printf("\n");
	return 0;
}
