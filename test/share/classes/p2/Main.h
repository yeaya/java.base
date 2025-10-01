#ifndef _p2_Main_h_
#define _p2_Main_h_
//$ class p2.Main
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace p2 {

class $export Main : public ::java::lang::Object {
	$class(Main, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Main();
	void init$();
	static ::java::io::InputStream* getResourceAsStreamInClassLoader($String* name);
	static ::java::net::URL* getResourceInClassLoader($String* name);
	static ::java::util::Enumeration* getResourcesInClassLoader($String* name);
};

} // p2

#endif // _p2_Main_h_