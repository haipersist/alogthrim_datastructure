from stack import Stack
import sys

`
class Stack2Queue():

	def __init__(self):
		self.stack1 = Stack(size)
		self.stack2 = Stack(size)


	def insert(self,data):
		self.stack1.push(data)

	def delete(self):
		if self.stack2.isEmpty():
			while not self.stack1.isEmpty():
				data = self.stack1.pop()
				self.stack2.push(data)

		if self.stack2.isEmpty():
			print 'queue is empty'
			sys.exit()

		top = self.stack2.pop()
		return top

	
