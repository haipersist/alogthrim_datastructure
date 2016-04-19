import random


def qsort_1(array):
    """
    the function is very pythonic,it only needs 3 or 4 lines ,very simple.
    the copy list consists of three parts, the parts that snaller than base,base and
    the parts that bigger than base.
    :param array:
    """
    return qsort_1([lt for lt in array[1:] if lt<=array[0]]) + [array[0]] +  \
           qsort_1([gt for gt in array[1:] if gt>array[0]]) if len(array) > 1 else array


def qsort_2(array,left,right):
    if right > left:
        # the right index must be bigger than left
        #if the length of array is 1,no need to move pointer
        if right - left == 1:
            if array[left] > array[right]:
                array[left],array[right] = array[right],array[left]
            return None
        base = array[left]
        low_index,big_index = left + 1,right
        while low_index < big_index:
            while array[low_index] <= base and low_index<right :
                low_index += 1
            while array[big_index] >= base and big_index>left:
                big_index -= 1
            #if the left pointer moved into bigger than the righter pointer ,no need to exchange
            if low_index < big_index:
                array[low_index],array[big_index] = array[big_index],array[low_index]
        # exchange the base and the right pinter
        array[left],array[big_index] = array[big_index],array[left]

        if big_index is not None:
            qsort_2(array,left,big_index)
            qsort_2(array,big_index+1,right)









if __name__=="__main__":
    array = [7,4,8,11,9,14,2,10,3,1,464,68,134]
    qsort_2(array,0,len(array)-1)
    print array

        



