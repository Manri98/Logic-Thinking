import time
direction = input("vas a la izquierda o a la derecha?")
time.sleep(1)
if direction == "izquierda":
	print("muy bien, vamos a la izquierda")
elif direction == "derecha":
	print("perfecto, a la derecha")
else: 
	print("piensatelo mejor")
