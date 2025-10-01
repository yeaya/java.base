#ifndef _SystemProxies_h_
#define _SystemProxies_h_
//$ class SystemProxies
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class ProxySelector;
	}
}

class $export SystemProxies : public ::java::lang::Object {
	$class(SystemProxies, 0, ::java::lang::Object)
public:
	SystemProxies();
	void init$();
	static void main($StringArray* args);
	static void printProxies($String* proto);
	static $StringArray* uriAuthority;
	static ::java::net::ProxySelector* proxySel;
};

#endif // _SystemProxies_h_