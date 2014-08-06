#include <QCoreApplication>
#include "parser.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Parser psr;
    QRegExp r("\:(ACQU)\:(STOP)\:(CHAN)\:(-?[0-9]+)\?",Qt::CaseSensitive, QRegExp::RegExp2);
    if (r.isValid())
        printf("valid \n");
    if (r.exactMatch(":ACQU:STOP:CHAN:1?"))
        printf("fuck yeah\n");
    if (psr.regexpCommand(QRegExp("\:(ACQU)\:(STOP)\:(CHAN)\:(-?[0-9]+)\\?",Qt::CaseSensitive, QRegExp::RegExp2),
                          ":ACQU:STOP:CHAN:1?")==true)
        printf("OK");
    else
        printf("BAD");
    return a.exec();
}
