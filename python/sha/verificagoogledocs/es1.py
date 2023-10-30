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


def genera_lista_random(n, a, b):
    l = []
    for _ in range(n):
        l.append(random.randint(a, b))
    return l


for i in range(6):
    spessore = random.randint(1, 10)
    lunghezza = random.randint(100, 200)
    if (i < 3):
        xy = True
    else:
        xy = False
    # da spostarla
    line(spessore, lunghezza, xy)

turtle.done()