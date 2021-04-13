<Qucs Schematic 0.0.22>
<Properties>
  <View=0,0,800,800,1,0,0>
  <Grid=10,10,1>
  <DataSet=LPF_test.dat>
  <DataDisplay=LPF_test.dpl>
  <OpenDisplay=1>
  <Script=LPF_test.m>
  <RunScript=0>
  <showFrame=0>
  <FrameText0=Title>
  <FrameText1=Drawn By:>
  <FrameText2=Date:>
  <FrameText3=Revision:>
</Properties>
<Symbol>
</Symbol>
<Components>
  <R R1 1 300 110 -26 15 0 0 "RS" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <C C1 1 390 140 17 -26 0 1 "CL" 1 "" 0 "neutral" 0>
  <GND * 1 390 170 0 0 0 0>
  <Eqn Variables 1 520 110 -23 13 0 0 "RS=1 kOhm" 1 "CL=1 pF" 1 "yes" 0>
  <.AC AC1 1 270 230 0 33 0 0 "log" 1 "1 kHz" 1 "1 GHz" 1 "301" 1 "no" 0>
  <NutmegEq PostProcessing 1 500 230 -20 13 0 0 "ac" 1 "TF=20*log10(abs(V(out)/V(in)))" 1>
  <Vac V1 1 190 140 18 -26 0 1 "1 V" 1 "200 MHz" 1 "0" 0 "0" 0>
  <GND * 1 190 170 0 0 0 0>
  <.TR TR1 1 140 230 0 51 0 0 "lin" 1 "0" 1 "50 ns" 1 "50" 1 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
</Components>
<Wires>
  <330 110 390 110 "out" 390 80 25 "">
  <190 110 270 110 "in" 260 80 43 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
</Paintings>
