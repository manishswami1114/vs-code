from turtle import *
color('red','pink')
begin_fill()
while True:
    forward(140)
    left(140)
    if abs(pos()) < .5000000:
        break
end_fill()
done()
