N = input()
li = sorted(map(int, raw_input().split()))
minDiff = abs(li[0] - li[1])

for i in xrange(N-1):
    diff = abs(li[i] - li[i+1])
    if diff < minDiff:
        minDiff = diff
        
for i in xrange(N-1):
    diff = abs(li[i] - li[i+1])
    if diff == minDiff:
        print li[i], li[i+1],