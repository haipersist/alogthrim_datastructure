# -*- coding:utf-8

import heapq

def make_heap(array,start,end):
    #lchild = lambda x:2*x+1
    #rchild = lambda x:2*x+2
    root = start
    while True:
        left = root*2 + 1
        if left > end:
            break
        right = root*2 + 2
        child = right if right <= end and array[left]<array[right] else left
        if array[child] <= array[root]:
            break
        else:
            array[root],array[child] = array[child],array[root]
            root = child

        
def list_heap(array):
    for i in xrange(len(array)/2,-1,-1):
        make_heap(array,i,len(array)-1)
  

def hsort(array):
    list_heap(array)
    for end in xrange(len(array)-1,0,-1):
        array[0],array[end] = array[end],array[0]
        make_heap(array,0,end-1)
    return array

def heapsort(array):
    h=[]
    for item in array:
        heapq.heappush(h, item)
    return [heapq.heappop(h) for i in xrange(len(h))]


if __name__=="__main__":
    
    array=[3,7,1,8,230,56,100,34,12,40,9,54,67,24,26]
    print hsort(array)
    
          
       
    
            
 
