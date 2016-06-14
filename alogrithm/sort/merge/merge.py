'''
merge sort use the diversive method,it needs a temp array

'''


def merge(L1,L2):
    temp_array = []
    while L1 and L2:
        if L1[0] > L2[0]:
            temp_array.append(L2.pop(0))
        else:
            temp_array.append(L1.pop(0))

    if L2:
        temp_array.extend(L2)
    if L1:
        temp_array.extend(L1)

    return temp_array

def merge_sort(array):
    length = len(array)
    if length == 0 :
        return None
    elif length == 1:
        return array
    center = length / 2
    return merge(merge_sort(array[:center]),merge_sort(array[center:]))

if __name__ == "__main__":
    array = [35,767,24,67,243,88,579,243,1]
    print merge_sort(array)



            
