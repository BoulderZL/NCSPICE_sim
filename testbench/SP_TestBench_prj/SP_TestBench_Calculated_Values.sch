<Qucs Schematic 0.0.22>
<Properties>
  <View=66,450,1530,1184,1.12324,150,204>
  <Grid=10,10,1>
  <DataSet=SP_TestBench.dat.ngspice>
  <DataDisplay=SP_TestBench.dpl>
  <OpenDisplay=0>
  <Script=SP_TestBench.m>
  <RunScript=1>
  <showFrame=0>
  <FrameText0=Title>
  <FrameText1=Drawn By:>
  <FrameText2=Date:>
  <FrameText3=Revision:>
</Properties>
<Symbol>
</Symbol>
<Components>
  <Sub S11_Probe1 1 250 530 -20 43 0 0 "S11_Probe.sch" 0 "50" 1>
  <S4Q_V V3 1 120 690 18 -26 0 1 "dc 0 ac 1" 1 "" 0 "" 0 "" 0 "" 0>
  <GND * 1 120 720 0 0 0 0>
  <R_SPICE R7 1 160 650 -24 -66 0 2 "50" 1 "" 0 "" 0 "" 0 "" 0>
  <Sub S21_Probe1 1 790 630 -60 -66 0 0 "S21_Probe.sch" 0 "50" 1>
  <R_SPICE R8 1 760 700 15 -26 0 1 "50" 1 "" 0 "" 0 "" 0 "" 0>
  <Sub S12_Probe1 1 230 860 -40 34 0 0 "S12_Probe.sch" 0 "50" 1>
  <GND * 1 170 1100 0 0 1 2>
  <R_SPICE R9 1 170 1070 26 -26 1 1 "50" 1 "" 0 "" 0 "" 0 "" 0>
  <R_SPICE R10 1 750 1030 -34 18 1 0 "50" 1 "" 0 "" 0 "" 0 "" 0>
  <Vac U1 1 780 1090 31 -40 1 1 "1 V" 1 "1 kHz" 1 "0" 0 "0" 0>
  <GND * 1 780 1120 0 0 1 2>
  <Sub S22_Probe1 1 760 910 -20 44 0 0 "S22_Probe.sch" 0 "50" 1>
  <GND * 1 760 740 0 0 0 0>
  <.DC DC1 1 970 630 0 46 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <.AC AC1 1 980 720 0 46 0 0 "log" 1 "100e3" 1 "10e6" 1 "201" 1 "no" 0>
  <L L1 1 510 610 -26 10 0 0 "7.723uH" 1 "" 0>
  <GND * 1 470 690 0 0 0 0>
  <GND * 1 580 690 0 0 0 0>
  <L L2 1 510 980 -26 10 0 0 "7.723uH" 1 "" 0>
  <GND * 1 580 1060 0 0 0 0>
  <GND * 1 470 1060 0 0 0 0>
  <NutmegEq StoZ_Conversion_Template1 1 990 940 -27 19 0 0 "ac" 1 "StoZ_Z0=50.0" 1 "StoZ_DelSxZ0=(  (1-V(nS11))*(1-V(nS22))-V(nS12)*V(nS21)  )/StoZ_Z0" 1 "Z11=(  (1+V(nS11))*(1-V(nS22))+V(nS12)*V(nS21) )/StoZ_DelSxZ0" 1 "Z12=2*V(nS12)/StoZ_DelSxZ0" 1 "Z21=2*V(nS21)/StoZ_DelSxZ0" 1 "Z22=((1-V(nS11))*(1+V(nS22))+V(nS12)*V(nS21))/StoZ_DelSxZ0" 1>
  <C C1 1 580 660 17 -26 0 1 "7.014nF" 1 "" 0 "neutral" 0>
  <C C4 1 580 1030 17 -26 0 1 "7.014nF" 1 "" 0 "neutral" 0>
  <C C2 1 470 660 -98 -25 1 1 "1.074nF" 1 "" 0 "neutral" 0>
  <C C3 1 470 1030 -98 -25 1 1 "1.074nF" 1 "" 0 "neutral" 0>
