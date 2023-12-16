
/*----------动作函数----------*/
 
// |   7  |             |   6  |
//  ----- -----   ----- -----
//       |  3   | |  2   |
//        -----   -----
//       |   1  | |  0   |
//  ----- -----   ----- -----
// |  5   |             |  4   |

void sleep() 
{
  pwm.setPWM(4, 0, 340);
  delay(20);
  pwm.setPWM(5, 0, 370);
  delay(20);
  pwm.setPWM(6, 0, 360);
  delay(20);
  pwm.setPWM(7, 0, 410);
  delay(20);
  pwm.setPWM(0, 0, 370);
  delay(20);
  pwm.setPWM(1, 0, 190);
  delay(20);
  pwm.setPWM(2, 0, 180);
  delay(20);
  pwm.setPWM(3, 0, 390);
}
 
void normal() 
{
  pwm.setPWM(0, 0, 280);
  delay(20);
  pwm.setPWM(1, 0, 280);
  delay(20);
  pwm.setPWM(2, 0, 270);
  delay(20);
  pwm.setPWM(3, 0, 100);
  delay(20);
  pwm.setPWM(4, 0, 600);
  delay(20);
  pwm.setPWM(5, 0, 120);
  delay(20);
  pwm.setPWM(6, 0, 620);
  delay(20);
  pwm.setPWM(7, 0, 160);
}
 
void left()
{
  pwm.setPWM(4, 0, 450);
  pwm.setPWM(7, 0, 260);
  delay(20);
  pwm.setPWM(0, 0, 370);
  pwm.setPWM(3, 0, 390);
  delay(20);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(7, 0, 160);
  delay(20);
  pwm.setPWM(6, 0, 460);
  pwm.setPWM(5, 0, 280);
  delay(20);
  pwm.setPWM(2, 0, 450);
  pwm.setPWM(1, 0, 460);
  delay(20);
  pwm.setPWM(6, 0, 620);
  pwm.setPWM(5, 0, 120);
  delay(20);
  pwm.setPWM(0, 0, 280);
  pwm.setPWM(1, 0, 280);
  pwm.setPWM(2, 0, 270);
  pwm.setPWM(3, 0, 100);
  delay(20);
}
 
void right()
{
  pwm.setPWM(5, 0, 280);
  pwm.setPWM(6, 0, 490);
  delay(20);
  pwm.setPWM(1, 0, 190);
  pwm.setPWM(2, 0, 180);
  delay(20);
  pwm.setPWM(5, 0, 120);
  pwm.setPWM(6, 0, 620);
  delay(20);
  pwm.setPWM(7, 0, 260);
  pwm.setPWM(4, 0, 450);
  delay(20);
  pwm.setPWM(3, 0, 210);
  pwm.setPWM(0, 0, 190);
  delay(20);
  pwm.setPWM(7, 0, 160);
  pwm.setPWM(4, 0, 600);
  delay(20);
  pwm.setPWM(0, 0, 280);
  pwm.setPWM(1, 0, 280);
  pwm.setPWM(2, 0, 270);
  pwm.setPWM(3, 0, 100);
  delay(20);
}
 
void forward()
{ 
  pwm.setPWM(7, 0, 260);
  pwm.setPWM(4, 0, 450);
  delay(50);
  pwm.setPWM(3, 0, 390);
  pwm.setPWM(0, 0, 170);
  delay(20);
  pwm.setPWM(7, 0, 160);
  pwm.setPWM(4, 0, 600);
  delay(20);
  pwm.setPWM(0, 0, 280);
  pwm.setPWM(3, 0, 100);
  pwm.setPWM(6, 0, 490);
  pwm.setPWM(5, 0, 280);
  delay(50);
  pwm.setPWM(2, 0, 180);
  pwm.setPWM(1, 0, 125);
  delay(20);
  pwm.setPWM(6, 0, 620);
  pwm.setPWM(5, 0, 120);
  delay(20);
  pwm.setPWM(1, 0, 280);
  pwm.setPWM(2, 0, 270);
}
 
void backward()
{ 
  pwm.setPWM(5, 0, 280);
  pwm.setPWM(6, 0, 490);
  delay(50);
  pwm.setPWM(1, 0, 190);
  pwm.setPWM(2, 0, 450);
  delay(20);
  pwm.setPWM(5, 0, 120);
  pwm.setPWM(6, 0, 620);
  delay(20);
  pwm.setPWM(1, 0, 280);
  pwm.setPWM(2, 0, 270);
  pwm.setPWM(4, 0, 450);
  pwm.setPWM(7, 0, 260);
  delay(50);
  pwm.setPWM(0, 0, 370);
  pwm.setPWM(3, 0, 140);
  delay(20);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(7, 0, 160);
  delay(20);
  pwm.setPWM(0, 0, 280);
  pwm.setPWM(3, 0, 100);
}
 
void hello()
{
  pwm.setPWM(7, 0, 360);
  delay(20);
  pwm.setPWM(0, 0, 370);
  delay(200);
  pwm.setPWM(4, 0, 110);
  delay(100);
  pwm.setPWM(4, 0, 340);
  delay(100);
  pwm.setPWM(4, 0, 110);
  delay(100);
  pwm.setPWM(4, 0, 340);
  delay(100);
  pwm.setPWM(4, 0, 110);
  delay(100);
  pwm.setPWM(4, 0, 340);
  delay(500);
  pwm.setPWM(0, 0, 280);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(7, 0, 160);
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, zhengchang);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}
 
