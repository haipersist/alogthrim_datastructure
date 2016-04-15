
def FindOneTimeInt(array):
	if len(array) == 0:
		return
	elif len(array) == 1:
		return array[0]
	result = array[0]
	for item in array[1:]:
		result ^= item
	return result


array = [8,6,2,2,5,3,4,4,3,5,6]
print FindOneTimeInt(array)

