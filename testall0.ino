#define relayPin1 13  
#define relayPin2 12  
#define relayPin3 11  
#define relayPin4 10  
#define relayPin5 9  
void setup() {
  pinMode(relayPin1, OUTPUT);   
  pinMode(relayPin2, OUTPUT);   
  pinMode(relayPin3, OUTPUT);   
  pinMode(relayPin4, OUTPUT);   
  pinMode(relayPin5, OUTPUT);   
      
  Serial.begin(9600);          // Initialize serial communication for debugging
  Serial.begin(9600);         // Initialize hardware serial communication with HC-05 (bluetooth)
}

void loop() {
  if (Serial.available())  // if a signal is detected 
  {
    char command = Serial.read(); // read the data from bluetooth module
    //*******************fan1************************************
    if (command == 'b')  
    {
      digitalWrite(relayPin1, HIGH);  // Turn ON the relay
    }
    else if (command == 'a') 
    {
      digitalWrite(relayPin1, LOW);   // Turn OFF the relay
    }
    //**************************fan2************************************
    else if (command == 'd') 
    {
      digitalWrite(relayPin2, HIGH);  // Turn ON the relay
    }
    else if (command == 'c') 
    {
      digitalWrite(relayPin2, LOW);   // Turn OFF the relay
    }
    //*******************fan3************************************
    if (command == 'f') 
    {
      digitalWrite(relayPin3, HIGH);  // Turn ON the relay
    }
    else if (command == 'e') 
    {
      digitalWrite(relayPin3, LOW);   // Turn OFF the relay
    }
    //**************************fan4************************************
    else if (command == 'h') 
    {
      digitalWrite(relayPin4, HIGH);  // Turn ON the relay
    }
    else if (command == 'g') 
    {
      digitalWrite(relayPin4, LOW);   // Turn OFF the relay
    }
  // *************************fan5************************************
    else if (command == 'j') 
    {
      digitalWrite(relayPin5, HIGH);  // Turn ON the relay
    }
    else if (command == 'i') 
    {
      digitalWrite(relayPin5, LOW);   // Turn OFF the relay
    } 
  }
 
}
