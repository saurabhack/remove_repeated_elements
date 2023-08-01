def deleteele(arr,index):
    size=8

    for i in range(index,size):
        if i==size-1:
            size=size-1
        else:
            arr[i]=arr[i+1]
if __name__=='__main__':
    arr=[4,2,1,3,1,2,3,4]
    size=8
    for i in range(size):
        for j in range(i+1,size):
            if arr[i]==arr[j]:
                deleteele(arr,j)
                size=size-1
    for l in range(size):
        print(arr[l])