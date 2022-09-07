from itertools import combinations

# find exact sum of sub array
# input <needed sum> = 5 <array elements> = 1 3 5 -8 1 -3 
# output --> 5
#        --> 1 + 1 + 3
#        --> -3 + 3 + 5

# input data
arr = []
need_sum = int(input("[+] - Needed Sum : "))
arr=list(map(int, input("[+] - List :- "). strip(). split()))

# arr = list(range(1, 50))
# need_sum = 100
arr_len = len(arr)

c = 0
for n in range(1, arr_len+1):
    comb = combinations(arr, n)
    for i in list(comb):
        if need_sum == sum(i):
            # printing result
            print("-->", ' + '.join(str(ii) for ii in sorted(i)))
            c += 1
    if n == arr_len:
        break
    n += 1

print(f"[!] - Found {c} possible combination{'s' if c > 1 else ''}")
