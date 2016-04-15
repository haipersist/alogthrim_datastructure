import random

def partition(array,left,right):
    
    if right-left==1:
        if array[left]>array[right]:
            array[left],array[right]=array[right],array[left]
        return None

    base=array[left]
    big_index,small_index = left+1,right
    while big_index < small_index:
        while array[big_index] <= base and big_index < right:
            big_index += 1
        while array[small_index] >= base and small_index > left:
            small_index -=1
        if big_index < small_index:
            array[big_index],array[small_index] = array[small_index],array[big_index]
    array[left],array[small_index] = array[small_index],base
    return small_index

def qsort(array,left,right):
    if  right > left:
        mid=partition(array,left,right)
        if mid is not None:
            qsort(array,left,mid)
            qsort(array,mid+1,right)



if __name__=="__main__":
    array=[]
    for i in xrange(0,50):
        array.append(random.randint(0,30))
    qsort(array,0,(len(array)-1))
    print array




        



