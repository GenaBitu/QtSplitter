#pragma once

#include "Global.hpp"

#include "Expander.hpp"
class WidgetDecorator;

class ExpanderBottom final : public Expander
{
    Q_OBJECT
    Q_DISABLE_COPY(ExpanderBottom)
public:
    ExpanderBottom() = delete;
    explicit ExpanderBottom(WidgetDecorator* parent);
    virtual void reposition() override;
protected slots:
    virtual void mouseMoveEvent(QMouseEvent* event) override;
};
