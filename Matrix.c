#include <stdio.h>
int main()
{
	int *ptr[3][3];
	int i,j;
	for(i=0;i<3;i++)
{
		for(j=0;j<3;j++)
		{
			printf("Element[%d][%d]=",i,j);
			scanf("%d",(*(ptr+i)+j));
		}
	}
printf("The given matrix is:\n");
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("  %d",*(*(ptr+i)+j));
			if(j==2)
			{
				printf("\n");
			}
}
}
return 0;///////////////////
}
