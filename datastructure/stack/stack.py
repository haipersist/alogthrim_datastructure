"""
stack is a LIFO datastructture,
it has pop and push base method,besides,
it should have decide wheather it's empty and so on

"""

class Stack():
    '''
    the first method is to get stack by array
    '''
    def __init__(self,maxsize):
        self.stack = []
        self.size = maxsize

    def isEmpty(self):
        return True if len(self.stack) == 0 else False

    def isFull(self):
        return True if len(self.stack) == self.size else False

    def push(self,obj):
        assert(not self.isFull())
        self.stack.append(obj)

    def pop(self):
        assert(not self.isEmpty())
        return self.stack.pop()

    def Empty(self):
        while not self.isEmpty():
            self.stack.pop()
    
    def get_top(self):
        return self.stack[-1]


if __name__ == "__main__":

	print type(globals()['Stack'])
	s=Stack(10)
	s.push(3)
	print globals()['s'].push(9)
	s.push(4)
	s.push(5)
	print 'top:',s.get_top()
	while not s.isEmpty():
		print s.pop()


