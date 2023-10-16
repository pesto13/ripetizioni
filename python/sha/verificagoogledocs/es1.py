import turtle
import random

def line(spessore, lunghezza, xy):
    # se vero -> destra
    # se falso -> alto
    if(xy):
        turtle.setheading(0)
    else:
        turtle.setheading(90)
    turtle.pensize(spessore)
    turtle.forward(lunghezza)


for i in range(6):
    spessore = random.randint(1, 10)
    lunghezza = random.randint(100, 200)
    if (i < 3):
        xy = True
    else:
        xy = False
    line(spessore, lunghezza, xy)

turtle.done()