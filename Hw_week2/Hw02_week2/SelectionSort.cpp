#include <stdio.h>
 
// Hàm doi cho nguyên
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
 
// Hàm selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}
 
/* Hàm xuat mang */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void inputArray(int n,int arr[])
{
	int i;
    for (i=0; i < n; i++)
        {
        	printf("Nhap vao phan tu thu %d : ",i+1);
			scanf("%d",&arr[i]);
		}
}
 
int main()
{
    printf("Nhap vao so phan tu cua day N = ");
    int m;
    scanf("%d",&m);
    int arr[m];
    inputArray(m, arr);
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
