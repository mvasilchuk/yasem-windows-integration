#ifndef WINDOWSINTEGRATIONOBJECT_H
#define WINDOWSINTEGRATIONOBJECT_H

#include "abstractpluginobject.h"

namespace yasem {

class WindowsIntegrationObject: public SDK::AbstractPluginObject
{
    Q_OBJECT
public:
    explicit WindowsIntegrationObject(SDK::Plugin* plugin);
    virtual ~WindowsIntegrationObject();

public:
    SDK::PluginObjectResult init();
    SDK::PluginObjectResult deinit();
};

}

#endif // WINDOWSINTEGRATIONOBJECT_H
