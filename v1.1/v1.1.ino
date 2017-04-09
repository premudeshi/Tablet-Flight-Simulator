/*
Arduino Turn LED On/Off using Serial Commands
Created April 22, 2015
Hammad Tariq, Incubator (Pakistan)

It's a simple sketch which waits for a character on serial
and in case of a desirable character, it turns an LED on/off.

Possible string values:
a (to turn the LED on)
b (tor turn the LED off)
*/

char junk;
String inputString="";

void setup()                    // run once, when the sketch starts
{
 Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(13, OUTPUT);
}

void loop()
{
  if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }      // clear the serial buffer
    if(inputString == "1"){         //in case of 'a' turn the LED on
      Serial.println("C411") ;
    }else if(inputString == "2"){   //incase of 'b' turn the LED off
         Serial.println("C410") ;
        
      }else if(inputString == "3"){   //incase of 'b' turn the LED off
    Serial.println("C421") ;
    
       }else if(inputString == "4"){   //incase of 'b' turn the LED off
    Serial.println("C420") ;
      
         }else if(inputString == "5"){   //incase of 'b' turn the LED off
          Serial.println("C431") ;
      
         }else if(inputString == "6"){   //incase of 'b' turn the LED off
    Serial.println("C430") ;
      
         }else if(inputString == "7"){   //incase of 'b' turn the LED off
         Serial.println("C441") ;
      
         }else if(inputString == "8"){   //incase of 'b' turn the LED off
     Serial.println("C440") ;
         }else if(inputString == "9"){   //incase of 'b' turn the LED off
     Serial.println("C451") ;
      
         }else if(inputString == "a"){   //incase of 'b' turn the LED off
          Serial.println("C450") ;
      
         }else if(inputString == "b"){   //incase of 'b' turn the LED off
         Serial.println("C461") ;
      
         }else if(inputString == "c"){   //incase of 'b' turn the LED off
        Serial.println("C460") ;
      
         }else if(inputString == "d"){   //incase of 'b' turn the LED off
     Serial.println("C471") ;
    
       }else if(inputString == "e"){   //incase of 'b' turn the LED off
    Serial.println("C470") ;
      
         }else if(inputString == "f"){   //incase of 'b' turn the LED off
        Serial.println("C481") ;
      
         }else if(inputString == "g"){   //incase of 'b' turn the LED off
          Serial.println("C480") ;
      
         }else if(inputString == "h"){   //incase of 'b' turn the LED off
      Serial.println("C491") ;
      
         }else if(inputString == "i"){   //incase of 'b' turn the LED off
        Serial.println("C490") ;
      
         }else if(inputString == "j"){   //incase of 'b' turn the LED off
       Serial.println("C501") ;
      
         }else if(inputString == "k"){   //incase of 'b' turn the LED off
         Serial.println("C500") ;
      
         }
    
    
    inputString = "";
  }
}
