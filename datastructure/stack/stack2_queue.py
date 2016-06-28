from stack import Stack
from queue import Queue


class Stack2Queue:

	def __init__(self,size1,size2):
		self.stack1 = Stack(size1)
		self.stack2 = Stack(size2)


	def push(self,a):
		self.stack1.push(a)

	def pop(self):
		if not self.stack2.isEmpty():
			self.stack2.pop()
		else:
			while not self.stack1.isEmpty():
				self.stack2.push(self.stack1.pop())


class Queue2Stack:

	def __init__(self,size1,size2):
		self.queue1 = Queue(size1)
		self.queue2 = Queue(size2)

	def push(self,data):
		self.queue1.push(data)

	def pop(self):
		while self.queue1.size!=1:
			self.queue2.push(self.queue1.pop())
		result = self.queue1.pop()
		while not self.queue2.isEmpty():
			self.queue1.push(self.queue2.pop())
		return result


