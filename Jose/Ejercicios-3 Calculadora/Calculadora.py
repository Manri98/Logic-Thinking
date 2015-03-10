def button01_function():
    print("Has escrito")
    print("%s" % svalue.get())
    
    variable = svalue.get() 

    for i in range (0,len(variable)):
        k = 0
        if not variable[k].isdigit():
            print("signo")
        else:
            print("número")
        k += 1

def addition():
    w.insert(0,"+")
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

def one():
    w.insert(0,"1")
    w.pack()
    
def two():
    w.insert(0,"2")
    w.pack()
    
def three():
    w.insert(0,"3")
    w.pack()
    
def zero():
    w.insert(0,"4")
    w.pack()
    
from tkinter import *

window = Tk(className="Mi primer GUI")

foo = Label(window,text="Calculadora en python")
foo.pack()

svalue = StringVar()
w = Entry(window,textvariable=svalue)
w.pack()

foo = Button(window,text="Enter",command= button01_function)
foo.pack()

foo = Button(window,text="+",command= addition)
foo.pack(padx=10,side=LEFT)

foo = Button(window,text="-",command= sustract)
foo.pack(side=LEFT)

foo = Button(window,text="*",command= multiply)
foo.pack(padx=10,side=LEFT)

foo = Button(window,text="/",command= divide)
foo.pack(side=LEFT)

#siguiente linea

foo = Button(window,text="1",command= one)
foo.pack(padx=10,side=BOTTOM)

foo = Button(window,text="2",command= two)
foo.pack(side=BOTTOM)

foo = Button(window,text="3",command= three)
foo.pack(padx=10,side=BOTTOM)

foo = Button(window,text="0",command= zero)
foo.pack(side=BOTTOM)

window.mainloop()

    
