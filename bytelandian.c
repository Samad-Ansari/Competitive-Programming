
import os,sys
from io import BytesIO, IOBase

def check(a,k,mm):
    if a[mm-1]%2 == int(k[mm-1]):
        return True
    return False

def solve(n,k,path,val):
    le = len(k)
    a = [0]*64
    k = k.zfill(64)[::-1]
    st = [1]
    mini = [10**20]*(n+1)
    maxi = [0]*(n+1)
    mini[1],maxi[1] = val[0],val[0]
    bc = [0]*(n+1)
    a[val[0]-1] = 1
    elem = 1
    while len(st):
        if not len(path[st[-1]]):
            x = st.pop()
            if not bc[x]:
                if a[maxi[x]-1] == elem and maxi[x] == le:
                    return 'YES'
                if check(a,k,maxi[x]) and maxi[x] >= le:
                    return 'YES'
                if a[maxi[x]-1] != elem and mini[x] >= le:
                    return 'YES'
            a[val[x-1]-1] -= 1
            elem -= 1
            continue
        i = path[st[-1]].pop()
        path[i].remove(st[-1])
        a[val[i-1]-1] += 1
        st.append(i)
        mini[i] = min(val[i-1],mini[st[-2]])
        maxi[i] = max(val[i-1],maxi[st[-2]])
        bc[st[-2]] = 1
        elem += 1
    return 'NO'

def main():
	for _ in range(int(input())):
		n,k = map(int,input().split())
        path = [set() for _ in range(n+1)]
        for _ in range(n-1):
            u1,v1 = map(int,input().split())
            path[u1].add(v1)
            path[v1].add(u1)
        print(solve(n,bin(k)[2:],path,list(map(int,input().split()))))

#Fast IO Region
BUFSIZE = 8192
class FastIO(IOBase):
    newlines = 0
    def __init__(self, file):
        self._fd = file.fileno()
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None
    def read(self):
        while True:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()
    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()
    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)
class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")
sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
input = lambda: sys.stdin.readline().rstrip("\r\n")

if __name__ == '__main__':
    main()# cook your dish here
