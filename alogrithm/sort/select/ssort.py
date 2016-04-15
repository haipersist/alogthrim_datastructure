
def ssort(array):

    for i in xrange(0,len(array)):
        j=i+1
        small=i
        while j<len(array):
            if array[j]<array[small]:
                small=j;
            j+=1
        if i!=small:
            array[small],array[i] = array[i],array[small]

    return array




array=[2,62,7,3,8,1,1]
print 'any',all(array)
print ssort(array)

