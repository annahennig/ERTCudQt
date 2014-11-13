#ifndef LOGGINGDEVICE_H
#define LOGGINGDEVICE_H

#include <QDir>
#include <QFile>
#include <QTime>
#include <QDate>
#include <QMessageBox>
#include <QTextStream>

class LoggingDevice: public QObject
{
    Q_OBJECT
public:
    LoggingDevice(QObject *parent, QString portName, QString nameModifier);
    LoggingDevice(QObject *parent, QString portName);
    LoggingDevice(QObject *parent);
    ~LoggingDevice();
    void createNewFile();
    void closeFile();
    bool getReady() const;
    void setReady(bool value);

public slots:
    void addLine(QByteArray data);
    void addLine(QString data);
private:
    QString FileNameModifier;
    QString PortName;
    QFile *file;
    bool ready;
    QObject *parent;
};

#endif // LOGGINGDEVICE_H
