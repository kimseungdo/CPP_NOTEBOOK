#include "application.h"
#include "global_test.h"

#include <QApplication>

void init_device_code_name(){
// 장비id, 장비코드, 장비정보 n개 나열, 메인경로, 슬롯경로, 포트경로
// 대분류(QString), 장비명(QString), 변수개수(QString) = 장비코드(QString)
// 1-정류기류 전부 변수 10개
    device_code_name [{"정류기류", "동아CRS 1800", "10"}] = "010";
    device_code_name [{"정류기류", "동아CRS 1800N", "10"}] = "102";
    device_code_name [{"정류기류", "ANTS CRS 1800", "10"}] = "103";
    device_code_name [{"정류기류", "동아 MR2", "10"}] = "104";
    device_code_name [{"정류기류", "동아 MRH", "10"}] = "108";
    device_code_name [{"정류기류", "동아 MRS", "10"}] = "11A";
    device_code_name [{"정류기류", "MBRS 1200R", "10"}] = "105";
    device_code_name [{"정류기류", "MBRS 1200N", "10"}] = "106";
    device_code_name [{"정류기류", "MBRS 1200", "10"}] = "107";
    device_code_name [{"정류기류", "동아 CRS2400", "10"}] = "109";
    device_code_name [{"정류기류", "동아 CRS2400N", "10"}] = "10A";
    device_code_name [{"정류기류", "동아 MBRS 1201N", "10"}] = "10B";
    device_code_name [{"정류기류", "동아 MBRS 600N", "10"}] = "10C";
    device_code_name [{"정류기류", "동아 MBRS 601N", "10"}] = "10D";
    device_code_name [{"정류기류", "동아 MBRS 600R", "10"}] = "10E";
    device_code_name [{"정류기류", "동아 RS-B1-800N", "10"}] = "10F";
    device_code_name [{"정류기류", "동아 SLR700SN", "10"}] = "110";
    device_code_name [{"정류기류", "동아 SLR700SR", "10"}] = "111";
    device_code_name [{"정류기류", "이화 BIGCSU1200", "10"}] = "112";
    device_code_name [{"정류기류", "이화 BIGCSU600", "10"}] = "113";
    device_code_name [{"정류기류", "이화 BIGCSU800", "10"}] = "114";
    device_code_name [{"정류기류", "이화 CRS2400", "10"}] = "115";
    device_code_name [{"정류기류", "이화 MINICSU1200N", "10"}] = "116";
    device_code_name [{"정류기류", "이화 MINICSU600N", "10"}] = "117";
    device_code_name [{"정류기류", "이화 MINICSU800N", "10"}] = "118";
    device_code_name [{"정류기류", "동아 800A", "10"}] = "119";
    device_code_name [{"정류기류", "SARS 300", "10"}] = "180";
    device_code_name [{"정류기류", "에머슨", "10"}] = "181";
    device_code_name [{"정류기류", "CRS24-150", "10"}] = "182";
    device_code_name [{"정류기류", "SDPS-48N", "10"}] = "183";
    device_code_name [{"정류기류", "SWPS-4150W2", "10"}] = "184";
    device_code_name [{"정류기류", "LORS-4150", "10"}] = "185";
    device_code_name [{"정류기류", "LORS-460", "10"}] = "186";
    device_code_name [{"정류기류", "NORS-4150", "10"}] = "187";
    device_code_name [{"정류기류", "NORS-460", "10"}] = "188";
    device_code_name [{"정류기류", "동아 SCRS80", "10"}] = "150";
    device_code_name [{"정류기류", "Qrinon_SARS150", "10"}] = "151";
    device_code_name [{"정류기류", "Qrinon_WMRS75A", "10"}] = "152";
    device_code_name [{"정류기류", "정류기 감시 모듈 A망(네오)", "10"}] = "1F1";
    device_code_name [{"정류기류", "정류기 감시 모듈 A망(파이브텍)", "10"}] = "1F2";
    device_code_name [{"정류기류", "정류기 감시 모듈 전송망", "10"}] = "1F3";
    device_code_name [{"정류기류", "정류기 감시 모듈 전송망(네오)", "10"}] = "1F4";
// 2-전력관련류
    device_code_name [{"전력관련류", "전력량계", "13"}] = "1";         // 변수 13개
    device_code_name [{"상전 감시 모듈", "상전 A망", "8"}] = "2";         // 변수 8개
    device_code_name [{"상전 감시 모듈", "상전 전송망", "8"}] = "3";       // 변수 8개
    device_code_name [{"상전 감시 모듈", "상전 전송망(네오)", "8"}] = "4";   // 변수8개
    device_code_name [{"UPS", "UPS", "10"}] = "8";             // 변수 8개
// 3-냉방기류
    device_code_name [{"가변용량", "가변용량 냉방기", "7"}] = "201";        // 변수 7개
    device_code_name [{"자연공조", "자연공조 냉방기", "5"}] = "202";        // 변수 5개
    device_code_name [{"창조2", "창조 2 냉방기", "5"}] = "203";        // 변수 5개
    device_code_name [{"창조1", "창조 1 냉방기", "5"}] = "205";        // 변수 5개
    device_code_name [{"마이콤", "냉방기 마이콤", "6"}] = "204";         // 변수 6개
    device_code_name [{"감시모듈", "냉방기 감시모듈", "3"}] = "22F";        // 변수 3개
// 4-온습도류
    device_code_name [{"온습도모듈", "온습도 감시 모듈 A망 (네오)", "4"}] = "301";       // 변수 4개
    device_code_name [{"온습도모듈", "온습도 감시 모듈 A망 (파이브텍)", "4"}] = "302";
    device_code_name [{"온습도모듈", "온습도 감시 모듈 전송망", "4"}] = "303";
    device_code_name [{"온습도모듈", "온습도 감시 모듈 전송망(네오)", "4"}] = "304";
    device_code_name [{"온도류", "온도 감시 모듈", "3"}] = "321";
    device_code_name [{"온습도모듈", "온도_습도 감시 모듈-12ch", "4"}] = "331";
// 5-하론류
    device_code_name [{"하론", "하론 감시 모듈", "6"}] = "401";
// 6-화재
    device_code_name [{"화재", "화재 감시 센서", "1"}] = "411";
// 7-인체감지
    device_code_name [{"인체", "광전 센서", "1"}] = "431";
// 8-침수센서류
    device_code_name [{"침수", "침수 감시 센서", "1"}] = "421";
// 9-출입문
    device_code_name [{"출입문", "출입문 센서", "1"}] = "441";
// 10-접지센서
    device_code_name [{"접지", "접지센서", "1"}] = "471";
// 11-발동발전기
    device_code_name [{"발동발전기", "발동발전기(전송망)", "6"}] = "601";
    device_code_name [{"발동발전기", "발동발전기(A망)", "6"}] = "602";

// 12-배풍기
    device_code_name [{"배풍기", "배풍기 제어 모듈", "4"}] = "611";
// 13-BMU
    device_code_name [{"BMU", "BMU 27V/2100Ah", "5"}] = "501";
    device_code_name [{"BMU", "BMU 27V/3000Ah", "5"}] = "502";
    device_code_name [{"BMU", "BMU 48V/1050Ah", "5"}] = "503";
    device_code_name [{"BMU", "BMU 48V/1500Ah", "5"}] = "504";
    device_code_name [{"BMU", "BMU 48V/1600Ah", "5"}] = "505";


// 모니터링 안하는것들
    device_code_name [{"조명제어", "조명 제어 모듈", "10"}] = "451";
    device_code_name [{"도어잠금장치", "도어스트라이크", "10"}] = "461";
    device_code_name [{"도어잠금장치", "디지털 도어락", "10"}] = "462";

    device_code_name [{"RF 리더류", "RF Reader/Controller", "10"}] = "621";
    device_code_name [{"RF 리더류", "RF Reader", "10"}] = "622";
/*
    qDebug()<< device_code_name.key("201");             //QVector("냉방기류", "가변용량 냉방기")
    qDebug()<< device_code_name.key("201").at(0);       // "냉방기류"
    qDebug()<< device_code_name.key("201").at(1);       // "가변용량 냉방기"
*/
}

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    init_device_code_name();

    application w;
    w.show();

    return a.exec();
}
