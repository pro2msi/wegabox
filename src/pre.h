/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Устройство для контроля и управления работой гидропонной установки и процессом выращивания растений.    //
// Является частью проекта WEGA, https://github.com/wega_project                                           //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Параметры подключения к WiFi
// Имя WiFi точки доступа
const char* ssid = "SSID";

// Пароль к точке доступа
const char* password = "PASSWORD";

// Параметры подключения к WEGA-API
// Адрес wega-api где ADDRESS адрес установленного сервера WEGA-API https://github.com/WEGA-project/WEGA/wiki/install
String wegaapi  = "http://WEGA_IP_ADDRESS/wega-api/wegabox.php"; 

// Код доступа к api смотри файл /var/WEGA/wega-api/esp32wega.php
// Ключ тут: $auth="adab637320e5c47624cdd15169276981";
// Внимание, при размещении сервера WEGA в открытом интернете ключ лучше сменить!
String wegaauth = "adab637320e5c47624cdd15169276981"; 

// Имя базы данных - уникальное имя для устройства. База будет создана автоматически.
// каждому устройству должна быть назначена своя отдельная база!             
String wegadb   = "wegabox";