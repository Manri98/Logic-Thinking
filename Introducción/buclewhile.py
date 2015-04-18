lista = []
palabra = input("Escriba una palabra: ")
while palabra != "":
    lista += [palabra]
    palabra = input("Escriba otra palabra: ")
print("Las palabras que ha escrito son: ",lista)
