#include<stdio.h>


void merge(int arr[],int lb,int mid,int ub){
	int i=lb;
	int j=mid+1;
	int k=lb;
	int b[]={};
	while(i<=mid && j<=ub){
		if(arr[i]<=arr[j]){
			b[k]=arr[i];
			i++;
		}
		else{
			b[k]=arr[j];
			j++;
		}
		k++;
	}

	//if there are still elements left in i or j arrayas which are already sorted
	if(i>mid){
		while(j<=ub){
			b[k]=arr[j];
			j++,k++;
		}
	}
	else{
		while(i<=mid){
			b[k]=arr[i],i++,k++;
		}
	}

	//copying all the sorted value in initial array
	for(k=lb;k<=ub;k++){
		arr[k]=b[k];
	}

}

void MergeSort(int arr[],int lb,int ub){
	if(lb<ub){
	    int mid=(lb+ub)/2;
		MergeSort(arr,lb,mid);
		MergeSort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
}


int main(){
	int arr[]={5,3,6,4,78,49,51,25,26,47};

	int lb=0;
	int ub=sizeof(arr)/sizeof(arr[0]);

	MergeSort(arr,lb,ub-1);

	for(int i=lb;i<ub;i++)
	{
	 	printf("%d,",arr[i]);
	}

return 0;
}