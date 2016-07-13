#ifndef DISPLAYWIDGET_H
#define DISPLAYWIDGET_H

#include <QDockWidget>

#include "appcore.h"
#include "helper/singleton.h"

namespace Ui {
class DisplayWidget;
}

class CORE_EXPORT DisplayWidget : public QDockWidget, public Singleton<DisplayWidget>
{
    Q_OBJECT
    Q_INTERFACES(AbstractSingleton)

    Q_CLASSINFO("guiModule", "true")
    Q_CLASSINFO("dependsOn", "Gui_Manager")

public:
    Q_INVOKABLE explicit DisplayWidget(QWidget *parent = 0);
    ~DisplayWidget();
    void setText(QString const& text);
    static void init();

protected:
    bool postInit();
    bool preDestroy();

private:
    Ui::DisplayWidget *ui;
};

#endif // DISPLAYWIDGET_H