</Components>
<Wires>
  <190 550 190 650 "" 0 0 0 "">
  <120 650 130 650 "" 0 0 0 "">
  <120 650 120 660 "" 0 0 0 "">
  <710 650 760 650 "" 0 0 0 "">
  <710 550 710 610 "" 0 0 0 "">
  <760 650 760 670 "" 0 0 0 "">
  <170 880 170 1020 "" 0 0 0 "">
  <780 1030 780 1060 "" 0 0 0 "">
  <710 930 720 930 "" 0 0 0 "">
  <710 1030 720 1030 "" 0 0 0 "">
  <710 930 710 980 "" 0 0 0 "">
  <760 730 760 740 "" 0 0 0 "">
  <190 650 350 650 "" 0 0 0 "">
  <350 610 350 650 "" 0 0 0 "">
  <350 610 470 610 "" 0 0 0 "">
  <470 610 480 610 "" 0 0 0 "">
  <470 610 470 630 "" 0 0 0 "">
  <710 610 710 650 "" 0 0 0 "">
  <540 610 580 610 "" 0 0 0 "">
  <580 610 710 610 "" 0 0 0 "">
  <580 610 580 630 "" 0 0 0 "">
  <360 980 470 980 "" 0 0 0 "">
  <470 980 470 1000 "" 0 0 0 "">
  <470 980 480 980 "" 0 0 0 "">
  <540 980 580 980 "" 0 0 0 "">
  <580 980 580 1000 "" 0 0 0 "">
  <710 980 710 1030 "" 0 0 0 "">
  <580 980 710 980 "" 0 0 0 "">
  <170 1020 170 1040 "" 0 0 0 "">
  <170 1020 360 1020 "" 0 0 0 "">
  <360 980 360 1020 "" 0 0 0 "">
  <310 550 310 550 "nS11" 320 520 0 "">
  <830 550 830 550 "nS21" 830 510 0 "">
  <290 880 290 880 "nS12" 300 840 0 "">
  <840 930 840 930 "nS22" 840 890 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
  <Rectangle 370 520 310 200 #ff0000 2 1 #c0c0c0 1 0>
  <Text 420 480 20 #ff0000 0 "Device Under Test">
  <Rectangle 370 900 310 200 #ff0000 2 1 #c0c0c0 1 0>
  <Text 420 860 20 #ff0000 0 "Device Under Test">
  <Text 960 510 12 #000000 0 "Based on:\nhttps://qucs-help.readthedocs.io/en/spice4qucs/RF.html">
  <Text 960 470 16 #000000 0 "S-Parameter Test Bench">
  <Rectangle 950 600 200 270 #000000 0 1 #c0c0c0 1 0>
  <Rectangle 950 500 560 60 #000000 0 1 #c0c0c0 1 0>
  <Rectangle 1150 600 360 270 #000000 0 1 #c0c0c0 1 0>
  <Text 1180 620 12 #000000 0 "Bessel low-pass filter \n1MHz cutoff, pi-type, \nimpedance matching 50 Ohm">
  <Text 1180 700 12 #000000 0 "RF and millimeter-wave circuit design \nEindhoven University of Technology\nDepartment of Electrical Engineering\nIntegrated Circuits Group">
  <Text 1190 800 12 #000000 0 "dr. Carlos Mendes Jr \nprof. dr. ir. Peter Baltus \nprof. dr. Marion Matters">
  <Text 440 730 12 #000000 0 "S11 and S21 Test bench">
  <Text 380 580 12 #ff0000 0 "IN">
  <Text 640 580 12 #ff0000 0 "OUT">
  <Text 452 1104 12 #000000 0 "S22 and S12 Test bench">
  <Text 382 954 12 #ff0000 0 "IN">
  <Text 642 954 12 #ff0000 0 "OUT">
  <Text 960 570 16 #000000 0 "Simulation Setup">
  <Text 970 880 16 #000000 0 "Equations for Z-Parameter">
  <Rectangle 950 910 560 240 #000000 0 1 #c0c0c0 1 0>
</Paintings>
