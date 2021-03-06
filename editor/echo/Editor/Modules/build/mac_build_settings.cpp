#include "mac_build_settings.h"

namespace Echo
{
    MacBuildSettings::MacBuildSettings()
    {
    
    }

    MacBuildSettings::~MacBuildSettings()
    {
        
    }

    MacBuildSettings* MacBuildSettings::instance()
    {
        static MacBuildSettings* inst = EchoNew(MacBuildSettings);
        return inst;
    }

    void MacBuildSettings::bindMethods()
    {
        CLASS_BIND_METHOD(MacBuildSettings, getIconRes,   DEF_METHOD("getIconRes"));
        CLASS_BIND_METHOD(MacBuildSettings, setIconRes,   DEF_METHOD("setIconRes"));

        CLASS_REGISTER_PROPERTY(MacBuildSettings, "Icon", Variant::Type::ResourcePath, "getIconRes", "setIconRes");
    }

    void MacBuildSettings::setIconRes(const ResourcePath& path)
    {
        
    }
}
