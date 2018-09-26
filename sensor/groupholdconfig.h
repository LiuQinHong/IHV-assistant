#ifndef GROUPHOLDCONFIG_H
#define GROUPHOLDCONFIG_H

#include <QWidget>

namespace Ui {
class GroupHoldConfig;
}

class GroupHoldConfig : public QWidget
{
    Q_OBJECT

public:
    explicit GroupHoldConfig(QWidget *parent = 0);
    ~GroupHoldConfig();

private:
    Ui::GroupHoldConfig *ui;
};

#endif // GROUPHOLDCONFIG_H
