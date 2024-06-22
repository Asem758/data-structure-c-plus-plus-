#include <stdio.h>

void input_elements(int mat[][20], int);
void display_elements(int mat[][20], int);
void upper_half(int mat[][20], int);

int main()
{
int n,arr[20][20];
printf("Enter the 4x4 matrix = ");
scanf("%d", &n);
input_elements(arr, n);
printf("\n");
display_elements(arr, n);
printf("\n");
upper_half(arr, n);
return 0;
}
void input_elements(int mat[][20], int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("Enter data in [%d][%d] : ", i, j);
scanf("%d", &mat[i][j]);
}
}
}

void display_elements(int mat[][20], int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("%d\t", mat[i][j]);
}
printf("\n");
}
}

void upper_half(int mat[][20], int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j <n; j++)
{
if (i <= j)
{
printf("%d\t", mat[i][j]);
}
else
{
continue;

}
}
printf("\n");
}
}
