import threading
import time

def worker():
    print('Comienza', threading.currentThread().getName())
    time.sleep(2)
    print('Termina', threading.currentThread().getName())

def service():
    print('Comienza', threading.currentThread().getName())
    time.sleep(3)
    print('Termina', threading.currentThread().getName())

t = threading.Thread(name='service', target=service)
w = threading.Thread(name='worker', target=worker)
w2 = threading.Thread(name='worker2', target=worker)

w.start()
w2.start()
t.start()
