

import turtle


diametro = int(input("Inserisci valore diametro: "))

raggio = diametro/2


turtle.forward(180)
turtle.right(180-45)
turtle.forward(160)
turtle.right(180-75)
turtle.forward(130)


turtle.up()
turtle.goto(-50, -100)
turtle.down()

turtle.fillcolor('yellow')
turtle.begin_fill()
turtle.circle(raggio)
turtle.end_fill()


turtle.done()