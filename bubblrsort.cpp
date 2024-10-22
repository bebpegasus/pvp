int main()
{
int arr[]={5,1,4,2,8};
int N=sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,N);
printf("sorted array:");
printArray(arr,N);
return 0;
}

