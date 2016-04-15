
def get_count_more_half(array):
    items = list(set(array))
    print items
    result = filter(lambda x:array.count(x)>len(array)//2,items)
    return result



if __name__ == "__main__":

    array = [1,4,2,6,2,2,5,2,2,2,2,2]
    for item in get_count_more_half(array):
        print item
