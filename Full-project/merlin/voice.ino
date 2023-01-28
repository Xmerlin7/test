void voicee() {
  while(Serial.available())
  {
    //delay(10);
    char c=Serial.read();
    voice +=c;
    }
 if (voice.length()>0)
 {
  Serial.println(voice);
  if (voice=="go")
  {
   // digitalWrite(12,HIGH);

        digitalWrite(motor1_in_1, HIGH);
        digitalWrite(motor1_in_2, LOW);
        digitalWrite(motor2_in_1, HIGH);
        digitalWrite(motor2_in_2, LOW);
        
        delay(1000);
  }
  /*if (voice=="off")
  {
   // digitalWrite(12,LOW);

    digitalWrite(fwdright7, LOW);  //Stop                
    digitalWrite(revright6, LOW);
    digitalWrite(fwdleft5, LOW);                                
    digitalWrite(revleft4, LOW);
   
  }*/
 voice=""; }

}
