#ifndef __LGFX_BOARDS_HPP__
#define __LGFX_BOARDS_HPP__

namespace lgfx
{
  namespace boards
  {
    enum board_t
    { board_unknown
    , board_Non_Panel
    , board_M5Stack
    , board_M5StackCore2
    , board_M5StickC
    , board_M5StickCPlus
    , board_TTGO_TS
    , board_TTGO_TWatch
    , board_TTGO_TWristband
    , board_ODROID_GO
    , board_DDUINO32_XS
    , board_ESP_WROVER_KIT
    , board_LoLinD32
    , board_WioTerminal
    , board_WiFiBoy_Pro
    , board_WiFiBoy_Mini
    , board_Makerfabs_TouchCamera
    , board_Makerfabs_MakePython
    , board_M5StackCoreInk
    , board_M5Stack_CoreInk = board_M5StackCoreInk
    , board_M5Paper
    , board_ESP32_S2_Kaluga_1
    , board_WT32_SC01
    , board_PyBadge
    , board_M5Tough
    , board_OpenCV
    , board_M5Station
    , board_ESPboy
    , board_M5UnitLCD
    , board_M5UnitOLED
    , board_M5AtomDisplay
    , board_FeatherM4_HX8357
    };
  }
  using namespace boards;
}

#endif