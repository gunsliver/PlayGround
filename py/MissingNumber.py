from itertools import groupby

a_size = int(input().strip())
a = sorted(list(map(int, input().strip().split(' '))))
b_size = int(input().strip())
b = sorted(list(map(int, input().strip().split(' '))))

result = set()
a = dict([(k, len(list(v))) for k, v in groupby(a)])
b = dict([(k, len(list(v))) for k, v in groupby(b)])

for k, v in b.items():
    if k not in a or v != a[k]:
        result.add(k)
        
print (' '.join(map(str,sorted(result))))