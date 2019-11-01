void zona_D(){
  while(sonarF.ping_cm()>15){
      avanzar_poco();
  }
  girar_izquierda();
  retroceder();
  avanzar_rapido();
}
