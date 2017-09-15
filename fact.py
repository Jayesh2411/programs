import functools

@functools.lru_cache(maxsize=10000000)

def fact(n):
	if n<2:
		return 1;
	else:
		return n*fact(n-1)

num=1000;
print(fact(num))
