#ifndef _HandlersPkgPrefix$Result_h_
#define _HandlersPkgPrefix$Result_h_
//$ class HandlersPkgPrefix$Result
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

class $export HandlersPkgPrefix$Result : public ::java::lang::Object {
	$class(HandlersPkgPrefix$Result, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HandlersPkgPrefix$Result();
	void init$($String* protocol, ::java::net::URL* url, ::java::lang::Exception* exception);
	$String* protocol = nullptr;
	::java::net::URL* url = nullptr;
	::java::lang::Exception* exception = nullptr;
};

#endif // _HandlersPkgPrefix$Result_h_