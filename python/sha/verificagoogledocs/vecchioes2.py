import random
import turtle

lato=random.randint(100,150)

def posizionerandom():
    x=random.randint(-200,200)
    y=random.randint(-200,200)
    return x,y

def spostati():
    turtle.penup()
    x,y= posizionerandom()
    turtle.goto(x,y)
    turtle.pendown()
    
def triangle(lato):
    for x in range(3):
        turtle.forward(lato)
        turtle.right(120)
        
def hexagon(lato):
    for x in range(6):
        turtle.forward(lato)
        turtle.left(60)
        
def square(lato):
    for x in range(4):
        turtle.forward(lato)
        turtle.right(90)

def poligono(n, l, rgb):
    turtle.colormode(255)
    turtle.fillcolor(rgb)
    turtle.begin_fill()
    for _ in range(n): 
        turtle.forward(l) 
        turtle.left(360 / n)
    turtle.end_fill()
        
l=[]
for i in range(6):
    lato=int(input("inserisci lato" + str(i+1)))
    l.append(lato)

nlati = [3, 3, 6, 6, 4, 4]

for i in range(6):
    poligono(nlati[i], l[i], (0, 0, 0))
    spostati()

turtle.done()