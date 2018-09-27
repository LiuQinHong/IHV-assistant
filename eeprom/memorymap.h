#ifndef MEMORYMAP_H
#define MEMORYMAP_H

#include <QWidget>

namespace Ui {
class MemoryMap;
}

class MemoryMap : public QWidget
{
    Q_OBJECT

public:
    explicit MemoryMap(QWidget *parent = 0);
    ~MemoryMap();

private:
    Ui::MemoryMap *ui;
};

#endif // MEMORYMAP_H
