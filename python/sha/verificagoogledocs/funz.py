import turtle

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