# My qt Note  
- 확인할것
  - UI 확장시 qrc도 넣어줘야함
  - Missing file check
 
# Buildroot RPI 
[BR RPI setting](https://ebeenarticle.tistory.com/entry/Raspberry-Pi-3-B-with-Buildroot-QT-56)
- in ubuntu 16.045에서
- build root ENV add or remove  
  - /home/buildroot-2018.02.3/ 에서 설정 가능하다  
  - $make menuconfig ~~ Qt관련 라이브러리추가  
    - Target packages >> Graphic libraries and applications(graphic/text) >> Qt5 >> 필요한것 설치  
  - $make 진행  
  - ./output/images/ 내 sdcard.img 생성  
  
- rufus사용 이미지를 새로 덮어씀(사용시 기타 win32 벤치마크 기반 프로그램은 꺼줘야함)  
- i2c 설정 vi startup.sh
  - (Unable to open i2c device : no suck file or directory) << 시간 설정이 안되있어서 그럼
  - modprobe i2c-dev
  - rm /root/config.ini.* \n /root/실행파일명
 >> $reboot 
