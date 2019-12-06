#include "application.h"
#include "global_test.h"

#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QStringList>


void initial_system(){
    //main read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx")){
        _main_flag = true;


        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        else {
            _slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                _main_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        //qDebug()<< "application ms vector : " << _main_slots;
    }
    else{ qDebug()<< "Disconnected MS or File Not Exists";
            main_slots_device.clear();
    }

    //sub1 read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx")){
        _sub1_flag = true;


        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//sub1 file read
        else{
            _slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                _sub1_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        //qDebug()<< "application sub1 vector : " << _sub1_slots;

    }
    else{ qDebug()<< "Disconnected sub1 or File Not Exists";
            sub1_slots_device.clear();
    }

    //sub2 read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx")){
        _sub2_flag = true;

        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        else{
            _slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                _sub2_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        //qDebug()<< "application sub2 vector : " << _sub2_slots;
    }
    else{ qDebug()<< "Disconnected sub2 or File Not Exists";
            sub2_slots_device.clear();
    }

}
void init_device_code_name(){
    /*
    // 전력관련류
    device_code_name ["전력량계"] = "1";
    device_code_name ["상전 A망"] = "2";
    device_code_name ["상전 전송망"] = "3";
    device_code_name ["상전 전송망(네오)"] = "4";
    device_code_name ["UPS"] = "31";

    // 정류기류
    device_code_name ["동아CRS 1800"] = "010";
    device_code_name ["동아CRS 1800N"] = "102";
    device_code_name ["ANTS CRS 1800"] = "103";
    device_code_name ["동아 MR2"] = "104";
    device_code_name ["동아 MRH"] = "108";
    device_code_name ["동아 MRS"] = "11A";
    device_code_name ["MBRS 1200R"] = "105";
    device_code_name ["MBRS 1200N"] = "106";
    device_code_name ["MBRS 1200"] = "107";
    device_code_name ["동아 CRS2400"] = "109";
    device_code_name ["동아 CRS2400N"] = "10A";
    device_code_name ["동아 MBRS 1201N"] = "10B";
    device_code_name ["동아 MBRS 600N"] = "10C";
    device_code_name ["동아 MBRS 601N"] = "10D";
    device_code_name ["동아 MBRS 600R"] = "10E";
    device_code_name ["동아 RS-B1-800N"] = "10F";
    device_code_name ["동아 SLR700SN"] = "110";
    device_code_name ["동아 SLR700SR"] = "111";
    device_code_name ["이화 BIGCSU1200"] = "112";
    device_code_name ["이화 BIGCSU600"] = "113";
    device_code_name ["이화 BIGCSU800"] = "114";
    device_code_name ["이화 CRS2400"] = "115";
    device_code_name ["이화 MINICSU1200N"] = "116";
    device_code_name ["이화 MINICSU600N"] = "117";
    device_code_name ["이화 MINICSU800N"] = "118";
    device_code_name ["동아 800A"] = "119";
    device_code_name ["SARS 300"] = "180";
    device_code_name ["에머슨 "] = "181";
    device_code_name ["CRS24-150"] = "182";
    device_code_name ["SDPS-48N"] = "183";
    device_code_name ["SWPS-4150W2"] = "184";
    device_code_name ["LORS-4150"] = "185";
    device_code_name ["LORS-460"] = "186";
    device_code_name ["NORS-4150"] = "187";
    device_code_name ["NORS-460"] = "188";
    device_code_name ["동아 SCRS80"] = "150";
    device_code_name ["Qrinon_SARS150"] = "151";
    device_code_name ["Qrinon_WMRS75A"] = "152";
    device_code_name ["정류기 감시 모듈 A망(네오)"] = "1F1";
    device_code_name ["정류기 감시 모듈 A망(파이브텍)"] = "1F2";
    device_code_name ["정류기 감시 모듈 전송망"] = "1F3";
    device_code_name ["정류기 감시 모듈 전송망(네오)"] = "1F4";

    // 냉방기류
    device_code_name ["가변용량 냉방기"] = "201";
    device_code_name ["자연공조 냉방기"] = "202";
    device_code_name ["창조 2 냉방기"] = "203";
    device_code_name ["창조 1 냉방기"] = "205";
    device_code_name ["냉방기 마이콤"] = "204";
    device_code_name ["냉방기 감시모듈"] = "22F";

    // 온습도류
    device_code_name ["온습도 감시 모듈 A망 (네오)"] = "301";
    device_code_name ["온습도 감시 모듈 A망 (파이브텍)"] = "302";
    device_code_name ["온습도 감시 모듈 전송망"] = "303";
    device_code_name ["온습도 감시 모듈 전송망(네오)"] = "304";
    device_code_name ["온도 감시 모듈"] = "321";
    device_code_name ["온도_습도 감시 모듈-12ch"] = "331";

    // 하론류
    device_code_name ["하론 감시 모듈"] = "401";

    // 화재센서
    device_code_name ["화재 감시 센서"] = "411";

    // 침수센서류
    device_code_name ["침수 감시 센서"] = "421";

    // 인체감지
    device_code_name ["광전 센서"] = "431";

    // 출입문
    device_code_name ["출입문 센서"] = "441";

    // 조명제어
    device_code_name ["조명 제어 모듈"] = "451";

    // 도어잠금장치
    device_code_name ["도어스트라이크"] = "461";
    device_code_name ["디지털 도어락"] = "462";

    // 접지센서
    device_code_name ["접지센서"] = "471";

    // BMU
    device_code_name ["BMU 27V/2100Ah"] = "501";
    device_code_name ["BMU 27V/3000Ah"] = "502";
    device_code_name ["BMU 48V/1050Ah"] = "503";
    device_code_name ["BMU 48V/1500Ah"] = "504";
    device_code_name ["BMU 48V/1600Ah"] = "505";

    // 발동발전기류
    device_code_name ["발동발전기(전송망)"] = "601";
    device_code_name ["발동발전기(A망)"] = "602";

    // 배풍기 제어
    device_code_name ["배풍기 제어 모듈"] = "611";

    // RF 리더류
    device_code_name ["RF Reader/Controller"] = "621";
    device_code_name ["RF Reader"] = "622"; */

    // 전력관련류
    device_code_name ["전력량계"] = "1";
    device_code_name ["상전 A망"] = "2";
    device_code_name ["상전 전송망"] = "3";
    device_code_name ["상전 전송망(네오)"] = "4";
    device_code_name ["UPS"] = "31";

    // 정류기류
    device_code_name ["동아CRS 1800"] = "010";
    device_code_name ["동아CRS 1800N"] = "102";
    device_code_name ["ANTS CRS 1800"] = "103";
    device_code_name ["동아 MR2"] = "104";
    device_code_name ["동아 MRH"] = "108";
    device_code_name ["동아 MRS"] = "11A";
    device_code_name ["MBRS 1200R"] = "105";
    device_code_name ["MBRS 1200N"] = "106";
    device_code_name ["MBRS 1200"] = "107";
    device_code_name ["동아 CRS2400"] = "109";
    device_code_name ["동아 CRS2400N"] = "10A";
    device_code_name ["동아 MBRS 1201N"] = "10B";
    device_code_name ["동아 MBRS 600N"] = "10C";
    device_code_name ["동아 MBRS 601N"] = "10D";
    device_code_name ["동아 MBRS 600R"] = "10E";
    device_code_name ["동아 RS-B1-800N"] = "10F";
    device_code_name ["동아 SLR700SN"] = "110";
    device_code_name ["동아 SLR700SR"] = "111";
    device_code_name ["이화 BIGCSU1200"] = "112";
    device_code_name ["이화 BIGCSU600"] = "113";
    device_code_name ["이화 BIGCSU800"] = "114";
    device_code_name ["이화 CRS2400"] = "115";
    device_code_name ["이화 MINICSU1200N"] = "116";
    device_code_name ["이화 MINICSU600N"] = "117";
    device_code_name ["이화 MINICSU800N"] = "118";
    device_code_name ["동아 800A"] = "119";
    device_code_name ["SARS 300"] = "180";
    device_code_name ["에머슨 "] = "181";
    device_code_name ["CRS24-150"] = "182";
    device_code_name ["SDPS-48N"] = "183";
    device_code_name ["SWPS-4150W2"] = "184";
    device_code_name ["LORS-4150"] = "185";
    device_code_name ["LORS-460"] = "186";
    device_code_name ["NORS-4150"] = "187";
    device_code_name ["NORS-460"] = "188";
    device_code_name ["동아 SCRS80"] = "150";
    device_code_name ["Qrinon_SARS150"] = "151";
    device_code_name ["Qrinon_WMRS75A"] = "152";
    device_code_name ["정류기 감시 모듈 A망(네오)"] = "1F1";
    device_code_name ["정류기 감시 모듈 A망(파이브텍)"] = "1F2";
    device_code_name ["정류기 감시 모듈 전송망"] = "1F3";
    device_code_name ["정류기 감시 모듈 전송망(네오)"] = "1F4";

    // 냉방기류
    device_code_name ["가변용량 냉방기"] = "201";
    device_code_name ["자연공조 냉방기"] = "202";
    device_code_name ["창조 2 냉방기"] = "203";
    device_code_name ["창조 1 냉방기"] = "205";
    device_code_name ["냉방기 마이콤"] = "204";
    device_code_name ["냉방기 감시모듈"] = "22F";

    // 온습도류
    device_code_name ["온습도 감시 모듈 A망 (네오)"] = "301";
    device_code_name ["온습도 감시 모듈 A망 (파이브텍)"] = "302";
    device_code_name ["온습도 감시 모듈 전송망"] = "303";
    device_code_name ["온습도 감시 모듈 전송망(네오)"] = "304";
    device_code_name ["온도 감시 모듈"] = "321";
    device_code_name ["온도_습도 감시 모듈-12ch"] = "331";

    // 하론류
    device_code_name ["하론 감시 모듈"] = "401";

    // 화재센서
    device_code_name ["화재 감시 센서"] = "411";

    // 침수센서류
    device_code_name ["침수 감시 센서"] = "421";

    // 인체감지
    device_code_name ["광전 센서"] = "431";

    // 출입문
    device_code_name ["출입문 센서"] = "441";

    // 조명제어
    device_code_name ["조명 제어 모듈"] = "451";

    // 도어잠금장치
    device_code_name ["도어스트라이크"] = "461";
    device_code_name ["디지털 도어락"] = "462";

    // 접지센서
    device_code_name ["접지센서"] = "471";

    // BMU
    device_code_name ["BMU 27V/2100Ah"] = "501";
    device_code_name ["BMU 27V/3000Ah"] = "502";
    device_code_name ["BMU 48V/1050Ah"] = "503";
    device_code_name ["BMU 48V/1500Ah"] = "504";
    device_code_name ["BMU 48V/1600Ah"] = "505";

    // 발동발전기류
    device_code_name ["발동발전기(전송망)"] = "601";
    device_code_name ["발동발전기(A망)"] = "602";

    // 배풍기 제어
    device_code_name ["배풍기 제어 모듈"] = "611";

    // RF 리더류
    device_code_name ["RF Reader/Controller"] = "621";
    device_code_name ["RF Reader"] = "622";
}//                      "값"  =  "키"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    initial_system();
    init_device_code_name();


    qDebug()<< "키값 출력" << device_code_name.key("622");
    qDebug()<< "값 출력" << device_code_name.value("RF Reader");

    application w;
    w.show();

    return a.exec();
}
