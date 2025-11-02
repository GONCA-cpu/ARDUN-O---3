#define buton_p 3 
void setup() 
{
  
  pinMode(buton_p, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT); 
  pinMode(8, OUTPUT);  
  pinMode(7, OUTPUT);  
  pinMode(6, OUTPUT);  
}

void loop() 
{
  digitalWrite(11, HIGH);  
  digitalWrite(8, HIGH);   
  digitalWrite(7, HIGH);   

  int butonDurumu = digitalRead(buton_p); 

 
  if (butonDurumu == LOW)
  {
  
    digitalWrite(11, LOW); 
    digitalWrite(8, LOW);  
    digitalWrite(13, HIGH); 
    digitalWrite(10, HIGH); 
    digitalWrite(7, LOW);   //yaya kırmızı,kapalı
    digitalWrite(6, HIGH);  //yaya yeşil , açık
    
    delay(5000); // 5 saniye bekle

    digitalWrite(6, LOW);   
    digitalWrite(13, LOW);  
    digitalWrite(10, LOW);  
   
  }
}