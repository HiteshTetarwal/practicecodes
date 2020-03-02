arr=[5,6,54,8,65,67,56,97,2,47]
for i in range(0,len(arr)-1):
    for j in range(0,len(arr)-1-i):
        if arr[j]>arr[j+1]:
            temp=arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=temp
            
for n in range(0,len(arr)-1):
    print(arr[n], end =" ")
