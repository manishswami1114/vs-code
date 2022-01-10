import epocCam
import numpy as np
from sklearn.metrics import pairwise

cap=cv2.videocapture(0)
#if jiggers are present orther than yellow area
kernelOpen = np.ones((5,5))
#if jiggers are present in yellow area
kernelclose = np.ones((20,20))
#HSV colur range which should be detected
lb = np.array([20,100,100])
ub = np.array([120,255,255])
while True:
    ret.frame=cap.read()
    flipped=cv2.flip(frame,1)
    flipped=cv2.resize(flipped,(50,400))

#use HSV of yellow to detect only yellow color
imgseg=cv2.cvtcolor(frame,cv2.COLOR_BGR2HSV)
imgsegFlipped=cv2.flip(imgseg,1)
imgsegFlipped=cv2.resize(imgsegFlipped,(500,400))

#masking and flitering all shades of yellow
mask=cv2.inrange(imgsegFlipped,lb,ub)
mask=cv2.resize(mask,(500,400))

#apply morphology to avoid jggers
maskOpen=cv2.morphologyEx(mask,cv2.HORPH_OPEN,kernelOpen)
maskOpen=cv2.resize(maskOpen,(500,400))
maskClose=cv2.morphologyEx(maskOpen,cv2.HORPH_OPEN,kernelOpen)
maskClose=cv2.resize(maskClose,(500,400))

final=maskClose
_, conts,h=cv2.findcotours(maskClose,cv2.RETR_EXTERAL,cv2.CHAIN_APPROX_NONE)
if(len(counts)!=0): #draws the contours of the object which has the highest
    b=max (conts, key=cv2.contourArea)
    west=tuple(b[b[:,:,0].argmin()][0])
    east=tuple(b[b[:,:,0].argmin()][0]) #above for east i.e right
    north=tuple(b[b[:,:,1].argmin()][0])
    south=tuple(b[b[:,:,1].argmin()][0])
    centre_x=(west[0]+east[0])/2
    centre_x=(north[0]+east[0])/2

    cv2=drawContours(flipped,b,-1,(0,255,0),3)
    cv2.circle(flipped,west,6,(0,0,255),-1)
    cv2.circle(flipped,east,6,(0,0,255),-1)
    cv2.circle(flipped,north,6,(0,0,255),-1)
    cv2.circle(flipped,south,6,(0,0,255),-1)
    cv2.circle(flipped,(int(centre_x),int(centre_y)),6,(255,0,0),-1)

cv2.imshow('video',flipped)



if cv2.waitkey(1) & 0xFF == ord(' '):
    break

cap.release()
cv2.destroyALLWindows()