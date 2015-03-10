from tkinter import *

ventana=Tk()

actores=[]
actorcount=0

class Pelicula:
    actores=[]

def guardarpeli():
    npeli = nompeli.get()
    npeli = Pelicula()
    Pelicula.actores = actores
    print(Pelicula.actores[2])
    
def guardaractor():
    global actorcount
    nactor = nomactor.get()
    actores[actorcount] = nactor
    actorcount+=1

nompeli = StringVar()
nomactor = StringVar()

peli = Entry(ventana, textvariable=nompeli)
actor = Entry(ventana, textvariable=nomactor)
updatepeli = Button(ventana, text="Enter", command=guardarpeli)
updateactor = Button(ventana, text="Otro actor", command=guardaractor)

peli.grid(column=1, row=1)
actor.grid(column=1, row=2)
updatepeli.grid(column=2, row=1)
updateactor.grid(column=2, row=2)

ventana.mainloop()
