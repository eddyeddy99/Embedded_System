const int LED_1 = 7;     //LED row 1
const int LED_2 = 6;     //LED row 2    
const int LED_3 = 5;     //LED row 3

void setup() 
{
}

void loop()
{
 
  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, HIGH);  
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);
  
  delay(1000);
  

  pinMode(LED_1, OUTPUT);     //row 1
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, LOW);   
  pinMode(LED_3, INPUT);      //row 3
  digitalWrite(LED_3, LOW);
  
  delay(1000);
  

  pinMode(LED_1, INPUT);      //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);     //row 2
  digitalWrite(LED_2, LOW);  
  pinMode(LED_3, OUTPUT);     //row 3
  digitalWrite(LED_3, HIGH);
  
  delay(1000);
  
  
  pinMode(LED_1, INPUT);     //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, OUTPUT);    //row 2
  digitalWrite(LED_2, HIGH);  
  pinMode(LED_3, OUTPUT);    //row 3
  digitalWrite(LED_3, LOW);
  
  delay(1000);

  
  pinMode(LED_1, OUTPUT);    //row 1
  digitalWrite(LED_1, LOW);
  pinMode(LED_2, INPUT);     //row 2
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, OUTPUT);    //row3
  digitalWrite(LED_3, HIGH);
  
  delay(1000);
  

  pinMode(LED_1, OUTPUT);
  digitalWrite(LED_1, HIGH);
  pinMode(LED_2, INPUT);
  digitalWrite(LED_2, LOW);
  pinMode(LED_3, OUTPUT);
  digitalWrite(LED_3, LOW);
  
  delay(1000);
}
