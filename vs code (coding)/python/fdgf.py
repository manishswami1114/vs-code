from turtle import *
color('green', 'skyblue')
begin_fill()
while True:
    forward(140)
    left(140)
    backward(140)
    right(140)
    if abs(pos()) <= 1:
        break
end_fill()
done()
