__author__ = 'haibo'


def selsort(array):
    length = len(array)
    for i in range(length-1):
        smallest = i
        j = i + 1
        while j < length:
            if array[j] < array[smallest]:
                smallest = j
            j += 1
        #if the current index i=small,the smallest element is array[i]
        if i != smallest:
            array[i],array[smallest] = array[smallest],array[i]
    print array

def sort():
    array = [7,4,8,11,9,14,2,10,3,1,464,68,134]
    selsort(array)



if __name__=="__main__":
    sort()

