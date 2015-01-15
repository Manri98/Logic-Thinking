import threading

n = 0 

def Validar():
    a = 0  
    for i in range(1,101):  
        if(n % i==0):  
            a=a+1  
    if(a!=2):  
        print("No es primo")  
    else:  
        print("si es primo") 

    


def Escribir(n, primo):
    print(n,' ',primo)
    n += 1


        
n = threading.Thread(name='Numeros', target=Numeros, args=())
n.start()



 #   global n
  #  for i in range(1,n+1):  
   #     print (i)
    #    i += 1
