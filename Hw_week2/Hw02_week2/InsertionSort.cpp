#include <stdio.h>
#include <math.h>
 
/* Hàm sap xep insertion sort */
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
 
/* Hàm xuat mang */
void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
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
 
    insertionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
 
    return 0;
}
