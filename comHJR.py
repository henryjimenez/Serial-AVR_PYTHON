# -*- coding: utf-8 -*-
# Comunicacion serial en python
# se deben instalar las librerias seriales
# con el comando:
# pip install serial y
# pip instal pyserial

import serial
from pylive import live_plotter
import numpy as np

size = 100
x_vec = np.linspace(0,1,size+1)[0:-1]
y_vec = np.random.randn(len(x_vec))
line1 = []

def clean(L):#
    newl=[]#i
    for i in range(len(L)):
        temp=L[i][2:]
        newl.append(temp[:-5])
    return newl
    


def write(L):
    file=open("data.txt",mode='w')
    for i in range(len(L)):
        file.write(L[i]+'\n')
    file.close()



try:
    arduino = serial.Serial("COM6",timeout=1) # estoy onectado al puerto 3
except:
    print('vERIFIQUE EL PUERTO')

rawdata=[] # almacen de datos


while True:
    count=0
    while count<=0:
        rawdata.append(str(arduino.readline()))#lee datos hasta encontrar un cambio de linea
        print(rawdata)
        print()
        count+=1

    cleandata=clean(rawdata)
    rawdata=cleandata
    #print(rawdata[11:][:14])
    print('\n')
        
    print("Salida while")
    #print(rawdata[11:][:14])
    

