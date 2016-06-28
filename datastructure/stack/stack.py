"""
stack is a LIFO datastructture,
it has pop and push base method,besides,
it should have decide wheather it's empty and so on


Author:Haibo Wang
Date:2016-06-28

"""

class Stack(object):

    def __init__(self,size):
        self.size = size
        self.stack = []

    def isEmpty(self):
        return True if len(self.stack) == 0 else False

    def isFull(self):
        return True if len(self.stack) == self.size else False


    def push(self,a):
        #the last one of list stack is the bottom of Stack
        assert(not self.isFull())
        self.stack.append(a)

    def pop(self):
        assert not self.isEmpty()
        self.stack.pop()

    def get_top(self):
        assert not self.isEmpty()
        return self.stack[-1]

    @property
    def size(self):
        return len(self.stack)

    def clear(self):
        while not self.isEmpty():
            self.pop()


if __name__ == "__main__":

    stack = Stack(3)
    stack.push(1)
    stack.push(2)
    stack.push(3)
    print stack.get_top()




