def Count(N):
	count = 0
	for i in xrange(1,N+1):
		j = i
		while j%5==0:
			count += 1
			j /= 5

	return count





print Count(5)
print Count(10)
