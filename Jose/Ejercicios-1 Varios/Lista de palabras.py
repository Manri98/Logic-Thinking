palabras = []

palabra = input("Añade palabra:")

while palabra != "":
    palabras += [palabra]
    palabra = input("Agrega otra palabra: ")

print(palabras)
