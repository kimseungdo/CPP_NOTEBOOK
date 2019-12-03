#ifndef GLOBAL_TEST_H
#define GLOBAL_TEST_H

#include <QVector>

extern __int8 _slot_counter; //line_clount == 1 only main
                  //line_clunt > 1 exists other sub slot

extern QVector<QString> slots_label;

extern bool _main_flag;
extern bool _sub1_flag; // on/off flag
extern bool _sub2_flag; //

extern QVector<bool> _main_slots; //슬롯정보를 담음
extern QVector<bool> _sub1_slots;
extern QVector<bool> _sub2_slots;

extern QVector<QVector<QString>> main_slots_device;
extern QVector<QVector<QString>> sub1_slots_device;
extern QVector<QVector<QString>> sub2_slots_device;
#endif // GLOBAL_TEST_H
