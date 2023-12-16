void setupPwm(){
  pwm.begin();
  pwm.setPWMFreq(60); //伺服电机以60hz刷新率工作
  delay(200);
  
  }

void setupWiFi() {
  // Disconnect from external WiFi network
  WiFi.disconnect();

  // Start WiFi soft AP
  WiFi.softAP(ssid, password);
  IPAddress staticIP(192, 168, 1, 100); // Set a static IP address
  IPAddress gateway(192, 168, 1, 1);    // Set gateway IP address
  IPAddress subnet(255, 255, 255, 0);   // Set subnet mask

  WiFi.softAPConfig(staticIP, gateway, subnet);

  // Print AP IP address
  IPAddress apIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(apIP);
}

void setupOled(){
  //oled屏幕
  u8g2.setBusClock(9000000);   //设置时钟
  u8g2.begin();                //初始化
  u8g2.enableUTF8Print();      //允许 UTF8
  
}



void setupServer() {
  server.on("/", []() { server.send(200, "text/html", getWebPage()); });
  server.on("/S", []() { server.send(200, "text/html", getWebPage()); S(); });
  server.on("/FL", []() { server.send(200, "text/html", getWebPage()); FL(); });
  server.on("/N", []() { server.send(200, "text/html", getWebPage()); N(); });
  
  server.on("/L", []() { server.send(200, "text/html", getWebPage()); L(); });
  server.on("/M", []() { server.send(200, "text/html", getWebPage()); M(); });
  server.on("/R", []() { server.send(200, "text/html", getWebPage()); R(); });
  
  server.on("/H", []() { server.send(200, "text/html", getWebPage()); H(); });
  server.on("/B", []() { server.send(200, "text/html", getWebPage()); B(); });
  server.on("/C", []() { server.send(200, "text/html", getWebPage()); C(); });

  server.on("/U", []() { server.send(200, "text/html", getWebPage()); U(); });
  server.on("/D", []() { server.send(200, "text/html", getWebPage()); D(); });
  server.on("/W", []() { server.send(200, "text/html", getWebPage()); W(); });
  server.on("/I", []() { server.send(200, "text/html", getWebPage()); I(); });
  server.on("/A", []() { server.send(200, "text/html", getWebPage()); A(); });
  server.on("/K", []() { server.send(200, "text/html", getWebPage()); K(); });

  server.onNotFound([]() { server.send(404, "text/plain", "Not found"); });

  server.begin();
}
  
