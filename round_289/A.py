n = int(raw_input())

a = [[1]*n] * n
for i in xrange(1, n):
	for j in xrange(1, n):
		a[i][j] = a[i-1][j] + a[i][j-1];

res = 0
for i in xrange(n): res = max(res, max(a[i]))
print res

