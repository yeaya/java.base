#ifndef _sun_nio_ch_Iocp$ResultHandler_h_
#define _sun_nio_ch_Iocp$ResultHandler_h_
//$ interface sun.nio.ch.Iocp$ResultHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class IOException;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Iocp$ResultHandler : public ::java::lang::Object {
	$interface(Iocp$ResultHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void completed(int32_t bytesTransferred, bool canInvokeDirect) {}
	virtual void failed(int32_t error, ::java::io::IOException* ioe) {}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Iocp$ResultHandler_h_