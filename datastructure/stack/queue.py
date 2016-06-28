


class Full(Exception):
    pass


class Empty(Exception):
    pass



class Queue:
    
    def __init__(self,maxsize):
        self.maxsize = maxsize
        self.queue = []

    def push(self,obj):
        if len(self.queue) >= self.maxsize:
            raise Full
        else:
            self.queue.append(obj)
    
    def isEmpty(self):
        return True if len(self.queue) else False

    @property
    def size(self):
        return len(self.queue)

    def pop(self):
        if len(self.queue) == 0:
            raise Empty
        else:
            return self.queue.pop(0)

    def peek(self):
        return self.queue[0]


s=Queue(3)
s.push(3)
s.push(4)
s.push(6)



print s.pop()
print s.pop()
print s.pop()

