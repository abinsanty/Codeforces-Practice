'''
t = int(input())
for i in range(t):
    n = int(input())
    arr = range(1, n)
    found = False
    for i in range(0, len(arr) - 2):
        if arr[i] % 3 == 0:
            continue
        for j in range(i + 1, len(arr) - 1):
            if arr[j] % 3 == 0:
                continue
            for k in range(j+1, len(arr)):
                if arr[k] % 3 == 0:
                    continue
                if arr[i] + arr[j] + arr[k] == n:
                    print("YES")
                    print(arr[i], arr[j], arr[k])
                    found = True
                    break
            if found:
                break
        if found:
            break
    if not found:
        print("NO")
'''

t = int(input())
for i in range(t):
    n = int(input())
    arr = range(1, n)
    found = False
    for i in range(0, len(arr) - 2):
        left, right = i + 1, len(arr) - 1
        if arr[i] % 3 == 0:
            continue
        while left < right:
            if arr[left] % 3 == 0:
                left += 1
                continue
            elif arr[right] % 3 == 0:
                right -= 1
                continue
            if arr[i] + arr[left] + arr[right] == n:
                print("YES")
                print(arr[i], arr[left], arr[right])
                found = True
                break
            elif arr[i] + arr[left] + arr[right] < n:
                left += 1
            else:
                right -= 1
        if found:
            break
    if not found:
        print("NO")
