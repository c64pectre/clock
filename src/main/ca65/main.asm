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

.include "c64/colors.inc"
.include "c64/kernal-r3.inc"
.include "c64/vic.inc"
.include "c64/petscii.inc"
.include "c64/registers.inc"
.include "macros.inc"
.include "charset1.inc"

.include "main.import"

.include "main.inc"

.segment "CODE"
.include "main.code"

.segment "RODATA"
.include "main.rodata"

.segment "DATA"
.include "main.data"

.include "main.export"
