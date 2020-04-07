#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QTextEdit>
#include <QMessageBox>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBoxShedule->hide();
    ui->groupBoxNote1->hide();
    ui->groupBoxNote2->hide();

    QFile fileNote1("FileNote1.txt");
    QFile fileNote2("FileNote2.txt");
    QFile fileNote3("FileNote3.txt");
    QFile fileNote4("FileNote4.txt");
    QFile fileNote5("FileNote5.txt");
    QFile fileNote6("FileNote6.txt");
    QFile fileNote7("FileNote7.txt");
    QFile fileNote8("FileNote8.txt");

    if(fileNote1.size()==0) ui->textEditNote1->hide();
    if(fileNote2.size()==0) ui->textEditNote2->hide();
    if(fileNote3.size()==0) ui->textEditNote3->hide();
    if(fileNote4.size()==0) ui->textEditNote4->hide();
    if(fileNote5.size()==0) ui->textEditNote5->hide();
    if(fileNote6.size()==0) ui->textEditNote6->hide();
    if(fileNote7.size()==0) ui->textEditNote7->hide();
    if(fileNote8.size()==0) ui->textEditNote8->hide();
    QObject::connect(ui->pushButtonExit,&QPushButton::clicked,this,&MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonShedule_clicked()
{
    ui->groupBoxShedule->show();
    ui->groupBoxNote1->hide();
    ui->groupBoxNote2->hide();

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
    file9.close();
    if(!file10.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in10(&file10);
    QString text10 = in10.readAll();
    ui->textEdit_10->setPlainText(text10);
    file10.close();
    if(!file11.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in11(&file11);
    QString text11 = in11.readAll();
    ui->textEdit_11->setPlainText(text11);
    file11.close();
    if(!file12.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in12(&file12);
    QString text12 = in12.readAll();
    ui->textEdit_12->setPlainText(text12);
    file12.close();


    if(!file13.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in13(&file13);
    QString text13 = in13.readAll();
    ui->textEdit_13->setPlainText(text13);
    file13.close();


    if(!file14.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in14(&file14);
    QString text14 = in14.readAll();
    ui->textEdit_14->setPlainText(text14);
    file14.close();


    if(!file15.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in15(&file15);
    QString text15 = in15.readAll();
    ui->textEdit_15->setPlainText(text15);
    file15.close();


    if(!file16.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in16(&file16);
    QString text16 = in16.readAll();
    ui->textEdit_16->setPlainText(text16);
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
    file41.close();


    if(!file42.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in42(&file42);
    QString text42 = in42.readAll();
    ui->textEdit_42->setPlainText(text42);
    file42.close();


    if(!file43.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in43(&file43);
    QString text43 = in43.readAll();
    ui->textEdit_43->setPlainText(text43);
    file43.close();


    if(!file44.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in44(&file44);
    QString text44 = in44.readAll();
    ui->textEdit_44->setPlainText(text44);
    file44.close();


    if(!file45.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in45(&file45);
    QString text45 = in45.readAll();
    ui->textEdit_45->setPlainText(text45);
    file45.close();


    if(!file46.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in46(&file46);
    QString text46 = in46.readAll();
    ui->textEdit_46->setPlainText(text46);
    file46.close();


    if(!file47.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in47(&file47);
    QString text47 = in47.readAll();
    ui->textEdit_47->setPlainText(text47);
    file47.close();


    if(!file48.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in48(&file48);
    QString text48 = in48.readAll();
    ui->textEdit_48->setPlainText(text48);
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
    file65.close();

    if(!file66.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in66(&file66);
    QString text66 = in66.readAll();
    ui->textEdit_66->setPlainText(text66);
    file66.close();

    if(!file67.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in67(&file67);
    QString text67 = in67.readAll();
    ui->textEdit_67->setPlainText(text67);
    file67.close();

    if(!file68.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in68(&file68);
    QString text68 = in68.readAll();
    ui->textEdit_68->setPlainText(text68);
    file68.close();

    if(!file69.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in69(&file69);
    QString text69 = in69.readAll();
    ui->textEdit_69->setPlainText(text69);
    file69.close();

    if(!file70.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in70(&file70);
    QString text70 = in70.readAll();
    ui->textEdit_70->setPlainText(text70);
    file70.close();

    if(!file71.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in71(&file71);
    QString text71 = in71.readAll();
    ui->textEdit_71->setPlainText(text71);
    file71.close();


    if(!file72.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in72(&file72);
    QString text72 = in72.readAll();
    ui->textEdit_72->setPlainText(text72);
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
    file89.close();

    if(!file90.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in90(&file90);
    QString text90 = in90.readAll();
    ui->textEdit_90->setPlainText(text90);
    file90.close();

    if(!file91.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in91(&file91);
    QString text91 = in91.readAll();
    ui->textEdit_91->setPlainText(text91);
    file91.close();

    if(!file92.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in92(&file92);
    QString text92 = in92.readAll();
    ui->textEdit_92->setPlainText(text92);
    file92.close();

    if(!file93.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in93(&file93);
    QString text93 = in93.readAll();
    ui->textEdit_93->setPlainText(text93);
    file93.close();

    if(!file94.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in94(&file94);
    QString text94 = in94.readAll();
    ui->textEdit_94->setPlainText(text94);
    file94.close();

    if(!file95.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in95(&file95);
    QString text95 = in95.readAll();
    ui->textEdit_95->setPlainText(text95);
    file95.close();

    if(!file96.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in96(&file96);
    QString text96 = in96.readAll();
    ui->textEdit_96->setPlainText(text96);
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
    file113.close();


    if(!file114.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in114(&file114);
    QString text114 = in114.readAll();
    ui->textEdit_114->setPlainText(text114);
    file114.close();


    if(!file115.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in115(&file115);
    QString text115 = in115.readAll();
    ui->textEdit_115->setPlainText(text115);
    file115.close();


    if(!file116.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in116(&file116);
    QString text116 = in116.readAll();
    ui->textEdit_116->setPlainText(text116);
    file116.close();


    if(!file117.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in117(&file117);
    QString text117 = in117.readAll();
    ui->textEdit_117->setPlainText(text117);
    file117.close();


    if(!file118.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in118(&file118);
    QString text118 = in118.readAll();
    ui->textEdit_118->setPlainText(text118);
    file118.close();


    if(!file119.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in119(&file119);
    QString text119 = in119.readAll();
    ui->textEdit_119->setPlainText(text119);
    file119.close();


    if(!file120.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in120(&file120);
    QString text120 = in120.readAll();
    ui->textEdit_120->setPlainText(text120);
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


    if(!file128.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in128(&file128);
    QString text128 = in128.readAll();
    ui->textEdit_128->setPlainText(text128);
    file128.close();
}

void MainWindow::on_pushButtonNote1_clicked()
{
    ui->groupBoxShedule->hide();
    ui->groupBoxNote1->show();
    ui->groupBoxNote2->hide();

    QFile fileNote1("FileNote1.txt");
    QFile fileNote2("FileNote2.txt");
    QFile fileNote3("FileNote3.txt");
    QFile fileNote4("FileNote4.txt");
    QFile fileNote5("FileNote5.txt");
    QFile fileNote6("FileNote6.txt");
    QFile fileNote7("FileNote7.txt");
    QFile fileNote8("FileNote8.txt");

    if(!fileNote1.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in(&fileNote1);
    QString Note1 = in.readAll();
    ui->textEditNote1->setPlainText(Note1);
    fileNote1.close();

    if(!fileNote2.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in2(&fileNote2);
    QString Note2 = in2.readAll();
    ui->textEditNote2->setPlainText(Note2);
    fileNote2.close();

    if(!fileNote3.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in3(&fileNote3);
    QString Note3 = in3.readAll();
    ui->textEditNote3->setPlainText(Note3);
    fileNote3.close();

    if(!fileNote4.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in4(&fileNote4);
    QString Note4 = in4.readAll();
    ui->textEditNote4->setPlainText(Note4);
    fileNote4.close();

    if(!fileNote5.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in5(&fileNote5);
    QString Note5 = in.readAll();
    ui->textEditNote5->setPlainText(Note5);
    fileNote5.close();

    if(!fileNote6.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in6(&fileNote6);
    QString Note6 = in6.readAll();
    ui->textEditNote6->setPlainText(Note6);
    fileNote6.close();

    if(!fileNote7.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in7(&fileNote7);
    QString Note7 = in7.readAll();
    ui->textEditNote7->setPlainText(Note7);
    fileNote7.close();

    if(!fileNote8.open(QFile::ReadOnly | QFile::Text)){

    }
    QTextStream in8(&fileNote8);
    QString Note8 = in8.readAll();
    ui->textEditNote8->setPlainText(Note8);
    fileNote8.close();

}

void MainWindow::on_pushButtonNote2_clicked()
{
    ui->groupBoxShedule->hide();
    ui->groupBoxNote1->hide();
    ui->groupBoxNote2->show();
}

void MainWindow::on_pushButtonSave_clicked()
{
    QFile fileNote1("FileNote1.txt");
    QFile fileNote2("FileNote2.txt");
    QFile fileNote3("FileNote3.txt");
    QFile fileNote4("FileNote4.txt");
    QFile fileNote5("FileNote5.txt");
    QFile fileNote6("FileNote6.txt");
    QFile fileNote7("FileNote7.txt");
    QFile fileNote8("FileNote8.txt");

    if(!fileNote1.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out1(&fileNote1);
    QString Note1 = ui->textEditNote1->toPlainText();
    out1 << Note1;
    fileNote1.flush();
    fileNote1.close();

    if(!fileNote2.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out2(&fileNote2);
    QString Note2 = ui->textEditNote2->toPlainText();
    out2 << Note2;
    fileNote2.flush();
    fileNote2.close();

    if(!fileNote3.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out3(&fileNote3);
    QString Note3 = ui->textEditNote3->toPlainText();
    out3 << Note3;
    fileNote3.flush();
    fileNote3.close();

    if(!fileNote4.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out4(&fileNote4);
    QString Note4 = ui->textEditNote4->toPlainText();
    out4 << Note4;
    fileNote4.flush();
    fileNote4.close();

    if(!fileNote5.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out5(&fileNote5);
    QString Note5 = ui->textEditNote5->toPlainText();
    out5 << Note5;
    fileNote5.flush();
    fileNote5.close();

    if(!fileNote6.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out6(&fileNote6);
    QString Note6 = ui->textEditNote6->toPlainText();
    out6 << Note6;
    fileNote6.flush();
    fileNote6.close();

    if(!fileNote7.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out7(&fileNote7);
    QString Note7 = ui->textEditNote7->toPlainText();
    out7 << Note7;
    fileNote7.flush();
    fileNote7.close();

    if(!fileNote8.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out8(&fileNote8);
    QString Note8 = ui->textEditNote8->toPlainText();
    out8 << Note8;
    fileNote8.flush();
    fileNote8.close();


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
    if(!file9.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out9(&file9);
    QString text9 = ui->textEdit_9->toPlainText();
    out9 << text9;
    file9.flush();
    file9.close();

    if(!file10.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out10(&file10);
    QString text10 = ui->textEdit_10->toPlainText();
    out10 << text10;
    file10.flush();
    file10.close();


    if(!file11.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out11(&file11);
    QString text11 = ui->textEdit_11->toPlainText();
    out11 << text11;
    file11.flush();
    file11.close();
    if(!file12.open(QFile::WriteOnly | QFile::Text)){

    }
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

    if(!file128.open(QFile::WriteOnly | QFile::Text)){

    }
    QTextStream out128(&file128);
    QString text128 = ui->textEdit_128->toPlainText();
    out128 << text128;
    file128.flush();
    file128.close();
}

void MainWindow::on_pushButtonAdd_clicked()
{
    if(ui->textEditNote1->isHidden())
        ui->textEditNote1->show();
    else if (ui->textEditNote2->isHidden())
        ui->textEditNote2->show();
    else if (ui->textEditNote3->isHidden())
        ui->textEditNote3->show();
    else if (ui->textEditNote4->isHidden())
        ui->textEditNote4->show();
    else if (ui->textEditNote5->isHidden())
        ui->textEditNote5->show();
    else if (ui->textEditNote6->isHidden())
        ui->textEditNote6->show();
    else if (ui->textEditNote7->isHidden())
        ui->textEditNote7->show();
    else if (ui->textEditNote8->isHidden())
        ui->textEditNote8->show();
    else QMessageBox::information(this,"Sorry!","Maximum number of notes added!");

}

void MainWindow::on_pushButtonSubtract_clicked()
{
    QFile fileNote1("FileNote1.txt");
    QFile fileNote2("FileNote2.txt");
    QFile fileNote3("FileNote3.txt");
    QFile fileNote4("FileNote4.txt");
    QFile fileNote5("FileNote5.txt");
    QFile fileNote6("FileNote6.txt");
    QFile fileNote7("FileNote7.txt");
    QFile fileNote8("FileNote8.txt");
    if(ui->textEditNote8->isVisible()){
        ui->textEditNote8->hide();
        fileNote8.resize(0);}
    else if (ui->textEditNote7->isVisible()){
        ui->textEditNote7->hide();
        fileNote7.resize(0);}
    else if (ui->textEditNote6->isVisible()){
        ui->textEditNote6->hide();
        fileNote6.resize(0);}
    else if (ui->textEditNote5->isVisible()){
        ui->textEditNote5->hide();
        fileNote5.resize(0);}
    else if (ui->textEditNote4->isVisible()){
        ui->textEditNote4->hide();
        fileNote4.resize(0);}
    else if (ui->textEditNote3->isVisible()){
        ui->textEditNote3->hide();
        fileNote3.resize(0);}
    else if (ui->textEditNote2->isVisible()){
        ui->textEditNote2->hide();
        fileNote2.resize(0);}
    else if (ui->textEditNote1->isVisible()){
        ui->textEditNote1->hide();
        fileNote1.resize(0);}
    else QMessageBox::information(this,"Sorry!","You substract all notes!");
}
