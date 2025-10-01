#ifndef _CloseTimeoutChannel_h_
#define _CloseTimeoutChannel_h_
//$ class CloseTimeoutChannel
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class Socket;
	}
}

class $export CloseTimeoutChannel : public ::java::lang::Object {
	$class(CloseTimeoutChannel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CloseTimeoutChannel();
	void init$();
	static void main($StringArray* args);
	static int32_t read(::java::net::Socket* s, ::java::io::InputStream* in);
};

#endif // _CloseTimeoutChannel_h_