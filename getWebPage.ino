String getWebPage() {
  String webPage = "";

  webPage += "<!DOCTYPE html>\n";
  webPage += "<html lang=\"en\">\n";
  webPage += "<head>\n";
  webPage += "<meta charset='utf-8'>\n";
  webPage += "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n";
  webPage += "<title>ESP8266 Car Control</title>\n";
  webPage += "<style>\n";
  webPage += "html {\n";
  webPage += "  font-family: Arial, sans-serif;\n";
  webPage += "  text-align: center;\n";
  webPage += "  background-color: #f4f4f4;\n";
  webPage += "  margin: 0;\n";
  webPage += "  padding: 0;\n";
  webPage += "  height: 100%;\n";
  webPage += "}\n";
  webPage += "body {\n";
  webPage += "  display: flex;\n";
  webPage += "  flex-direction: column;\n";
  webPage += "  justify-content: center;\n";
  webPage += "  min-height: 100vh;\n";
  webPage += "  margin: 0;\n";
  webPage += "  padding: 20px;\n";
  webPage += "}\n";
  webPage += "h1 {\n";
  webPage += "  color: #0f3376;\n";
  webPage += "  margin-bottom: 24px;\n";
  webPage += "}\n";
  webPage += "p {\n";
  webPage += "  font-size: 1.5rem;\n";
  webPage += "}\n";
  webPage += ".button {\n";
  webPage += "  display: inline-block;\n";
  webPage += "  background-color: #4CAF50;\n";
  webPage += "  border: none;\n";
  webPage += "  border-radius: 4px;\n";
  webPage += "  color: white;\n";
  webPage += "  padding: 16px 40px;\n";
  webPage += "  text-decoration: none;\n";
  webPage += "  font-size: 18px; /* Smaller font size for mobile */\n";
  webPage += "  margin: 10px;\n";
  webPage += "  cursor: pointer;\n";
  webPage += "  box-shadow: 2px 2px 5px rgba(0,0,0,0.2);\n";
  webPage += "  transition: all 0.3s ease;\n";
  webPage += "}\n";
  webPage += ".button:hover {\n";
  webPage += "  background-color: #45a049;\n";
  webPage += "  box-shadow: 4px 4px 10px rgba(0,0,0,0.3);\n";
  webPage += "}\n";
  webPage += "@media (max-width: 768px) {\n";
  webPage += "  .button {\n";
  webPage += "    padding: 12px 24px;\n";
  webPage += "    font-size: 16px;\n";
  webPage += "    margin: 6px;\n";
  webPage += "  }\n";
  webPage += "}\n";
  webPage += "@media (max-width: 480px) {\n";
  webPage += "  .button {\n";
  webPage += "    padding: 10px 20px;\n";
  webPage += "    font-size: 14px;\n";
  webPage += "  }\n";
  webPage += "  h1 {\n";
  webPage += "    font-size: 24px;\n";
  webPage += "  }\n";
  webPage += "}\n";
  webPage += "</style>\n";
  webPage += "</head>\n";
  webPage += "<body>\n";
  webPage += "<h1>Intelligent Control Robot</h1>\n";

  // Button layout
  webPage += "<div class=\"button-container\">\n";
  webPage += "<p><a href=\"/S\" class=\"button\">睡觉</a>\n";
  webPage += "<a href=\"/FL\" class=\"button\">↑</a>\n";
  webPage += "<a href=\"/N\" class=\"button\">正常</a></p>\n";
  
  webPage += "<p><a href=\"/L\" class=\"button\">←</a>\n";
  webPage += "<a href=\"/M\" class=\"button\">友好</a>\n";
  webPage += "<a href=\"/R\" class=\"button\">→</a></p>\n";
  
  webPage += "<p><a href=\"/H\" class=\"button\">你好</a>\n";
  webPage += "<a href=\"/B\" class=\"button\">↓</a>\n";
  webPage += "<a href=\"/C\" class=\"button\">来啊</a></p>\n";
  
  webPage += "<p><a href=\"/U\" class=\"button\">投降</a>\n";
  webPage += "<a href=\"/D\" class=\"button\">狗刨</a>\n";
  webPage += "<a href=\"/W\" class=\"button\">摇摆</a>\n</p>";
  
  webPage += "<p><a href=\"/I\" class=\"button\">趴着</a>\n";
  webPage += "<a href=\"/A\" class=\"button\">扇子</a>\n";
  webPage += "<a href=\"/K\" class=\"button\">眨眼</a></p>\n";

  webPage += "<script>\n";
  webPage += "function sendCommand(command) {\n";
  webPage += "  var xhttp = new XMLHttpRequest();\n";
  webPage += "  xhttp.open(\"GET\", command, true);\n";
  webPage += "  xhttp.send();\n";
  webPage += "}\n";
  webPage += "document.querySelectorAll('.button').forEach(function(button) {\n";
  webPage += "  button.addEventListener('click', function(event) {\n";
  webPage += "    event.preventDefault(); // Prevent default anchor behavior\n";
  webPage += "    sendCommand(button.getAttribute('href'));\n";
  webPage += "  });\n";
  webPage += "});\n";
  webPage += "</script>\n";
  webPage += "</body>\n";
  webPage += "</html>\n";

  return webPage;
}
