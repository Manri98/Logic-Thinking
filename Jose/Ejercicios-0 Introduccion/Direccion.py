import time

direction = input("Vas a la izquierda o a la derecha?")

time.sleep(1)

if direction == "izquierda":
    print("Muy bien, vayamos a la izquierda")

elif direction == "derecha":
    print("Muy bien, vayamos a la derecha")

else:
    print("Piénsalo mejor")
