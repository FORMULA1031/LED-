int ledPin = 12;     //デジタルピン12にLED（陽極）に割り当て
int buttonApin = 9; //デジタルピン９にプッシュボタンAに割り当て
int buttonBpin = 8; //デジタルピン８にプッシュボタンBを割り当て

byte leds = 0;      //符号なしデータ型を設定

//初期設定するところ
void setup() {
  pinMode(ledPin, OUTPUT);           //12番ピンをOUTPUTに設定
  pinMode(buttonApin, INPUT_PULLUP); //９番ピンをHighにする（プルアップ）
  pinMode(buttonBpin, INPUT_PULLUP); //８番ピンをHighにする（プルアップ）
  }

//ループ関数
void loop() {
  
  //９番ピンがLowなら｛ ｝内を実行
  if (digitalRead(buttonApin) == LOW){
    digitalWrite(ledPin, HIGH);        //LEDにHighを送る
    }

  //８番ピンがLowなら｛ ｝内を実行
  if (digitalRead(buttonBpin) == LOW){
    digitalWrite(ledPin, LOW);         //LEDにLowを送る
    }
 }
