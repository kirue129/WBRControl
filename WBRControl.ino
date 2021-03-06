#include <WBRControl.h>

#define RIGHT_MOTOR_PWM_GO      11    // 左モーターのＰＷＭ正接出力ピン(デジタル)
#define RIGHT_MOTOR_PWM_BACK    10    // 左モーターのＰＷＭ逆接出力ピン(デジタル)
#define LEFT_MOTOR_PWM_GO       6     // 右モーターのＰＷＭ正接出力ピン(デジタル)
#define LEFT_MOTOR_PWM_BACK     9     // 右モーターのＰＷＭ逆接出力ピン(デジタル)
#define READ_BATTERY            8     //　電圧測定用ピン(センサ番号仮)
#define FRONT_RIGHT_SENSOR      2     // 前方右センサのピン番号(デジダル)
#define FRONT_LEFT_SENSOR       3     // 前方左センサのピン番号（デジタル）
#define FRONT_CENTER_SENSOR     4     // 前方中央センサのピン番号（存在しない場合は省く）（デジタル）
#define SIDE_RIGHT_SENSOR       5     // 右側面センサのピン番号（デジタル）
#define SIDE_LEFT_SENSOR        7     // 左側面センサのピン番号（デジタル）
#define MAGNET_SENSOR           12    // 給電所で磁力を検知するためのセンサのピン番号(そもそもセンサが存在するのだろうか？)(センサ番号仮)

// ピン番号
int rightMotorPWMGo     = RIGHT_MOTOR_PWM_GO;
int rightMotorPWMBack   = RIGHT_MOTOR_PWM_BACK;
int leftMotorPWMGo      = LEFT_MOTOR_PWM_GO;
int leftMotorPWMBack    = LEFT_MOTOR_PWM_BACK;
int readBattery         = READ_BATTERY;
int frontRightSensor    = FRONT_RIGHT_SENSOR;
int frontLeftSensor     = FRONT_LEFT_SENSOR;
int frontCenterSensor   = FRONT_CENTER_SENSOR;
int sideRightSensor     = SIDE_RIGHT_SENSOR;
int sideLeftSensor      = SIDE_LEFT_SENSOR;
int magnetSensor        = MAGNET_SENSOR;


WBRControl wbr( 
  rightMotorPWMGo,
  rightMotorPWMBack,
  leftMotorPWMGo,
  leftMotorPWMBack,
  readBattery,
  frontRightSensor,
  frontLeftSensor,
  frontCenterSensor,
  sideRightSensor,
  sideLeftSensor,
  magnetSensor
  );

void setup(){
  wbr.pinInit();
}
  
void loop(){
  wbr.WBRMain();
}

