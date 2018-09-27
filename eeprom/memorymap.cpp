#include "memorymap.h"
#include "ui_memorymap.h"

MemoryMap::MemoryMap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MemoryMap)
{
    ui->setupUi(this);
}

MemoryMap::~MemoryMap()
{
    delete ui;
}
