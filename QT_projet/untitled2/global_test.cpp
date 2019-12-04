#include "global_test.h"

__int8 _slot_counter = 0;

QVector<QString> slots_label = {"None", "RS-232", "RS-485", "RS-422", "DI", "DO"};
// 3 3 4 12 12
bool _main_flag = false;
bool _sub1_flag = false;
bool _sub2_flag = false;

QVector<bool> _main_slots;
QVector<bool> _sub1_slots;
QVector<bool> _sub2_slots;

QVector<QVector<QVector<QString>>> main_slots_device;
QVector<QVector<QVector<QString>>> sub1_slots_device;
QVector<QVector<QVector<QString>>> sub2_slots_device;

//QVector<QVector<QString>> _main_slots_port_info
