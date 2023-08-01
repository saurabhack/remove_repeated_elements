def deleteele(arr,index):
    size=8

    for i in range(index,size):
        if i==size-1:
            size=size-1
        else:
            arr[i]=arr[i+1]
if __name__=='__main__':
    size=8
    arr = [4, 2, 1, 3, 1, 2, 3, 4]
    arr.sort()
    for i in range(size):
        if i==size:
            break
        elif arr[i]==arr[i+1]:
            deleteele(arr,i+1)
            size=size-1
    for j in range(size):
        print(arr[j])