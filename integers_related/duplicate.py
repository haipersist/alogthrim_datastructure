def Dulp(array):
	hashtable = []
	result = []
	length = len(array)
	for item in array:
		if item in hashtable:
			if item not in result:
				result.append(item)
			continue
		else:
			hashtable.append(item)
	return result

print Dulp([2,2,4,5,6,4])









