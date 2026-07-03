#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,x,count=0, firstposition = -1, arr[100];
	clrscr();
	printf("Enter thr number of elements(max 100):");
	scanf("%d",&n);
	printf("Enter %d elements : \n", n);
	for (i=0;i<n;i++) {
		scanf("%d", &arr[i]);
		}
	printf("Enter the number to find:");
	scanf("%d", &x);
	for(i=0; i<n;i++){
		if(arr[i] == x)
		{
			count++;
			if(firstposition == -1)
			{
				firstposition = i;
			}
		}
	}
printf("The number of occurences of %d: %d\n", x,count);
if(firstposition != -1)
{
	printf("The first occurence is at index: %d\n", firstposition);
}
else
{
	printf("%d not found in the array. \n", x);
}
getch();
}

