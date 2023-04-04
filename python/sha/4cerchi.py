import turtle

distanza = 200
turtle.colormode(255)

for x in range(1,5):

    turtle.penup()
    
    if x == 1:
        turtle.goto(distanza, distanza)
        turtle.pencolor(200,100,150)
        turtle.fillcolor(200,100,150)
    elif x == 2:
        turtle.goto(-distanza, distanza)
        turtle.pencolor(50, 168, 82)
        turtle.fillcolor(50, 168, 82)
    elif x == 3:
        turtle.goto(-distanza, -distanza)
        turtle.pencolor(31, 86, 130)
        turtle.fillcolor(31, 86, 130)
    else:
        turtle.goto(distanza, -distanza)
        turtle.pencolor(163, 26, 83)
        turtle.fillcolor(163, 26, 83)

    turtle.pendown()
    turtle.begin_fill()
    turtle.circle(50)
    turtle.end_fill()


    





turtle.done()