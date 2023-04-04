

import turtle

raggio_petalo = 35
angolo_petalo = 60

posizione = 400
turtle.penup()
turtle.goto(-posizione, posizione)
turtle.pendown()
for n_fiore in range(3, 18+1):

    # colore

    for i in range(n_fiore):

        turtle.circle(raggio_petalo, angolo_petalo)
        turtle.left(180-angolo_petalo)
        turtle.circle(raggio_petalo, angolo_petalo)

        turtle.right(360/n_fiore)
    turtle.penup()
    posizione-=30
    turtle.goto(-posizione, posizione)
    turtle.pendown()

turtle.done()
