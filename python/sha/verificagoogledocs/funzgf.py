import turtle
import random

def poligono(n, lunghezza_lati = 3, rgb = (0, 0, 0)):
    """
    Disegna un poligono regolare

    n (int): Quanti lati ha il poligono
    lunghezza_lati (int): La lunghezza del lato del poligono
    rgb: colore
    """
    turtle.colormode(255)
    turtle.fillcolor(rgb)
    turtle.begin_fill()
    for _ in range(n): 
        turtle.forward(lunghezza_lati) 
        turtle.left(360 / n)
    turtle.end_fill()

def line(spessore, lunghezza, xy = True):
    if(xy):
        turtle.setheading(0)
    else:
        turtle.setheading(90)
    turtle.pensize(spessore)
    turtle.forward(lunghezza)

def busta(lunghezza):
    for i in range(4):
        turtle.forward(lunghezza)
        turtle.right(90)
    for i in range(3):
        turtle.forward(lunghezza)
        turtle.right(120)

def sposta(x, y):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()