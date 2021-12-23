import cv2
import mediapipe as mp

cap=cv2.videoCapture(0)

mpHolistic = mp.solution.holistic
holistic=mpHolistic.Holistic()
mpDraw=mp.solution.drawing_utils
drawing_specs=mpDraw.DrawingSpec(thickness=1,circle_radius=1)

while True:
    success,img =cap.read()
    if not success:
        break 
    imgRGB=cv2.cvtColor(img,cv2.COLOR_BGR2RGB)
    result=holistic.process(imgRGB)

    mpDraw.draw_landmarks(img,result.face_landmarks,mpHolistic.FACE_CONNECTIONS,drawing_spaces,drawing_spaces)    
    mpDraw.draw_landmarks(img,result.left_hand_landmarks,mpHolistic.FACE_CONNECTIONS,drawing_spaces,drawing_spaces)    
    mpDraw.draw_landmarks(img,result.right_hand_landmarks,mpHolistic.FACE_CONNECTIONS,drawing_spaces,drawing_spaces)    
    mpDraw.draw_landmarks(img,result.pose_landmarks,mpHolistic.FACE_CONNECTIONS,drawing_spaces,drawing_spaces)
    cv2.imshow('Image',img)
    if cv2.waitkey(1)&0xff==ord('q'):
        break
    