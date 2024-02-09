import cv2
import numpy as np

image = cv2.imread('istockphoto-1451079337-1024x1024.jpg')
gray_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
cv2.imshow('Original Image', image)
cv2.waitKey(0)
cv2.destroyAllWindows()
