
def isort(array):
    for i in xrange(1,len(array)):
        temp=array[i]
        j=i
        while j>0 and array[j-1]>temp:
            array[j]=array[j-1]
            j=j-1
        array[j]=temp
    return array

    

print isort([6,3,2,1,8,4])
