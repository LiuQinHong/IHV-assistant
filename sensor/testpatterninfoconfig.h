#ifndef TESTPATTERNINFOCONFIG_H
#define TESTPATTERNINFOCONFIG_H

#include <QWidget>

namespace Ui {
class TestPatternInfoConfig;
}

class TestPatternInfoConfig : public QWidget
{
    Q_OBJECT

public:
    explicit TestPatternInfoConfig(QWidget *parent = 0);
    ~TestPatternInfoConfig();

private:
    Ui::TestPatternInfoConfig *ui;
};

#endif // TESTPATTERNINFOCONFIG_H
