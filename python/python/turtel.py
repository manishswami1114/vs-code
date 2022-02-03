from turtle import *
color('red','pink')
begin_fill()
while True:
    forward(120)
    left(140)
    if abs(pos()) <1:
        break
end_fill()
done()
