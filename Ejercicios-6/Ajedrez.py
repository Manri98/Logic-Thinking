from tkinter import *

ventana=Tk()

tablero = [
    ['T','C','A','D','K','A','C','T'],
    ['P','P','P','P','P','P','P','P'],
    ['0','0','0','0','0','0','0','0'],
    ['0','0','0','0','0','0','0','0'],
    ['0','0','0','0','0','0','0','0'],
    ['0','0','0','0','0','0','0','0'],
    ['P','P','P','P','P','P','P','P'],
    ['T','C','A','D','K','A','C','T']
    ]



def RellenoTablero():
    for i in range(8):
        for x in range(8):
            casilla = Button(ventana, text=tablero[i][x],command= Coordenadas())
            casilla.grid(row=i, column=x)

RellenoTablero()

#Coordenadas
def Coordenadas():
    print(4)
mira la posicion de boton y comprueba que letra hay en el tablero
Despues llama al objeto correspondiente
    

#FICHAS
class Peon:
    x=4
    y=4
    def Mover():     
    
class Torre:
    x=4
    y=4
    def Mover():
            
class Caballo:
    x=4
    y=4
    def Mover():
        

class Alfil:
    x=4
    y=4
    def Mover():
        

class Dama:
    x=4
    y=4
    def Mover():
        

class Rey:
    x=4
    y=4
    def Mover():
        

mover
si xy en todas las direcciones de la casilla es distinto de 0, no se puede mover
al pinchar en una casilla te retorna su valor en el tablero, mira su valor y se mueve eligiendo una funcion de ficha



ventana.mainloop()
