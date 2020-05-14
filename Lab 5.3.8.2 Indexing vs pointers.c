#include "stdio.h"
#include "string.h"

int main () {
	int value;
	scanf("%d", &value);
	if (value > 6 || value < 0) 
		printf("Error, no such day.");	
	else{
	    int index[] = {0,1,2,3,4,5,6};
	    char *days[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	    int i, *ptr;
	    ptr = index;
	    for (int i=0; i<value; i++){
	        ptr++;
	    }
	    printf("Pointer version: %s\n", days[*ptr]);
	    printf("Array index version: %s\n", days[value]);
	}
   return 0;
}
