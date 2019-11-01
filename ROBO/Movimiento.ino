void avanzar(){
  
  analogWrite(llanta1F, 150);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 150);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 150);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 150);
  analogWrite(llanta4B, 0);

  delay(700);

  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 0);

  delay(500);
  
}

void girar_izquierda(){
  
  analogWrite(llanta1F, 150);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 150);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 150);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 150);

  delay(550);

  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 0);

  delay(500);
  
}

void girar_derecha(){
  
  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 150);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 150);
  analogWrite(llanta3F, 150);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 150);
  analogWrite(llanta4B, 0);

  delay(550);

  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 0);

  delay(500);
}

void retroceder(){
  
  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 255);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 255);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 255);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 255);

  delay(1000);

  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 0);

  delay(100);
  
}

void avanzar_rapido(){
  
  analogWrite(llanta1F, 255);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 255);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 255);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 255);
  analogWrite(llanta4B, 0);

  delay(10000);
  
}

void avanzar_poco(){
  analogWrite(llanta1F, 150);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 150);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 150);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 150);
  analogWrite(llanta4B, 0);

  delay(200);

  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 0);

  delay(10);
}

void retroceder_poco(){
  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 255);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 255);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 255);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 255);

  delay(70);

  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 0);

  delay(10);
}

void avanza_muy_poco(){
  analogWrite(llanta1F, 255);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 255);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 255);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 255);
  analogWrite(llanta4B, 0);

  delay(90);

  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 0);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 0);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 0);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 0);

  delay(200);
  
}
