String val;
#include<Servo.h>
char c;
Servo Mg; //declaring the varibles to store the data.
Servo Mg2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);                                          // this is used to communicate between the arduino and Laptop.                                             //Mg is for servo of shoulder movement.
Mg.attach(8);
Mg2.attach(9);}
void loop() {
  // put your main code here, to run repeatedly:
 

while(Serial.available()){
  c=Serial.read();
  val+=c;  }
  if (val.length()>0){
 Serial.println(val);}                             
                                                      
         if(val=="1"){               // Down movement.
        for(int j=0;j<=120; j +=4){                      
          Mg.write(j);                                
          delay(50);}
       }                         
 if(val=="2"){                                                     //arm Up movemnet.
            for(int k=120;k==0;k-=2){
              Mg.write(k);
              delay(50);
              }}
          
if  (val=="3")
                 {                            
for(int j=0;j>=180; j -=4){                 
          Mg2.write(j);             //Right movement.
          delay(50);}}
     
  

 if(val=="4"){                                                     //arm Up movemnet.
            for(int k=180;k==0;k-=2){
              Mg2.write(k);
              delay(50);
              }}

    
  val="";}
  
  
