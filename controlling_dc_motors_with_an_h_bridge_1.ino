// C++ code


// 1st Motor

int En1 = 8;
int IN1 = 9;
int IN2 = 10;

// 2nd Motor

int En2 = 13;
int IN3 = 12;
int IN4 = 11;


void setup()
{

// set all control pins to output
  
  pinMode(En1,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  
  pinMode(En2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  
}


void loop()
{

// turn on 1st Motor
  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  
// set speed to 180
  
  analogWrite(En1,180);
  
// turn on 2st Motor
  
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  
// set speed to 180
  
  analogWrite(En2,180);

  delay(1500);

}

//End of code