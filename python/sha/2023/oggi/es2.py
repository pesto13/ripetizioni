import turtle

import random

numx=random.randint(2,4)

raggio=15

for contatore in range(numx):

    turtle.circle(raggio)
    raggio+=15

    turtle.penup()
    turtle.right(90)
    turtle.forward(15)
    turtle.left(90)
    turtle.pendown()


turtle.shape('turtle')
turtle.stamp()
turtle.penup()
turtle.write("ho disegnato ",numx)
turtle.forward()

turtle.stamp()
turtle.done()
