import random
import time

t0 = time.time_ns()
n=int(input()) 
m1=[[None]*n]*n
m2=[[None]*n]*n
ans=[] 

for i in range(n):  
    row=[0]*n 
    ans.append(row)

for i in range(n):
    for j in range(n):
        m1[i][j]=random.randint(1, 100000) 
        m2[i][j]=random.randint(1, 100000)

t1 = time.time_ns()  
print(t1-t0)
for i in range(n): 
   for j in range(n): 
      for k in range(n): 
         ans[i][j]+=m1[i][k]*m2[k][j]

for i in ans: 
   print(i)
t2 = time.time_ns() 

print(t2-t1) 
print(t2-t0)
