def gcd(m,n):
	Min = min(m,n)
	Max = max(m,n)
	result = Min
	while Max%Min!=0:
		result = Max%Min
		Max = Min
		Min = result
	return result,n*m/result

print gcd(4,6)


