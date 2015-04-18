import random
import webbrowser
from tkinter import *

urlgay = "https://www.youtube.com/watch?v=XVE8DSeoX9U"



def verificar():
    global variable1
    global variable2 
    global variable3
    global variable4 
    global variable5
    global variable6 
    global variable7
    global variable8 
    global variable9

    if variable9.get() == 1:
        webbrowser.open(urlgay)
        
    var1 = variable1
    var2 = variable2
    var3 = variable3
    var4 = variable4
    var5 = variable5
    var6 = variable6
    var7 = variable7
    var8 = variable8        
    
    if variable1 == True:
        var1 = random.randint(150, 200)
        
    if var2 == 1:
        var1 = random.randint(100, 175)
        
    if var3 == 1:
        var3 = random.randint(50, 125)
        
    if var4 == 1:
        var4 = random.randint(0, 75)
        
    if var5 == 1:
        var5 = random.randint(-50, 25)

    if var6 == 1:
        var6 = random.randint(-100, -25)

    if var7 == 1:
        var7 = random.randint(-150, -75)

    if var8 == 1:
        var8 = random.randint(-200, -125)


    print(var1)
    #resultado = var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8
    #print(resultado)

########################################################################################################################
    
ventana = Tk()
   
########################################################################################################################        
texto0 = Label(ventana, text=" _____                                         _            _                        ")
texto1 = Label(ventana, text="|  __ \                                       | |          (_)                       ")
texto2 = Label(ventana, text="| |__) |___  ___ ___  _ __ ___   ___ _ __   __| | __ _  ___ _  ___  _ __   ___  ___  ")
texto3 = Label(ventana, text="|  _  // _ \/ __/ _ \| '_ ` _ \ / _ \ '_ \ / _` |/ _` |/ __| |/ _ \| '_ \ / _ \/ __| ")
texto4 = Label(ventana, text="| | \ \  __/ (_| (_) | | | | | |  __/ | | | (_| | (_| | (__| | (_) | | | |  __/\__ \ ")
texto5 = Label(ventana, text="|_|  \_\___|\___\___/|_| |_| |_|\___|_| |_|\__,_|\__,_|\___|_|\___/|_| |_|\___||___/ ")

                                                                                     
texto0.grid(row=10, column=0)
texto1.grid(row=11, column=0)
texto2.grid(row=12, column=0)
texto3.grid(row=13, column=0)
texto4.grid(row=14, column=0)
texto5.grid(row=15, column=0)
########################################################################################################################

bg = PhotoImage(file="play.png")

########################################################################################################################
variable1 = IntVar()
variable2 = IntVar()
variable3 = IntVar()
variable4 = IntVar()
variable5 = IntVar()
variable6 = IntVar()
variable7 = IntVar()
variable8 = IntVar()
variable9 = IntVar()

check1 = Checkbutton(ventana, text="Me gusta el heavy metal   ", var=variable1)
check2 = Checkbutton(ventana, text="Me gusta el punk          ", var=variable2)
check3 = Checkbutton(ventana, text="Me gusta el rock urbano   ", var=variable3)
check4 = Checkbutton(ventana, text="Me gusta el rock clásico  ", var=variable4)
check5 = Checkbutton(ventana, text="Me me gusta el ska        ", var=variable5)
check6 = Checkbutton(ventana, text="Me gusta el blues         ", var=variable6)
check7 = Checkbutton(ventana, text="Me gusta el jazz          ", var=variable7)
check8 = Checkbutton(ventana, text="Me gusta la música clásica", var=variable8)
check9 = Checkbutton(ventana, text="Me gusta Abraham Mateo    ", var=variable9)

check1.grid(row=0, column=0)
check2.grid(row=1, column=0)
check3.grid(row=2, column=0)
check4.grid(row=3, column=0)
check5.grid(row=4, column=0)
check6.grid(row=5, column=0)
check7.grid(row=6, column=0)
check8.grid(row=7, column=0)
check9.grid(row=8, column=0)
########################################################################################################################

cm = Button(ventana, image=bg, text="Verificar", command=verificar, width=32, height=32)
cm.grid(row=9, column=0)

########################################################################################################################
ventana.mainloop()
