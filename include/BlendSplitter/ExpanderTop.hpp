#pragma once

#include "Global.hpp"

#include "Expander.hpp"
class WidgetDecorator;

class ExpanderTop : public Expander
{
    Q_OBJECT
private:
    friend WidgetDecorator;
    ExpanderTop() = delete;
    ExpanderTop(WidgetDecorator* parent);
    virtual void reposition();
protected slots:
    virtual void mouseMoveEvent(QMouseEvent* event);
};