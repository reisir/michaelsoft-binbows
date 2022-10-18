[Variables]

H=#SCREENAREAHEIGHT#
W=#SCREENAREAWIDTH#
HR=(#H# / 1080)
WR=(#W# / 2560)

PaddingEnabled=0
Padding=(#WR# * 16)
P=(#PaddingEnabled# = 1 ? #Padding# : 0)
IP=(#PaddingEnabled# = 0 ? #Padding# : 0)
2P=(#P# * 2)
2IP=(#IP# * 2)

LX=#P#
LY=#P#
LW=((#WR# * 580) + (#IP#))
LH=(#H# - #2P#)

URX=(#WR# * 720)
URY=(#HR# * 136)
URW=((#WR# * 1600) + #IP#)
URH=(#HR# * 115)

LRX=(#P#)
LRY=(#HR# * 730)
LRW=(#W# - #2P#)
LRH=(#H# - #LRY# - #P#)

[Background]
Meter=Shape
Shape=Rectangle 0,0,#SCREENAREAWIDTH#, #SCREENAREAHEIGHT# | Fill Color 255,255,255 | Extend Stroke
Shape2=Rectangle #LRX#, #LRY#, #LRW#, #LRH# | Fill Color #lr# | Extend Stroke
; Shape3=Rectangle #URX#, #URY#, #URW#, #URH# | Fill Color #ur# | Extend Stroke
Shape3=Rectangle #LX#, #LY#, #LW#, #LH# | Fill Color #lc# | Extend Stroke
Stroke=StrokeWidth 0
