#ifndef _java_net_ProtocolFamily_h_
#define _java_net_ProtocolFamily_h_
//$ interface java.net.ProtocolFamily
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {

class $import ProtocolFamily : public ::java::lang::Object {
	$interface(ProtocolFamily, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* name() {return nullptr;}
};

	} // net
} // java

#endif // _java_net_ProtocolFamily_h_