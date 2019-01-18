  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (car2_P)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% car2_P.DigitalOutput_pinNumber
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% car2_P.DigitalOutput_pinNum_bgu342fgw0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% car2_P.DigitalOutput_pinNum_gfu1pwvlvi
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% car2_P.DigitalOutput_pinNum_fy041gyrvr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% car2_P.PulseGenerator_Amp
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% car2_P.PulseGenerator_Period
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% car2_P.PulseGenerator_Duty
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
	  ;% car2_P.PulseGenerator_PhaseDelay
	  section.data(4).logicalSrcIdx = 7;
	  section.data(4).dtTransOffset = 3;
	
	  ;% car2_P.PulseGenerator1_Amp
	  section.data(5).logicalSrcIdx = 8;
	  section.data(5).dtTransOffset = 4;
	
	  ;% car2_P.PulseGenerator1_Period
	  section.data(6).logicalSrcIdx = 9;
	  section.data(6).dtTransOffset = 5;
	
	  ;% car2_P.PulseGenerator1_Duty
	  section.data(7).logicalSrcIdx = 10;
	  section.data(7).dtTransOffset = 6;
	
	  ;% car2_P.PulseGenerator1_PhaseDelay
	  section.data(8).logicalSrcIdx = 11;
	  section.data(8).dtTransOffset = 7;
	
	  ;% car2_P.PulseGenerator2_Amp
	  section.data(9).logicalSrcIdx = 12;
	  section.data(9).dtTransOffset = 8;
	
	  ;% car2_P.PulseGenerator2_Period
	  section.data(10).logicalSrcIdx = 13;
	  section.data(10).dtTransOffset = 9;
	
	  ;% car2_P.PulseGenerator2_Duty
	  section.data(11).logicalSrcIdx = 14;
	  section.data(11).dtTransOffset = 10;
	
	  ;% car2_P.PulseGenerator2_PhaseDelay
	  section.data(12).logicalSrcIdx = 15;
	  section.data(12).dtTransOffset = 11;
	
	  ;% car2_P.PulseGenerator3_Amp
	  section.data(13).logicalSrcIdx = 16;
	  section.data(13).dtTransOffset = 12;
	
	  ;% car2_P.PulseGenerator3_Period
	  section.data(14).logicalSrcIdx = 17;
	  section.data(14).dtTransOffset = 13;
	
	  ;% car2_P.PulseGenerator3_Duty
	  section.data(15).logicalSrcIdx = 18;
	  section.data(15).dtTransOffset = 14;
	
	  ;% car2_P.PulseGenerator3_PhaseDelay
	  section.data(16).logicalSrcIdx = 19;
	  section.data(16).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 0;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (car2_B)
    ;%
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (car2_DW)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% car2_DW.clockTickCounter
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% car2_DW.clockTickCounter_cwkcixsp5s
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% car2_DW.clockTickCounter_fcnhfrrzpv
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% car2_DW.clockTickCounter_gcse5x20dd
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3495179165;
  targMap.checksum1 = 1783815976;
  targMap.checksum2 = 2353853830;
  targMap.checksum3 = 3220110744;

