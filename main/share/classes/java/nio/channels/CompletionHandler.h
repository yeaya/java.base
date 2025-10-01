#ifndef _java_nio_channels_CompletionHandler_h_
#define _java_nio_channels_CompletionHandler_h_
//$ interface java.nio.channels.CompletionHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export CompletionHandler : public ::java::lang::Object {
	$interface(CompletionHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void completed(Object$* result, Object$* attachment) {}
	virtual void failed($Throwable* exc, Object$* attachment) {}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_CompletionHandler_h_