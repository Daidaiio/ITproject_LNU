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

    ReadNotes();
    QFile Notes("Notes.txt");
    if(!Notes.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in(&Notes);
    QString string[40];
    while(!in.atEnd()){
        for(int i = 0; i < 40; i++){
            string[i] = in.readLine();
        }
    }
    if(string[0].isEmpty() && string[1].isEmpty()) ui->pushButtonNote1->hide();
    if(string[2].isEmpty() && string[3].isEmpty()) ui->pushButtonNote2->hide();
    if(string[4].isEmpty() && string[5].isEmpty()) ui->pushButtonNote3->hide();
    if(string[6].isEmpty() && string[7].isEmpty()) ui->pushButtonNote4->hide();
    if(string[8].isEmpty() && string[9].isEmpty()) ui->pushButtonNote5->hide();
    if(string[10].isEmpty() && string[11].isEmpty()) ui->pushButtonNote6->hide();
    if(string[12].isEmpty() && string[13].isEmpty()) ui->pushButtonNote7->hide();
    if(string[14].isEmpty() && string[15].isEmpty()) ui->pushButtonNote8->hide();
    if(string[16].isEmpty() && string[17].isEmpty()) ui->pushButtonNote9->hide();
    if(string[18].isEmpty() && string[19].isEmpty()) ui->pushButtonNote10->hide();
    if(string[20].isEmpty() && string[21].isEmpty()) ui->pushButtonNote11->hide();
    if(string[22].isEmpty() && string[23].isEmpty()) ui->pushButtonNote12->hide();
    if(string[24].isEmpty() && string[25].isEmpty()) ui->pushButtonNote13->hide();
    if(string[26].isEmpty() && string[27].isEmpty()) ui->pushButtonNote14->hide();
    if(string[28].isEmpty() && string[29].isEmpty()) ui->pushButtonNote15->hide();
    if(string[30].isEmpty() && string[31].isEmpty()) ui->pushButtonNote16->hide();
    if(string[32].isEmpty() && string[33].isEmpty()) ui->pushButtonNote17->hide();
    if(string[34].isEmpty() && string[35].isEmpty()) ui->pushButtonNote18->hide();
    if(string[36].isEmpty() && string[37].isEmpty()) ui->pushButtonNote19->hide();
    if(string[38].isEmpty() && string[39].isEmpty()) ui->pushButtonNote20->hide();

    SetNameToButton();
    Notes.close();
    QObject::connect(ui->pushButtonExit,&QPushButton::clicked,this,&MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ReadFromFile()
{
    QFile file("File.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in(&file);
    QString text[192];
    while(!in.atEnd())
    {
        for(int i = 0; i < 192; i++)
        {
            text[i] = in.readLine();
        }
    }
    ui->textEdit0->setPlainText(text[0]);
    ui->textEdit1->setPlainText(text[1]);
    ui->textEdit2->setPlainText(text[2]);
    ui->textEdit3->setPlainText(text[3]);
    ui->textEdit4->setPlainText(text[4]);
    ui->textEdit5->setPlainText(text[5]);
    ui->textEdit6->setPlainText(text[6]);
    ui->textEdit7->setPlainText(text[7]);
    ui->textEdit8->setPlainText(text[8]);
    ui->textEdit9->setPlainText(text[9]);
    ui->textEdit10->setPlainText(text[10]);
    ui->textEdit11->setPlainText(text[11]);
    ui->textEdit12->setPlainText(text[12]);
    ui->textEdit13->setPlainText(text[13]);
    ui->textEdit14->setPlainText(text[14]);
    ui->textEdit15->setPlainText(text[15]);
    ui->textEdit16->setPlainText(text[16]);
    ui->textEdit17->setPlainText(text[17]);
    ui->textEdit18->setPlainText(text[18]);
    ui->textEdit19->setPlainText(text[19]);
    ui->textEdit20->setPlainText(text[20]);
    ui->textEdit21->setPlainText(text[21]);
    ui->textEdit22->setPlainText(text[22]);
    ui->textEdit23->setPlainText(text[23]);
    ui->textEdit24->setPlainText(text[24]);
    ui->textEdit25->setPlainText(text[25]);
    ui->textEdit26->setPlainText(text[26]);
    ui->textEdit27->setPlainText(text[27]);
    ui->textEdit28->setPlainText(text[28]);
    ui->textEdit29->setPlainText(text[29]);
    ui->textEdit30->setPlainText(text[30]);
    ui->textEdit31->setPlainText(text[31]);
    ui->textEdit32->setPlainText(text[32]);
    ui->textEdit33->setPlainText(text[33]);
    ui->textEdit34->setPlainText(text[34]);
    ui->textEdit35->setPlainText(text[35]);
    ui->textEdit36->setPlainText(text[36]);
    ui->textEdit37->setPlainText(text[37]);
    ui->textEdit38->setPlainText(text[38]);
    ui->textEdit39->setPlainText(text[39]);
    ui->textEdit40->setPlainText(text[40]);
    ui->textEdit41->setPlainText(text[41]);
    ui->textEdit42->setPlainText(text[42]);
    ui->textEdit43->setPlainText(text[43]);
    ui->textEdit44->setPlainText(text[44]);
    ui->textEdit45->setPlainText(text[45]);
    ui->textEdit46->setPlainText(text[46]);
    ui->textEdit47->setPlainText(text[47]);
    ui->textEdit48->setPlainText(text[48]);
    ui->textEdit49->setPlainText(text[49]);
    ui->textEdit50->setPlainText(text[50]);
    ui->textEdit51->setPlainText(text[51]);
    ui->textEdit52->setPlainText(text[52]);
    ui->textEdit53->setPlainText(text[53]);
    ui->textEdit54->setPlainText(text[54]);
    ui->textEdit55->setPlainText(text[55]);
    ui->textEdit56->setPlainText(text[56]);
    ui->textEdit57->setPlainText(text[57]);
    ui->textEdit58->setPlainText(text[58]);
    ui->textEdit59->setPlainText(text[59]);
    ui->textEdit60->setPlainText(text[60]);
    ui->textEdit61->setPlainText(text[61]);
    ui->textEdit62->setPlainText(text[62]);
    ui->textEdit63->setPlainText(text[63]);
    ui->textEdit64->setPlainText(text[64]);
    ui->textEdit65->setPlainText(text[65]);
    ui->textEdit66->setPlainText(text[66]);
    ui->textEdit67->setPlainText(text[67]);
    ui->textEdit68->setPlainText(text[68]);
    ui->textEdit69->setPlainText(text[69]);
    ui->textEdit70->setPlainText(text[70]);
    ui->textEdit71->setPlainText(text[71]);
    ui->textEdit72->setPlainText(text[72]);
    ui->textEdit73->setPlainText(text[73]);
    ui->textEdit74->setPlainText(text[74]);
    ui->textEdit75->setPlainText(text[75]);
    ui->textEdit76->setPlainText(text[76]);
    ui->textEdit77->setPlainText(text[77]);
    ui->textEdit78->setPlainText(text[78]);
    ui->textEdit79->setPlainText(text[79]);
    ui->textEdit80->setPlainText(text[80]);
    ui->textEdit81->setPlainText(text[81]);
    ui->textEdit82->setPlainText(text[82]);
    ui->textEdit83->setPlainText(text[83]);
    ui->textEdit84->setPlainText(text[84]);
    ui->textEdit85->setPlainText(text[85]);
    ui->textEdit86->setPlainText(text[86]);
    ui->textEdit87->setPlainText(text[87]);
    ui->textEdit88->setPlainText(text[88]);
    ui->textEdit89->setPlainText(text[89]);
    ui->textEdit90->setPlainText(text[90]);
    ui->textEdit91->setPlainText(text[91]);
    ui->textEdit92->setPlainText(text[92]);
    ui->textEdit93->setPlainText(text[93]);
    ui->textEdit94->setPlainText(text[94]);
    ui->textEdit95->setPlainText(text[95]);
    ui->textEdit96->setPlainText(text[96]);
    ui->textEdit97->setPlainText(text[97]);
    ui->textEdit98->setPlainText(text[98]);
    ui->textEdit99->setPlainText(text[99]);
    ui->textEdit100->setPlainText(text[100]);
    ui->textEdit101->setPlainText(text[101]);
    ui->textEdit102->setPlainText(text[102]);
    ui->textEdit103->setPlainText(text[103]);
    ui->textEdit104->setPlainText(text[104]);
    ui->textEdit105->setPlainText(text[105]);
    ui->textEdit106->setPlainText(text[106]);
    ui->textEdit107->setPlainText(text[107]);
    ui->textEdit108->setPlainText(text[108]);
    ui->textEdit109->setPlainText(text[109]);
    ui->textEdit110->setPlainText(text[110]);
    ui->textEdit111->setPlainText(text[111]);
    ui->textEdit112->setPlainText(text[112]);
    ui->textEdit113->setPlainText(text[113]);
    ui->textEdit114->setPlainText(text[114]);
    ui->textEdit115->setPlainText(text[115]);
    ui->textEdit116->setPlainText(text[116]);
    ui->textEdit117->setPlainText(text[117]);
    ui->textEdit118->setPlainText(text[118]);
    ui->textEdit119->setPlainText(text[119]);
    ui->textEdit120->setPlainText(text[120]);
    ui->textEdit121->setPlainText(text[121]);
    ui->textEdit122->setPlainText(text[122]);
    ui->textEdit123->setPlainText(text[123]);
    ui->textEdit124->setPlainText(text[124]);
    ui->textEdit125->setPlainText(text[125]);
    ui->textEdit126->setPlainText(text[126]);
    ui->textEdit127->setPlainText(text[127]);
    ui->textEdit128->setPlainText(text[128]);
    ui->textEdit129->setPlainText(text[129]);
    ui->textEdit130->setPlainText(text[130]);
    ui->textEdit131->setPlainText(text[131]);
    ui->textEdit132->setPlainText(text[132]);
    ui->textEdit133->setPlainText(text[133]);
    ui->textEdit134->setPlainText(text[134]);
    ui->textEdit135->setPlainText(text[135]);
    ui->textEdit136->setPlainText(text[136]);
    ui->textEdit137->setPlainText(text[137]);
    ui->textEdit138->setPlainText(text[138]);
    ui->textEdit139->setPlainText(text[139]);
    ui->textEdit140->setPlainText(text[140]);
    ui->textEdit141->setPlainText(text[141]);
    ui->textEdit142->setPlainText(text[142]);
    ui->textEdit143->setPlainText(text[143]);
    ui->textEdit144->setPlainText(text[144]);
    ui->textEdit145->setPlainText(text[145]);
    ui->textEdit146->setPlainText(text[146]);
    ui->textEdit147->setPlainText(text[147]);
    ui->textEdit148->setPlainText(text[148]);
    ui->textEdit149->setPlainText(text[149]);
    ui->textEdit150->setPlainText(text[150]);
    ui->textEdit151->setPlainText(text[151]);
    ui->textEdit152->setPlainText(text[152]);
    ui->textEdit153->setPlainText(text[153]);
    ui->textEdit154->setPlainText(text[154]);
    ui->textEdit155->setPlainText(text[155]);
    ui->textEdit156->setPlainText(text[156]);
    ui->textEdit157->setPlainText(text[157]);
    ui->textEdit158->setPlainText(text[158]);
    ui->textEdit159->setPlainText(text[159]);
    ui->textEdit160->setPlainText(text[160]);
    ui->textEdit161->setPlainText(text[161]);
    ui->textEdit162->setPlainText(text[162]);
    ui->textEdit163->setPlainText(text[163]);
    ui->textEdit164->setPlainText(text[164]);
    ui->textEdit165->setPlainText(text[165]);
    ui->textEdit166->setPlainText(text[166]);
    ui->textEdit167->setPlainText(text[167]);
    ui->textEdit168->setPlainText(text[168]);
    ui->textEdit169->setPlainText(text[169]);
    ui->textEdit170->setPlainText(text[170]);
    ui->textEdit171->setPlainText(text[171]);
    ui->textEdit172->setPlainText(text[172]);
    ui->textEdit173->setPlainText(text[173]);
    ui->textEdit174->setPlainText(text[174]);
    ui->textEdit175->setPlainText(text[175]);
    ui->textEdit176->setPlainText(text[176]);
    ui->textEdit177->setPlainText(text[177]);
    ui->textEdit178->setPlainText(text[178]);
    ui->textEdit179->setPlainText(text[179]);
    ui->textEdit180->setPlainText(text[180]);
    ui->textEdit181->setPlainText(text[181]);
    ui->textEdit182->setPlainText(text[182]);
    ui->textEdit183->setPlainText(text[183]);
    ui->textEdit184->setPlainText(text[184]);
    ui->textEdit185->setPlainText(text[185]);
    ui->textEdit186->setPlainText(text[186]);
    ui->textEdit187->setPlainText(text[187]);
    ui->textEdit188->setPlainText(text[188]);
    ui->textEdit189->setPlainText(text[189]);
    ui->textEdit190->setPlainText(text[190]);
    ui->textEdit191->setPlainText(text[191]);
    ui->textBrowserMon1->setPlainText(text[0]);
    ui->textBrowserMon2->setPlainText(text[1]);
    ui->textBrowserMon3->setPlainText(text[2]);
    ui->textBrowserMon4->setPlainText(text[3]);
    ui->textBrowserMon5->setPlainText(text[4]);
    ui->textBrowserMon6->setPlainText(text[5]);
    ui->textBrowserMon7->setPlainText(text[6]);
    ui->textBrowserMon8->setPlainText(text[7]);
    ui->textBrowserTue1->setPlainText(text[32]);
    ui->textBrowserTue2->setPlainText(text[33]);
    ui->textBrowserTue3->setPlainText(text[34]);
    ui->textBrowserTue4->setPlainText(text[35]);
    ui->textBrowserTue5->setPlainText(text[36]);
    ui->textBrowserTue6->setPlainText(text[37]);
    ui->textBrowserTue7->setPlainText(text[38]);
    ui->textBrowserTue8->setPlainText(text[39]);
    ui->textBrowserWed1->setPlainText(text[48]);
    ui->textBrowserWed2->setPlainText(text[49]);
    ui->textBrowserWed3->setPlainText(text[50]);
    ui->textBrowserWed4->setPlainText(text[51]);
    ui->textBrowserWed5->setPlainText(text[52]);
    ui->textBrowserWed6->setPlainText(text[53]);
    ui->textBrowserWed7->setPlainText(text[54]);
    ui->textBrowserWed8->setPlainText(text[55]);
    ui->textBrowserThu1->setPlainText(text[80]);
    ui->textBrowserThu2->setPlainText(text[81]);
    ui->textBrowserThu3->setPlainText(text[82]);
    ui->textBrowserThu4->setPlainText(text[83]);
    ui->textBrowserThu5->setPlainText(text[84]);
    ui->textBrowserThu6->setPlainText(text[85]);
    ui->textBrowserThu7->setPlainText(text[86]);
    ui->textBrowserThu8->setPlainText(text[87]);
    ui->textBrowserFri1->setPlainText(text[128]);
    ui->textBrowserFri2->setPlainText(text[129]);
    ui->textBrowserFri3->setPlainText(text[130]);
    ui->textBrowserFri4->setPlainText(text[131]);
    ui->textBrowserFri5->setPlainText(text[132]);
    ui->textBrowserFri6->setPlainText(text[133]);
    ui->textBrowserFri7->setPlainText(text[134]);
    ui->textBrowserFri8->setPlainText(text[135]);
    ui->textBrowserSat1->setPlainText(text[112]);
    ui->textBrowserSat2->setPlainText(text[113]);
    ui->textBrowserSat3->setPlainText(text[114]);
    ui->textBrowserSat4->setPlainText(text[115]);
    ui->textBrowserSat5->setPlainText(text[116]);
    ui->textBrowserSat6->setPlainText(text[117]);
    ui->textBrowserSat7->setPlainText(text[118]);
    ui->textBrowserSat8->setPlainText(text[119]);


    file.close();
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

    ReadFromFile();

}

void MainWindow::WriteInFile()
{
    QFile file("File.txt");
    QString text[192];
    if(!file.open(QFile::WriteOnly | QFile::Text)){}
    QTextStream out(&file);
    text[0] = ui->textEdit0->toPlainText();
    text[1] = ui->textEdit1->toPlainText();
    text[2] = ui->textEdit2->toPlainText();
    text[3] = ui->textEdit3->toPlainText();
    text[4] = ui->textEdit4->toPlainText();
    text[5] = ui->textEdit5->toPlainText();
    text[6] = ui->textEdit6->toPlainText();
    text[7] = ui->textEdit7->toPlainText();
    text[8] = ui->textEdit8->toPlainText();
    text[9] = ui->textEdit9->toPlainText();
    text[10] = ui->textEdit10->toPlainText();
    text[11] = ui->textEdit11->toPlainText();
    text[12] = ui->textEdit12->toPlainText();
    text[13] = ui->textEdit13->toPlainText();
    text[14] = ui->textEdit14->toPlainText();
    text[15] = ui->textEdit15->toPlainText();
    text[16] = ui->textEdit16->toPlainText();
    text[17] = ui->textEdit17->toPlainText();
    text[18] = ui->textEdit18->toPlainText();
    text[19] = ui->textEdit19->toPlainText();
    text[20] = ui->textEdit20->toPlainText();
    text[21] = ui->textEdit21->toPlainText();
    text[22] = ui->textEdit22->toPlainText();
    text[23] = ui->textEdit23->toPlainText();
    text[24] = ui->textEdit24->toPlainText();
    text[25] = ui->textEdit25->toPlainText();
    text[26] = ui->textEdit26->toPlainText();
    text[27] = ui->textEdit27->toPlainText();
    text[28] = ui->textEdit28->toPlainText();
    text[29] = ui->textEdit29->toPlainText();
    text[30] = ui->textEdit30->toPlainText();
    text[31] = ui->textEdit31->toPlainText();
    text[32] = ui->textEdit32->toPlainText();
    text[33] = ui->textEdit33->toPlainText();
    text[34] = ui->textEdit34->toPlainText();
    text[35] = ui->textEdit35->toPlainText();
    text[36] = ui->textEdit36->toPlainText();
    text[37] = ui->textEdit37->toPlainText();
    text[38] = ui->textEdit38->toPlainText();
    text[39] = ui->textEdit39->toPlainText();
    text[40] = ui->textEdit40->toPlainText();
    text[41] = ui->textEdit41->toPlainText();
    text[42] = ui->textEdit42->toPlainText();
    text[43] = ui->textEdit43->toPlainText();
    text[44] = ui->textEdit44->toPlainText();
    text[45] = ui->textEdit45->toPlainText();
    text[46] = ui->textEdit46->toPlainText();
    text[47] = ui->textEdit47->toPlainText();
    text[48] = ui->textEdit48->toPlainText();
    text[49] = ui->textEdit49->toPlainText();
    text[50] = ui->textEdit50->toPlainText();
    text[51] = ui->textEdit51->toPlainText();
    text[52] = ui->textEdit52->toPlainText();
    text[53] = ui->textEdit53->toPlainText();
    text[54] = ui->textEdit54->toPlainText();
    text[55] = ui->textEdit55->toPlainText();
    text[56] = ui->textEdit56->toPlainText();
    text[57] = ui->textEdit57->toPlainText();
    text[58] = ui->textEdit58->toPlainText();
    text[59] = ui->textEdit59->toPlainText();
    text[60] = ui->textEdit60->toPlainText();
    text[61] = ui->textEdit61->toPlainText();
    text[62] = ui->textEdit62->toPlainText();
    text[63] = ui->textEdit63->toPlainText();
    text[64] = ui->textEdit64->toPlainText();
    text[65] = ui->textEdit65->toPlainText();
    text[66] = ui->textEdit66->toPlainText();
    text[67] = ui->textEdit67->toPlainText();
    text[68] = ui->textEdit68->toPlainText();
    text[69] = ui->textEdit69->toPlainText();
    text[70] = ui->textEdit70->toPlainText();
    text[71] = ui->textEdit71->toPlainText();
    text[72] = ui->textEdit72->toPlainText();
    text[73] = ui->textEdit73->toPlainText();
    text[74] = ui->textEdit74->toPlainText();
    text[75] = ui->textEdit75->toPlainText();
    text[76] = ui->textEdit76->toPlainText();
    text[77] = ui->textEdit77->toPlainText();
    text[78] = ui->textEdit78->toPlainText();
    text[79] = ui->textEdit79->toPlainText();
    text[80] = ui->textEdit80->toPlainText();
    text[81] = ui->textEdit81->toPlainText();
    text[82] = ui->textEdit82->toPlainText();
    text[83] = ui->textEdit83->toPlainText();
    text[84] = ui->textEdit84->toPlainText();
    text[85] = ui->textEdit85->toPlainText();
    text[86] = ui->textEdit86->toPlainText();
    text[87] = ui->textEdit87->toPlainText();
    text[88] = ui->textEdit88->toPlainText();
    text[89] = ui->textEdit89->toPlainText();
    text[90] = ui->textEdit90->toPlainText();
    text[91] = ui->textEdit91->toPlainText();
    text[92] = ui->textEdit92->toPlainText();
    text[93] = ui->textEdit93->toPlainText();
    text[94] = ui->textEdit94->toPlainText();
    text[95] = ui->textEdit95->toPlainText();
    text[96] = ui->textEdit96->toPlainText();
    text[97] = ui->textEdit97->toPlainText();
    text[98] = ui->textEdit98->toPlainText();
    text[99] = ui->textEdit99->toPlainText();
    text[100] = ui->textEdit100->toPlainText();
    text[101] = ui->textEdit101->toPlainText();
    text[102] = ui->textEdit102->toPlainText();
    text[103] = ui->textEdit103->toPlainText();
    text[104] = ui->textEdit104->toPlainText();
    text[105] = ui->textEdit105->toPlainText();
    text[106] = ui->textEdit106->toPlainText();
    text[107] = ui->textEdit107->toPlainText();
    text[108] = ui->textEdit108->toPlainText();
    text[109] = ui->textEdit109->toPlainText();
    text[110] = ui->textEdit110->toPlainText();
    text[111] = ui->textEdit111->toPlainText();
    text[112] = ui->textEdit112->toPlainText();
    text[113] = ui->textEdit113->toPlainText();
    text[114] = ui->textEdit114->toPlainText();
    text[115] = ui->textEdit115->toPlainText();
    text[116] = ui->textEdit116->toPlainText();
    text[117] = ui->textEdit117->toPlainText();
    text[118] = ui->textEdit118->toPlainText();
    text[119] = ui->textEdit119->toPlainText();
    text[120] = ui->textEdit120->toPlainText();
    text[121] = ui->textEdit121->toPlainText();
    text[122] = ui->textEdit122->toPlainText();
    text[123] = ui->textEdit123->toPlainText();
    text[124] = ui->textEdit124->toPlainText();
    text[125] = ui->textEdit125->toPlainText();
    text[126] = ui->textEdit126->toPlainText();
    text[127] = ui->textEdit127->toPlainText();
    text[128] = ui->textEdit128->toPlainText();
    text[129] = ui->textEdit129->toPlainText();
    text[130] = ui->textEdit130->toPlainText();
    text[131] = ui->textEdit131->toPlainText();
    text[132] = ui->textEdit132->toPlainText();
    text[133] = ui->textEdit133->toPlainText();
    text[134] = ui->textEdit134->toPlainText();
    text[135] = ui->textEdit135->toPlainText();
    text[136] = ui->textEdit136->toPlainText();
    text[137] = ui->textEdit137->toPlainText();
    text[138] = ui->textEdit138->toPlainText();
    text[139] = ui->textEdit139->toPlainText();
    text[140] = ui->textEdit140->toPlainText();
    text[141] = ui->textEdit141->toPlainText();
    text[142] = ui->textEdit142->toPlainText();
    text[143] = ui->textEdit143->toPlainText();
    text[144] = ui->textEdit144->toPlainText();
    text[145] = ui->textEdit145->toPlainText();
    text[146] = ui->textEdit146->toPlainText();
    text[147] = ui->textEdit147->toPlainText();
    text[148] = ui->textEdit148->toPlainText();
    text[149] = ui->textEdit149->toPlainText();
    text[150] = ui->textEdit150->toPlainText();
    text[151] = ui->textEdit151->toPlainText();
    text[152] = ui->textEdit152->toPlainText();
    text[153] = ui->textEdit153->toPlainText();
    text[154] = ui->textEdit154->toPlainText();
    text[155] = ui->textEdit155->toPlainText();
    text[156] = ui->textEdit156->toPlainText();
    text[157] = ui->textEdit157->toPlainText();
    text[158] = ui->textEdit158->toPlainText();
    text[159] = ui->textEdit159->toPlainText();
    text[160] = ui->textEdit160->toPlainText();
    text[161] = ui->textEdit161->toPlainText();
    text[162] = ui->textEdit162->toPlainText();
    text[163] = ui->textEdit163->toPlainText();
    text[164] = ui->textEdit164->toPlainText();
    text[165] = ui->textEdit165->toPlainText();
    text[166] = ui->textEdit166->toPlainText();
    text[167] = ui->textEdit167->toPlainText();
    text[168] = ui->textEdit168->toPlainText();
    text[169] = ui->textEdit169->toPlainText();
    text[170] = ui->textEdit170->toPlainText();
    text[171] = ui->textEdit171->toPlainText();
    text[172] = ui->textEdit172->toPlainText();
    text[173] = ui->textEdit173->toPlainText();
    text[174] = ui->textEdit174->toPlainText();
    text[175] = ui->textEdit175->toPlainText();
    text[176] = ui->textEdit176->toPlainText();
    text[177] = ui->textEdit177->toPlainText();
    text[178] = ui->textEdit178->toPlainText();
    text[179] = ui->textEdit179->toPlainText();
    text[180] = ui->textEdit180->toPlainText();
    text[181] = ui->textEdit181->toPlainText();
    text[182] = ui->textEdit182->toPlainText();
    text[183] = ui->textEdit183->toPlainText();
    text[184] = ui->textEdit184->toPlainText();
    text[185] = ui->textEdit185->toPlainText();
    text[186] = ui->textEdit186->toPlainText();
    text[187] = ui->textEdit187->toPlainText();
    text[188] = ui->textEdit188->toPlainText();
    text[189] = ui->textEdit189->toPlainText();
    text[190] = ui->textEdit190->toPlainText();
    text[191] = ui->textEdit191->toPlainText();

    for(int i = 0; i < 192; i++)
    {
        out << text[i] <<"\n";
    }
    file.flush();
    file.close();

}

void MainWindow::WriteNotes(){
    QFile Notes("Notes.txt");
    if(!Notes.open(QFile::WriteOnly | QFile::Text)){};
    QTextStream out(&Notes);
    QString string[40];

    string[0] = ui->textEditNote1->toPlainText();
    string[1] = ui->lineEditNote1->text();
    string[2] = ui->textEditNote2->toPlainText();
    string[3] = ui->lineEditNote2->text();
    string[4] = ui->textEditNote3->toPlainText();
    string[5] = ui->lineEditNote3->text();
    string[6] = ui->textEditNote4->toPlainText();
    string[7] = ui->lineEditNote4->text();
    string[8] = ui->textEditNote5->toPlainText();
    string[9] = ui->lineEditNote5->text();
    string[10] = ui->textEditNote6->toPlainText();
    string[11] = ui->lineEditNote6->text();
    string[12] = ui->textEditNote7->toPlainText();
    string[13] = ui->lineEditNote7->text();
    string[14] = ui->textEditNote8->toPlainText();
    string[15] = ui->lineEditNote8->text();
    string[16] = ui->textEditNote9->toPlainText();
    string[17] = ui->lineEditNote9->text();
    string[18] = ui->textEditNote10->toPlainText();
    string[19] = ui->lineEditNote10->text();
    string[20] = ui->textEditNote11->toPlainText();
    string[21] = ui->lineEditNote11->text();
    string[22] = ui->textEditNote12->toPlainText();
    string[23] = ui->lineEditNote12->text();
    string[24] = ui->textEditNote13->toPlainText();
    string[25] = ui->lineEditNote13->text();
    string[26] = ui->textEditNote14->toPlainText();
    string[27] = ui->lineEditNote14->text();
    string[28] = ui->textEditNote15->toPlainText();
    string[29] = ui->lineEditNote15->text();
    string[30] = ui->textEditNote16->toPlainText();
    string[31] = ui->lineEditNote16->text();
    string[32] = ui->textEditNote17->toPlainText();
    string[33] = ui->lineEditNote17->text();
    string[34] = ui->textEditNote18->toPlainText();
    string[35] = ui->lineEditNote18->text();
    string[36] = ui->textEditNote19->toPlainText();
    string[37] = ui->lineEditNote19->text();
    string[38] = ui->textEditNote20->toPlainText();
    string[39] = ui->lineEditNote20->text();

    for(int i = 0; i < 40; i++)
    {
        out << string[i] <<"\n";
    }
    Notes.flush();
    Notes.close();
}

void MainWindow::ReadNotes(){
    QFile Notes("Notes.txt");
    if(!Notes.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in(&Notes);
    QString string[40];
    while(!in.atEnd()){
        for(int i = 0; i < 40; i++){
            string[i] = in.readLine();
        }
    }
    ui->textEditNote1->setPlainText(string[0]);
    ui->lineEditNote1->setText(string[1]);
    ui->textEditNote2->setPlainText(string[2]);
    ui->lineEditNote2->setText(string[3]);
    ui->textEditNote3->setPlainText(string[4]);
    ui->lineEditNote3->setText(string[5]);
    ui->textEditNote4->setPlainText(string[6]);
    ui->lineEditNote4->setText(string[7]);
    ui->textEditNote5->setPlainText(string[8]);
    ui->lineEditNote5->setText(string[9]);
    ui->textEditNote6->setPlainText(string[10]);
    ui->lineEditNote6->setText(string[11]);
    ui->textEditNote7->setPlainText(string[12]);
    ui->lineEditNote7->setText(string[13]);
    ui->textEditNote8->setPlainText(string[14]);
    ui->lineEditNote8->setText(string[15]);
    ui->textEditNote9->setPlainText(string[16]);
    ui->lineEditNote9->setText(string[17]);
    ui->textEditNote10->setPlainText(string[18]);
    ui->lineEditNote10->setText(string[19]);
    ui->textEditNote11->setPlainText(string[20]);
    ui->lineEditNote11->setText(string[21]);
    ui->textEditNote12->setPlainText(string[22]);
    ui->lineEditNote12->setText(string[23]);
    ui->textEditNote13->setPlainText(string[24]);
    ui->lineEditNote13->setText(string[25]);
    ui->textEditNote14->setPlainText(string[26]);
    ui->lineEditNote14->setText(string[27]);
    ui->textEditNote15->setPlainText(string[28]);
    ui->lineEditNote15->setText(string[29]);
    ui->textEditNote16->setPlainText(string[30]);
    ui->lineEditNote16->setText(string[31]);
    ui->textEditNote17->setPlainText(string[32]);
    ui->lineEditNote17->setText(string[33]);
    ui->textEditNote18->setPlainText(string[34]);
    ui->lineEditNote18->setText(string[35]);
    ui->textEditNote19->setPlainText(string[36]);
    ui->lineEditNote19->setText(string[37]);
    ui->textEditNote20->setPlainText(string[38]);
    ui->lineEditNote20->setText(string[39]);

    Notes.close();
}

void MainWindow::on_pushButtonSave_clicked()
{
    WriteInFile();

    WriteNotes();

    SetNameToButton();
}

void MainWindow::SetNameToButton()
{
    ReadNotes();
    QFile Notes("Notes.txt");
    if(!Notes.open(QFile::ReadOnly | QFile::Text)){}
    QTextStream in(&Notes);
    QString string[40];
    while(!in.atEnd()){
        for(int i = 0; i < 40; i++){
            string[i] = in.readLine();
        }
    }

    ui->pushButtonNote1->setText(string[1]);
    ui->pushButtonNote2->setText(string[3]);
    ui->pushButtonNote3->setText(string[5]);
    ui->pushButtonNote4->setText(string[7]);
    ui->pushButtonNote5->setText(string[9]);
    ui->pushButtonNote6->setText(string[11]);
    ui->pushButtonNote7->setText(string[13]);
    ui->pushButtonNote8->setText(string[15]);
    ui->pushButtonNote9->setText(string[17]);
    ui->pushButtonNote10->setText(string[19]);
    ui->pushButtonNote11->setText(string[21]);
    ui->pushButtonNote12->setText(string[23]);
    ui->pushButtonNote13->setText(string[25]);
    ui->pushButtonNote14->setText(string[27]);
    ui->pushButtonNote15->setText(string[29]);
    ui->pushButtonNote16->setText(string[31]);
    ui->pushButtonNote17->setText(string[33]);
    ui->pushButtonNote18->setText(string[35]);
    ui->pushButtonNote19->setText(string[37]);
    ui->pushButtonNote20->setText(string[39]);
    Notes.close();
}

void MainWindow::hide_Days(){
    ui->groupBoxSatHom->hide();
    ui->pushButtonPreviousWeek->hide();
    ui->groupBoxMon->hide();
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

void MainWindow::on_pushButtonMon_clicked()
{
    hide_Days();
    ui->groupBoxMon->show();
}

void MainWindow::on_pushButtonTue_clicked()
{
    hide_Days();
    ui->groupBoxTue->show();
}

void MainWindow::on_pushButtonWed_clicked()
{
    hide_Days();
    ui->groupBoxWed->show();
}

void MainWindow::on_pushButtonThu_clicked()
{
    hide_Days();
    ui->groupBoxThu->show();
}

void MainWindow::on_pushButtonFri_clicked()
{
    hide_Days();
    ui->groupBoxFri->show();
}

void MainWindow::on_pushButtonSat_clicked()
{
    hide_Days();
    ui->groupBoxSat->show();
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
    ui->textEdit16->setText("");
    ui->textEdit17->setText("");
    ui->textEdit18->setText("");
    ui->textEdit19->setText("");
    ui->textEdit20->setText("");
    ui->textEdit21->setText("");
    ui->textEdit22->setText("");
    ui->textEdit23->setText("");
    ui->textEdit24->setText("");
    ui->textEdit25->setText("");
    ui->textEdit26->setText("");
    ui->textEdit27->setText("");
    ui->textEdit28->setText("");
    ui->textEdit29->setText("");
    ui->textEdit30->setText("");
    ui->textEdit31->setText("");
    ui->textEdit64->setText("");
    ui->textEdit65->setText("");
    ui->textEdit66->setText("");
    ui->textEdit67->setText("");
    ui->textEdit68->setText("");
    ui->textEdit69->setText("");
    ui->textEdit70->setText("");
    ui->textEdit71->setText("");
    ui->textEdit72->setText("");
    ui->textEdit73->setText("");
    ui->textEdit74->setText("");
    ui->textEdit75->setText("");
    ui->textEdit76->setText("");
    ui->textEdit77->setText("");
    ui->textEdit78->setText("");
    ui->textEdit79->setText("");
    ui->textEdit104->setText("");
    ui->textEdit105->setText("");
    ui->textEdit106->setText("");
    ui->textEdit107->setText("");
    ui->textEdit108->setText("");
    ui->textEdit109->setText("");
    ui->textEdit110->setText("");
    ui->textEdit111->setText("");
    ui->textEdit120->setText("");
    ui->textEdit121->setText("");
    ui->textEdit122->setText("");
    ui->textEdit123->setText("");
    ui->textEdit124->setText("");
    ui->textEdit125->setText("");
    ui->textEdit126->setText("");
    ui->textEdit127->setText("");
}

void MainWindow::on_pushButtonClear2_clicked()
{
    ui->textEdit144->setText("");
    ui->textEdit145->setText("");
    ui->textEdit146->setText("");
    ui->textEdit147->setText("");
    ui->textEdit148->setText("");
    ui->textEdit149->setText("");
    ui->textEdit150->setText("");
    ui->textEdit151->setText("");
    ui->textEdit152->setText("");
    ui->textEdit153->setText("");
    ui->textEdit154->setText("");
    ui->textEdit155->setText("");
    ui->textEdit156->setText("");
    ui->textEdit157->setText("");
    ui->textEdit158->setText("");
    ui->textEdit159->setText("");
    ui->textEdit160->setText("");
    ui->textEdit161->setText("");
    ui->textEdit162->setText("");
    ui->textEdit163->setText("");
    ui->textEdit164->setText("");
    ui->textEdit165->setText("");
    ui->textEdit166->setText("");
    ui->textEdit167->setText("");
    ui->textEdit168->setText("");
    ui->textEdit169->setText("");
    ui->textEdit170->setText("");
    ui->textEdit171->setText("");
    ui->textEdit172->setText("");
    ui->textEdit173->setText("");
    ui->textEdit174->setText("");
    ui->textEdit175->setText("");
    ui->textEdit176->setText("");
    ui->textEdit177->setText("");
    ui->textEdit178->setText("");
    ui->textEdit179->setText("");
    ui->textEdit180->setText("");
    ui->textEdit181->setText("");
    ui->textEdit182->setText("");
    ui->textEdit183->setText("");
    ui->textEdit184->setText("");
    ui->textEdit185->setText("");
    ui->textEdit186->setText("");
    ui->textEdit187->setText("");
    ui->textEdit188->setText("");
    ui->textEdit189->setText("");
    ui->textEdit190->setText("");
    ui->textEdit191->setText("");
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
    QFile Notes("Notes.txt");

        if(ui->pushButtonNote20->isVisible()){
             ui->pushButtonNote20->hide();
        ui->lineEditNote20->setText("");
        ui->textEditNote20->setText("");
        }
        else if(ui->pushButtonNote19->isVisible()){
             ui->pushButtonNote19->hide();
             ui->lineEditNote19->setText("");
             ui->textEditNote19->setText("");}
        else if(ui->pushButtonNote18->isVisible()){
             ui->pushButtonNote18->hide();
             ui->lineEditNote18->setText("");
             ui->textEditNote18->setText("");}
        else if(ui->pushButtonNote17->isVisible()){
             ui->pushButtonNote17->hide();
             ui->lineEditNote17->setText("");
             ui->textEditNote17->setText("");}
        else if(ui->pushButtonNote16->isVisible()){
             ui->pushButtonNote16->hide();
             ui->lineEditNote16->setText("");
             ui->textEditNote16->setText("");}
        else if(ui->pushButtonNote15->isVisible()){
             ui->pushButtonNote15->hide();
             ui->lineEditNote15->setText("");
             ui->textEditNote15->setText("");}
        else if(ui->pushButtonNote14->isVisible()){
             ui->pushButtonNote14->hide();
             ui->lineEditNote14->setText("");
             ui->textEditNote14->setText("");}
        else if(ui->pushButtonNote13->isVisible()){
             ui->pushButtonNote13->hide();
             ui->lineEditNote13->setText("");
             ui->textEditNote13->setText("");}
        else if(ui->pushButtonNote12->isVisible()){
             ui->pushButtonNote12->hide();
             ui->lineEditNote12->setText("");
             ui->textEditNote12->setText("");}
        else if(ui->pushButtonNote11->isVisible()){
             ui->pushButtonNote11->hide();
             ui->lineEditNote11->setText("");
             ui->textEditNote11->setText("");}
        else if(ui->pushButtonNote10->isVisible()){
             ui->pushButtonNote10->hide();
             ui->lineEditNote10->setText("");
             ui->textEditNote10->setText("");}
        else if(ui->pushButtonNote9->isVisible()){
             ui->pushButtonNote9->hide();
             ui->lineEditNote9->setText("");
             ui->textEditNote9->setText("");}
        else if(ui->pushButtonNote8->isVisible()){
             ui->pushButtonNote8->hide();
             ui->lineEditNote8->setText("");
             ui->textEditNote8->setText("");}
        else if(ui->pushButtonNote7->isVisible()){
             ui->pushButtonNote7->hide();
             ui->lineEditNote7->setText("");
             ui->textEditNote7->setText("");}
        else if(ui->pushButtonNote6->isVisible()){
             ui->pushButtonNote6->hide();
             ui->lineEditNote6->setText("");
             ui->textEditNote6->setText("");}
        else if(ui->pushButtonNote5->isVisible()){
             ui->pushButtonNote5->hide();
             ui->lineEditNote5->setText("");
             ui->textEditNote5->setText("");}
        else if(ui->pushButtonNote4->isVisible()){
             ui->pushButtonNote4->hide();
             ui->lineEditNote4->setText("");
             ui->textEditNote4->setText("");}
        else if(ui->pushButtonNote3->isVisible()){
             ui->pushButtonNote3->hide();
             ui->lineEditNote3->setText("");
             ui->textEditNote3->setText("");}
        else if(ui->pushButtonNote2->isVisible()){
             ui->pushButtonNote2->hide();
             ui->lineEditNote2->setText("");
             ui->textEditNote2->setText("");}
        else if(ui->pushButtonNote1->isVisible()){
             ui->pushButtonNote1->hide();
             ui->lineEditNote1->setText("");
             ui->textEditNote1->setText("");}

        else QMessageBox::information(this,"Sorry!","You substract all notes!");
}

void MainWindow::hide_Notes()
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
    ui->groupBoxNote_20->hide();
}
void MainWindow::on_pushButtonNote1_clicked()
{
    hide_Notes();
    ui->groupBoxNote->show();
    ReadNotes();
}
void MainWindow::on_pushButtonNote2_clicked()
{
    hide_Notes();
    ui->groupBoxNote_2->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote3_clicked()
{
    hide_Notes();
    ui->groupBoxNote_3->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote4_clicked()
{
    hide_Notes();
    ui->groupBoxNote_4->show();
    ReadNotes();
}
void MainWindow::on_pushButtonNote5_clicked()
{
    hide_Notes();
    ui->groupBoxNote_5->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote6_clicked()
{
    hide_Notes();
    ui->groupBoxNote_6->show();
   ReadNotes();
}
void MainWindow::on_pushButtonNote7_clicked()
{
    hide_Notes();
    ui->groupBoxNote_7->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote8_clicked()
{
    hide_Notes();
    ui->groupBoxNote_8->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote9_clicked()
{
    hide_Notes();
    ui->groupBoxNote_9->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote10_clicked()
{
    hide_Notes();
    ui->groupBoxNote_10->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote11_clicked()
{
    hide_Notes();
    ui->groupBoxNote_11->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote12_clicked()
{
    hide_Notes();
    ui->groupBoxNote_12->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote13_clicked()
{
    hide_Notes();
    ui->groupBoxNote_13->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote14_clicked()
{
    hide_Notes();
    ui->groupBoxNote_14->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote15_clicked()
{
    hide_Notes();
    ui->groupBoxNote_15->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote16_clicked()
{
    hide_Notes();
    ui->groupBoxNote_16->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote17_clicked()
{
    hide_Notes();
    ui->groupBoxNote_17->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote18_clicked()
{
    hide_Notes();
    ui->groupBoxNote_18->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote19_clicked()
{
    hide_Notes();
    ui->groupBoxNote_19->show();
    ReadNotes();

}
void MainWindow::on_pushButtonNote20_clicked()
{
    hide_Notes();
    ui->groupBoxNote_20->show();
    ReadNotes();
}
