int GREEN = 10;
int YELLOW = 9;
int RED = 8;
int RED2=11;
int YELLOW2=12;
int GREEN2=13;
int DELAY_GREEN = 1000;
int DELAY_YELLOW = 1000;
int DELAY_RED = 1000;


// basic functions
void setup()
{
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN2,OUTPUT);
  pinMode(YELLOW2,OUTPUT);
  pinMode(RED2,OUTPUT);
}

void loop(){
   red_light();
   delay(1000);
  yellow_light();
  delay(DELAY_YELLOW);
  green_light();
  delay(DELAY_GREEN);}

void green_light()
{
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
   digitalWrite(GREEN2, LOW);
  digitalWrite(YELLOW2, LOW);
  digitalWrite(RED2,HIGH);
}

void yellow_light()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
   digitalWrite(GREEN2, LOW);
  digitalWrite(YELLOW2, HIGH);
  digitalWrite(RED2, LOW);
}

void red_light()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
   digitalWrite(GREEN2, HIGH);
  digitalWrite(YELLOW2, LOW);
  digitalWrite(RED2, LOW);
}
