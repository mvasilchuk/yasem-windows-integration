#ifndef WINDOWSINTERGATION_H
#define WINDOWSINTERGATION_H

#include "windowsintegration_global.h"

#include "plugin.h"

#include <QObject>
#include <QSystemTrayIcon>
#include <QMenu>

namespace yasem {

class WINDOWSINTERGATIONSHARED_EXPORT WindowsIntegration: public SDK::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.WindowsIntegration/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::SDK::Plugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "Windows integration")
    Q_CLASSINFO("version", MODULE_VERSION)
    Q_CLASSINFO("revision", GIT_VERSION)
public:
    WindowsIntegration(QObject* parent = 0);
    virtual ~WindowsIntegration();

    // Plugin interface
public:
    void register_dependencies();
    void register_roles();
};

}

#endif // WINDOWSINTERGATION_H
