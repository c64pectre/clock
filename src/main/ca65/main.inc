;    clock: Clock application for the Commodore 64.
;    Copyright (C) 2022  C64PECTRE
;
;    This program is free software: you can redistribute it and/or modify
;    it under the terms of the GNU General Public License as published by
;    the Free Software Foundation, either version 3 of the License, or
;    (at your option) any later version.
;
;    This program is distributed in the hope that it will be useful,
;    but WITHOUT ANY WARRANTY; without even the implied warranty of
;    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;    GNU General Public License for more details.
;
;    You should have received a copy of the GNU General Public License
;    along with this program.  If not, see https://www.gnu.org/licenses/.
;
;    Contact: https://github.com/c64pectre/clock/ create an issue

CONFIG_BORDER_COLOR     = COLOR_BLK
CONFIG_BACKGROUND_COLOR = COLOR_BLK
CONFIG_TEXT_COLOR       = PETSCII_WHITE

CONFIG_CLOCK_DEFAULT_LED_COLOR     = COLOR_RED
CONFIG_ALARM_DEFAULT_LED_COLOR     = COLOR_LBL
CONFIG_STOPWATCH_DEFAULT_LED_COLOR = COLOR_GRN
CONFIG_TIMER_DEFAULT_LED_COLOR     = COLOR_YEL
CONFIG_DISPLAY_LED_DIM_COLOR       = COLOR_BLK

RBS = DOT  ; Radio Button Set
RBC = CIR  ; Radio Button Clear

CBS = DOT  ; Check Box Set
CBC = CIR  ; Check Box Clear

FALSE = $00
TRUE  = $FF                                                 ; so we can use bit and inc/dec
