#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1); // RX, TX
int i;
char store[]={0,1,2,3,4,5,6,7,8,9,10};
char cadena1[5];
float x[]={0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.11,0.12,0.13,0.14};


void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  //Serial.println("OBC en transmision");
 // set the data rate for the SoftwareSerial port
//  mySerial.begin(9600);
//  mySerial.println("Iniciando proceso");
}

void loop() { // 
 
// Serial.write("En TX");

//   dtostrf( x[i], 2,3, cadena1 );
//   Serial.write(cadena1);
//   dtostrf( x[i+1], 2,3, cadena1 );
//   Serial.write(cadena1);
//   dtostrf( x[i+2], 2,3, cadena1 );
//   Serial.write(cadena1);
 
  for(i=0;i<11;i++)
   { //delay(500);
     dtostrf( x[i], 2,2, cadena1 );
     //Serial.print(store[i]+0x00);
      Serial.println(cadena1);
      //Serial.print("\n");   
   }
  
//  Serial.println("\n");//Para separar una linea
}


 
  
