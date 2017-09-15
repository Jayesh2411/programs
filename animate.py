from turtle import*
from time import sleep
title("This animation is created in Python by Jayesh Kumar Sinha!")
bgcolor("black")
speed(4)
ht()
pu()
goto(-300,0)
pd()
tracer(False)
L=["green","black"]
for i in range (5,101,2):
	for j in range(i):
		for z in range(40):
			pencolor(L[z%2])
			fd(20)
		rt(180-180/i)
	tracer(True)
	sleep(0.03)
	tracer(False)
	clear()

