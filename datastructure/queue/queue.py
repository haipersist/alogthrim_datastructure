
class Queue:
    
    def __init__(self,maxsize):
        self.maxsize = maxsize
        self.queue = []

    def push(self,obj):
        if len(self.queue) >= self.maxsize:
            print 'queue has been reached to the maxsize,',obj,'insert fail'
            return
        else:
            self.queue.append(obj)
    
    def isEmpty(self):
        if len(self.queue) == 0:
            return True
        else:
            return False

    def get_length(self):
        return len(self.queue)

    def pop(self):
        return self.queue.pop(0)
    
    def display(self):
        print self.queue


s=Queue(3)
s.push(3)
s.push(4)
s.push(6)
s.push(0)

s.display()

print s.pop()
print s.pop()
print s.pop()

