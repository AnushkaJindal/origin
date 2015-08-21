from math import factorial as f
a=int(raw_input())
b=int(raw_input())
if a==25 and b<24:
    print (f(24+b)/f(24)/f(b))%1000000007 
elif b==25 and a<24: 
    print (f(24+a)/f(24)/f(a))%1000000007 
elif a>=24 and b>=24 and b-a==2 :
    print (f(48)/f(24)/f(24))*(2**(a-24))%1000000007 
elif a>=24 and b>=24 and a-b==2 :
    print (f(48)/f(24)/f(24))*(2**(b-24))  %1000000007  
else :
    print 0

