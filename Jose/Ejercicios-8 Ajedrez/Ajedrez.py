from tkinter import *

ventana=Tk()

Matriz = [
    ['wt','wc','wa','wk','wq','wa','wc','wt'],
    ['wp','wp','wp','wp','wp','wp','wp','wp'],
    ['o','o','o','o','o','o','o','o'],
    ['o','o','o','o','o','o','o','o'],
    ['o','o','o','o','o','o','o','o'],
    ['o','o','o','o','o','o','o','o'],
    ['wp','wp','wp','wp','wp','wp','wp','wp'],
    ['wt','wc','wa','wq','wk','wa','wc','wt'],]

Fichas = [
    ['img/bt.png','img/bc.png','img/ba.png','img/bk.png','img/bq.png','img/ba.png','img/bc.png','img/bt.png'],
    ['img/bp.png','img/bp.png','img/bp.png','img/bp.png','img/bp.png','img/bp.png','img/bp.png','img/bp.png'],
    ['img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png'],
    ['img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png'],
    ['img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png'],
    ['img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png','img/o.png'],
    ['img/wp.png','img/wp.png','img/wp.png','img/wp.png','img/wp.png','img/wp.png','img/wp.png','img/wp.png'],
    ['img/wt.png','img/wc.png','img/wa.png','img/wk.png','img/wq.png','img/wa.png','img/wc.png','img/wt.png'],]

def RellenarTablero():
    for i in range(8):
        for j in range(8):
            casilla = Button(ventana, text=Matriz[i][j], width=10, height=5, image=Fichas[i][j])
            casilla.grid(row=i, column=j)

RellenarTablero()
#
#def Peon():
    
#def Alfil():
    
#def Torre():
    
#def Caballo():
    
#def Rey():
    
#def Reina():
    
