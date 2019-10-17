/*
 *********************************************************************
 * Author : Ashish Kumar Verma 
 * Name Of Project : BLIND STICK WITH ULTRASONIC MODULE 
 * Version : v1.0
 * Date : 16/10/2019
 * Software : Arduino 1.8.9
 * COnnection: Connect D11 pin to Echo of Ultrasonic  
 *             Connect D12 pin to Trigger of Ultrasonic
 *             Connect Buzzer positive pin to D9 pin of arduino
 *             
 * Working :  When any object is between range 0 to 150 cm 
 *            the buzzer will change tone if object is 
 *            between 150 to 50 cm accordingly 
 *            if object is inside 50cm the buzzer will be full active 
 *            if no object detected inside range 150cm the
 *            buzzer will remain off. 
 *     
 * TESTING : NOT DONE YET (16/10/2019)(HARDWARE UNAVAILABITY)           
 *         : Before testing with buzzer check whether 
 *           Ultrasonic is calculating full distance upto 150cm or not 
 ********************************************************************* 
 */


#include "Ultrasonic.h"  // keep Ultrasonic.h in same folder as this code is 
const int buzzer = 9;    // use PWM pin only for buzzer
const int Echo = 11;  
const int Trigger = 12;

Ultrasonic ultrasonic(Trigger,Echo);

void setup() {
  Serial.begin(9600); 
  pinMode(buzzer,OUTPUT);
}

void loop()
  {
    int distance = ultrasonic.Ranging(CM);  // get distance in centimeter
    Serial.println(distance);                   // for testing purpouse only 
        if ((distance>125) && (distance<=150))       //if(distnace is between 150 to 125 )
          {
            analogWrite(buzzer,70);                 //   second value inside () can be used to genearte PWM signal 
                                                    //   so buzzer will make different sound at different range
                                                    //   PWM signal range 0-255        
          }
        else if ((distance>100) && (distance<=125))  //if(distnace is between 125 to 100 )
          {
            analogWrite(buzzer,100);       
          }
        else if ((distance>75) && (distance<=100))   //if(distnace is between 100 to 75 )
          {
            analogWrite(buzzer,130);
          }
        else if ((distance>50) && (distance<=75))   //if(distnace is between 50 to 75 )
          {
            analogWrite(buzzer,180);      
          }
        else if ((distance>5) && (distance<=50))   //if(distnace is between 5 to 50 ) 
          {                                        //Not 0 because in close range ultrasonic misbehave sometime 
            digitalWrite(buzzer,HIGH);       
          }
        else
          {
            digitalWrite(buzzer,LOW);       
          }
  }
