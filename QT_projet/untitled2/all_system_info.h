#ifndef ALL_SYSTEM_INFO_H
#define ALL_SYSTEM_INFO_H

#include <QVector>
#include <QString>

class all_system_info{
public:
    all_system_info();
    QVector<QString> slots_id = {nullptr, "RS-232", "RS-485", "DI", "DO"};

/*
 * 정수로 id식별
 * 일부는 문자열 id식별한 다함
 *
 * 배열 index로
 */

    int slot_counter; //line_clount == 1 only main
                      //line_clunt > 1 exists other sub slot

    bool main_flag;
    bool sub1_flag; // on/off flag
    bool sub2_flag; //

    QVector<bool> main_slots; //슬롯정보를 담음
    QVector<bool> sub1_slots;
    QVector<bool> sub2_slots;

    QVector<QString> tempvector;
    QVector<QVector<QString>> slot_vector;

    QVector< QVector< QVector <QVector<QString>>>> dd;

private:
};
#endif // ALL_SYSTEM_INFO_H
