#include <stdio.h>
 
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// Hàm sap xep bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool flag = false;
    for (i = 0; i < n-1; i++){
        flag = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true; 
            }
        }
        
        if(flag == false){
            break;
        }
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
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
