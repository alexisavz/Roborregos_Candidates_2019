void carrera(){
  while(sonarI.ping_cm()<10){
  analogWrite(llanta1F, 0);
  analogWrite(llanta1B, 255);
  analogWrite(llanta2F, 0);
  analogWrite(llanta2B, 255);
  analogWrite(llanta3F, 0);
  analogWrite(llanta3B, 255);
  analogWrite(llanta4F, 0);
  analogWrite(llanta4B, 255);
   }
   avanzar_poco();
   girar_izquierda();
   avanzar();
}
