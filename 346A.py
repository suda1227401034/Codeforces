def gcd(a, b) :
	return a if not b else gcd(b, a%b);

a = map(int, raw_input().split());
m = max(a);
g = a[0];
for i in xrange(1, n) :
	g = gcd(g, a[i]);
le = len(a);
print "Alice" if (m / g - le) % 2 else "Bob";


