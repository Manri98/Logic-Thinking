def button01_function():
    print("Has escrito: ")
    print('%s' % svalue.get())

def addition():
    posicion = len(svalue)    #TypeError: object of type 'StringVar' has no len()
    w.insert(posicion,"+")
    w.pack()

def sustract():
    w.insert(0,"-")
    w.pack()

def multiply():
    w.insert(0,"*")
    w.pack()

def divide():
    w.insert(0,"/")
    w.pack()

def result():
    k = 0
    variable = svalue.get()
    for i in range (0,len(variable)):
        if not variable[k].isdigit():
            print("no es un numero")
            posicionSigno = k
            print("el signo esta en la posicion ", k)
            #ahora para saber cuando acaba el primer numero basta con k-1 y el segundo empieza en k+1
        else:
            print("Sí es un número")
        k = k+1

        #FALTA: cuando reconozca que no es un número, salir del bucle (con un while)
        
        #ahora miramos que signo es y operamos
        if variable[k] == '+' : 
            print("es un mas")
             resultado = variable[0,k-1]+variable[k+1,len(variable)]
             print("%s"  % resultado)
        elif variable[k] == '-':
            print("es un menos")
            resultado = variable[0,k-1]-variable[k+1,len(variable)]
            print("%s"  % resultado)
        elif variable[k] == '*':
            print("es un asterisco")
            resultado = variable[0,k-1]*variable[k+1,len(variable)]
            print("%s"  % resultado)
        elif variable[k] == '/':
            print("es una barra")
            resultado = variable[0,k-1]/variable[k+1,len(variable)]
            print("%s"  % resultado)
        
    

from tkinter import *


window = Tk(className="Primer GUI")

foo = Label(window,text="Calculadora en Python")
foo.pack()

svalue = StringVar()
w = Entry(window,textvariable=svalue)
w.pack()

foo = Button(window,text="Enter",command= button01_function)
foo.pack()

foo = Button(window,text="+",command= addition)
foo.pack(padx=5,side=LEFT)

foo = Button(window,text="-",command= sustract)
foo.pack(padx=5,side=LEFT)

foo = Button(window,text="*",command= multiply)
foo.pack(padx=5,side=LEFT)

foo = Button(window,text="/",command= divide)
foo.pack(padx=5,side=LEFT)

foo = Button(window,text="=",command= result)
foo.pack(padx=5,side=LEFT)

boton = Button(window, text="Minimizar", command=window.iconify)
boton.pack()

window.mainloop()
