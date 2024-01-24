#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100],str3[100],str4[100];
    printf("Enter the first string =");
    gets(str1);
    printf("Enter the second string =");
    gets(str2);
    printf("lenth of 1st string %d\n", strlen(str1));
    printf("lenth of 2nd string %d\n", strlen(str2));
    if (strcmp(str1, str2) == 0)
        printf("Both strings are equal\n");
    else
        printf("Strings are unequal\n");
    strcpy(str3,str1);
    strcpy(str4,str2);
    printf("The reverse of first string is %s\n", strrev(str3));
    printf("The reverse of second string is %s\n", strrev(str4));
    strcat(str1,str2);
    printf("The concatenated string is %s\n", str1,str2);
	printf("The uppercase of first string is %s\n",strupr(str2));
	printf("The uppercase of Second string is %s\n",strupr(str1));
	printf("The lower case of first string is %s\n",strlwr(str1)); 
	printf("The lower case of Second string is %s\n",strlwr(str2));
	printf("After copy string is %s\n",strcpy(str1,str2));
	return 0;
}
