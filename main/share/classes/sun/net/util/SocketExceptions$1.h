#ifndef _sun_net_util_SocketExceptions$1_h_
#define _sun_net_util_SocketExceptions$1_h_
//$ class sun.net.util.SocketExceptions$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class IOException;
	}
}

namespace sun {
	namespace net {
		namespace util {

class SocketExceptions$1 : public ::java::security::PrivilegedAction {
	$class(SocketExceptions$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SocketExceptions$1();
	void init$(::java::io::IOException* val$e, $String* val$msg);
	virtual $Object* run() override;
	$String* val$msg = nullptr;
	::java::io::IOException* val$e = nullptr;
};

		} // util
	} // net
} // sun

#endif // _sun_net_util_SocketExceptions$1_h_