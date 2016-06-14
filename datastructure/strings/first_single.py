import sys

def find_1st_single(str):
    hash_dict = dict.fromkeys(str,None)
    for index,item in enumerate(str):
        if hash_dict[item] is None:
            hash_dict[item] = index
        else:
            hash_dict[item] = -1
    result = filter(lambda x:x[1]>=0,hash_dict.iteritems())
    print sorted(result,key=lambda x:x[1]).pop(0)


find_1st_single('wfwfdfc')


