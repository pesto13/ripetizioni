# draw any polygon in turtle 

import turtle 
import random

def poligono(n, l, rgb):
    turtle.fillcolor(rgb)
    turtle.begin_fill()
    for _ in range(n): 
        turtle.forward(l) 
        turtle.left(360 / n)
    turtle.end_fill()

def sposta(x, y):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()

# faccio 3 poligoni casuali
turtle.colormode(255)
for i in range(3):
    nlati = random.randint(3, 10)
    lunghezza = random.randint(60, 180)
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    rgb = (r, g, b)
    x = random.randint(-200, 200)
    y = random.randint(-200, 200)

    poligono(nlati, lunghezza, rgb)
    sposta(x, y)

turtle.done()
