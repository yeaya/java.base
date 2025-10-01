#ifndef _NetworkPrefixLength_h_
#define _NetworkPrefixLength_h_
//$ class NetworkPrefixLength
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InterfaceAddress;
	}
}

class $export NetworkPrefixLength : public ::java::lang::Object {
	$class(NetworkPrefixLength, 0, ::java::lang::Object)
public:
	NetworkPrefixLength();
	void init$();
	static bool checkIPv4PrefixLength(int32_t prefix);
	static bool checkIPv6PrefixLength(int32_t prefix);
	static bool checkPrefix(::java::net::InterfaceAddress* iaddr);
	static void debug($String* nicName, ::java::net::InterfaceAddress* iaddr);
	static void main($StringArray* args);
	static bool passed;
};

#endif // _NetworkPrefixLength_h_