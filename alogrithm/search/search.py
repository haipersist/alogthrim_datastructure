
def order_search(array,target):
    found = False
    index = 0;
    while index < len(array)-1 and not found:
        if array[index] == target:
            found = True
            print index,array[index]
        else:
            index += 1
    return found



def binary_search(array,target):
    found = False
    start = 0
    last = len(array)-1
    while start<=last and not found:
        middle = (start + last)/2
        if array[middle] == target:
            found = True
            print middle,array[middle]
        elif array[middle] < target:
            start = middle +1
        else:
            last = middle -1

    return found


if __name__=="__main__":

    array = [6,1,46,50,9,40,60,10,40]
    print array
    print order_search(array,50)
    print sorted(array)
    print binary_search(sorted(array),50)

