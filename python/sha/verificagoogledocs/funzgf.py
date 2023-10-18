import turtle

def poligono(n, l, rgb):
    turtle.colormode(255)
    turtle.fillcolor(rgb)
    turtle.begin_fill()
    for _ in range(n): 
        turtle.forward(l) 
        turtle.left(360 / n)
    turtle.end_fill()

def line(spessore, lunghezza, xy):
    # se vero -> destra
    # se falso -> alto
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