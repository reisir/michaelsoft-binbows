

[CHEAP]
Measure=String
String=激安
RegExpSubstitute=1
Substitute="(.)":"\1#CRLF#"

[MeterCheap1]
Meter=String
MeasureName=CHEAP
MeterStyle=ss
FontSize=#LW# * 0.5
FontColor=ffa950
StringAlign=Center
W=#LW#
X=((#LX# + #LW#) / 2)
Y=(((#LY# + #LH#) / 2) - ([#CURRENTSECTION#:H] / 2 ))
DynamicVariables=1

[MeterSHOP]
Meter=String
Text=中古パソコン&パーツ SHOP
MeterStyle=ss
StringAlign=LeftCenter
X=((#W# - #LW#) / 2)
SolidColor=#ur#
Padding=#Padding#, #Padding#, #Padding#, #Padding#
Y=(#URY# + (#URH# / 2)) + (#URY# * 0.05)
FontSize=#URW# * 0.05

[MeterMichael]
Meter=String
Text=マイケルソフト
MeterStyle=ss
FontSize=#LRW#*0.07
FontColor=ffffff
StringAlign=CenterCenter
X=(#LW# + ((#W# - #LW#) / 2))
Y=(#LRY# + (#LRH# / 2)) + (#URY# * 0.2)

[Variables]
BX=(#WR# * 780)
BY=(#HR# * 320)
BH=(#WR# * 350)

[ImageBinbows]
Meter=Image
ImageName=#@#Images\binbows.jpg
X=#BX#
Y=#BY#
H=#BH#

[MeterMichaelsoft]
Meter=String
Text=Michaelsoft
MeterStyle=ss
FontSize=#BH#*0.25
FontColor=000000
X=(#BH#*0.1)R
Y=r

[MeterBinbows]
Meter=String
Text=Binbows
MeterStyle=ss
FontSize=#BH#*0.5
FontColor=000000
X=(-#BH#*0.022)r
Y=R
