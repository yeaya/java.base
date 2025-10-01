#ifndef _jdk_internal_logger_BootstrapLogger$DetectBackend_h_
#define _jdk_internal_logger_BootstrapLogger$DetectBackend_h_
//$ class jdk.internal.logger.BootstrapLogger$DetectBackend
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace logger {
			class BootstrapLogger$LoggingBackend;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class BootstrapLogger$DetectBackend : public ::java::lang::Object {
	$class(BootstrapLogger$DetectBackend, 0, ::java::lang::Object)
public:
	BootstrapLogger$DetectBackend();
	void init$();
	static ::jdk::internal::logger::BootstrapLogger$LoggingBackend* detectedBackend;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_BootstrapLogger$DetectBackend_h_