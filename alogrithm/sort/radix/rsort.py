
def rsort(array):
    length = len(str(max(array)))
    locat = 0
    while locat < length:
        bucket = []
        for n in xrange(0,10):
            bucket.append([])
        for i in array:
            index=i%10 if not locat else i/(locat*10)%10
            bucket[index].append(i)    
                
        array= []
        for i in bucket:
            array.extend(i)
        locat += 1
    return array
   
    
    
    
    
    
print rsort([35,8611,84,36,745,154,39,4,3])
        
        
        
