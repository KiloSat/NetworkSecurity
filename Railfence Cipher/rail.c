#include<stdio.h>
#define SIZE 100
void toLowerCase(char plain[], int ps) 
{ 
	int i; 
	for (i = 0; i < ps; i++) { 
		if (plain[i] > 64 && plain[i] < 91) 
			plain[i] += 32; 
	} 
}

int removeSpaces(char* plain, int ps) 
{ 
	int i, count = 0; 
	for (i = 0; i < ps; i++) 
		if (plain[i] != ' ') 
			plain[count++] = plain[i]; 
	plain[count] = '\0'; 
	return count; 
}

encrytrail(char plain[SIZE],int depth)
{ int n;
  char ps;
  ps = strlen(plain);
  toLowerCase(plain,n);
  ps = removeSpaces(plain,ps);
  printf("%s\n",ps);

}


int main()
{   
	int depth;
	char plain[SIZE];
	

	printf("Enter the plaintext");
	gets(plain);
	printf("Enter the depth");
	scanf("%d",depth);
    
    encryptrail(plain,depth);

    return 0;
}