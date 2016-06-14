__author__ = 'haibo'
import timeit



def msort(array):
    exchange = False
    length = len(array)
    for i in range(length-1):
        j = length - 1
        while j > i:
            if array[j] < array[j-1]:
                array[j],array[j-1] = array[j-1],array[j]
                exchange = True
            j -= 1
        # after the first sort,if the exchange still be False,ie,the array itself is in order,so it will break the loop
        if exchange != True:
            break
    print array

def sort():
    array = [7,4,8,11,9,14,2,10,3,1,464,68,134]
    msort(array)



if __name__=="__main__":
    t=timeit.Timer("sort()",'from __main__ import sort')
    print t.timeit(1)




