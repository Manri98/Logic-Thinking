lista = []

palabra = input("Escriba una palabra: ")
while palabra !="":
    lista += [palabra]
    palabra = input("Escriba otra palabra o pulse intro para finalizar: ")
print("Has introducido: ",lista)