void come()
{
  pwm.setPWM(7, 0, 360);
  delay(500);
  pwm.setPWM(0, 0, 120);
  pwm.setPWM(4, 0, 280);
  delay(500);
  pwm.setPWM(4, 0, 110);
  delay(200);
  pwm.setPWM(4, 0, 340);
  delay(125);
  pwm.setPWM(4, 0, 110);
  delay(200);
  pwm.setPWM(4, 0, 340);
  delay(125);
  pwm.setPWM(0, 0, 280);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(7, 0, 160);
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, zhengchang);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}

void dog()
{
  delay(100);
  pwm.setPWM(0, 0, 120);
  pwm.setPWM(1, 0, 460);
  pwm.setPWM(2, 0, 450);
  pwm.setPWM(3, 0, 140);
  delay(100);
  pwm.setPWM(0, 0, 370);
  pwm.setPWM(1, 0, 190);
  pwm.setPWM(2, 0, 180);
  pwm.setPWM(3, 0, 390);
}

void middle()
{
  pwm.setPWM(7, 0, 360);
  delay(20);
  pwm.setPWM(0, 0, 120);
  delay(20);
  pwm.setPWM(4, 0, 110);
}

void surrender()
{
  delay(20);
  pwm.setPWM(4, 0, 110);
  pwm.setPWM(5, 0, 590);
  pwm.setPWM(6, 0, 110);
  pwm.setPWM(7, 0, 640);
}

void swing()
{
  delay(50);
  pwm.setPWM(4, 0, 450);
  pwm.setPWM(7, 0, 260);
  delay(50);
  pwm.setPWM(0, 0, 370);
  pwm.setPWM(3, 0, 390);
  delay(50);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(7, 0, 160);
  delay(50);
  pwm.setPWM(5, 0, 280);
  pwm.setPWM(6, 0, 490);
  delay(50);
  pwm.setPWM(1, 0, 190);
  pwm.setPWM(2, 0, 180);
  delay(50);
  pwm.setPWM(5, 0, 120);
  pwm.setPWM(6, 0, 620);
  delay(500);
  pwm.setPWM(4, 0, 450);
  pwm.setPWM(5, 0, 120);
  pwm.setPWM(6, 0, 470);
  pwm.setPWM(7, 0, 160);
  delay(125);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(5, 0, 270);
  pwm.setPWM(6, 0, 620);
  pwm.setPWM(7, 0, 310);
  delay(125);
  pwm.setPWM(4, 0, 450);
  pwm.setPWM(5, 0, 120);
  pwm.setPWM(6, 0, 470);
  pwm.setPWM(7, 0, 160);
  delay(125);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(5, 0, 270);
  pwm.setPWM(6, 0, 620);
  pwm.setPWM(7, 0, 310);
  delay(125);
  pwm.setPWM(4, 0, 450);
  pwm.setPWM(5, 0, 120);
  pwm.setPWM(6, 0, 470);
  pwm.setPWM(7, 0, 160);
  delay(125);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(5, 0, 270);
  pwm.setPWM(6, 0, 620);
  pwm.setPWM(7, 0, 310);
  delay(125);
  pwm.setPWM(4, 0, 450);
  pwm.setPWM(5, 0, 120);
  pwm.setPWM(6, 0, 470);
  pwm.setPWM(7, 0, 160);
  delay(125);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(5, 0, 270);
  pwm.setPWM(6, 0, 620);
  pwm.setPWM(7, 0, 310);
  delay(125);
  pwm.setPWM(4, 0, 450);
  pwm.setPWM(5, 0, 120);
  pwm.setPWM(6, 0, 470);
  pwm.setPWM(7, 0, 160);
  delay(125);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(5, 0, 270);
  pwm.setPWM(6, 0, 620);
  pwm.setPWM(7, 0, 310);
  delay(125);
}

void lie()
{
  pwm.setPWM(4, 0, 340);
  delay(20);
  pwm.setPWM(5, 0, 370);
  delay(20);
  pwm.setPWM(6, 0, 360);
  delay(20);
  pwm.setPWM(7, 0, 410);
  delay(20);
  pwm.setPWM(0, 0, 120);
  pwm.setPWM(1, 0, 460);
  pwm.setPWM(2, 0, 450);
  pwm.setPWM(3, 0, 140);
}

void fan()
{
  delay(500);
  pwm.setPWM(4, 0, 110);
  pwm.setPWM(5, 0, 590);
  delay(500);
  pwm.setPWM(4, 0, 310);
  pwm.setPWM(5, 0, 340);
}

/*----------颜文字定义----------*/
//国际友好手势(・ω< )★
//正常(｡･ω･｡)
//( ˘ω˘ )
//你好 ( ˙ᗜ˙ )
//来啊ψ(｀∇´)ψ
//狗刨(￣▽￣)
//投降( •́ .̫ •̀ )
//摇摆(//∇//)
// yh  zc  sj  nh  la  gp tx  yb  sz
void yh()
{
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, youhao);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}

void zc()
{
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, zhengchang);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}

void sj()
{
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, shuijiao);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}

void nh()
{
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, nihao);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}

void la()
{
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, laia);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}

void gp()
{
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, goupao);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}

void tx()
{
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, touxiang);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}

void yb()
{
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, yaobai);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}

void sz()
{
  u8g2.clearBuffer();
  u8g2.drawXBMP(2,2, 128, 64, shanzi);
  u8g2.sendBuffer();
  Serial.println(end-start);
  delay(20);
}
