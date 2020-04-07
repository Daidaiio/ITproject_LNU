#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QTextEdit>
#include <QMessageBox>
#include <QPushButton>
#include <QGroupBox>
#include <QTextBrowser>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBoxShedule->hide();
    ui->groupBoxMon->hide();
    ui->groupBoxTue->hide();
    ui->groupBoxWed->hide();
    ui->groupBoxThu->hide();
    ui->groupBoxFri->hide();
    ui->groupBoxSat->hide();
    ui->groupBoxAllSubject->hide();
    ui->pushButtonPreviousWeek->hide();
    ui->groupBoxMonHom->hide();
    ui->groupBoxTueHom->hide();
    ui->groupBoxWedHom->hide();
    ui->groupBoxThuHom->hide();
    ui->groupBoxFriHom->hide();
    ui->groupBoxSatHom->hide();
    ui->pushButtonClear1->hide();
    ui->pushButtonClear2->hide();
    ui->groupBoxAllNotes->hide();

    QFile fileNote1("FileNote1.txt");
    QFile fileNoteName1("FileNoteName1.txt");
    if(fileNote1.size()==0 && fileNoteName1.size()==0) ui->pushButtonNote1->hide();

    QFile fileNote2("FileNote2.txt");
    QFile fileNoteName2("FileNoteName2.txt");
    if(fileNote2.size()==0 && fileNoteName2.size()==0) ui->pushButtonNote2->hide();

    QFile fileNote3("FileNote3.txt");
    QFile fileNoteName3("FileNoteName3.txt");
    if(fileNote3.size()==0 && fileNoteName3.size()==0) ui->pushButtonNote3->hide();

    QFile fileNote4("FileNote4.txt");
    QFile fileNoteName4("FileNoteName4.txt");
    if(fileNote4.size()==0 && fileNoteName4.size()==0) ui->pushButtonNote4->hide();

    QFile fileNote5("FileNote5.txt");
    QFile fileNoteName5("FileNoteName5.txt");
    if(fileNote5.size()==0 && fileNoteName5.size()==0) ui->pushButtonNote5->hide();

    QFile fileNote6("FileNote6.txt");
    QFile fileNoteName6("FileNoteName6.txt");
    if(fileNote6.size()==0 && fileNoteName6.size()==0) ui->pushButtonNote6->hide();

    QFile fileNote7("FileNote7.txt");
    QFile fileNoteName7("FileNoteName7.txt");
    if(fileNote7.size()==0 && fileNoteName7.size()==0) ui->pushButtonNote7->hide();

    QFile fileNote8("FileNote8.txt");
    QFile fileNoteName8("FileNoteName8.txt");
    if(fileNote8.size()==0 && fileNoteName8.size()==0) ui->pushButtonNote8->hide();

    QFile fileNote9("FileNote9.txt");
    QFile fileNoteName9("FileNoteName9.txt");
    if(fileNote9.size()==0 && fileNoteName9.size()==0) ui->pushButtonNote9->hide();

    QFile fileNote10("FileNote10.txt");
    QFile fileNoteName10("FileNoteName10.txt");
    if(fileNote10.size()==0 && fileNoteName10.size()==0) ui->pushButtonNote10->hide();

    QFile fileNote11("FileNote11.txt");
    QFile fileNoteName11("FileNoteName11.txt");
    if(fileNote11.size()==0 && fileNoteName11.size()==0) ui->pushButtonNote11->hide();

    QFile fileNote12("FileNote12.txt");
    QFile fileNoteName12("FileNoteName12.txt");
    if(fileNote12.size()==0 && fileNoteName12.size()==0) ui->pushButtonNote12->hide();

    QFile fileNote13("FileNote13.txt");
    QFile fileNoteName13("FileNoteName13.txt");
    if(fileNote13.size()==0 && fileNoteName13.size()==0) ui->pushButtonNote13->hide();

    QFile fileNote14("FileNote14.txt");
    QFile fileNoteName14("FileNoteName14.txt");
    if(fileNote14.size()==0 && fileNoteName14.size()==0) ui->pushButtonNote14->hide();

    QFile fileNote15("FileNote15.txt");
    QFile fileNoteName15("FileNoteName15.txt");
    if(fileNote15.size()==0 && fileNoteName15.size()==0) ui->pushButtonNote15->hide();

    QFile fileNote16("FileNote16.txt");
    QFile fileNoteName16("FileNoteName16.txt");
    if(fileNote16.size()==0 && fileNoteName16.size()==0) ui->pushButtonNote16->hide();

    QFile fileNote17("FileNote17.txt");
    QFile fileNoteName17("FileNoteName17.txt");
    if(fileNote17.size()==0 && fileNoteName17.size()==0) ui->pushButtonNote17->hide();

    QFile fileNote18("FileNote18.txt");
    QFile fileNoteName18("FileNoteName18.txt");
    if(fileNote18.size()==0 && fileNoteName18.size()==0) ui->pushButtonNote18->hide();

    QFile fileNote19("FileNote19.txt");
    QFile fileNoteName19("FileNoteName19.txt");
    if(fileNote19.size()==0 && fileNoteName19.size()==0) ui->pushButtonNote19->hide();

    QFile fileNote20("FileNote20.txt");
    QFile fileNoteName20("FileNoteName20.txt");
    if(fileNote20.size()==0 && fileNoteName20.size()==0) ui->pushButtonNote20->hide();

    if(!fileNoteName1.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName1(&fileNoteName1);
    QString textName1 = inName1.readAll();
    fileNoteName1.close();
    ui->pushButtonNote1->setText(textName1);

    if(!fileNoteName2.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName2(&fileNoteName2);
    QString textName2 = inName2.readAll();
    fileNoteName2.close();
    ui->pushButtonNote2->setText(textName2);

    if(!fileNoteName3.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName3(&fileNoteName3);
    QString textName3 = inName3.readAll();
    fileNoteName3.close();
    ui->pushButtonNote3->setText(textName3);

    if(!fileNoteName4.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName4(&fileNoteName4);
    QString textName4 = inName4.readAll();
    fileNoteName4.close();
    ui->pushButtonNote4->setText(textName4);

    if(!fileNoteName5.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName5(&fileNoteName5);
    QString textName5 = inName5.readAll();
    fileNoteName5.close();
    ui->pushButtonNote5->setText(textName5);

    if(!fileNoteName6.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName6(&fileNoteName6);
    QString textName6 = inName6.readAll();
    fileNoteName6.close();
    ui->pushButtonNote6->setText(textName6);

    if(!fileNoteName7.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName7(&fileNoteName7);
    QString textName7 = inName7.readAll();
    fileNoteName7.close();
    ui->pushButtonNote7->setText(textName7);

    if(!fileNoteName8.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName8(&fileNoteName8);
    QString textName8 = inName8.readAll();
    fileNoteName8.close();
    ui->pushButtonNote8->setText(textName8);

    if(!fileNoteName9.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName9(&fileNoteName9);
    QString textName9 = inName9.readAll();
    fileNoteName9.close();
    ui->pushButtonNote9->setText(textName9);

    if(!fileNoteName10.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName10(&fileNoteName10);
    QString textName10 = inName10.readAll();
    fileNoteName10.close();
    ui->pushButtonNote10->setText(textName10);

    if(!fileNoteName11.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName11(&fileNoteName11);
    QString textName11 = inName11.readAll();
    fileNoteName11.close();
    ui->pushButtonNote11->setText(textName11);

    if(!fileNoteName12.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName12(&fileNoteName12);
    QString textName12 = inName12.readAll();
    fileNoteName12.close();
    ui->pushButtonNote12->setText(textName12);

    if(!fileNoteName13.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName13(&fileNoteName13);
    QString textName13 = inName13.readAll();
    fileNoteName13.close();
    ui->pushButtonNote13->setText(textName13);

    if(!fileNoteName14.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName14(&fileNoteName14);
    QString textName14 = inName14.readAll();
    fileNoteName14.close();
    ui->pushButtonNote14->setText(textName14);

    if(!fileNoteName15.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName15(&fileNoteName15);
    QString textName15 = inName15.readAll();
    fileNoteName15.close();
    ui->pushButtonNote15->setText(textName15);

    if(!fileNoteName16.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName16(&fileNoteName16);
    QString textName16 = inName16.readAll();
    fileNoteName16.close();
    ui->pushButtonNote16->setText(textName16);

    if(!fileNoteName17.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName17(&fileNoteName17);
    QString textName17 = inName17.readAll();
    fileNoteName17.close();
    ui->pushButtonNote17->setText(textName17);

    if(!fileNoteName18.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName18(&fileNoteName18);
    QString textName18 = inName18.readAll();
    fileNoteName18.close();
    ui->pushButtonNote18->setText(textName18);

    if(!fileNoteName19.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName19(&fileNoteName19);
    QString textName19 = inName19.readAll();
    fileNoteName19.close();
    ui->pushButtonNote19->setText(textName19);

    if(!fileNoteName20.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName20(&fileNoteName20);
    QString textName20 = inName20.readAll();
    fileNoteName20.close();
    ui->pushButtonNote20->setText(textName20);


    QObject::connect(ui->pushButtonExit,&QPushButton::clicked,this,&MainWindow::close);
    QObject::connect(ui->pushButtonClear1,&QPushButton::clicked,this,&MainWindow::close);
    QObject::connect(ui->pushButtonClear2,&QPushButton::clicked,this,&MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonShedule_clicked()
{
    ui->groupBoxShedule->show();
    ui->groupBoxAllNotes->hide();
    ui->groupBoxMon->hide();
    ui->groupBoxTue->hide();
    ui->groupBoxWed->hide();
    ui->groupBoxThu->hide();
    ui->groupBoxFri->hide();
    ui->groupBoxSat->hide();
    ui->groupBoxAllSubject->show();
    ui->pushButtonNextWeek->hide();
    ui->pushButtonPreviousWeek->hide();
    ui->pushButtonClear1->hide();
    ui->pushButtonClear2->hide();

    QFile file9("File9.txt");
    QFile file10("File10.txt");
    QFile file11("File11.txt");
    QFile file12("File12.txt");
    QFile file13("File13.txt");
    QFile file14("File14.txt");
    QFile file15("File15.txt");
    QFile file16("File16.txt");
    QFile file17("File17.txt");
    QFile file18("File18.txt");
    QFile file19("File19.txt");
    QFile file20("File20.txt");
    QFile file21("File21.txt");
    QFile file22("File22.txt");
    QFile file23("File23.txt");
    QFile file24("File24.txt");
    QFile file25("File25.txt");
    QFile file26("File26.txt");
    QFile file27("File27.txt");
    QFile file28("File28.txt");
    QFile file29("File29.txt");
    QFile file30("File30.txt");
    QFile file31("File31.txt");
    QFile file32("File32.txt");

    if(!file9.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in(&file9);
    QString text9 = in.readAll();
    ui->textEdit_9->setPlainText(text9);
    ui->textBrowserMon1->setPlainText(text9);
    file9.close();
    if(!file10.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in10(&file10);
    QString text10 = in10.readAll();
    ui->textEdit_10->setPlainText(text10);
    ui->textBrowserMon2->setPlainText(text10);
    file10.close();
    if(!file11.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in11(&file11);
    QString text11 = in11.readAll();
    ui->textEdit_11->setPlainText(text11);
    ui->textBrowserMon3->setPlainText(text11);
    file11.close();
    if(!file12.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in12(&file12);
    QString text12 = in12.readAll();
    ui->textEdit_12->setPlainText(text12);
    ui->textBrowserMon4->setPlainText(text12);
    file12.close();
    if(!file13.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in13(&file13);
    QString text13 = in13.readAll();
    ui->textEdit_13->setPlainText(text13);
    ui->textBrowserMon5->setPlainText(text13);
    file13.close();
    if(!file14.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in14(&file14);
    QString text14 = in14.readAll();
    ui->textEdit_14->setPlainText(text14);
    ui->textBrowserMon6->setPlainText(text14);
    file14.close();
    if(!file15.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in15(&file15);
    QString text15 = in15.readAll();
    ui->textEdit_15->setPlainText(text15);
    ui->textBrowserMon7->setPlainText(text15);
    file15.close();


    if(!file16.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in16(&file16);
    QString text16 = in16.readAll();
    ui->textEdit_16->setPlainText(text16);
    ui->textBrowserMon8->setPlainText(text16);
    file16.close();


    if(!file17.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in17(&file17);
    QString text17 = in17.readAll();
    ui->textEdit_17->setPlainText(text17);
    file17.close();


    if(!file18.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in18(&file18);
    QString text18 = in18.readAll();
    ui->textEdit_18->setPlainText(text18);
    file18.close();


    if(!file19.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in19(&file19);
    QString text19 = in19.readAll();
    ui->textEdit_19->setPlainText(text19);
    file19.close();


    if(!file20.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in20(&file20);
    QString text20 = in20.readAll();
    ui->textEdit_20->setPlainText(text20);
    file20.close();


    if(!file21.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in21(&file21);
    QString text21 = in21.readAll();
    ui->textEdit_21->setPlainText(text21);
    file21.close();


    if(!file22.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in22(&file22);
    QString text22 = in22.readAll();
    ui->textEdit_22->setPlainText(text22);
    file22.close();


    if(!file23.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in23(&file23);
    QString text23 = in23.readAll();
    ui->textEdit_23->setPlainText(text23);
    file23.close();


    if(!file24.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in24(&file24);
    QString text24 = in24.readAll();
    ui->textEdit_24->setPlainText(text24);
    file24.close();


    if(!file25.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in25(&file25);
    QString text25 = in25.readAll();
    ui->textEdit_25->setPlainText(text25);
    file25.close();


    if(!file26.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in26(&file26);
    QString text26 = in26.readAll();
    ui->textEdit_26->setPlainText(text26);
    file26.close();


    if(!file27.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in27(&file27);
    QString text27 = in27.readAll();
    ui->textEdit_27->setPlainText(text27);
    file27.close();


    if(!file28.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in28(&file28);
    QString text28 = in28.readAll();
    ui->textEdit_28->setPlainText(text28);
    file28.close();


    if(!file29.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in29(&file29);
    QString text29 = in29.readAll();
    ui->textEdit_29->setPlainText(text29);
    file29.close();


    if(!file30.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in30(&file30);
    QString text30 = in30.readAll();
    ui->textEdit_30->setPlainText(text30);
    file30.close();


    if(!file31.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in31(&file31);
    QString text31 = in31.readAll();
    ui->textEdit_31->setPlainText(text31);
    file31.close();


    if(!file32.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in32(&file32);
    QString text32 = in32.readAll();
    ui->textEdit_32->setPlainText(text32);
    file32.close();

    QFile file33("File33.txt");
    QFile file34("File34.txt");
    QFile file35("File35.txt");
    QFile file36("File36.txt");
    QFile file37("File37.txt");
    QFile file38("File38.txt");
    QFile file39("File39.txt");
    QFile file40("File40.txt");
    QFile file41("File41.txt");
    QFile file42("File42.txt");
    QFile file43("File43.txt");
    QFile file44("File44.txt");
    QFile file45("File45.txt");
    QFile file46("File46.txt");
    QFile file47("File47.txt");
    QFile file48("File48.txt");
    QFile file49("File49.txt");
    QFile file50("File50.txt");
    QFile file51("File51.txt");
    QFile file52("File52.txt");
    QFile file53("File53.txt");
    QFile file54("File54.txt");
    QFile file55("File55.txt");
    QFile file56("File56.txt");

    if(!file33.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in33(&file33);
    QString text33 = in33.readAll();
    ui->textEdit_33->setPlainText(text33);
    file33.close();


    if(!file34.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in34(&file34);
    QString text34 = in34.readAll();
    ui->textEdit_34->setPlainText(text34);
    file34.close();


    if(!file35.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in35(&file35);
    QString text35 = in35.readAll();
    ui->textEdit_35->setPlainText(text35);
    file35.close();


    if(!file36.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in36(&file36);
    QString text36 = in36.readAll();
    ui->textEdit_36->setPlainText(text36);
    file36.close();


    if(!file37.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in37(&file37);
    QString text37 = in37.readAll();
    ui->textEdit_37->setPlainText(text37);
    file37.close();


    if(!file38.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in38(&file38);
    QString text38 = in38.readAll();
    ui->textEdit_38->setPlainText(text38);
    file38.close();

    if(!file39.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in39(&file39);
    QString text39 = in39.readAll();
    ui->textEdit_39->setPlainText(text39);
    file39.close();

    if(!file40.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in40(&file40);
    QString text40 = in40.readAll();
    ui->textEdit_40->setPlainText(text40);
    file40.close();

    if(!file41.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in41(&file41);
    QString text41 = in41.readAll();
    ui->textEdit_41->setPlainText(text41);
    ui->textBrowserTue1->setPlainText(text41);
    file41.close();

    if(!file42.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in42(&file42);
    QString text42 = in42.readAll();
    ui->textEdit_42->setPlainText(text42);
    ui->textBrowserTue2->setPlainText(text42);
    file42.close();


    if(!file43.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in43(&file43);
    QString text43 = in43.readAll();
    ui->textEdit_43->setPlainText(text43);
    ui->textBrowserTue3->setPlainText(text43);
    file43.close();


    if(!file44.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in44(&file44);
    QString text44 = in44.readAll();
    ui->textEdit_44->setPlainText(text44);
    ui->textBrowserTue4->setPlainText(text44);
    file44.close();


    if(!file45.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in45(&file45);
    QString text45 = in45.readAll();
    ui->textEdit_45->setPlainText(text45);
    ui->textBrowserTue5->setPlainText(text45);
    file45.close();


    if(!file46.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in46(&file46);
    QString text46 = in46.readAll();
    ui->textEdit_46->setPlainText(text46);
    ui->textBrowserTue6->setPlainText(text46);
    file46.close();


    if(!file47.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in47(&file47);
    QString text47 = in47.readAll();
    ui->textEdit_47->setPlainText(text47);
    ui->textBrowserTue7->setPlainText(text47);
    file47.close();


    if(!file48.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in48(&file48);
    QString text48 = in48.readAll();
    ui->textEdit_48->setPlainText(text48);
    ui->textBrowserTue8->setPlainText(text48);
    file48.close();


    if(!file49.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in49(&file49);
    QString text49 = in49.readAll();
    ui->textEdit_49->setPlainText(text49);
    file49.close();


    if(!file50.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in50(&file50);
    QString text50 = in50.readAll();
    ui->textEdit_50->setPlainText(text50);
    file50.close();


    if(!file51.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in51(&file51);
    QString text51 = in51.readAll();
    ui->textEdit_51->setPlainText(text51);
    file51.close();


    if(!file52.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in52(&file52);
    QString text52 = in52.readAll();
    ui->textEdit_52->setPlainText(text52);
    file52.close();


    if(!file53.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in53(&file53);
    QString text53 = in53.readAll();
    ui->textEdit_53->setPlainText(text53);
    file53.close();

    if(!file54.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in54(&file54);
    QString text54 = in54.readAll();
    ui->textEdit_54->setPlainText(text54);
    file54.close();

    if(!file55.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in55(&file55);
    QString text55 = in55.readAll();
    ui->textEdit_55->setPlainText(text55);
    file55.close();

    if(!file56.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in56(&file56);
    QString text56 = in56.readAll();
    ui->textEdit_56->setPlainText(text56);
    file56.close();

    QFile file57("File57.txt");
    QFile file58("File58.txt");
    QFile file59("File59.txt");
    QFile file60("File60.txt");
    QFile file61("File61.txt");
    QFile file62("File62.txt");
    QFile file63("File63.txt");
    QFile file64("File64.txt");
    QFile file65("File65.txt");
    QFile file66("File66.txt");
    QFile file67("File67.txt");
    QFile file68("File68.txt");
    QFile file69("File69.txt");
    QFile file70("File70.txt");
    QFile file71("File71.txt");
    QFile file72("File72.txt");
    QFile file73("File73.txt");
    QFile file74("File74.txt");
    QFile file75("File75.txt");
    QFile file76("File76.txt");
    QFile file77("File77.txt");
    QFile file78("File78.txt");
    QFile file79("File79.txt");
    QFile file80("File80.txt");

    if(!file57.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in57(&file57);
    QString text57 = in57.readAll();
    ui->textEdit_57->setPlainText(text57);
    file57.close();

    if(!file58.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in58(&file58);
    QString text58 = in58.readAll();
    ui->textEdit_58->setPlainText(text58);
    file58.close();

    if(!file59.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in59(&file59);
    QString text59 = in59.readAll();
    ui->textEdit_59->setPlainText(text59);
    file59.close();

    if(!file60.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in60(&file60);
    QString text60 = in60.readAll();
    ui->textEdit_60->setPlainText(text60);
    file60.close();

    if(!file61.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in61(&file61);
    QString text61 = in61.readAll();
    ui->textEdit_61->setPlainText(text61);
    file61.close();

    if(!file62.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in62(&file62);
    QString text62 = in62.readAll();
    ui->textEdit_62->setPlainText(text62);
    file62.close();

    if(!file63.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in63(&file63);
    QString text63 = in63.readAll();
    ui->textEdit_63->setPlainText(text63);
    file63.close();

    if(!file64.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in64(&file64);
    QString text64 = in64.readAll();
    ui->textEdit_64->setPlainText(text64);
    file64.close();

    if(!file65.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in65(&file65);
    QString text65 = in65.readAll();
    ui->textEdit_65->setPlainText(text65);
    ui->textBrowserWed1->setPlainText(text65);
    file65.close();

    if(!file66.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in66(&file66);
    QString text66 = in66.readAll();
    ui->textEdit_66->setPlainText(text66);
    ui->textBrowserWed2->setPlainText(text66);
    file66.close();

    if(!file67.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in67(&file67);
    QString text67 = in67.readAll();
    ui->textEdit_67->setPlainText(text67);
    ui->textBrowserWed3->setPlainText(text67);
    file67.close();

    if(!file68.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in68(&file68);
    QString text68 = in68.readAll();
    ui->textEdit_68->setPlainText(text68);
    ui->textBrowserWed4->setPlainText(text68);
    file68.close();

    if(!file69.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in69(&file69);
    QString text69 = in69.readAll();
    ui->textEdit_69->setPlainText(text69);
    ui->textBrowserWed5->setPlainText(text69);
    file69.close();

    if(!file70.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in70(&file70);
    QString text70 = in70.readAll();
    ui->textEdit_70->setPlainText(text70);
    ui->textBrowserWed6->setPlainText(text70);
    file70.close();

    if(!file71.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in71(&file71);
    QString text71 = in71.readAll();
    ui->textEdit_71->setPlainText(text71);
    ui->textBrowserWed7->setPlainText(text71);
    file71.close();


    if(!file72.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in72(&file72);
    QString text72 = in72.readAll();
    ui->textEdit_72->setPlainText(text72);
    ui->textBrowserWed8->setPlainText(text72);
    file72.close();

    if(!file73.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in73(&file73);
    QString text73 = in73.readAll();
    ui->textEdit_73->setPlainText(text73);
    file73.close();

    if(!file74.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in74(&file74);
    QString text74 = in74.readAll();
    ui->textEdit_74->setPlainText(text74);
    file74.close();

    if(!file75.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in75(&file75);
    QString text75 = in75.readAll();
    ui->textEdit_75->setPlainText(text75);
    file75.close();

    if(!file76.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in76(&file76);
    QString text76 = in76.readAll();
    ui->textEdit_76->setPlainText(text76);
    file76.close();

    if(!file77.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in77(&file77);
    QString text77 = in77.readAll();
    ui->textEdit_77->setPlainText(text77);
    file77.close();

    if(!file78.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in78(&file78);
    QString text78 = in78.readAll();
    ui->textEdit_78->setPlainText(text78);
    file78.close();

    if(!file79.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in79(&file79);
    QString text79 = in79.readAll();
    ui->textEdit_79->setPlainText(text79);
    file79.close();

    if(!file80.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in80(&file80);
    QString text80 = in80.readAll();
    ui->textEdit_80->setPlainText(text80);
    file80.close();

    QFile file81("File81.txt");
    QFile file82("File82.txt");
    QFile file83("File83.txt");
    QFile file84("File84.txt");
    QFile file85("File85.txt");
    QFile file86("File86.txt");
    QFile file87("File87.txt");
    QFile file88("File88.txt");
    QFile file89("File89.txt");
    QFile file90("File90.txt");
    QFile file91("File91.txt");
    QFile file92("File92.txt");
    QFile file93("File93.txt");
    QFile file94("File94.txt");
    QFile file95("File95.txt");
    QFile file96("File96.txt");
    QFile file97("File97.txt");
    QFile file98("File98.txt");
    QFile file99("File99.txt");
    QFile file100("File100.txt");
    QFile file101("File101.txt");
    QFile file102("File102.txt");
    QFile file103("File103.txt");
    QFile file104("File104.txt");

    if(!file81.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in81(&file81);
    QString text81 = in81.readAll();
    ui->textEdit_81->setPlainText(text81);
    file81.close();

    if(!file82.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in82(&file82);
    QString text82 = in82.readAll();
    ui->textEdit_82->setPlainText(text82);
    file82.close();

    if(!file83.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in83(&file83);
    QString text83 = in83.readAll();
    ui->textEdit_83->setPlainText(text83);
    file83.close();

    if(!file84.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in84(&file84);
    QString text84 = in84.readAll();
    ui->textEdit_84->setPlainText(text84);
    file84.close();

    if(!file85.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in85(&file85);
    QString text85 = in85.readAll();
    ui->textEdit_85->setPlainText(text85);
    file85.close();

    if(!file86.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in86(&file86);
    QString text86 = in86.readAll();
    ui->textEdit_86->setPlainText(text86);
    file86.close();

    if(!file87.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in87(&file87);
    QString text87 = in87.readAll();
    ui->textEdit_87->setPlainText(text87);
    file87.close();

    if(!file88.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in88(&file88);
    QString text88 = in88.readAll();
    ui->textEdit_88->setPlainText(text88);
    file88.close();

    if(!file89.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in89(&file89);
    QString text89 = in89.readAll();
    ui->textEdit_89->setPlainText(text89);
    ui->textBrowserThu1->setPlainText(text89);
    file89.close();

    if(!file90.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in90(&file90);
    QString text90 = in90.readAll();
    ui->textEdit_90->setPlainText(text90);
    ui->textBrowserThu2->setPlainText(text90);
    file90.close();

    if(!file91.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in91(&file91);
    QString text91 = in91.readAll();
    ui->textEdit_91->setPlainText(text91);
    ui->textBrowserThu3->setPlainText(text91);
    file91.close();

    if(!file92.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in92(&file92);
    QString text92 = in92.readAll();
    ui->textEdit_92->setPlainText(text92);
    ui->textBrowserThu4->setPlainText(text92);
    file92.close();

    if(!file93.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in93(&file93);
    QString text93 = in93.readAll();
    ui->textEdit_93->setPlainText(text93);
    ui->textBrowserThu5->setPlainText(text93);
    file93.close();

    if(!file94.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in94(&file94);
    QString text94 = in94.readAll();
    ui->textEdit_94->setPlainText(text94);
    ui->textBrowserThu6->setPlainText(text94);
    file94.close();

    if(!file95.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in95(&file95);
    QString text95 = in95.readAll();
    ui->textEdit_95->setPlainText(text95);
    ui->textBrowserThu7->setPlainText(text95);
    file95.close();

    if(!file96.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in96(&file96);
    QString text96 = in96.readAll();
    ui->textEdit_96->setPlainText(text96);
    ui->textBrowserThu8->setPlainText(text96);
    file96.close();

    if(!file97.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in97(&file97);
    QString text97 = in97.readAll();
    ui->textEdit_97->setPlainText(text97);
    file97.close();

    if(!file98.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in98(&file98);
    QString text98 = in98.readAll();
    ui->textEdit_98->setPlainText(text98);
    file98.close();


    if(!file99.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in99(&file99);
    QString text99 = in99.readAll();
    ui->textEdit_99->setPlainText(text99);
    file99.close();


    if(!file100.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in100(&file100);
    QString text100 = in100.readAll();
    ui->textEdit_100->setPlainText(text100);
    file100.close();


    if(!file101.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in101(&file101);
    QString text101 = in101.readAll();
    ui->textEdit_101->setPlainText(text101);
    file101.close();


    if(!file102.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in102(&file102);
    QString text102 = in102.readAll();
    ui->textEdit_102->setPlainText(text102);
    file102.close();


    if(!file103.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in103(&file103);
    QString text103 = in103.readAll();
    ui->textEdit_103->setPlainText(text103);
    file103.close();


    if(!file104.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in104(&file104);
    QString text104 = in104.readAll();
    ui->textEdit_104->setPlainText(text104);
    file104.close();

    QFile file105("File105.txt");
    QFile file106("File106.txt");
    QFile file107("File107.txt");
    QFile file108("File108.txt");
    QFile file109("File109.txt");
    QFile file110("File110.txt");
    QFile file111("File111.txt");
    QFile file112("File112.txt");
    QFile file113("File113.txt");
    QFile file114("File114.txt");
    QFile file115("File115.txt");
    QFile file116("File116.txt");
    QFile file117("File117.txt");
    QFile file118("File118.txt");
    QFile file119("File119.txt");
    QFile file120("File120.txt");
    QFile file121("File121.txt");
    QFile file122("File122.txt");
    QFile file123("File123.txt");
    QFile file124("File124.txt");
    QFile file125("File125.txt");
    QFile file126("File126.txt");
    QFile file127("File127.txt");
    QFile file128("File128.txt");

    if(!file105.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in105(&file105);
    QString text105 = in105.readAll();
    ui->textEdit_105->setPlainText(text105);
    file105.close();


    if(!file106.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in106(&file106);
    QString text106 = in106.readAll();
    ui->textEdit_106->setPlainText(text106);
    file106.close();


    if(!file107.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in107(&file107);
    QString text107 = in107.readAll();
    ui->textEdit_107->setPlainText(text107);
    file107.close();


    if(!file108.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in108(&file108);
    QString text108 = in108.readAll();
    ui->textEdit_108->setPlainText(text108);
    file108.close();


    if(!file109.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in109(&file109);
    QString text109 = in109.readAll();
    ui->textEdit_109->setPlainText(text109);
    file109.close();


    if(!file110.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in110(&file110);
    QString text110 = in110.readAll();
    ui->textEdit_110->setPlainText(text110);
    file110.close();


    if(!file111.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in111(&file111);
    QString text111 = in111.readAll();
    ui->textEdit_111->setPlainText(text111);
    file111.close();


    if(!file112.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in112(&file112);
    QString text112 = in112.readAll();
    ui->textEdit_112->setPlainText(text112);
    file112.close();


    if(!file113.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in113(&file113);
    QString text113 = in113.readAll();
    ui->textEdit_113->setPlainText(text113);
    ui->textBrowserFri1->setPlainText(text113);
    file113.close();


    if(!file114.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in114(&file114);
    QString text114 = in114.readAll();
    ui->textEdit_114->setPlainText(text114);
    ui->textBrowserFri2->setPlainText(text114);
    file114.close();


    if(!file115.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in115(&file115);
    QString text115 = in115.readAll();
    ui->textEdit_115->setPlainText(text115);
    ui->textBrowserFri3->setPlainText(text115);
    file115.close();


    if(!file116.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in116(&file116);
    QString text116 = in116.readAll();
    ui->textEdit_116->setPlainText(text116);
    ui->textBrowserFri4->setPlainText(text116);
    file116.close();


    if(!file117.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in117(&file117);
    QString text117 = in117.readAll();
    ui->textEdit_117->setPlainText(text117);
    ui->textBrowserFri5->setPlainText(text117);
    file117.close();


    if(!file118.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in118(&file118);
    QString text118 = in118.readAll();
    ui->textEdit_118->setPlainText(text118);
    ui->textBrowserFri6->setPlainText(text118);
    file118.close();


    if(!file119.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in119(&file119);
    QString text119 = in119.readAll();
    ui->textEdit_119->setPlainText(text119);
    ui->textBrowserFri7->setPlainText(text119);
    file119.close();


    if(!file120.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in120(&file120);
    QString text120 = in120.readAll();
    ui->textEdit_120->setPlainText(text120);
    ui->textBrowserFri8->setPlainText(text120);
    file120.close();


    if(!file121.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in121(&file121);
    QString text121 = in121.readAll();
    ui->textEdit_121->setPlainText(text121);
    file121.close();


    if(!file122.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in122(&file122);
    QString text122 = in122.readAll();
    ui->textEdit_122->setPlainText(text122);
    file122.close();


    if(!file123.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in123(&file123);
    QString text123 = in123.readAll();
    ui->textEdit_123->setPlainText(text123);
    file123.close();


    if(!file124.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in124(&file124);
    QString text124 = in124.readAll();
    ui->textEdit_124->setPlainText(text124);
    file124.close();


    if(!file125.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in125(&file125);
    QString text125 = in125.readAll();
    ui->textEdit_125->setPlainText(text125);
    file125.close();


    if(!file126.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in126(&file126);
    QString text126 = in126.readAll();
    ui->textEdit_126->setPlainText(text126);
    file126.close();


    if(!file127.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in127(&file127);
    QString text127 = in127.readAll();
    ui->textEdit_127->setPlainText(text127);
    file127.close();


    if(!file128.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in128(&file128);
    QString text128 = in128.readAll();
    ui->textEdit_128->setPlainText(text128);
    file128.close();

    QFile file129("File129.txt");
    QFile file130("File130.txt");
    QFile file131("File131.txt");
    QFile file132("File132.txt");
    QFile file133("File133.txt");
    QFile file134("File134.txt");
    QFile file135("File135.txt");
    QFile file136("File136.txt");
    QFile file137("File137.txt");
    QFile file138("File138.txt");
    QFile file139("File139.txt");
    QFile file140("File140.txt");
    QFile file141("File141.txt");
    QFile file142("File142.txt");
    QFile file143("File143.txt");
    QFile file144("File144.txt");
    QFile file145("File145.txt");
    QFile file146("File146.txt");
    QFile file147("File147.txt");
    QFile file148("File148.txt");
    QFile file149("File149.txt");
    QFile file150("File150.txt");
    QFile file151("File151.txt");
    QFile file152("File152.txt");
    QFile file153("File153.txt");
    QFile file154("File154.txt");
    QFile file155("File155.txt");
    QFile file156("File156.txt");
    QFile file157("File157.txt");
    QFile file158("File158.txt");
    QFile file159("File159.txt");
    QFile file160("File160.txt");
    QFile file161("File161.txt");
    QFile file162("File162.txt");
    QFile file163("File163.txt");
    QFile file164("File164.txt");
    QFile file165("File165.txt");
    QFile file166("File166.txt");
    QFile file167("File167.txt");
    QFile file168("File168.txt");

    if(!file129.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in129(&file129);
    QString text129 = in129.readAll();
    ui->textEdit_129->setPlainText(text129);
    file129.close();
    if(!file130.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in130(&file130);
    QString text130 = in130.readAll();
    ui->textEdit_130->setPlainText(text130);
    file130.close();
    if(!file131.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in131(&file131);
    QString text131 = in131.readAll();
    ui->textEdit_131->setPlainText(text131);
    file131.close();
    if(!file132.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in132(&file132);
    QString text132 = in132.readAll();
    ui->textEdit_132->setPlainText(text132);
    file132.close();
    if(!file133.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in133(&file133);
    QString text133 = in133.readAll();
    ui->textEdit_133->setPlainText(text133);
    file133.close();
    if(!file134.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in134(&file134);
    QString text134 = in134.readAll();
    ui->textEdit_134->setPlainText(text134);
    file134.close();
    if(!file135.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in135(&file135);
    QString text135 = in135.readAll();
    ui->textEdit_135->setPlainText(text135);
    file135.close();
    if(!file136.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in136(&file136);
    QString text136 = in136.readAll();
    ui->textEdit_136->setPlainText(text136);
    file136.close();
    if(!file137.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in137(&file137);
    QString text137 = in137.readAll();
    ui->textEdit_137->setPlainText(text137);
    file137.close();
    if(!file138.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in138(&file138);
    QString text138 = in138.readAll();
    ui->textEdit_138->setPlainText(text138);
    file138.close();
    if(!file139.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in139(&file139);
    QString text139 = in139.readAll();
    ui->textEdit_139->setPlainText(text139);
    file139.close();
    if(!file140.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in140(&file140);
    QString text140 = in140.readAll();
    ui->textEdit_140->setPlainText(text140);
    file140.close();
    if(!file141.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in141(&file141);
    QString text141 = in141.readAll();
    ui->textEdit_141->setPlainText(text141);
    file141.close();
    if(!file142.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in142(&file142);
    QString text142 = in142.readAll();
    ui->textEdit_142->setPlainText(text142);
    file142.close();
    if(!file143.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in143(&file143);
    QString text143 = in143.readAll();
    ui->textEdit_143->setPlainText(text143);
    file143.close();
    if(!file144.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in144(&file144);
    QString text144 = in144.readAll();
    ui->textEdit_144->setPlainText(text144);
    file144.close();
    if(!file145.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in145(&file145);
    QString text145 = in145.readAll();
    ui->textEdit_145->setPlainText(text145);
    file145.close();
    if(!file146.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in146(&file146);
    QString text146 = in146.readAll();
    ui->textEdit_146->setPlainText(text146);
    file146.close();
    if(!file147.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in147(&file147);
    QString text147 = in147.readAll();
    ui->textEdit_147->setPlainText(text147);
    file147.close();
    if(!file148.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in148(&file148);
    QString text148 = in148.readAll();
    ui->textEdit_148->setPlainText(text148);
    file148.close();
    if(!file149.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in149(&file149);
    QString text149 = in149.readAll();
    ui->textEdit_149->setPlainText(text149);
    file149.close();
    if(!file150.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in150(&file150);
    QString text150 = in150.readAll();
    ui->textEdit_150->setPlainText(text150);
    file150.close();
    if(!file151.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in151(&file151);
    QString text151 = in151.readAll();
    ui->textEdit_151->setPlainText(text151);
    file151.close();
    if(!file152.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in152(&file152);
    QString text152 = in152.readAll();
    ui->textEdit_152->setPlainText(text152);
    file152.close();
    if(!file153.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in153(&file153);
    QString text153 = in153.readAll();
    ui->textEdit_153->setPlainText(text153);
    file153.close();
    if(!file154.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in154(&file154);
    QString text154 = in154.readAll();
    ui->textEdit_154->setPlainText(text154);
    file154.close();
    if(!file155.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in155(&file155);
    QString text155 = in155.readAll();
    ui->textEdit_155->setPlainText(text155);
    file155.close();
    if(!file156.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in156(&file156);
    QString text156 = in156.readAll();
    ui->textEdit_156->setPlainText(text156);
    file156.close();
    if(!file157.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in157(&file157);
    QString text157 = in157.readAll();
    ui->textEdit_157->setPlainText(text157);
    file157.close();
    if(!file158.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in158(&file158);
    QString text158 = in158.readAll();
    ui->textEdit_158->setPlainText(text158);
    file158.close();
    if(!file159.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in159(&file159);
    QString text159 = in159.readAll();
    ui->textEdit_159->setPlainText(text159);
    file159.close();
    if(!file160.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in160(&file160);
    QString text160 = in160.readAll();
    ui->textEdit_160->setPlainText(text160);
    file160.close();
    if(!file161.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in161(&file161);
    QString text161 = in161.readAll();
    ui->textEdit_161->setPlainText(text161);
    file161.close();
    if(!file162.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in162(&file162);
    QString text162 = in162.readAll();
    ui->textEdit_162->setPlainText(text162);
    file162.close();
    if(!file163.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in163(&file163);
    QString text163 = in163.readAll();
    ui->textEdit_163->setPlainText(text163);
    file163.close();
    if(!file164.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in164(&file164);
    QString text164 = in164.readAll();
    ui->textEdit_164->setPlainText(text164);
    file164.close();
    if(!file165.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in165(&file165);
    QString text165 = in165.readAll();
    ui->textEdit_165->setPlainText(text165);
    file165.close();
    if(!file166.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in166(&file166);
    QString text166 = in166.readAll();
    ui->textEdit_166->setPlainText(text166);
    file166.close();
    if(!file167.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in167(&file167);
    QString text167 = in167.readAll();
    ui->textEdit_167->setPlainText(text167);
    file167.close();
    if(!file168.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in168(&file168);
    QString text168 = in168.readAll();
    ui->textEdit_168->setPlainText(text168);
    file168.close();

    QFile file169("File169.txt");
    QFile file170("File170.txt");
    QFile file171("File171.txt");
    QFile file172("File172.txt");
    QFile file173("File173.txt");
    QFile file174("File174.txt");
    QFile file175("File175.txt");
    QFile file176("File176.txt");
    QFile file177("File177.txt");
    QFile file178("File178.txt");
    QFile file179("File179.txt");
    QFile file180("File180.txt");
    QFile file181("File181.txt");
    QFile file182("File182.txt");
    QFile file183("File183.txt");
    QFile file184("File184.txt");
    QFile file185("File185.txt");
    QFile file186("File186.txt");
    QFile file187("File187.txt");
    QFile file188("File188.txt");
    QFile file189("File189.txt");
    QFile file190("File190.txt");
    QFile file191("File191.txt");
    QFile file192("File192.txt");
    QFile file193("File193.txt");
    QFile file194("File194.txt");
    QFile file195("File195.txt");
    QFile file196("File196.txt");
    QFile file197("File197.txt");
    QFile file198("File198.txt");
    QFile file199("File199.txt");
    QFile file200("File200.txt");

    if(!file169.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in169(&file169);
    QString text169 = in169.readAll();
    ui->textEdit_169->setPlainText(text169);
    file169.close();
    if(!file170.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in170(&file170);
    QString text170 = in170.readAll();
    ui->textEdit_170->setPlainText(text170);
    file170.close();
    if(!file171.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in171(&file171);
    QString text171 = in171.readAll();
    ui->textEdit_171->setPlainText(text171);
    file171.close();
    if(!file172.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in172(&file172);
    QString text172 = in172.readAll();
    ui->textEdit_172->setPlainText(text172);
    file172.close();
    if(!file173.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in173(&file173);
    QString text173 = in173.readAll();
    ui->textEdit_173->setPlainText(text173);
    file173.close();
    if(!file174.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in174(&file174);
    QString text174 = in174.readAll();
    ui->textEdit_174->setPlainText(text174);
    file174.close();
    if(!file175.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in175(&file175);
    QString text175 = in175.readAll();
    ui->textEdit_175->setPlainText(text175);
    file175.close();
    if(!file176.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in176(&file176);
    QString text176 = in176.readAll();
    ui->textEdit_176->setPlainText(text176);
    file176.close();
    if(!file177.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in177(&file177);
    QString text177 = in177.readAll();
    ui->textEdit_177->setPlainText(text177);
    file177.close();
    if(!file178.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in178(&file178);
    QString text178 = in178.readAll();
    ui->textEdit_178->setPlainText(text178);
    file178.close();
    if(!file179.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in179(&file179);
    QString text179 = in179.readAll();
    ui->textEdit_179->setPlainText(text179);
    file179.close();
    if(!file180.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in180(&file180);
    QString text180 = in180.readAll();
    ui->textEdit_180->setPlainText(text180);
    file180.close();
    if(!file181.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in181(&file181);
    QString text181 = in181.readAll();
    ui->textEdit_181->setPlainText(text181);
    file181.close();
    if(!file182.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in182(&file182);
    QString text182 = in182.readAll();
    ui->textEdit_182->setPlainText(text182);
    file182.close();
    if(!file183.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in183(&file183);
    QString text183 = in183.readAll();
    ui->textEdit_183->setPlainText(text183);
    file183.close();
    if(!file184.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in184(&file184);
    QString text184 = in184.readAll();
    ui->textEdit_184->setPlainText(text184);
    file184.close();
    if(!file185.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in185(&file185);
    QString text185 = in185.readAll();
    ui->textEdit_185->setPlainText(text185);
    file185.close();
    if(!file186.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in186(&file186);
    QString text186 = in186.readAll();
    ui->textEdit_186->setPlainText(text186);
    file186.close();
    if(!file187.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in187(&file187);
    QString text187 = in187.readAll();
    ui->textEdit_187->setPlainText(text187);
    file187.close();
    if(!file188.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in188(&file188);
    QString text188 = in188.readAll();
    ui->textEdit_188->setPlainText(text188);
    file188.close();
    if(!file189.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in189(&file189);
    QString text189 = in189.readAll();
    ui->textEdit_189->setPlainText(text189);
    file189.close();
    if(!file190.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in190(&file190);
    QString text190 = in190.readAll();
    ui->textEdit_190->setPlainText(text190);
    file190.close();
    if(!file191.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in191(&file191);
    QString text191 = in191.readAll();
    ui->textEdit_191->setPlainText(text191);
    file191.close();
    if(!file192.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in192(&file192);
    QString text192 = in192.readAll();
    ui->textEdit_192->setPlainText(text192);
    file192.close();
    if(!file193.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in193(&file193);
    QString text193 = in193.readAll();
    ui->textEdit_193->setPlainText(text193);
    ui->textBrowserSat1->setPlainText(text193);
    file193.close();
    if(!file194.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in194(&file194);
    QString text194 = in194.readAll();
    ui->textEdit_194->setPlainText(text194);
    ui->textBrowserSat2->setPlainText(text194);
    file194.close();
    if(!file195.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in195(&file195);
    QString text195 = in195.readAll();
    ui->textEdit_195->setPlainText(text195);
    ui->textBrowserSat3->setPlainText(text195);
    file195.close();
    if(!file196.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in196(&file196);
    QString text196 = in196.readAll();
    ui->textEdit_196->setPlainText(text196);
    ui->textBrowserSat4->setPlainText(text196);
    file196.close();
    if(!file197.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in197(&file197);
    QString text197 = in197.readAll();
    ui->textEdit_197->setPlainText(text197);
    ui->textBrowserSat5->setPlainText(text197);
    file197.close();
    if(!file198.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in198(&file198);
    QString text198 = in198.readAll();
    ui->textEdit_198->setPlainText(text198);
    ui->textBrowserSat6->setPlainText(text198);
    file198.close();
    if(!file199.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in199(&file199);
    QString text199 = in199.readAll();
    ui->textEdit_199->setPlainText(text199);
    ui->textBrowserSat7->setPlainText(text199);
    file199.close();
    if(!file200.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in200(&file200);
    QString text200 = in200.readAll();
    ui->textEdit_200->setPlainText(text200);
    ui->textBrowserSat8->setPlainText(text200);
    file200.close();
}

void MainWindow::on_pushButtonSave_clicked()
{
    QFile file9("File9.txt");
    QFile file10("File10.txt");
    QFile file11("File11.txt");
    QFile file12("File12.txt");
    QFile file13("File13.txt");
    QFile file14("File14.txt");
    QFile file15("File15.txt");
    QFile file16("File16.txt");
    QFile file17("File17.txt");
    QFile file18("File18.txt");
    QFile file19("File19.txt");
    QFile file20("File20.txt");
    QFile file21("File21.txt");
    QFile file22("File22.txt");
    QFile file23("File23.txt");
    QFile file24("File24.txt");
    QFile file25("File25.txt");
    QFile file26("File26.txt");
    QFile file27("File27.txt");
    QFile file28("File28.txt");
    QFile file29("File29.txt");
    QFile file30("File30.txt");
    QFile file31("File31.txt");
    QFile file32("File32.txt");
    if(!file9.open(QFile::WriteOnly | QFile::Text)){}
    QTextStream out9(&file9);
    QString text9 = ui->textEdit_9->toPlainText();
    out9 << text9;
    file9.flush();
    file9.close();

    if(!file10.open(QFile::WriteOnly | QFile::Text)){ }
    QTextStream out10(&file10);
    QString text10 = ui->textEdit_10->toPlainText();
    out10 << text10;
    file10.flush();
    file10.close();


    if(!file11.open(QFile::WriteOnly | QFile::Text)){}
    QTextStream out11(&file11);
    QString text11 = ui->textEdit_11->toPlainText();
    out11 << text11;
    file11.flush();
    file11.close();
    if(!file12.open(QFile::WriteOnly | QFile::Text)){}
    QTextStream out12(&file12);
    QString text12 = ui->textEdit_12->toPlainText();
    out12 << text12;
    file12.flush();
    file12.close();
    if(!file13.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out13(&file13);
    QString text13 = ui->textEdit_13->toPlainText();
    out13 << text13;
    file13.flush();
    file13.close();
    if(!file14.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out14(&file14);
    QString text14 = ui->textEdit_14->toPlainText();
    out14 << text14;
    file14.flush();
    file14.close();
    if(!file15.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out15(&file15);
    QString text15 = ui->textEdit_15->toPlainText();
    out15 << text15;
    file15.flush();
    file15.close();
    if(!file16.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out16(&file16);
    QString text16 = ui->textEdit_16->toPlainText();
    out16 << text16;
    file16.flush();
    file16.close();
    if(!file17.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out17(&file17);
    QString text17 = ui->textEdit_17->toPlainText();
    out17 << text17;
    file17.flush();
    file17.close();
    if(!file18.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out18(&file18);
    QString text18 = ui->textEdit_18->toPlainText();
    out18 << text18;
    file18.flush();
    file18.close();
    if(!file19.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out19(&file19);
    QString text19 = ui->textEdit_19->toPlainText();
    out19 << text19;
    file19.flush();
    file19.close();
    if(!file20.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out20(&file20);
    QString text20 = ui->textEdit_20->toPlainText();
    out20 << text20;
    file20.flush();
    file20.close();
    if(!file21.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out21(&file21);
    QString text21 = ui->textEdit_21->toPlainText();
    out21 << text21;
    file21.flush();
    file21.close();
    if(!file22.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out22(&file22);
    QString text22 = ui->textEdit_22->toPlainText();
    out22 << text22;
    file22.flush();
    file22.close();
    if(!file23.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out23(&file23);
    QString text23 = ui->textEdit_23->toPlainText();
    out23 << text23;
    file23.flush();
    file23.close();
    if(!file24.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out24(&file24);
    QString text24 = ui->textEdit_24->toPlainText();
    out24 << text24;
    file24.flush();
    file24.close();
    if(!file25.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out25(&file25);
    QString text25 = ui->textEdit_25->toPlainText();
    out25 << text25;
    file25.flush();
    file25.close();
    if(!file26.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out26(&file26);
    QString text26 = ui->textEdit_26->toPlainText();
    out26 << text26;
    file26.flush();
    file26.close();
    if(!file27.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out27(&file27);
    QString text27 = ui->textEdit_27->toPlainText();
    out27 << text27;
    file27.flush();
    file27.close();
    if(!file28.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out28(&file28);
    QString text28 = ui->textEdit_28->toPlainText();
    out28 << text28;
    file28.flush();
    file28.close();
    if(!file29.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out29(&file29);
    QString text29 = ui->textEdit_29->toPlainText();
    out29 << text29;
    file29.flush();
    file29.close();
    if(!file30.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out30(&file30);
    QString text30 = ui->textEdit_30->toPlainText();
    out30 << text30;
    file30.flush();
    file30.close();
    if(!file31.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out31(&file31);
    QString text31 = ui->textEdit_31->toPlainText();
    out31 << text31;
    file31.flush();
    file31.close();
    if(!file32.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out32(&file32);
    QString text32 = ui->textEdit_32->toPlainText();
    out32 << text32;
    file32.flush();
    file32.close();

    QFile file33("File33.txt");
    QFile file34("File34.txt");
    QFile file35("File35.txt");
    QFile file36("File36.txt");
    QFile file37("File37.txt");
    QFile file38("File38.txt");
    QFile file39("File39.txt");
    QFile file40("File40.txt");
    QFile file41("File41.txt");
    QFile file42("File42.txt");
    QFile file43("File43.txt");
    QFile file44("File44.txt");
    QFile file45("File45.txt");
    QFile file46("File46.txt");
    QFile file47("File47.txt");
    QFile file48("File48.txt");
    QFile file49("File49.txt");
    QFile file50("File50.txt");
    QFile file51("File51.txt");
    QFile file52("File52.txt");
    QFile file53("File53.txt");
    QFile file54("File54.txt");
    QFile file55("File55.txt");
    QFile file56("File56.txt");
    if(!file33.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out33(&file33);
    QString text33 = ui->textEdit_33->toPlainText();
    out33 << text33;
    file33.flush();
    file33.close();

    if(!file34.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out34(&file34);
    QString text34 = ui->textEdit_34->toPlainText();
    out34 << text34;
    file34.flush();
    file34.close();

    if(!file35.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out35(&file35);
    QString text35 = ui->textEdit_35->toPlainText();
    out35 << text35;
    file35.flush();
    file35.close();

    if(!file36.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out36(&file36);
    QString text36 = ui->textEdit_36->toPlainText();
    out36 << text36;
    file36.flush();
    file36.close();

    if(!file37.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out37(&file37);
    QString text37 = ui->textEdit_37->toPlainText();
    out37 << text37;
    file37.flush();
    file37.close();

    if(!file38.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out38(&file38);
    QString text38 = ui->textEdit_38->toPlainText();
    out38 << text38;
    file38.flush();
    file38.close();

    if(!file39.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out39(&file39);
    QString text39 = ui->textEdit_39->toPlainText();
    out39 << text39;
    file39.flush();
    file39.close();

    if(!file40.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out40(&file40);
    QString text40 = ui->textEdit_40->toPlainText();
    out40 << text40;
    file40.flush();
    file40.close();

    if(!file41.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out41(&file41);
    QString text41 = ui->textEdit_41->toPlainText();
    out41 << text41;
    file41.flush();
    file41.close();

    if(!file42.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out42(&file42);
    QString text42 = ui->textEdit_42->toPlainText();
    out42 << text42;
    file42.flush();
    file42.close();

    if(!file43.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out43(&file43);
    QString text43 = ui->textEdit_43->toPlainText();
    out43 << text43;
    file43.flush();
    file43.close();

    if(!file44.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out44(&file44);
    QString text44 = ui->textEdit_44->toPlainText();
    out44 << text44;
    file44.flush();
    file44.close();

    if(!file45.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out45(&file45);
    QString text45 = ui->textEdit_45->toPlainText();
    out45 << text45;
    file45.flush();
    file45.close();

    if(!file46.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out46(&file46);
    QString text46 = ui->textEdit_46->toPlainText();
    out46 << text46;
    file46.flush();
    file46.close();

    if(!file47.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out47(&file47);
    QString text47 = ui->textEdit_47->toPlainText();
    out47 << text47;
    file47.flush();
    file47.close();

    if(!file48.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out48(&file48);
    QString text48 = ui->textEdit_48->toPlainText();
    out48 << text48;
    file48.flush();
    file48.close();

    if(!file49.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out49(&file49);
    QString text49 = ui->textEdit_49->toPlainText();
    out49 << text49;
    file49.flush();
    file49.close();

    if(!file50.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out50(&file50);
    QString text50 = ui->textEdit_50->toPlainText();
    out50 << text50;
    file50.flush();
    file50.close();

    if(!file51.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out51(&file51);
    QString text51 = ui->textEdit_51->toPlainText();
    out51 << text51;
    file51.flush();
    file51.close();

    if(!file52.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out52(&file52);
    QString text52 = ui->textEdit_52->toPlainText();
    out52 << text52;
    file52.flush();
    file52.close();

    if(!file53.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out53(&file53);
    QString text53 = ui->textEdit_53->toPlainText();
    out53 << text53;
    file53.flush();
    file53.close();

    if(!file54.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out54(&file54);
    QString text54 = ui->textEdit_54->toPlainText();
    out54 << text54;
    file54.flush();
    file54.close();

    if(!file55.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out55(&file55);
    QString text55 = ui->textEdit_55->toPlainText();
    out55 << text55;
    file55.flush();
    file55.close();

    if(!file56.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out56(&file56);
    QString text56 = ui->textEdit_56->toPlainText();
    out56 << text56;
    file56.flush();
    file56.close();
    QFile file57("File57.txt");
    QFile file58("File58.txt");
    QFile file59("File59.txt");
    QFile file60("File60.txt");
    QFile file61("File61.txt");
    QFile file62("File62.txt");
    QFile file63("File63.txt");
    QFile file64("File64.txt");
    QFile file65("File65.txt");
    QFile file66("File66.txt");
    QFile file67("File67.txt");
    QFile file68("File68.txt");
    QFile file69("File69.txt");
    QFile file70("File70.txt");
    QFile file71("File71.txt");
    QFile file72("File72.txt");
    QFile file73("File73.txt");
    QFile file74("File74.txt");
    QFile file75("File75.txt");
    QFile file76("File76.txt");
    QFile file77("File77.txt");
    QFile file78("File78.txt");
    QFile file79("File79.txt");
    QFile file80("File80.txt");
    if(!file57.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out57(&file57);
    QString text57 = ui->textEdit_57->toPlainText();
    out57 << text57;
    file57.flush();
    file57.close();

    if(!file58.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out58(&file58);
    QString text58 = ui->textEdit_58->toPlainText();
    out58 << text58;
    file58.flush();
    file58.close();

    if(!file59.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out59(&file59);
    QString text59 = ui->textEdit_59->toPlainText();
    out59 << text59;
    file59.flush();
    file59.close();

    if(!file60.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out60(&file60);
    QString text60 = ui->textEdit_60->toPlainText();
    out60 << text60;
    file60.flush();
    file60.close();

    if(!file61.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out61(&file61);
    QString text61 = ui->textEdit_61->toPlainText();
    out61 << text61;
    file61.flush();
    file61.close();

    if(!file62.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out62(&file62);
    QString text62 = ui->textEdit_62->toPlainText();
    out62 << text62;
    file62.flush();
    file62.close();

    if(!file63.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out63(&file63);
    QString text63 = ui->textEdit_63->toPlainText();
    out63 << text63;
    file63.flush();
    file63.close();

    if(!file64.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out64(&file64);
    QString text64 = ui->textEdit_64->toPlainText();
    out64 << text64;
    file64.flush();
    file64.close();

    if(!file65.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out65(&file65);
    QString text65 = ui->textEdit_65->toPlainText();
    out65 << text65;
    file65.flush();
    file65.close();

    if(!file66.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out66(&file66);
    QString text66 = ui->textEdit_66->toPlainText();
    out66 << text66;
    file66.flush();
    file66.close();

    if(!file67.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out67(&file67);
    QString text67 = ui->textEdit_67->toPlainText();
    out67 << text67;
    file67.flush();
    file67.close();

    if(!file68.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out68(&file68);
    QString text68 = ui->textEdit_68->toPlainText();
    out68 << text68;
    file68.flush();
    file68.close();

    if(!file69.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out69(&file69);
    QString text69 = ui->textEdit_69->toPlainText();
    out69 << text69;
    file69.flush();
    file69.close();

    if(!file70.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out70(&file70);
    QString text70 = ui->textEdit_70->toPlainText();
    out70 << text70;
    file70.flush();
    file70.close();

    if(!file71.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out71(&file71);
    QString text71 = ui->textEdit_71->toPlainText();
    out71 << text71;
    file71.flush();
    file71.close();

    if(!file72.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out72(&file72);
    QString text72 = ui->textEdit_72->toPlainText();
    out72 << text72;
    file72.flush();
    file72.close();

    if(!file73.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out73(&file73);
    QString text73 = ui->textEdit_73->toPlainText();
    out73 << text73;
    file73.flush();
    file73.close();

    if(!file74.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out74(&file74);
    QString text74 = ui->textEdit_74->toPlainText();
    out74 << text74;
    file74.flush();
    file74.close();

    if(!file75.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out75(&file75);
    QString text75 = ui->textEdit_75->toPlainText();
    out75 << text75;
    file75.flush();
    file75.close();

    if(!file76.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out76(&file76);
    QString text76 = ui->textEdit_76->toPlainText();
    out76 << text76;
    file76.flush();
    file76.close();

    if(!file77.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out77(&file77);
    QString text77 = ui->textEdit_77->toPlainText();
    out77 << text77;
    file77.flush();
    file77.close();

    if(!file78.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out78(&file78);
    QString text78 = ui->textEdit_78->toPlainText();
    out78 << text78;
    file78.flush();
    file78.close();

    if(!file79.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out79(&file79);
    QString text79 = ui->textEdit_79->toPlainText();
    out79 << text79;
    file79.flush();
    file79.close();

    if(!file80.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out80(&file80);
    QString text80 = ui->textEdit_80->toPlainText();
    out80 << text80;
    file80.flush();
    file80.close();

    QFile file81("File81.txt");
    QFile file82("File82.txt");
    QFile file83("File83.txt");
    QFile file84("File84.txt");
    QFile file85("File85.txt");
    QFile file86("File86.txt");
    QFile file87("File87.txt");
    QFile file88("File88.txt");
    QFile file89("File89.txt");
    QFile file90("File90.txt");
    QFile file91("File91.txt");
    QFile file92("File92.txt");
    QFile file93("File93.txt");
    QFile file94("File94.txt");
    QFile file95("File95.txt");
    QFile file96("File96.txt");
    QFile file97("File97.txt");
    QFile file98("File98.txt");
    QFile file99("File99.txt");
    QFile file100("File100.txt");
    QFile file101("File101.txt");
    QFile file102("File102.txt");
    QFile file103("File103.txt");
    QFile file104("File104.txt");

    if(!file81.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out81(&file81);
    QString text81 = ui->textEdit_81->toPlainText();
    out81 << text81;
    file81.flush();
    file81.close();

    if(!file82.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out82(&file82);
    QString text82 = ui->textEdit_82->toPlainText();
    out82 << text82;
    file82.flush();
    file82.close();

    if(!file83.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out83(&file83);
    QString text83 = ui->textEdit_83->toPlainText();
    out83 << text83;
    file83.flush();
    file83.close();

    if(!file84.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out84(&file84);
    QString text84 = ui->textEdit_84->toPlainText();
    out84 << text84;
    file84.flush();
    file84.close();

    if(!file85.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out85(&file85);
    QString text85 = ui->textEdit_85->toPlainText();
    out85 << text85;
    file85.flush();
    file85.close();

    if(!file86.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out86(&file86);
    QString text86 = ui->textEdit_86->toPlainText();
    out86 << text86;
    file86.flush();
    file86.close();

    if(!file87.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out87(&file87);
    QString text87 = ui->textEdit_87->toPlainText();
    out87 << text87;
    file87.flush();
    file87.close();

    if(!file88.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out88(&file88);
    QString text88 = ui->textEdit_88->toPlainText();
    out88 << text88;
    file88.flush();
    file88.close();

    if(!file89.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out89(&file89);
    QString text89 = ui->textEdit_89->toPlainText();
    out89 << text89;
    file89.flush();
    file89.close();

    if(!file90.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out90(&file90);
    QString text90 = ui->textEdit_90->toPlainText();
    out90 << text90;
    file90.flush();
    file90.close();

    if(!file91.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out91(&file91);
    QString text91 = ui->textEdit_91->toPlainText();
    out91 << text91;
    file91.flush();
    file91.close();

    if(!file92.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out92(&file92);
    QString text92 = ui->textEdit_92->toPlainText();
    out92 << text92;
    file92.flush();
    file92.close();

    if(!file93.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out93(&file93);
    QString text93 = ui->textEdit_93->toPlainText();
    out93 << text93;
    file93.flush();
    file93.close();

    if(!file94.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out94(&file94);
    QString text94 = ui->textEdit_94->toPlainText();
    out94 << text94;
    file94.flush();
    file94.close();

    if(!file95.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out95(&file95);
    QString text95 = ui->textEdit_95->toPlainText();
    out95 << text95;
    file95.flush();
    file95.close();

    if(!file96.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out96(&file96);
    QString text96 = ui->textEdit_96->toPlainText();
    out96 << text96;
    file96.flush();
    file96.close();

    if(!file97.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out97(&file97);
    QString text97 = ui->textEdit_97->toPlainText();
    out97 << text97;
    file97.flush();
    file97.close();

    if(!file98.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out98(&file98);
    QString text98 = ui->textEdit_98->toPlainText();
    out98 << text98;
    file98.flush();
    file98.close();

    if(!file99.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out99(&file99);
    QString text99 = ui->textEdit_99->toPlainText();
    out99 << text99;
    file99.flush();
    file99.close();

    if(!file100.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out100(&file100);
    QString text100 = ui->textEdit_100->toPlainText();
    out100 << text100;
    file100.flush();
    file100.close();

    if(!file101.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out101(&file101);
    QString text101 = ui->textEdit_101->toPlainText();
    out101 << text101;
    file101.flush();
    file101.close();

    if(!file102.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out102(&file102);
    QString text102 = ui->textEdit_102->toPlainText();
    out102 << text102;
    file102.flush();
    file102.close();

    if(!file103.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out103(&file103);
    QString text103 = ui->textEdit_103->toPlainText();
    out103 << text103;
    file103.flush();
    file103.close();

    if(!file104.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out104(&file104);
    QString text104 = ui->textEdit_104->toPlainText();
    out104 << text104;
    file104.flush();
    file104.close();

    QFile file105("File105.txt");
    QFile file106("File106.txt");
    QFile file107("File107.txt");
    QFile file108("File108.txt");
    QFile file109("File109.txt");
    QFile file110("File110.txt");
    QFile file111("File111.txt");
    QFile file112("File112.txt");
    QFile file113("File113.txt");
    QFile file114("File114.txt");
    QFile file115("File115.txt");
    QFile file116("File116.txt");
    QFile file117("File117.txt");
    QFile file118("File118.txt");
    QFile file119("File119.txt");
    QFile file120("File120.txt");
    QFile file121("File121.txt");
    QFile file122("File122.txt");
    QFile file123("File123.txt");
    QFile file124("File124.txt");
    QFile file125("File125.txt");
    QFile file126("File126.txt");
    QFile file127("File127.txt");
    QFile file128("File128.txt");
    if(!file105.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out105(&file105);
    QString text105 = ui->textEdit_105->toPlainText();
    out105 << text105;
    file105.flush();
    file105.close();

    if(!file106.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out106(&file106);
    QString text106 = ui->textEdit_106->toPlainText();
    out106 << text106;
    file106.flush();
    file106.close();

    if(!file107.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out107(&file107);
    QString text107 = ui->textEdit_107->toPlainText();
    out107 << text107;
    file107.flush();
    file107.close();

    if(!file108.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out108(&file108);
    QString text108 = ui->textEdit_108->toPlainText();
    out108 << text108;
    file108.flush();
    file108.close();

    if(!file109.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out109(&file109);
    QString text109 = ui->textEdit_109->toPlainText();
    out109 << text109;
    file109.flush();
    file109.close();

    if(!file110.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out110(&file110);
    QString text110 = ui->textEdit_110->toPlainText();
    out110 << text110;
    file110.flush();
    file110.close();

    if(!file111.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out111(&file111);
    QString text111 = ui->textEdit_111->toPlainText();
    out111 << text111;
    file111.flush();
    file111.close();

    if(!file112.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out112(&file112);
    QString text112 = ui->textEdit_112->toPlainText();
    out112 << text112;
    file112.flush();
    file112.close();

    if(!file113.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out113(&file113);
    QString text113 = ui->textEdit_113->toPlainText();
    out113 << text113;
    file113.flush();
    file113.close();

    if(!file114.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out114(&file114);
    QString text114 = ui->textEdit_114->toPlainText();
    out114 << text114;
    file114.flush();
    file114.close();

    if(!file115.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out115(&file115);
    QString text115 = ui->textEdit_115->toPlainText();
    out115 << text115;
    file115.flush();
    file115.close();

    if(!file116.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out116(&file116);
    QString text116 = ui->textEdit_116->toPlainText();
    out116 << text116;
    file116.flush();
    file116.close();

    if(!file117.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out117(&file117);
    QString text117 = ui->textEdit_117->toPlainText();
    out117 << text117;
    file117.flush();
    file117.close();

    if(!file118.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out118(&file118);
    QString text118 = ui->textEdit_118->toPlainText();
    out118 << text118;
    file118.flush();
    file118.close();

    if(!file119.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out119(&file119);
    QString text119 = ui->textEdit_119->toPlainText();
    out119 << text119;
    file119.flush();
    file119.close();

    if(!file120.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out120(&file120);
    QString text120 = ui->textEdit_120->toPlainText();
    out120 << text120;
    file120.flush();
    file120.close();

    if(!file121.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out121(&file121);
    QString text121 = ui->textEdit_121->toPlainText();
    out121 << text121;
    file121.flush();
    file121.close();

    if(!file122.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out122(&file122);
    QString text122 = ui->textEdit_122->toPlainText();
    out122 << text122;
    file122.flush();
    file122.close();

    if(!file123.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out123(&file123);
    QString text123 = ui->textEdit_123->toPlainText();
    out123 << text123;
    file123.flush();
    file123.close();

    if(!file124.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out124(&file124);
    QString text124 = ui->textEdit_124->toPlainText();
    out124 << text124;
    file124.flush();
    file124.close();

    if(!file125.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out125(&file125);
    QString text125 = ui->textEdit_125->toPlainText();
    out125 << text125;
    file125.flush();
    file125.close();

    if(!file126.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out126(&file126);
    QString text126 = ui->textEdit_126->toPlainText();
    out126 << text126;
    file126.flush();
    file126.close();

    if(!file127.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out127(&file127);
    QString text127 = ui->textEdit_127->toPlainText();
    out127 << text127;
    file127.flush();
    file127.close();

    if(!file128.open(QFile::WriteOnly | QFile::Text)){}
    QTextStream out128(&file128);
    QString text128 = ui->textEdit_128->toPlainText();
    out128 << text128;
    file128.flush();
    file128.close();

    QFile file129("File129.txt");
    QFile file130("File130.txt");
    QFile file131("File131.txt");
    QFile file132("File132.txt");
    QFile file133("File133.txt");
    QFile file134("File134.txt");
    QFile file135("File135.txt");
    QFile file136("File136.txt");
    QFile file137("File137.txt");
    QFile file138("File138.txt");
    QFile file139("File139.txt");
    QFile file140("File140.txt");
    QFile file141("File141.txt");
    QFile file142("File142.txt");
    QFile file143("File143.txt");
    QFile file144("File144.txt");
    QFile file145("File145.txt");
    QFile file146("File146.txt");
    QFile file147("File147.txt");
    QFile file148("File148.txt");
    QFile file149("File149.txt");
    QFile file150("File150.txt");
    QFile file151("File151.txt");
    QFile file152("File152.txt");
    QFile file153("File153.txt");
    QFile file154("File154.txt");
    QFile file155("File155.txt");
    QFile file156("File156.txt");
    QFile file157("File157.txt");
    QFile file158("File158.txt");
    QFile file159("File159.txt");
    QFile file160("File160.txt");
    QFile file161("File161.txt");
    QFile file162("File162.txt");
    QFile file163("File163.txt");
    QFile file164("File164.txt");
    QFile file165("File165.txt");
    QFile file166("File166.txt");
    QFile file167("File167.txt");
    QFile file168("File168.txt");

    if(!file129.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out129(&file129);
    QString text129 = ui->textEdit_129->toPlainText();
    out129 << text129;
    file129.flush();
    file129.close();
    if(!file130.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out130(&file130);
    QString text130 = ui->textEdit_130->toPlainText();
    out130 << text130;
    file130.flush();
    file130.close();
    if(!file131.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out131(&file131);
    QString text131 = ui->textEdit_131->toPlainText();
    out131 << text131;
    file131.flush();
    file131.close();
    if(!file132.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out132(&file132);
    QString text132 = ui->textEdit_132->toPlainText();
    out132 << text132;
    file132.flush();
    file132.close();
    if(!file133.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out133(&file133);
    QString text133 = ui->textEdit_133->toPlainText();
    out133 << text133;
    file133.flush();
    file133.close();
    if(!file134.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out134(&file134);
    QString text134 = ui->textEdit_134->toPlainText();
    out134 << text134;
    file134.flush();
    file134.close();
    if(!file135.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out135(&file135);
    QString text135 = ui->textEdit_135->toPlainText();
    out135 << text135;
    file135.flush();
    file135.close();
    if(!file136.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out136(&file136);
    QString text136 = ui->textEdit_136->toPlainText();
    out136 << text136;
    file136.flush();
    file136.close();
    if(!file137.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out137(&file137);
    QString text137 = ui->textEdit_137->toPlainText();
    out137 << text137;
    file137.flush();
    file137.close();
    if(!file138.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out138(&file138);
    QString text138 = ui->textEdit_138->toPlainText();
    out138 << text138;
    file138.flush();
    file138.close();
    if(!file139.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out139(&file139);
    QString text139 = ui->textEdit_139->toPlainText();
    out139 << text139;
    file139.flush();
    file139.close();
    if(!file140.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out140(&file140);
    QString text140 = ui->textEdit_140->toPlainText();
    out140 << text140;
    file140.flush();
    file140.close();
    if(!file141.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out141(&file141);
    QString text141 = ui->textEdit_141->toPlainText();
    out141 << text141;
    file141.flush();
    file141.close();
    if(!file142.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out142(&file142);
    QString text142 = ui->textEdit_142->toPlainText();
    out142 << text142;
    file142.flush();
    file142.close();
    if(!file143.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out143(&file143);
    QString text143 = ui->textEdit_143->toPlainText();
    out143 << text143;
    file143.flush();
    file143.close();
    if(!file144.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out144(&file144);
    QString text144 = ui->textEdit_144->toPlainText();
    out144 << text144;
    file144.flush();
    file144.close();
    if(!file145.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out145(&file145);
    QString text145 = ui->textEdit_145->toPlainText();
    out145 << text145;
    file145.flush();
    file145.close();
    if(!file146.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out146(&file146);
    QString text146 = ui->textEdit_146->toPlainText();
    out146 << text146;
    file146.flush();
    file146.close();
    if(!file147.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out147(&file147);
    QString text147 = ui->textEdit_147->toPlainText();
    out147 << text147;
    file147.flush();
    file147.close();
    if(!file148.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out148(&file148);
    QString text148 = ui->textEdit_148->toPlainText();
    out148 << text148;
    file148.flush();
    file148.close();
    if(!file149.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out149(&file149);
    QString text149 = ui->textEdit_149->toPlainText();
    out149 << text149;
    file149.flush();
    file149.close();
    if(!file150.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out150(&file150);
    QString text150 = ui->textEdit_150->toPlainText();
    out150 << text150;
    file150.flush();
    file150.close();
    if(!file151.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out151(&file151);
    QString text151 = ui->textEdit_151->toPlainText();
    out151 << text151;
    file151.flush();
    file151.close();
    if(!file152.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out152(&file152);
    QString text152 = ui->textEdit_152->toPlainText();
    out152 << text152;
    file152.flush();
    file152.close();
    if(!file153.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out153(&file153);
    QString text153 = ui->textEdit_153->toPlainText();
    out153 << text153;
    file153.flush();
    file153.close();
    if(!file154.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out154(&file154);
    QString text154 = ui->textEdit_154->toPlainText();
    out154 << text154;
    file154.flush();
    file154.close();
    if(!file155.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out155(&file155);
    QString text155 = ui->textEdit_155->toPlainText();
    out155 << text155;
    file155.flush();
    file155.close();
    if(!file156.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out156(&file156);
    QString text156 = ui->textEdit_156->toPlainText();
    out156 << text156;
    file156.flush();
    file156.close();
    if(!file157.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out157(&file157);
    QString text157 = ui->textEdit_157->toPlainText();
    out157 << text157;
    file157.flush();
    file157.close();
    if(!file158.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out158(&file158);
    QString text158 = ui->textEdit_158->toPlainText();
    out158 << text158;
    file158.flush();
    file158.close();
    if(!file159.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out159(&file159);
    QString text159 = ui->textEdit_159->toPlainText();
    out159 << text159;
    file159.flush();
    file159.close();
    if(!file160.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out160(&file160);
    QString text160 = ui->textEdit_160->toPlainText();
    out160 << text160;
    file160.flush();
    file160.close();
    if(!file161.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out161(&file161);
    QString text161 = ui->textEdit_161->toPlainText();
    out161 << text161;
    file161.flush();
    file161.close();
    if(!file162.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out162(&file162);
    QString text162 = ui->textEdit_162->toPlainText();
    out162 << text162;
    file162.flush();
    file162.close();
    if(!file163.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out163(&file163);
    QString text163 = ui->textEdit_163->toPlainText();
    out163 << text163;
    file163.flush();
    file163.close();
    if(!file164.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out164(&file164);
    QString text164 = ui->textEdit_164->toPlainText();
    out164 << text164;
    file164.flush();
    file164.close();
    if(!file165.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out165(&file165);
    QString text165 = ui->textEdit_165->toPlainText();
    out165 << text165;
    file165.flush();
    file165.close();
    if(!file166.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out166(&file166);
    QString text166 = ui->textEdit_166->toPlainText();
    out166 << text166;
    file166.flush();
    file166.close();
    if(!file167.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out167(&file167);
    QString text167 = ui->textEdit_167->toPlainText();
    out167 << text167;
    file167.flush();
    file167.close();
    if(!file168.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out168(&file168);
    QString text168 = ui->textEdit_168->toPlainText();
    out168 << text168;
    file168.flush();
    file168.close();

    QFile file169("File169.txt");
    QFile file170("File170.txt");
    QFile file171("File171.txt");
    QFile file172("File172.txt");
    QFile file173("File173.txt");
    QFile file174("File174.txt");
    QFile file175("File175.txt");
    QFile file176("File176.txt");
    QFile file177("File177.txt");
    QFile file178("File178.txt");
    QFile file179("File179.txt");
    QFile file180("File180.txt");
    QFile file181("File181.txt");
    QFile file182("File182.txt");
    QFile file183("File183.txt");
    QFile file184("File184.txt");
    QFile file185("File185.txt");
    QFile file186("File186.txt");
    QFile file187("File187.txt");
    QFile file188("File188.txt");
    QFile file189("File189.txt");
    QFile file190("File190.txt");
    QFile file191("File191.txt");
    QFile file192("File192.txt");
    QFile file193("File193.txt");
    QFile file194("File194.txt");
    QFile file195("File195.txt");
    QFile file196("File196.txt");
    QFile file197("File197.txt");
    QFile file198("File198.txt");
    QFile file199("File199.txt");
    QFile file200("File200.txt");

    if(!file169.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out169(&file169);
    QString text169 = ui->textEdit_169->toPlainText();
    out169 << text169;
    file169.flush();
    file169.close();
    if(!file170.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out170(&file170);
    QString text170 = ui->textEdit_170->toPlainText();
    out170 << text170;
    file170.flush();
    file170.close();
    if(!file171.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out171(&file171);
    QString text171 = ui->textEdit_171->toPlainText();
    out171 << text171;
    file171.flush();
    file171.close();
    if(!file172.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out172(&file172);
    QString text172 = ui->textEdit_172->toPlainText();
    out172 << text172;
    file172.flush();
    file172.close();
    if(!file173.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out173(&file173);
    QString text173 = ui->textEdit_173->toPlainText();
    out173 << text173;
    file173.flush();
    file173.close();
    if(!file174.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out174(&file174);
    QString text174 = ui->textEdit_174->toPlainText();
    out174 << text174;
    file174.flush();
    file174.close();
    if(!file175.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out175(&file175);
    QString text175 = ui->textEdit_175->toPlainText();
    out175 << text175;
    file175.flush();
    file175.close();
    if(!file176.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out176(&file176);
    QString text176 = ui->textEdit_176->toPlainText();
    out176 << text176;
    file176.flush();
    file176.close();
    if(!file177.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out177(&file177);
    QString text177 = ui->textEdit_177->toPlainText();
    out177 << text177;
    file177.flush();
    file177.close();
    if(!file178.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out178(&file178);
    QString text178 = ui->textEdit_178->toPlainText();
    out178 << text178;
    file178.flush();
    file178.close();
    if(!file179.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out179(&file179);
    QString text179 = ui->textEdit_179->toPlainText();
    out179 << text179;
    file179.flush();
    file179.close();
    if(!file180.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out180(&file180);
    QString text180 = ui->textEdit_180->toPlainText();
    out180 << text180;
    file180.flush();
    file180.close();
    if(!file181.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out181(&file181);
    QString text181 = ui->textEdit_181->toPlainText();
    out181 << text181;
    file181.flush();
    file181.close();
    if(!file182.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out182(&file182);
    QString text182 = ui->textEdit_182->toPlainText();
    out182 << text182;
    file182.flush();
    file182.close();
    if(!file183.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out183(&file183);
    QString text183 = ui->textEdit_183->toPlainText();
    out183 << text183;
    file183.flush();
    file183.close();
    if(!file184.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out184(&file184);
    QString text184 = ui->textEdit_184->toPlainText();
    out184 << text184;
    file184.flush();
    file184.close();
    if(!file185.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out185(&file185);
    QString text185 = ui->textEdit_185->toPlainText();
    out185 << text185;
    file185.flush();
    file185.close();
    if(!file186.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out186(&file186);
    QString text186 = ui->textEdit_186->toPlainText();
    out186 << text186;
    file186.flush();
    file186.close();
    if(!file187.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out187(&file187);
    QString text187 = ui->textEdit_187->toPlainText();
    out187 << text187;
    file187.flush();
    file187.close();
    if(!file188.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out188(&file188);
    QString text188 = ui->textEdit_188->toPlainText();
    out188 << text188;
    file188.flush();
    file188.close();
    if(!file189.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out189(&file189);
    QString text189 = ui->textEdit_189->toPlainText();
    out189 << text189;
    file189.flush();
    file189.close();
    if(!file190.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out190(&file190);
    QString text190 = ui->textEdit_190->toPlainText();
    out190 << text190;
    file190.flush();
    file190.close();
    if(!file191.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out191(&file191);
    QString text191 = ui->textEdit_191->toPlainText();
    out191 << text191;
    file191.flush();
    file191.close();
    if(!file192.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out192(&file192);
    QString text192 = ui->textEdit_192->toPlainText();
    out192 << text192;
    file192.flush();
    file192.close();
    if(!file193.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out193(&file193);
    QString text193 = ui->textEdit_193->toPlainText();
    out193 << text193;
    file193.flush();
    file193.close();
    if(!file194.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out194(&file194);
    QString text194 = ui->textEdit_194->toPlainText();
    out194 << text194;
    file194.flush();
    file194.close();
    if(!file195.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out195(&file195);
    QString text195 = ui->textEdit_195->toPlainText();
    out195 << text195;
    file195.flush();
    file195.close();
    if(!file196.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out196(&file196);
    QString text196 = ui->textEdit_196->toPlainText();
    out196 << text196;
    file196.flush();
    file196.close();
    if(!file197.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out197(&file197);
    QString text197 = ui->textEdit_197->toPlainText();
    out197 << text197;
    file197.flush();
    file197.close();
    if(!file198.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out198(&file198);
    QString text198 = ui->textEdit_198->toPlainText();
    out198 << text198;
    file198.flush();
    file198.close();
    if(!file199.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out199(&file199);
    QString text199 = ui->textEdit_199->toPlainText();
    out199 << text199;
    file199.flush();
    file199.close();
    if(!file200.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out200(&file200);
    QString text200 = ui->textEdit_200->toPlainText();
    out200 << text200;
    file200.flush();
    file200.close();

    QFile fileNote1("FileNote1.txt");
    QFile fileNoteName1("FileNoteName1.txt");
    if(!fileNote1.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote1(&fileNote1);
    QString textNote1 = ui->textEditNote->toPlainText();
    outNote1 << textNote1;
    fileNote1.flush();
    fileNote1.close();
    if(!fileNoteName1.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName1(&fileNoteName1);
    QString textNoteName1 = ui->lineEditNote->text();
    outNoteName1 << textNoteName1;
    fileNoteName1.flush();
    fileNoteName1.close();

    QFile fileNote2("FileNote2.txt");
    QFile fileNoteName2("FileNoteName2.txt");
    if(!fileNote2.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote2(&fileNote2);
    QString textNote2 = ui->textEditNote_2->toPlainText();
    outNote2 << textNote2;
    fileNote2.flush();
    fileNote2.close();
    if(!fileNoteName2.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName2(&fileNoteName2);
    QString textNoteName2 = ui->lineEditNote_2->text();
    outNoteName2 << textNoteName2;
    fileNoteName2.flush();
    fileNoteName2.close();

    QFile fileNote3("FileNote3.txt");
    QFile fileNoteName3("FileNoteName3.txt");
    if(!fileNote3.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote3(&fileNote3);
    QString textNote3 = ui->textEditNote_3->toPlainText();
    outNote3 << textNote3;
    fileNote3.flush();
    fileNote3.close();
    if(!fileNoteName3.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName3(&fileNoteName3);
    QString textNoteName3 = ui->lineEditNote_3->text();
    outNoteName3 << textNoteName3;
    fileNoteName3.flush();
    fileNoteName3.close();

    QFile fileNote4("FileNote4.txt");
    QFile fileNoteName4("FileNoteName4.txt");
    if(!fileNote4.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote4(&fileNote4);
    QString textNote4 = ui->textEditNote_4->toPlainText();
    outNote4 << textNote4;
    fileNote4.flush();
    fileNote4.close();
    if(!fileNoteName4.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName4(&fileNoteName4);
    QString textNoteName4 = ui->lineEditNote_4->text();
    outNoteName4 << textNoteName4;
    fileNoteName4.flush();
    fileNoteName4.close();

    QFile fileNote5("FileNote5.txt");
    QFile fileNoteName5("FileNoteName5.txt");
    if(!fileNote5.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote5(&fileNote5);
    QString textNote5 = ui->textEditNote_5->toPlainText();
    outNote5 << textNote5;
    fileNote5.flush();
    fileNote5.close();
    if(!fileNoteName5.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName5(&fileNoteName5);
    QString textNoteName5 = ui->lineEditNote_5->text();
    outNoteName5 << textNoteName5;
    fileNoteName5.flush();
    fileNoteName5.close();

    QFile fileNote6("FileNote6.txt");
    QFile fileNoteName6("FileNoteName6.txt");
    if(!fileNote6.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote6(&fileNote6);
    QString textNote6 = ui->textEditNote_6->toPlainText();
    outNote6 << textNote6;
    fileNote6.flush();
    fileNote6.close();
    if(!fileNoteName6.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName6(&fileNoteName6);
    QString textNoteName6 = ui->lineEditNote_6->text();
    outNoteName6 << textNoteName6;
    fileNoteName6.flush();
    fileNoteName6.close();

    QFile fileNote7("FileNote7.txt");
    QFile fileNoteName7("FileNoteName7.txt");
    if(!fileNote7.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote7(&fileNote7);
    QString textNote7 = ui->textEditNote_10->toPlainText();
    outNote7 << textNote7;
    fileNote7.flush();
    fileNote7.close();
    if(!fileNoteName7.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName7(&fileNoteName7);
    QString textNoteName7 = ui->lineEditNote_10->text();
    outNoteName7 << textNoteName7;
    fileNoteName7.flush();
    fileNoteName7.close();

    QFile fileNote8("FileNote8.txt");
    QFile fileNoteName8("FileNoteName8.txt");
    if(!fileNote8.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote8(&fileNote8);
    QString textNote8 = ui->textEditNote_11->toPlainText();
    outNote8 << textNote8;
    fileNote8.flush();
    fileNote8.close();
    if(!fileNoteName8.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName8(&fileNoteName8);
    QString textNoteName8 = ui->lineEditNote_11->text();
    outNoteName8 << textNoteName8;
    fileNoteName8.flush();
    fileNoteName8.close();

    QFile fileNote9("FileNote9.txt");
    QFile fileNoteName9("FileNoteName9.txt");
    if(!fileNote9.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote9(&fileNote9);
    QString textNote9 = ui->textEditNote_12->toPlainText();
    outNote9 << textNote9;
    fileNote9.flush();
    fileNote9.close();
    if(!fileNoteName9.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName9(&fileNoteName9);
    QString textNoteName9 = ui->lineEditNote_12->text();
    outNoteName9 << textNoteName9;
    fileNoteName9.flush();
    fileNoteName9.close();

    QFile fileNote10("FileNote10.txt");
    QFile fileNoteName10("FileNoteName10.txt");
    if(!fileNote10.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote10(&fileNote10);
    QString textNote10 = ui->textEditNote_13->toPlainText();
    outNote10 << textNote10;
    fileNote10.flush();
    fileNote10.close();
    if(!fileNoteName10.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName10(&fileNoteName10);
    QString textNoteName10 = ui->lineEditNote_13->text();
    outNoteName10 << textNoteName10;
    fileNoteName10.flush();
    fileNoteName10.close();

    QFile fileNote11("FileNote11.txt");
    QFile fileNoteName11("FileNoteName11.txt");
    if(!fileNote11.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote11(&fileNote11);
    QString textNote11 = ui->textEditNote_14->toPlainText();
    outNote11 << textNote11;
    fileNote11.flush();
    fileNote11.close();
    if(!fileNoteName11.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName11(&fileNoteName11);
    QString textNoteName11 = ui->lineEditNote_14->text();
    outNoteName11 << textNoteName11;
    fileNoteName11.flush();
    fileNoteName11.close();

    QFile fileNote12("FileNote12.txt");
    QFile fileNoteName12("FileNoteName12.txt");
    if(!fileNote12.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote12(&fileNote12);
    QString textNote12 = ui->textEditNote_15->toPlainText();
    outNote12 << textNote12;
    fileNote12.flush();
    fileNote12.close();
    if(!fileNoteName12.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName12(&fileNoteName12);
    QString textNoteName12 = ui->lineEditNote_15->text();
    outNoteName12 << textNoteName12;
    fileNoteName12.flush();
    fileNoteName12.close();

    QFile fileNote13("FileNote13.txt");
    QFile fileNoteName13("FileNoteName13.txt");
    if(!fileNote13.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote13(&fileNote13);
    QString textNote13 = ui->textEditNote_17->toPlainText();
    outNote13 << textNote13;
    fileNote13.flush();
    fileNote13.close();
    if(!fileNoteName13.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName13(&fileNoteName13);
    QString textNoteName13 = ui->lineEditNote_17->text();
    outNoteName13 << textNoteName13;
    fileNoteName13.flush();
    fileNoteName13.close();

    QFile fileNote14("FileNote14.txt");
    QFile fileNoteName14("FileNoteName14.txt");
    if(!fileNote14.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote14(&fileNoteName14);
    QString textNote14 = ui->textEditNote_18->toPlainText();
    outNote14 << textNote14;
    fileNote14.flush();
    fileNote14.close();
    if(!fileNoteName14.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName14(&file14);
    QString textNoteName14 = ui->lineEditNote_18->text();
    outNoteName14 << textNoteName14;
    fileNoteName14.flush();
    fileNoteName14.close();

    QFile fileNote15("FileNote15.txt");
    QFile fileNoteName15("FileNoteName15.txt");
    if(!fileNote15.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote15(&fileNote15);
    QString textNote15 = ui->textEditNote_20->toPlainText();
    outNote15 << textNote15;
    fileNote15.flush();
    fileNote15.close();
    if(!fileNoteName15.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName15(&fileNoteName15);
    QString textNoteName15 = ui->lineEditNote_20->text();
    outNoteName15 << textNoteName15;
    fileNoteName15.flush();
    fileNoteName15.close();

    QFile fileNote16("FileNote16.txt");
    QFile fileNoteName16("FileNoteName16.txt");
    if(!fileNote16.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote16(&fileNote16);
    QString textNote16 = ui->textEditNote_21->toPlainText();
    outNote16 << textNote16;
    fileNote16.flush();
    fileNote16.close();
    if(!fileNoteName16.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName16(&fileNoteName16);
    QString textNoteName16 = ui->lineEditNote_21->text();
    outNoteName16 << textNoteName16;
    fileNoteName16.flush();
    fileNoteName16.close();

    QFile fileNote17("FileNote17.txt");
    QFile fileNoteName17("FileNoteName17.txt");
    if(!fileNote17.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote17(&fileNote17);
    QString textNote17 = ui->textEditNote_22->toPlainText();
    outNote17 << textNote17;
    fileNote17.flush();
    fileNote17.close();
    if(!fileNoteName17.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName17(&fileNoteName17);
    QString textNoteName17 = ui->lineEditNote_22->text();
    outNoteName17 << textNoteName17;
    fileNoteName17.flush();
    fileNoteName17.close();

    QFile fileNote18("FileNote18.txt");
    QFile fileNoteName18("FileNoteName18.txt");
    if(!fileNote18.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote18(&fileNote18);
    QString textNote18 = ui->textEditNote_23->toPlainText();
    outNote18 << textNote18;
    fileNote18.flush();
    fileNote18.close();
    if(!fileNoteName18.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName18(&fileNoteName18);
    QString textNoteName18 = ui->lineEditNote_23->text();
    outNoteName18 << textNoteName18;
    fileNoteName18.flush();
    fileNoteName18.close();

    QFile fileNote19("FileNote19.txt");
    QFile fileNoteName19("FileNoteName19.txt");
    if(!fileNote19.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote19(&fileNote19);
    QString textNote19 = ui->textEditNote_24->toPlainText();
    outNote19 << textNote19;
    fileNote19.flush();
    fileNote19.close();
    if(!fileNoteName19.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName19(&fileNoteName19);
    QString textNoteName19 = ui->lineEditNote_24->text();
    outNoteName19 << textNoteName19;
    fileNoteName19.flush();
    fileNoteName19.close();

    QFile fileNote20("FileNote20.txt");
    QFile fileNoteName20("FileNoteName20.txt");
    if(!fileNote20.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNote20(&fileNote20);
    QString textNote20 = ui->textEditNote_25->toPlainText();
    outNote20 << textNote20;
    fileNote20.flush();
    fileNote20.close();
    if(!fileNoteName20.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream outNoteName20(&fileNoteName20);
    QString textNoteName20 = ui->lineEditNote_25->text();
    outNoteName20 << textNoteName20;
    fileNoteName20.flush();
    fileNoteName20.close();

}

void MainWindow::on_pushButtonMon_clicked()
{
    ui->groupBoxMonHom->hide();
    ui->pushButtonPreviousWeek->hide();
    ui->groupBoxMon->show();
    ui->groupBoxTue->hide();
    ui->groupBoxWed->hide();
    ui->groupBoxThu->hide();
    ui->groupBoxFri->hide();
    ui->groupBoxSat->hide();
    ui->groupBoxAllSubject->hide();
    ui->pushButtonNextWeek->show();
    ui->pushButtonClear1->show();
    ui->pushButtonClear2->hide();
}

void MainWindow::on_pushButtonTue_clicked()
{
    ui->groupBoxTueHom->hide();
    ui->pushButtonPreviousWeek->hide();
    ui->groupBoxMon->hide();
    ui->groupBoxTue->show();
    ui->groupBoxWed->hide();
    ui->groupBoxThu->hide();
    ui->groupBoxFri->hide();
    ui->groupBoxSat->hide();
    ui->groupBoxAllSubject->hide();
    ui->pushButtonNextWeek->show();
    ui->pushButtonClear1->show();
    ui->pushButtonClear2->hide();
}

void MainWindow::on_pushButtonWed_clicked()
{
    ui->groupBoxWedHom->hide();
    ui->pushButtonPreviousWeek->hide();
    ui->groupBoxMon->hide();
    ui->groupBoxTue->hide();
    ui->groupBoxWed->show();
    ui->groupBoxThu->hide();
    ui->groupBoxFri->hide();
    ui->groupBoxSat->hide();
    ui->groupBoxAllSubject->hide();
    ui->pushButtonNextWeek->show();
    ui->pushButtonClear1->show();
    ui->pushButtonClear2->hide();
}

void MainWindow::on_pushButtonThu_clicked()
{
    ui->groupBoxThuHom->hide();
    ui->pushButtonPreviousWeek->hide();
    ui->groupBoxMon->hide();
    ui->groupBoxTue->hide();
    ui->groupBoxWed->hide();
    ui->groupBoxThu->show();
    ui->groupBoxFri->hide();
    ui->groupBoxSat->hide();
    ui->groupBoxAllSubject->hide();
    ui->pushButtonNextWeek->show();
    ui->pushButtonClear1->show();
    ui->pushButtonClear2->hide();
}

void MainWindow::on_pushButtonFri_clicked()
{
    ui->groupBoxFriHom->hide();
    ui->pushButtonPreviousWeek->hide();
    ui->groupBoxMon->hide();
    ui->groupBoxTue->hide();
    ui->groupBoxWed->hide();
    ui->groupBoxThu->hide();
    ui->groupBoxFri->show();
    ui->groupBoxSat->hide();
    ui->groupBoxAllSubject->hide();
    ui->pushButtonNextWeek->show();
    ui->pushButtonClear1->show();
    ui->pushButtonClear2->hide();
}

void MainWindow::on_pushButtonSat_clicked()
{
    ui->groupBoxSatHom->hide();
    ui->pushButtonPreviousWeek->hide();
    ui->groupBoxMon->hide();
    ui->groupBoxTue->hide();
    ui->groupBoxWed->hide();
    ui->groupBoxThu->hide();
    ui->groupBoxFri->hide();
    ui->groupBoxSat->show();
    ui->groupBoxAllSubject->hide();
    ui->pushButtonNextWeek->show();
    ui->pushButtonClear1->show();
    ui->pushButtonClear2->hide();
}

void MainWindow::on_pushButtonNextWeek_clicked()
{
   ui->groupBoxMonHom->show();
   ui->groupBoxTueHom->show();
   ui->groupBoxWedHom->show();
   ui->groupBoxThuHom->show();
   ui->groupBoxFriHom->show();
   ui->groupBoxSatHom->show();
   ui->pushButtonNextWeek->hide();
   ui->pushButtonPreviousWeek->show();
   ui->pushButtonClear1->hide();
   ui->pushButtonClear2->show();
}

void MainWindow::on_pushButtonPreviousWeek_clicked()
{
    ui->groupBoxMonHom->hide();
    ui->groupBoxTueHom->hide();
    ui->groupBoxWedHom->hide();
    ui->groupBoxThuHom->hide();
    ui->groupBoxFriHom->hide();
    ui->groupBoxSatHom->hide();
    ui->pushButtonNextWeek->show();
    ui->pushButtonPreviousWeek->hide();
    ui->pushButtonClear1->show();
    ui->pushButtonClear2->hide();
}

void MainWindow::on_pushButtonClear1_clicked()
{
    QFile file25("File25.txt");
    file25.resize(0);
    QFile file26("File26.txt");
    file26.resize(0);
    QFile file27("File27.txt");
    file27.resize(0);
    QFile file28("File28.txt");
    file28.resize(0);
    QFile file29("File29.txt");
    file29.resize(0);
    QFile file30("File30.txt");
    file30.resize(0);
    QFile file31("File31.txt");
    file31.resize(0);
    QFile file32("File32.txt");
    file32.resize(0);

    QFile file33("File33.txt");
    file33.resize(0);
    QFile file34("File34.txt");
    file34.resize(0);
    QFile file35("File35.txt");
    file35.resize(0);
    QFile file36("File36.txt");
    file36.resize(0);
    QFile file37("File37.txt");
    file37.resize(0);
    QFile file38("File38.txt");
    file38.resize(0);
    QFile file39("File39.txt");
    file39.resize(0);
    QFile file40("File40.txt");
    file40.resize(0);

    QFile file57("File57.txt");
    file57.resize(0);
    QFile file58("File58.txt");
    file58.resize(0);
    QFile file59("File59.txt");
    file59.resize(0);
    QFile file60("File60.txt");
    file60.resize(0);
    QFile file61("File61.txt");
    file61.resize(0);
    QFile file62("File62.txt");
    file62.resize(0);
    QFile file63("File63.txt");
    file63.resize(0);
    QFile file64("File64.txt");
    file64.resize(0);

    QFile file81("File81.txt");
    file81.resize(0);
    QFile file82("File82.txt");
    file82.resize(0);
    QFile file83("File83.txt");
    file83.resize(0);
    QFile file84("File84.txt");
    file84.resize(0);
    QFile file85("File85.txt");
    file85.resize(0);
    QFile file86("File86.txt");
    file86.resize(0);
    QFile file87("File87.txt");
    file87.resize(0);
    QFile file88("File88.txt");
    file88.resize(0);

    QFile file105("File105.txt");
    file105.resize(0);
    QFile file106("File106.txt");
    file106.resize(0);
    QFile file107("File107.txt");
    file107.resize(0);
    QFile file108("File108.txt");
    file108.resize(0);
    QFile file109("File109.txt");
    file109.resize(0);
    QFile file110("File110.txt");
    file110.resize(0);
    QFile file111("File111.txt");
    file111.resize(0);
    QFile file112("File112.txt");
    file112.resize(0);
    QFile file185("File185.txt");
    file185.resize(0);
    QFile file186("File186.txt");
    file186.resize(0);
    QFile file187("File187.txt");
    file187.resize(0);
    QFile file188("File188.txt");
    file188.resize(0);
    QFile file189("File189.txt");
    file189.resize(0);
    QFile file190("File190.txt");
    file190.resize(0);
    QFile file191("File191.txt");
    file191.resize(0);
    QFile file192("File192.txt");
    file192.resize(0);

}

void MainWindow::on_pushButtonClear2_clicked()
{
    QFile file129("File129.txt");
    file129.resize(0);
    QFile file130("File130.txt");
    file130.resize(0);
    QFile file131("File131.txt");
    file131.resize(0);
    QFile file132("File132.txt");
    file132.resize(0);
    QFile file133("File133.txt");
    file133.resize(0);
    QFile file134("File134.txt");
    file134.resize(0);
    QFile file135("File135.txt");
    file135.resize(0);
    QFile file136("File136.txt");
    file136.resize(0);
    QFile file137("File137.txt");
    file137.resize(0);
    QFile file138("File138.txt");
    file138.resize(0);
    QFile file139("File139.txt");
    file139.resize(0);
    QFile file140("File140.txt");
    file140.resize(0);
    QFile file141("File141.txt");
    file141.resize(0);
    QFile file142("File142.txt");
    file142.resize(0);
    QFile file143("File143.txt");
    file143.resize(0);
    QFile file144("File144.txt");
    file144.resize(0);
    QFile file145("File145.txt");
    file145.resize(0);
    QFile file146("File146.txt");
    file146.resize(0);
    QFile file147("File147.txt");
    file147.resize(0);
    QFile file148("File148.txt");
    file148.resize(0);
    QFile file149("File149.txt");
    file149.resize(0);
    QFile file150("File150.txt");
    file150.resize(0);
    QFile file151("File151.txt");
    file151.resize(0);
    QFile file152("File152.txt");
    file152.resize(0);
    QFile file153("File153.txt");
    file153.resize(0);
    QFile file154("File154.txt");
    file154.resize(0);
    QFile file155("File155.txt");
    file155.resize(0);
    QFile file156("File156.txt");
    file156.resize(0);
    QFile file157("File157.txt");
    file157.resize(0);
    QFile file158("File158.txt");
    file158.resize(0);
    QFile file159("File159.txt");
    file159.resize(0);
    QFile file160("File160.txt");
    file160.resize(0);
    QFile file161("File161.txt");
    file161.resize(0);
    QFile file162("File162.txt");
    file162.resize(0);
    QFile file163("File163.txt");
    file163.resize(0);
    QFile file164("File164.txt");
    file164.resize(0);
    QFile file165("File165.txt");
    file165.resize(0);
    QFile file166("File166.txt");
    file166.resize(0);
    QFile file167("File167.txt");
    file167.resize(0);
    QFile file168("File168.txt");
    file168.resize(0);
    QFile file177("File177.txt");
    file177.resize(0);
    QFile file178("File178.txt");
    file178.resize(0);
    QFile file179("File179.txt");
    file179.resize(0);
    QFile file180("File180.txt");
    file180.resize(0);
    QFile file181("File181.txt");
    file181.resize(0);
    QFile file182("File182.txt");
    file182.resize(0);
    QFile file183("File183.txt");
    file183.resize(0);
    QFile file184("File184.txt");
    file184.resize(0);
}

void MainWindow::on_pushButtonAdd_clicked()
{
    if(ui->pushButtonNote1->isHidden()) ui->pushButtonNote1->show();
    else if(ui->pushButtonNote2->isHidden()) ui->pushButtonNote2->show();
    else if(ui->pushButtonNote3->isHidden()) ui->pushButtonNote3->show();
    else if(ui->pushButtonNote4->isHidden()) ui->pushButtonNote4->show();
    else if(ui->pushButtonNote5->isHidden()) ui->pushButtonNote5->show();
    else if(ui->pushButtonNote6->isHidden()) ui->pushButtonNote6->show();
    else if(ui->pushButtonNote7->isHidden()) ui->pushButtonNote7->show();
    else if(ui->pushButtonNote8->isHidden()) ui->pushButtonNote8->show();
    else if(ui->pushButtonNote9->isHidden()) ui->pushButtonNote9->show();
    else if(ui->pushButtonNote10->isHidden()) ui->pushButtonNote10->show();
    else if(ui->pushButtonNote11->isHidden()) ui->pushButtonNote11->show();
    else if(ui->pushButtonNote12->isHidden()) ui->pushButtonNote12->show();
    else if(ui->pushButtonNote13->isHidden()) ui->pushButtonNote13->show();
    else if(ui->pushButtonNote14->isHidden()) ui->pushButtonNote14->show();
    else if(ui->pushButtonNote15->isHidden()) ui->pushButtonNote15->show();
    else if(ui->pushButtonNote16->isHidden()) ui->pushButtonNote16->show();
    else if(ui->pushButtonNote17->isHidden()) ui->pushButtonNote17->show();
    else if(ui->pushButtonNote18->isHidden()) ui->pushButtonNote18->show();
    else if(ui->pushButtonNote19->isHidden()) ui->pushButtonNote19->show();
    else if(ui->pushButtonNote20->isHidden()) ui->pushButtonNote20->show();

    else QMessageBox::information(this,"Sorry!","Maximum number of notes added!");
}

void MainWindow::on_pushButtonSub_clicked()
{
        QFile fileNote1("FileNote1.txt");
        QFile fileNote2("FileNote2.txt");
        QFile fileNote3("FileNote3.txt");
        QFile fileNote4("FileNote4.txt");
        QFile fileNote5("FileNote5.txt");
        QFile fileNote6("FileNote6.txt");
        QFile fileNote7("FileNote7.txt");
        QFile fileNote8("FileNote8.txt");
        QFile fileNote9("FileNote9.txt");
        QFile fileNote10("FileNote10.txt");
        QFile fileNote11("FileNote11.txt");
        QFile fileNote12("FileNote12.txt");
        QFile fileNote13("FileNote13.txt");
        QFile fileNote14("FileNote14.txt");
        QFile fileNote15("FileNote15.txt");
        QFile fileNote16("FileNote16.txt");
        QFile fileNote17("FileNote17.txt");
        QFile fileNote18("FileNote18.txt");
        QFile fileNote19("FileNote19.txt");
        QFile fileNote20("FileNote20.txt");
        if(ui->pushButtonNote20->isVisible()){
             ui->pushButtonNote20->hide();
        fileNote20.resize(0);}
        else if(ui->pushButtonNote19->isVisible()){
             ui->pushButtonNote19->hide();
        fileNote19.resize(0);}
        else if(ui->pushButtonNote18->isVisible()){
             ui->pushButtonNote18->hide();
        fileNote18.resize(0);}
        else if(ui->pushButtonNote17->isVisible()){
             ui->pushButtonNote17->hide();
        fileNote17.resize(0);}
        else if(ui->pushButtonNote16->isVisible()){
             ui->pushButtonNote16->hide();
        fileNote16.resize(0);}
        else if(ui->pushButtonNote15->isVisible()){
             ui->pushButtonNote15->hide();
        fileNote15.resize(0);}
        else if(ui->pushButtonNote14->isVisible()){
             ui->pushButtonNote14->hide();
        fileNote14.resize(0);}
        else if(ui->pushButtonNote13->isVisible()){
             ui->pushButtonNote13->hide();
        fileNote13.resize(0);}
        else if(ui->pushButtonNote12->isVisible()){
             ui->pushButtonNote12->hide();
        fileNote12.resize(0);}
        else if(ui->pushButtonNote11->isVisible()){
             ui->pushButtonNote11->hide();
        fileNote11.resize(0);}
        else if(ui->pushButtonNote10->isVisible()){
             ui->pushButtonNote10->hide();
        fileNote10.resize(0);}
        else if(ui->pushButtonNote9->isVisible()){
             ui->pushButtonNote9->hide();
        fileNote9.resize(0);}
        else if(ui->pushButtonNote8->isVisible()){
             ui->pushButtonNote8->hide();
        fileNote8.resize(0);}
        else if(ui->pushButtonNote7->isVisible()){
             ui->pushButtonNote7->hide();
        fileNote7.resize(0);}
        else if(ui->pushButtonNote6->isVisible()){
             ui->pushButtonNote6->hide();
        fileNote6.resize(0);}
        else if(ui->pushButtonNote5->isVisible()){
             ui->pushButtonNote5->hide();
        fileNote5.resize(0);}
        else if(ui->pushButtonNote4->isVisible()){
             ui->pushButtonNote4->hide();
        fileNote4.resize(0);}
        else if(ui->pushButtonNote3->isVisible()){
             ui->pushButtonNote3->hide();
        fileNote3.resize(0);}
        else if(ui->pushButtonNote2->isVisible()){
             ui->pushButtonNote2->hide();
        fileNote2.resize(0);}
        else if(ui->pushButtonNote1->isVisible()){
             ui->pushButtonNote1->hide();
        fileNote1.resize(0);}

        else QMessageBox::information(this,"Sorry!","You substract all notes!");
}

void MainWindow::on_pushButtonNote1_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->show();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();

    QFile fileNote1("FileNote1.txt");
    QFile fileNoteName1("FileNoteName1.txt");
    if(!fileNote1.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in1(&fileNote1);
    QString text1 = in1.readAll();
    ui->textEditNote->setPlainText(text1);
    fileNote1.close();
    if(!fileNoteName1.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName1(&fileNoteName1);
    QString textName1 = inName1.readAll();
    ui->lineEditNote->setText(textName1);
    fileNoteName1.close();
}
void MainWindow::on_pushButtonNote2_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->show();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();

    QFile fileNote2("FileNote2.txt");
    QFile fileNoteName2("FileNoteName2.txt");
    if(!fileNote2.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in2(&fileNote2);
    QString text2 = in2.readAll();
    ui->textEditNote_2->setPlainText(text2);
    fileNote2.close();
    if(!fileNoteName2.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName2(&fileNoteName2);
    QString textName2 = inName2.readAll();
    ui->lineEditNote_2->setText(textName2);
    fileNoteName2.close();

}
void MainWindow::on_pushButtonNote3_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->show();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote3("FileNote3.txt");
    QFile fileNoteName3("FileNoteName3.txt");
    if(!fileNote3.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in3(&fileNote3);
    QString text3 = in3.readAll();
    ui->textEditNote_3->setPlainText(text3);
    fileNote3.close();
    if(!fileNoteName3.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName3(&fileNoteName3);
    QString textName3 = inName3.readAll();
    ui->lineEditNote_3->setText(textName3);
    fileNoteName3.close();

}
void MainWindow::on_pushButtonNote4_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->show();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote4("FileNote4.txt");
    QFile fileNoteName4("FileNoteName4.txt");
    if(!fileNote4.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in4(&fileNote4);
    QString text4 = in4.readAll();
    ui->textEditNote_4->setPlainText(text4);
    fileNote4.close();
    if(!fileNoteName4.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName4(&fileNoteName4);
    QString textName4 = inName4.readAll();
    ui->lineEditNote_4->setText(textName4);
    fileNoteName4.close();
}
void MainWindow::on_pushButtonNote5_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->show();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote5("FileNote5.txt");
    QFile fileNoteName5("FileNoteName5.txt");
    if(!fileNote5.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in5(&fileNote5);
    QString text5 = in5.readAll();
    ui->textEditNote_5->setPlainText(text5);
    fileNote5.close();
    if(!fileNoteName5.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName5(&fileNoteName5);
    QString textName5 = inName5.readAll();
    ui->lineEditNote_5->setText(textName5);
    fileNoteName5.close();

}
void MainWindow::on_pushButtonNote6_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->show();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote6("FileNote6.txt");
    QFile fileNoteName6("FileNoteName6.txt");
    if(!fileNote6.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in6(&fileNote6);
    QString text6 = in6.readAll();
    ui->textEditNote_6->setPlainText(text6);
    fileNote6.close();
    if(!fileNoteName6.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName6(&fileNoteName6);
    QString textName6 = inName6.readAll();
    ui->lineEditNote_6->setText(textName6);
    fileNoteName6.close();
}
void MainWindow::on_pushButtonNote7_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->show();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote7("FileNote7.txt");
    QFile fileNoteName7("FileNoteName7.txt");
    if(!fileNote7.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in7(&fileNote7);
    QString text7 = in7.readAll();
    ui->textEditNote_10->setPlainText(text7);
    fileNote7.close();
    if(!fileNoteName7.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName7(&fileNoteName7);
    QString textName7 = inName7.readAll();
    ui->lineEditNote_10->setText(textName7);
    fileNoteName7.close();

}
void MainWindow::on_pushButtonNote8_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->show();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote8("FileNote8.txt");
    QFile fileNoteName8("FileNoteName8.txt");
    if(!fileNote8.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in8(&fileNote8);
    QString text8 = in8.readAll();
    ui->textEditNote_11->setPlainText(text8);
    fileNote8.close();
    if(!fileNoteName8.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName8(&fileNoteName8);
    QString textName8 = inName8.readAll();
    ui->lineEditNote_11->setText(textName8);
    fileNoteName8.close();

}
void MainWindow::on_pushButtonNote9_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->show();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote9("FileNote9.txt");
    QFile fileNoteName9("FileNoteName9.txt");
    if(!fileNote9.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in9(&fileNote9);
    QString text9 = in9.readAll();
    ui->textEditNote_12->setPlainText(text9);
    fileNote9.close();
    if(!fileNoteName9.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName9(&fileNoteName9);
    QString textName9 = inName9.readAll();
    ui->lineEditNote_12->setText(textName9);
    fileNoteName9.close();

}
void MainWindow::on_pushButtonNote10_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->show();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote10("FileNote10.txt");
    QFile fileNoteName10("FileNoteName10.txt");
    if(!fileNote10.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in10(&fileNote10);
    QString text10 = in10.readAll();
    ui->textEditNote_13->setPlainText(text10);
    fileNote10.close();
    if(!fileNoteName10.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName10(&fileNoteName10);
    QString textName10 = inName10.readAll();
    ui->lineEditNote_13->setText(textName10);
    fileNoteName10.close();

}
void MainWindow::on_pushButtonNote11_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->show();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote11("FileNote11.txt");
    QFile fileNoteName11("FileNoteName11.txt");
    if(!fileNote11.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in11(&fileNote11);
    QString text11 = in11.readAll();
    ui->textEditNote_14->setPlainText(text11);
    fileNote11.close();
    if(!fileNoteName11.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName11(&fileNoteName11);
    QString textName11 = inName11.readAll();
    ui->lineEditNote_14->setText(textName11);
    fileNoteName11.close();

}
void MainWindow::on_pushButtonNote12_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->show();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote12("FileNote12.txt");
    QFile fileNoteName12("FileNoteName12.txt");
    if(!fileNote12.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in12(&fileNote12);
    QString text12 = in12.readAll();
    ui->textEditNote_15->setPlainText(text12);
    fileNote12.close();
    if(!fileNoteName12.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName12(&fileNoteName12);
    QString textName12 = inName12.readAll();
    ui->lineEditNote_15->setText(textName12);
    fileNoteName12.close();

}
void MainWindow::on_pushButtonNote13_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->show();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote13("FileNote13.txt");
    QFile fileNoteName13("FileNoteName13.txt");
    if(!fileNote13.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in13(&fileNote13);
    QString text13 = in13.readAll();
    ui->textEditNote_17->setPlainText(text13);
    fileNote13.close();
    if(!fileNoteName13.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName13(&fileNoteName13);
    QString textName13 = inName13.readAll();
    ui->lineEditNote_17->setText(textName13);
    fileNoteName13.close();

}
void MainWindow::on_pushButtonNote14_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->show();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote14("FileNote14.txt");
    QFile fileNoteName14("FileNoteName14.txt");
    if(!fileNote14.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in14(&fileNote14);
    QString text14 = in14.readAll();
    ui->textEditNote_18->setPlainText(text14);
    fileNote14.close();
    if(!fileNoteName14.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName14(&fileNoteName14);
    QString textName14 = inName14.readAll();
    ui->lineEditNote_18->setText(textName14);
    fileNoteName14.close();

}
void MainWindow::on_pushButtonNote15_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->show();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote15("FileNote15.txt");
    QFile fileNoteName15("FileNoteName15.txt");
    if(!fileNote15.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in15(&fileNote15);
    QString text15 = in15.readAll();
    ui->textEditNote_20->setPlainText(text15);
    fileNote15.close();
    if(!fileNoteName15.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName15(&fileNoteName15);
    QString textName15 = inName15.readAll();
    ui->lineEditNote_20->setText(textName15);
    fileNoteName15.close();

}
void MainWindow::on_pushButtonNote16_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->show();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();

    QFile fileNote16("FileNote16.txt");
    QFile fileNoteName16("FileNoteName16.txt");
    if(!fileNote16.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in16(&fileNote16);
    QString text16 = in16.readAll();
    ui->textEditNote_21->setPlainText(text16);
    fileNote16.close();
    if(!fileNoteName16.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName16(&fileNoteName16);
    QString textName16 = inName16.readAll();
    ui->lineEditNote_21->setText(textName16);
    fileNoteName16.close();

}
void MainWindow::on_pushButtonNote17_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->show();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote17("FileNote17.txt");
    QFile fileNoteName17("FileNoteName17.txt");
    if(!fileNote17.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in17(&fileNote17);
    QString text17 = in17.readAll();
    ui->textEditNote_22->setPlainText(text17);
    fileNote17.close();
    if(!fileNoteName17.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName17(&fileNoteName17);
    QString textName17 = inName17.readAll();
    ui->lineEditNote_22->setText(textName17);
    fileNoteName17.close();

}
void MainWindow::on_pushButtonNote18_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->show();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->hide();
    QFile fileNote18("FileNote18.txt");
    QFile fileNoteName18("FileNoteName18.txt");
    if(!fileNote18.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in18(&fileNote18);
    QString text18 = in18.readAll();
    ui->textEditNote_23->setPlainText(text18);
    fileNote18.close();
    if(!fileNoteName18.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName18(&fileNoteName18);
    QString textName18 = inName18.readAll();
    ui->lineEditNote_23->setText(textName18);
    fileNoteName18.close();

}
void MainWindow::on_pushButtonNote19_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->show();
    ui->groupBoxNote_20->hide();
    QFile fileNote19("FileNote19.txt");
    QFile fileNoteName19("FileNoteName19.txt");
    if(!fileNote19.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in19(&fileNote19);
    QString text19 = in19.readAll();
    ui->textEditNote_24->setPlainText(text19);
    fileNote19.close();
    if(!fileNoteName19.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName19(&fileNoteName19);
    QString textName19 = inName19.readAll();
    ui->lineEditNote_24->setText(textName19);
    fileNoteName19.close();

}
void MainWindow::on_pushButtonNote20_clicked()
{
    ui->groupBoxAllNotes->show();
    ui->groupBoxShedule->hide();
    ui->groupBoxNote->hide();
    ui->groupBoxNote_2->hide();
    ui->groupBoxNote_3->hide();
    ui->groupBoxNote_4->hide();
    ui->groupBoxNote_5->hide();
    ui->groupBoxNote_6->hide();
    ui->groupBoxNote_7->hide();
    ui->groupBoxNote_8->hide();
    ui->groupBoxNote_9->hide();
    ui->groupBoxNote_10->hide();
    ui->groupBoxNote_11->hide();
    ui->groupBoxNote_12->hide();
    ui->groupBoxNote_13->hide();
    ui->groupBoxNote_14->hide();
    ui->groupBoxNote_15->hide();
    ui->groupBoxNote_16->hide();
    ui->groupBoxNote_17->hide();
    ui->groupBoxNote_18->hide();
    ui->groupBoxNote_19->hide();
    ui->groupBoxNote_20->show();
    QFile fileNote20("FileNote20.txt");
    QFile fileNoteName20("FileNoteName20.txt");
    if(!fileNote20.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in20(&fileNote20);
    QString text20 = in20.readAll();
    ui->textEditNote_25->setPlainText(text20);
    fileNote20.close();
    if(!fileNoteName20.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream inName20(&fileNoteName20);
    QString textName20 = inName20.readAll();
    ui->lineEditNote_25->setText(textName20);
    fileNoteName20.close();

}
