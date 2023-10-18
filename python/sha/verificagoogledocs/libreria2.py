import funzgf
import random

import turtle

def gradino(spessore, lunghezza):
    funzgf.line(spessore, lunghezza, False)
    funzgf.line(spessore, lunghezza, True)

screen = turtle.Screen()

turtle.penup()
turtle.goto(-screen.window_width()/2, -screen.window_height()/2)
turtle.pendown()

ngradini = random.randint(10, 20)
spessore = 3
lunghezza = 20
for _ in range(ngradini):
    gradino(spessore, lunghezza)

turtle.done()



