#ifndef PARSER_H
#define PARSER_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QRegExp>
#include <QRegExpValidator>

class Parser : public QObject
{
    Q_OBJECT
public:
    explicit Parser(QObject *parent = 0);
    void findCommand(QString templ, QString command);
    void findDataType(QString str);
    bool regexpCommand(QRegExp rexp,QString str);
signals:

public slots:

};

#endif // PARSER_H
