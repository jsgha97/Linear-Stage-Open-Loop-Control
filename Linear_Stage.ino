int dirA = 12;
int currA = 3;
int dirB = 13;
int currB = 11;
int button = 7;   // Button pin set-up
int counter = 0;
int highspeed = 4000;   // Initial motor speed
int lowspeed = 4500;   // Reduced motor speed
void setup(){
  pinMode(dirA,OUTPUT);
  pinMode(currA,OUTPUT);
  pinMode(dirB,OUTPUT);
  pinMode(currB,OUTPUT);
  pinMode(button,INPUT_PULLUP);
  
  while(digitalRead(7)== HIGH){}   // Remain idle until button is pressed
}
void loop() {
  while(digitalRead(button)== LOW){}   // Press button
  while(digitalRead(button)== HIGH){   // Move forward until button is pressed
    digitalWrite(dirB,HIGH);  // Full step sequencing
    digitalWrite(currA,LOW);  
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);

    digitalWrite(dirA,HIGH);   
    digitalWrite(currB,LOW);  
    digitalWrite(currA,HIGH); 
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);

    digitalWrite(dirB,LOW);    
    digitalWrite(currA,LOW);  
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);

    digitalWrite(dirA,LOW);    
    digitalWrite(currB,LOW);  
    digitalWrite(currA,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);
    }
  for (int counter=0; counter<=125; counter++){   // Retract 5mmm at reduced speed
    digitalWrite(dirA,LOW);           
    digitalWrite(currB,LOW);  
    digitalWrite(currA,HIGH);
    delayMicroseconds(highspeed);
    digitalWrite(currA,LOW);
  
    digitalWrite(dirB,LOW);    
    digitalWrite(currA,LOW);  
    digitalWrite(currB,HIGH);
    delayMicroseconds(highspeed);
    digitalWrite(currB,LOW);
  
    digitalWrite(dirA,HIGH);   
    digitalWrite(currB,LOW);  
    digitalWrite(currA,HIGH); 
    delayMicroseconds(highspeed);
    digitalWrite(currA,LOW);
  
    digitalWrite(dirB,HIGH);   
    digitalWrite(currA,LOW);  
    digitalWrite(currB,HIGH);
    delayMicroseconds(highspeed);
    digitalWrite(currB,LOW);
    }
  while(digitalRead(button)== LOW){}   // Move forward again until button is pressed by half stepping
  while(digitalRead(button)== HIGH){
    digitalWrite(dirA,LOW);  
    digitalWrite(currB,LOW);  
    digitalWrite(currA,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);

    digitalWrite(dirA,HIGH);  
    digitalWrite(dirB,HIGH);
    digitalWrite(currA,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);
  
    digitalWrite(dirB,HIGH);  
    digitalWrite(currA,LOW);  
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);

    digitalWrite(dirA,LOW);  
    digitalWrite(dirB,HIGH);
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);

    digitalWrite(dirA,HIGH);
    digitalWrite(currB,LOW);  
    digitalWrite(currA,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);

    digitalWrite(dirA,LOW);  
    digitalWrite(dirB,LOW);
    digitalWrite(currA,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);
  
    digitalWrite(dirB,LOW);
    digitalWrite(currA,LOW);  
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);

    digitalWrite(dirA,HIGH); 
    digitalWrite(dirB,LOW);
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);
    }

  for (int counter=0; counter<=750; counter++){   // Retract 30mm by half stepping
    digitalWrite(dirA,LOW);    
    digitalWrite(currB,LOW);  
    digitalWrite(currA,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);

    digitalWrite(dirA,LOW);    
    digitalWrite(dirB,HIGH);
    digitalWrite(currA,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);
  
    digitalWrite(dirB,LOW);    
    digitalWrite(currA,LOW);  
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);

    digitalWrite(dirA,HIGH);  
    digitalWrite(dirB,HIGH);
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);
  
    digitalWrite(dirA,HIGH);   
    digitalWrite(currB,LOW);  
    digitalWrite(currA,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);

    digitalWrite(dirA,HIGH);   
    digitalWrite(dirB,LOW);
    digitalWrite(currA,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currA,LOW);
  
    digitalWrite(dirB,HIGH);   
    digitalWrite(currA,LOW);  
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);

    digitalWrite(dirA,LOW);    
    digitalWrite(dirB,LOW);
    digitalWrite(currB,HIGH);
    delayMicroseconds(lowspeed);
    digitalWrite(currB,LOW);
    }
 while(true);   
}
