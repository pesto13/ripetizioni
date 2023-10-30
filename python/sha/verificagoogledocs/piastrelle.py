import random
import funzgf
import math
import turtle
y =-200
lato = 30 # si potrebbe chiedere all’utente o generare random
altezza = math.sqrt(3)*lato/2
while y < 200:
    x =-200
    while x < 200:
        # non è possibile generare la lista come negli altri
        # esercizi perché non sappiamo quanti saranno in tutto
        # gli esagoni (dipende dal lato)
        rosso = random.randint(0, 255)
        verde = random.randint(0, 255)
        blu = random.randint(0, 255)
        turtle.penup()
        turtle.goto(x, y)
        turtle.pendown()
        funzgf.poligono(6, lato, (rosso, verde, blu))
        x = x+3*lato
    y = y + 2*altezza
    x =-200+1.5*lato
y =-200 + altezza
while y < 200:
    x =-200+1.5*lato
    while x < 200:
        rosso = random.randint(0, 255)
        verde = random.randint(0, 255)
        blu = random.randint(0, 255)
        turtle.penup()
        turtle.goto(x, y)
        turtle.pendown()
        funzgf.poligono(6, lato, (rosso, verde, blu))
        x = x+3*lato
    y = y + 2*altezza