#ifndef _java_net_SocketOption_h_
#define _java_net_SocketOption_h_
//$ interface java.net.SocketOption
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {

class $export SocketOption : public ::java::lang::Object {
	$interface(SocketOption, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* name() {return nullptr;}
	virtual $Class* type() {return nullptr;}
};

	} // net
} // java

#endif // _java_net_SocketOption_h_