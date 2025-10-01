#ifndef _SpecifyHandler_h_
#define _SpecifyHandler_h_
//$ class SpecifyHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URLStreamHandler;
	}
}

class $export SpecifyHandler : public ::java::lang::Object {
	$class(SpecifyHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SpecifyHandler();
	void init$();
	static ::java::net::URLStreamHandler* getFileHandler();
	static void main($StringArray* args);
};

#endif // _SpecifyHandler_h_