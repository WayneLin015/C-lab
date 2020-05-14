#include <stdio.h>
#include <string.h>

struct Group
{
	char person1[50];
	char person2[50];
	char person3[50];
	char person4[50];
};

int main()
{
	struct Group group;

	strcpy(group.person1, "Mary Smith\n");
	strcpy(group.person2, "James Johnson\n");
	strcpy(group.person3, "Patricia Williams\n");
	strcpy(group.person4, "John Brown\n");

	printf("%s",group.person1);
	printf("%s",group.person2);
	printf("%s",group.person3);
	printf("%s",group.person4);

	return 0;
}
