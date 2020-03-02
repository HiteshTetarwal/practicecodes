arr=[5,6,54,8,65,67,56,97,2,47]
for i in range(1,len(arr)):
    j=i-1
    temp=arr[i]
    while j>=0 and arr[j]>temp:
        arr[j+1]=arr[j]
        j=j-1
    arr[j+1]=temp
for n in range(0,len(arr)-1):
    print(arr[n], end =" ")
