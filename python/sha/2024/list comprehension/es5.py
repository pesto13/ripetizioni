import random

def genera_lista_carMinusc(lunghezza=3):
    min = 97
    max = 122
    return [chr(random.randint(min,max)) for _ in range(lunghezza)]

def genera_lista_carMaisc(lunghezza=3):
    min = 65
    max = 90
    return [chr(random.randint(min,max)) for _ in range(lunghezza)]