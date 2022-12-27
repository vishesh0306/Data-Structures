int main()
{
    int n;
    printf("ENTER THR SIZE OF ARRAY : ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

	printf("Given array is \n");
	printArray(arr, n);

	mergeSort(arr, 0, n - 1);

	printf("\nSorted array is \n");
	printArray(arr, n);
	return 0;
}
