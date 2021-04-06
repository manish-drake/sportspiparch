#ifndef VIEWMODEL_H
#define VIEWMODEL_H

#include <QObject>

class viewmodel : public QObject
{
    Q_OBJECT
public:
    explicit viewmodel(QObject *parent = nullptr);
    Q_INVOKABLE void send();
signals:

public slots:
};

#endif // VIEWMODEL_H
