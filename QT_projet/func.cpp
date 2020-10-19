/*
QT코드 단편



*/

void XXX::loadIpAddress(){

    /*
     * 0 = Io
     * 1 = eth0
     * 2 = wlan0
     *
     * eth0
     * inet = ipv4
     * inet6 = ipv6
     * HWaddr
     */
    device_name = "NULL";
    ipv4_adr = "NULL";
    ipv6_adr = "NULL";
    gate_adr = "NULL";
    port_adr = "NULL";
    mac_adr = "NULL";

    const QList<QNetworkInterface> netlist = QNetworkInterface::allInterfaces();
    const QList<QHostAddress> list = QNetworkInterface::allAddresses();

    device_name = qgetenv("USER"); // 사용자 정보 획득
    device_root = qgetenv("HOST"); // 사용자 호스트 정보 겟

    if(netlist.isEmpty() == false){// network exists
        for( int i = 0; i < list.size(); ++i ) {
            if( list.at(i) != QHostAddress::LocalHost && list.at(i).toIPv4Address() )
                ipv4_adr = list.at(i).toString();
        }
        for(int i=0; i<netlist.size(); i++){
            if(netlist.at(i).hardwareAddress() != "00:00:00:00:00:00"){
                mac_adr = netlist.at(i).hardwareAddress();
            }
        }

    }else{
        qDebug() << "NetWork disconnect" <<endl;
    }

    setIpAddress(device_name, ipv4_adr, mac_adr);
}

void XXX::setIpAddress(QString device, QString ip4, QString mc){
    // ipv4 ipv6 gateway port mac

    QList<QObject *> aa = rootOb-> findChildren<QObject *> (); // 루트객체 리스트 불러옴
    qWarning() << "list size is " << aa.size();
    for(int i=0;i<aa.size();i++) {
        qWarning() << "i="<<i<<", "<< aa.at(i) << " name="<<aa.at(i)->objectName();
    }

    qDebug()<< "set label func() " << "\n"
            << "HOST : " << device << "\n"
            << "IPv4 : " << ip4 << "\n"
            << "MAC : " << mc << endl;


    QList<QObject *> list = rootOb-> findChildren<QObject *> ();

    qWarning() << "list size is " << list.size();
    for(int i=0;i<list.size();i++) {
        qWarning() << "i="<<i<<", "<< list.at(i) << " name="<<list.at(i)->objectName();
    }

    QObject *item = rootOb->findChild<QObject*>("rect");
    if(item){
        qDebug()<< " ip4 label change";
        qDebug()<< item;
    }
    else{
        qDebug()<< "X " << item;
    }

    /*
    item = rootOb->findChild<QObject*>("mac_label");
    if(item)
        item->setProperty("text", mc);
    */


}
void XXX::restartApp(){ // 완벽하지않음 커맨드가 더러워짐 실행한 테스크 관리 필요
    QProcess::startDetached(QApplication::applicationFilePath());
    exit(12);
}

void XXX::reboot(QString mes){
    //qDebug()<< "call cpp signal call by - " << mes;
    system("reboot");
}

void XXX::shutdown(QString mes){
    system("shutdown -h now");  
    // or 
    QProcess proc;
    proc.setCommand("shutdown");
    proc.addArgument("-h");
    proc.addArgument("now");
    proc.start(); 
}
