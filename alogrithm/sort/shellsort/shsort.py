def shsort(array):
    interval = len(array)/2
    while interval >= 1:
        i = interval
        while i < len(array):
            if array[i] < array[i-interval]:
                j=i-interval
                temp=array[i]
                while j >=0 and array[j] >temp:
                    array[j+interval]=array[j]
                    j-=interval
                array[j+interval]=temp
            i+=1
        interval/=2

    return array


if __name__=="__main__":

    array=[3,6,9,5,7,4,8,2,1]
    print shsort(array)


         
