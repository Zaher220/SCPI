#include "parser.h"

Parser::Parser(QObject *parent) :
    QObject(parent)
{
}

void Parser::findCommand(QString templ,QString command)
{
    //    templ=":ACQU:STOP:CHAN:{int}?";
    //    \:(ACQU)\:(STOP)\:(CHAN)\:(-?[0-9]+)\?
    //      QString c1=
    //      QRegExp any_symbol(".");
    //    QStringList command_list = templ.split(":").filter(any_symbol);
    //    foreach (var, container) {

    //    }
    //    /*foreach (QString s, com_list ){
    //        printf("string %s len %d \n",s.toStdString().c_str(),s.length());
    //    }*/
    //    printf("sss=%d",com_list.size());
}

void Parser::findDataType(QString str)
{
    //    QRegExp integer_exp("^-?[0-9]+$");
    //    QRegExpValidator int_validator(integer_exp);
    //    if ( int_validator.validate(str,0) == QValidator::State::Acceptable)
    //        return;
    //    return;
    //    QRegExp double_exp("/^[0-9]+(\\.[0-9]+)?$");
    //    QRegExpValidator double_validator(double_exp);
    //    if ( double_validator.validate(str,0) == QValidator::State::Acceptable)
    //        return;
    //    return;
    //    //  /^[0-9]+(\\.[0-9]+)?$  double

}

bool Parser::regexpCommand(QRegExp rexp,QString str){
    //QRegExpValidator validator(rexp);
    int pos=0;
    //if ( validator.exactMatch(str,pos) == QValidator::Intermediate)
    if (rexp.exactMatch(str)==true)
        return true;
    printf("strlen=%d ",str.length());
    printf("%d ",rexp.matchedLength());
    return false;
}
