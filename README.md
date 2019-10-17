# BlindStick
Arduino nano based blind stick with ultrasonic sensor 
/*
 *********************************************************************
 * Author : Ashish Kumar Verma 
 * Name Of Project : BLIND STICK WITH ULTRASONIC MODULE 
 * Version : v1.0
 * Date : 16/10/2019
 * Software : Arduino 1.8.9
 
 * Connection: 
   Connect D11 pin to Echo of Ultrasonic  
   Connect D12 pin to Trigger of Ultrasonic
   Connect Buzzer positive pin to D9 pin of arduino
           
 * Working :  
   When any object is between range 0 to 150 cm 
   the buzzer will change tone if object is 
   between 150 to 50 cm accordingly 
   if object is inside 50cm the buzzer will be full active 
   if no object detected inside range 150cm the
   buzzer will remain off. 
 
* TESTING :
   NOT DONE YET (16/10/2019)(HARDWARE UNAVAILABITY)           
   Before testing with buzzer check whether 
   Ultrasonic is calculating full distance upto 150cm or not 
 ********************************************************************* 
 */
