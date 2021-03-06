#include "include/implementation/SplitterDecorator.hpp"

#include "include/BlendSplitter.hpp"

SplitterDecorator::SplitterDecorator(BlendSplitter* splitter) : QWidget{}, splitter{splitter}
{
    QHBoxLayout* layout{new QHBoxLayout{}};
    layout->addWidget(splitter);
    layout->setMargin(0);
    setLayout(layout);
}

SplitterDecorator::~SplitterDecorator()
{
    delete layout();
}
