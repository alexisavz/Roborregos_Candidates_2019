/*char checa_direccion(){
  if(sonarI.ping_cm()>15){
    girar_izquierda();
    avanzar();
    return 'i';
  }
  else if(sonarF.ping_cm()>15){
    avanzar();
    return 'f';
  }
  else{
    girar_derecha();
    return 'd';
  }
}*/

char checa_direccion(){
  if(sonarI.ping_cm()>15){
    if(sonarD.ping_cm()<10 && sonarD.ping_cm()!=0){
      girar_izquierda();
      retroceder();
      avanzar_poco();
      avanzar();
      return 'i';
    }
    else{
      girar_izquierda();
      avanzar();
      return 'i';
    }
  }
  else if(sonarF.ping_cm()>15){
    avanzar();
    return 'f';
  }
  else{
    girar_derecha();
    retroceder();
    avanzar_poco();
    return 'd';
  }
}
