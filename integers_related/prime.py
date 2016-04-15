import math

def Prime_Divi(num):
	#last = math.sqrt(num
	for i in xrange(2,num+1):
		while num % i == 0:
			num /=i
			print i,


Prime_Divi(100)
