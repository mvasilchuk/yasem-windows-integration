#include "windowsintegrationobject.h"
#include "macros.h"

#include <QMainWindow>

using namespace yasem;

WindowsIntegrationObject::WindowsIntegrationObject(SDK::Plugin* plugin):
    SDK::AbstractPluginObject(plugin)
{

}

WindowsIntegrationObject::~WindowsIntegrationObject()
{
}

SDK::PluginObjectResult WindowsIntegrationObject::init()
{
    return SDK::PLUGIN_OBJECT_RESULT_OK;
}

SDK::PluginObjectResult WindowsIntegrationObject::deinit()
{
    return SDK::PLUGIN_OBJECT_RESULT_OK;
}
