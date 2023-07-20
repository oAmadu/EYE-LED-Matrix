int c1 = 5, c2 = 4, c3 = 3, c4 = 2, c5 = 1;
int r1 = 10, r2 = 9, r3 = 8, r4 = 7, r5 = 6;

int wait = 275;

void setup(){
  pinMode (c1, OUTPUT);
  pinMode (c2, OUTPUT);
  pinMode (c3, OUTPUT);
  pinMode (c4, OUTPUT);
  pinMode (c5, OUTPUT);
  
  pinMode (r1, OUTPUT);
  pinMode (r2, OUTPUT);
  pinMode (r3, OUTPUT);
  pinMode (r4, OUTPUT);
  pinMode (r5, OUTPUT);
}
void loop (){

  smile();
  delay(50);
}
void c1r1(){
  digitalWrite (c1, HIGH);
  digitalWrite (c2, LOW);
  digitalWrite (c3, LOW);
  digitalWrite (c4, LOW);
  digitalWrite (c5, LOW);
  
  digitalWrite (r1, LOW);
  digitalWrite (r2, HIGH);
  digitalWrite (r3, HIGH);
  digitalWrite (r4, HIGH);
  digitalWrite (r5, HIGH);
  
  
}

void smile(){
  //1
    digitalWrite (c1, HIGH);
  	digitalWrite (c2, LOW);
  	digitalWrite (c3, LOW);
  	digitalWrite (c4, LOW);
  	digitalWrite (c5, HIGH);
  
  	digitalWrite (r1, HIGH);
  	digitalWrite (r2, HIGH);
  	digitalWrite (r3, HIGH);
  	digitalWrite (r4, LOW);
  	digitalWrite (r5, HIGH);
  
  delay(100);
  //2
  	digitalWrite (c1, LOW);
  	digitalWrite (c2, HIGH);
  	digitalWrite (c3, LOW);
  	digitalWrite (c4, HIGH);
  	digitalWrite (c5, LOW);
  
  	digitalWrite (r1, LOW);
  	digitalWrite (r2, LOW);
  	digitalWrite (r3, HIGH);
  	digitalWrite (r4, HIGH);
  	digitalWrite (r5, LOW);
  
   delay(100);
  //3
  	digitalWrite (c1, LOW);
  	digitalWrite (c2, LOW);
  	digitalWrite (c3, HIGH);
  	digitalWrite (c4, LOW);
  	digitalWrite (c5, LOW);
  
  	digitalWrite (r1, HIGH);
  	digitalWrite (r2, HIGH);
  	digitalWrite (r3, LOW);
  	digitalWrite (r4, HIGH);
  	digitalWrite (r5, HIGH);
  
   delay(100);
}