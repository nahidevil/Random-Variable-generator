#Xi=(aXi-1+c)mod(m)
a=5
m=21
c=9999
i=1
x=[2]
while True:
    x.append(((a*x[i-1])+c)%m)
    print("Value of X",i-1," is: ",x[i-1])
    check=x[i-1]
    count = 0
    for j in range(0, len(x)):
        if check == x[j]:
            count = count + 1
    if count == 2:
        print("Process terminated for X",i-1, " = ", check)
        break
    i = i + 1