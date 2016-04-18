__author__ = 'haibo'


def isort(array):
    for i in range(1,len(array)):
        # set the temporary variable that store the inserting element
        inserting_element = array[i]
        j = i
        # if the inserting element is bigger than the rightest element in order list,it will not compare any more.
        while j > 0 and array[j-1] > inserting_element:
            if array[j-1] > inserting_element:
                array[j] = array[j-1]
            j -= 1
        array[j] = inserting_element

    print array

if __name__ == "__main__":
    array = [3,25,7,2,8,79,35,13,1,34]
    isort(array)
