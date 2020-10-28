# CPP_NOTEBOOK
opencl multi processing &amp;&amp; opencv visual CPP

## Common version  
opencv 4.1.0  
cmake 3.15.5  

## PC interface  
CPU : i5-4460 (***DirectX 11.2, OpenGL 4.3 and OpenCL 1.2 APIs.***)  
GPU : intel family 4600  

**[compiler]**  
x86_64-7.2.0-posix-seh-rt_v5-rev1  

## Laptop interface  
CPU : i7-3610QM (***DirectX 11.0, OpenGL 4.0 and OpenCL 1.2 APIs***)  
GPU : GT 630M  

**[compiler]**
x86_64-8.1.0-posix-seh-rt_v6-rev0
  
## Coding Rule  
작명 규칙  
swipeView - stackView - swipeView~1  
.qml // .ui.qml  
ui의 부속품들은 qml로 만든다 --> 키보드같은거  
화면은 ui.qml로 만든다  
(x)는 미구현 (page)는 코드네임  
===================================  
swipeview(stackview)  

- main.qml  
  - onoff(FuncForm)
  - MainButton(ui.qml)  
    - QuickTest (page1 ~~~ M_QuickTestForm)
    - QuickText in Camsetting (page2 ~~~ M_QuickTestCamSettingForm)
    - Test (x ~~~ M_TestForm)  
    - QC (x ~~~ M_QcForm)
    - Calibration (x ~~~ M_CalibrationForm)  
    - List (x ~~~ M_ListForm)
    - Setting (page3 ~~~ M_SettingForm)  
      - Account Manage 
      - Detail Setting
      - Load n Save
      - Update
      - info
  - ipinfo (IpInfoForm)
  - Ui parts(qml)  
    - pt_ScopeView
    - pt_NumberpadLayout

#### Component
icon ~~~ ic_XXX

id - ui ~~~ page_XXX  
   - button ~~~ btn_XXX
   - text ~~~ tx_XXX
   - label ~~~ la_XXX
   
