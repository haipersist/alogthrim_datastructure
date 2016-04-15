from functools import wraps

#first solution,recursively
def fabnocci(n):
    if n < 0:
        return
    if n <= 1:
        return n
    else:
        return fabnocci(n-1) + fabnocci(n-2)

#second solution,recursively and cache
def fab_cache(func):

    cache = {}
    #miss = object()

    @wraps(func)
    def wrapper(args):
        result = cache.get(args)
        if result is None:
            result = func(args)
            cache[args] = result
        return result
    return wrapper

@fab_cache    
def cache_fab(n):
    if n <= 1:
        return n
    else:
        return fabnocci(n-1) + fabnocci(n-2)



#third solution, iter
def iter_fab(n):
	if n<=0:
		return
	elif n==1 or n==2:
		return 1
	else:
		a = 1
		b = 1
		times = 2
		while times<n:
			result = a+b
			a = b
			b = result
			times += 1
		return result














if __name__ == "__main__":
    print iter_fab(6)

