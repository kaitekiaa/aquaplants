/*
--水分センサ--
  #Arduinoのボード上のA0（アナログ0）端子にセンサを接続

--土壌センサの値 説明--
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water

*/

 #define Motortime 3000

// #define WATER_SENSOR 5
 #define MotorPin 12
 #define LPin 11
 #define BUTTON 7

 int val = 0; 

/*メール送信関数
void MailAlarm()
{
}
*/

void setup (){

    pinMode(MotorPin, OUTPUT);//モーター用ピン動作を入力か出力に設定します。 
 //   pinMode(WATER_SENSOR, INPUT);//水センサ用ピン動作を入力か出力に設定します。
    pinMode(LPin, OUTPUT); //LED用ピン動作を入力か出力に設定します。 

    pinMode(BUTTON, INPUT);

}

void loop (){
// int soilstate = 0;
// int waterlevel = 0;


  //湿度測定　もし乾燥していたらポンプ出力を行う A0PINの値確認
//  soilstate = analogRead(0);
  //delay(1000);

//  if(300>=soilstate){
    //ポンプ出力関数

    val = digitalRead(BUTTON);
    
    if(val == HIGH){
    digitalWrite(MotorPin,HIGH); //MPin番ピンの出力をHIGH = 5Vにする
    }else{
    //delay(Motortime);            //Mtime秒待つ
    digitalWrite(MotorPin,LOW);  //MPin番ピンの出力をLOW = 0Vにする
}
 /* }
  else {
    digitalWrite(LPin, HIGH);   //LEDをON
    delay(Motortime);     
    digitalWrite(LPin, LOW);    //LEDをOFF
  }*/

  for(int i=0;i<=3;i++){

    delay(1000);     
  }
/*
  //水位測定　もし水が残り少なかったらメール,LED点灯
  waterlevel = digitalRead(WATER_SENSOR);

  if(waterlevel==HIGH){
    //メール出力関数　MailAlarm();

    for(int j=0; j<=10;j++){
      digitalWrite(LPin, HIGH);   //LEDをON
      delay(100);  
      digitalWrite(LPin, LOW);    //LEDをOFF
      delay(100);  
    }

  }

  else if(waterlevel==LOW){
    digitalWrite(LPin, HIGH);   //LEDをON
    delay(1000);  
    digitalWrite(LPin, LOW);    //LEDをOFF
    delay(1000);
  }
*/

}
