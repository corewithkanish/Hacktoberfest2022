arr_1 = [1,2,3556,65,656,8908];
def search(arr_1,lent,find):
    for i in range(0,lent):
        if(arr_1[i]==find):
            return i
    return -1
    
    
    
num_1 = len(arr_1)
num_2 = 90
result = search(arr_1,num_1,num_2)
if(result==-1):
    print("Number not available ")
else:
    print("number is available at %d"%(result))
