
class Container:
    
    def __init__(self,size):
        self.size = size
        self.container = []
    
    def heappush(self,data):
        pos = len(self.container) 
        if pos == self.size:
            self.make_heap()
            if self.container[0] > data:
                self.container[0] = data  
        elif pos < self.size:
            self.container.append(data)
    
    def make_heap(self):
        for i in xrange(len(self.container)//2,-1,-1):
            self._siftdown(self.container,i,len(self.container)-1)

    def _siftdown(self,array,start,end):
        root = start
        while True:
            leftchild = root*2 + 1
            if leftchild > end:
                break
            rightchild = leftchild + 1
            try:
               child = rightchild if rightchild <= end and array[rightchild] > array[leftchild] else leftchild
            except:
               print leftchild,rightchild,end
            if array[child] <= array[root]:
                break
            else:
                array[root],array[child] = array[child],array[root]
                root = child




if __name__ == "__main__":

    array = [14,2,7,1,6,5,3,9]
    c = Container(4)
    for item in array:
        c.heappush(item)
    print c.container


