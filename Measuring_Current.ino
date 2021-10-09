//Defining Variables
float iA;
float iB;
int dirA=12; // Coil A direction
int currA=3; // Coil A current
int brakA=9; // Coil B direction
int dirB=13; // Coil B current
int currB=11;
int ct;
void setup() {
  pinMode(12,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);

  shutdown();

  Serial.begin(9600);
}

void shutdown(){
  digitalWrite(12,LOW);
  digitalWrite(3,LOW);
  digitalWrite(13,LOW);
  digitalWrite(11,LOW);
}

void loop() {
  digitalWrite(12,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
  
  for (ct=0; ct<20; ct++){
  iA = float(analogRead(0))/1023.*5. / 1.65 *1000.;

  iB = float(analogRead(1))/1023.*5. / 1.65 *1000.;
  Serial.print(iA);
  Serial.print(" ");
  Serial.println(iB);
  }
  
  shutdown();
  while(1);
  
}
