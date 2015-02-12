import threading
from tkinter import *
import time

n = 0

def main():
    main = Tk()
    v = StringVar()
    
    e = Entry(main, textvariable=v)
    e.pack()

    b = Button(main, text="get", width=10, command= lambda: new(v))
    b.pack()

    main.mainloop()

def new(v):
    global n
    win1 = Toplevel()
    
    number = v.get()
    n = int(number)
    
    Label(win1, textvariable=v).pack()
    for i in range(n):
        print(n-i)
        v.set(n-i)
        Label(win1, textvariable=v)
        win1.update_idletasks()
        time.sleep(1)
    win1.mainloop()


 
    


main()
