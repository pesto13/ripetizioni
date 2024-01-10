import random

def genera_lista_random(lunghezza=3,min=0,max=100):
    return [random.randint(min,max) for _ in range(lunghezza)]