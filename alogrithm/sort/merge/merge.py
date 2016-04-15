'''
merge sort use the diversive method,it nedd a temp array
'''

def merge(L1,L2):
    sorted_array=[]
    while L1 and L2:
        if L1[0] <= L2[0]:
            sorted_array.append(L1.pop(0))
        else:
            sorted_array.append(L2.pop(0))          
    if L1:
        sorted_array.extend(L1)             
    if L2:
        sorted_array.extend(L2)
    return sorted_array

def mersort(array):
    if len(array)<=1:
        return array
    center=len(array)//2
    return merge(mersort(array[:center]),mersort(array[center:]))


if __name__=="__main__":
    array=[8,20,15,4,6,3,7,2,1,9]
    print mersort(array)
    

            
