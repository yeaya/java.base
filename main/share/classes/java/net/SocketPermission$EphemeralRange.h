#ifndef _java_net_SocketPermission$EphemeralRange_h_
#define _java_net_SocketPermission$EphemeralRange_h_
//$ class java.net.SocketPermission$EphemeralRange
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {

class SocketPermission$EphemeralRange : public ::java::lang::Object {
	$class(SocketPermission$EphemeralRange, 0, ::java::lang::Object)
public:
	SocketPermission$EphemeralRange();
	void init$();
	static int32_t low;
	static int32_t high;
};

	} // net
} // java

#endif // _java_net_SocketPermission$EphemeralRange_h_