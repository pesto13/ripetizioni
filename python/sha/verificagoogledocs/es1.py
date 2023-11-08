import turtle
import random

def line(spessore, lunghezza, xy):
    # se vero -> destra
    # se falso -> alto
    if(xy):
        turtle.setheading(90)
    else:
        turtle.setheading(0)
    turtle.pensize(spessore)
    turtle.forward(lunghezza)


def genera_lista_random(n, min = 0, max = 100):
    l = []
    for _ in range(n):
        l.append(random.randint(min, max))
    return l