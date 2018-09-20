import sys
read = lambda: sys.stdin.readline().strip()
write = lambda x: sys.stdout.write(str(x) + "\n")

n = int(read())
d = {}
for i in range(n):
    s = read()
    if s in d:
        write(s + str(d[s]))
        d[s] += 1
    else:
        write("OK")
        d[s] = 1
