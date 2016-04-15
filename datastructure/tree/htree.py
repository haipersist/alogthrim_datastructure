# -*- coding:utf-8

from itertools import *
import heapq

def make_big_heap(array,start,end):
    #lchild = lambda x:2*x+1
    #rchild = lambda x:2*x+2
    root = start
    while True:
        left = (root - 1) >> 1
        if left > end:
            break
        right = (root - 2) >> 1
        child = right if right <= end and array[left]<array[right] else left
        if array[child] <= array[root]:
            break
        else:
            array[root],array[child] = array[child],array[root]
            root = child

        
def make_small_heap(array,start,end):
    #lchild = lambda x:2*x+1
    #rchild = lambda x:2*x+2
    root = start
    while True:
        left = lchild(root)
        if left > end:
            break
        right = rchild(root)
        child = right if right <= end and array[left]>array[right] else left
        if array[child] >= array[root]:
            break
        else:
            array[root],array[child] = array[child],array[root]
            root = child



def make_large_heap(heap,start,end):
    newitem = heap(end)
    while start < end:
        parentpos = (end -1) >> 1
        parent = heap[parentpos]
        if parent < newitem:
            heap[pos] = parent
            pos = parentpos
            continue
        break
    heap[pos] =newitem

            


def insert(heap,item):
    heap.append(item)
    make_heap(heap,0,len(heap)-1)

def list_heap(array):
    for i in xrange(len(array)/2,-1,-1):
        make_big_heap(array,i,len(array)-1)
  



def heapsort(array):
    h=[]
    for item in array:
        heapq.heappush(h, item)
    return [heapq.heappop(h) for i in xrange(len(h))]


if __name__=="__main__":
    
    array=[3,7,1,8,230,56,100,34,12,40,9,54,67,24,26]
    print hsort(array)
    print heapsort(array)
    
          
       
    
            
 
