n = int(input());
a = map(int, raw_input().split())
b = sorted((v, k) for (k, v) in enumerate(a));
ans = [0] * n;
l = 0;
for x, i in b:
    ans[i] = l = max(x, l + 1)
print ' '.join(map(str, ans))
