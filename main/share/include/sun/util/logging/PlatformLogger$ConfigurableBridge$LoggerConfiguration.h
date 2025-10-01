#ifndef _sun_util_logging_PlatformLogger$ConfigurableBridge$LoggerConfiguration_h_
#define _sun_util_logging_PlatformLogger$ConfigurableBridge$LoggerConfiguration_h_
//$ class sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger$Level;
		}
	}
}

namespace sun {
	namespace util {
		namespace logging {

class $import PlatformLogger$ConfigurableBridge$LoggerConfiguration : public ::java::lang::Object {
	$class(PlatformLogger$ConfigurableBridge$LoggerConfiguration, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PlatformLogger$ConfigurableBridge$LoggerConfiguration();
	void init$();
	virtual ::sun::util::logging::PlatformLogger$Level* getPlatformLevel() {return nullptr;}
	virtual void setPlatformLevel(::sun::util::logging::PlatformLogger$Level* level) {}
};

		} // logging
	} // util
} // sun

#endif // _sun_util_logging_PlatformLogger$ConfigurableBridge$LoggerConfiguration_h_