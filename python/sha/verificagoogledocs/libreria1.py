import funzgf

import turtle


lunghezza = 50

for _ in range(3):
    funzgf.poligono(4, lunghezza, (200, 200, 200))
    turtle.forward(lunghezza)

turtle.right(180)
turtle.forward(lunghezza*3)



turtle.left(90)
turtle.forward(lunghezza)
turtle.left(90)


for _ in range(3):
    funzgf.poligono(4, lunghezza, (200, 200, 200))
    turtle.forward(lunghezza)


turtle.done()