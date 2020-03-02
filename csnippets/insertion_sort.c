#include <stdio.h>

int main(void) {
	int arr[]={5,25,14,16,12,11,2,3,4,77};
	int n=sizeof(arr)/sizeof(arr[0]);
	int j=0;
	int temp=0;
	for(int i=1;i<n;i++){
	    temp=arr[i];
	    j=i-1;
	    while(j>=0 && arr[j]>temp){
	        arr[j+1]=arr[j];
	        j--;
	    }
	    arr[j+1]=temp;
	}
	printf("Sorted Array: ");
	for(int k=0;k<n;k++){
	    printf("%d ,",arr[k]);
	}
	return 0;
}

