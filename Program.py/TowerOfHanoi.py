
def TowerOfHanoi(n , src, dest, Aux):
    if n==1:
        print ("Move disk 1 from src",src,"to dest",dest)
        return
    TowerOfHanoi(n-1, src, Aux, dest)
    print ("Move disk",n,"from src",src,"to dest",dest)
    TowerOfHanoi(n-1, Aux, dest, src)
         

n = 64
TowerOfHanoi(n,'A','B','C') 

 