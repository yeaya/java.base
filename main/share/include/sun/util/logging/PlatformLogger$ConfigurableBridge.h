#ifndef _sun_util_logging_PlatformLogger$ConfigurableBridge_h_
#define _sun_util_logging_PlatformLogger$ConfigurableBridge_h_
//$ interface sun.util.logging.PlatformLogger$ConfigurableBridge
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger$Bridge;
			class PlatformLogger$ConfigurableBridge$LoggerConfiguration;
		}
	}
}

namespace sun {
	namespace util {
		namespace logging {

class $import PlatformLogger$ConfigurableBridge : public ::java::lang::Object {
	$interface(PlatformLogger$ConfigurableBridge, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration* getLoggerConfiguration();
	static ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration* getLoggerConfiguration(::sun::util::logging::PlatformLogger$Bridge* logger);
};

		} // logging
	} // util
} // sun

#endif // _sun_util_logging_PlatformLogger$ConfigurableBridge_h_