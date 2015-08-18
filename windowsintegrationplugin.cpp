#include "windowsintegrationplugin.h"
#include "windowsintegrationobject.h"

using namespace yasem;

WindowsIntegration::WindowsIntegration(QObject* parent):
    SDK::Plugin(parent)
{

}

WindowsIntegration::~WindowsIntegration()
{

}


void WindowsIntegration::register_dependencies()
{
    add_dependency({SDK::ROLE_GUI});
}

void WindowsIntegration::register_roles()
{
    register_role(SDK::ROLE_ENV_INTEGRATION, new WindowsIntegrationObject(this));
}
