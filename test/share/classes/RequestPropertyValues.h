#ifndef _RequestPropertyValues_h_
#define _RequestPropertyValues_h_
//$ class RequestPropertyValues
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}

class $export RequestPropertyValues : public ::java::lang::Object {
	$class(RequestPropertyValues, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RequestPropertyValues();
	void init$();
	static ::java::net::URLConnection* getConnection(::java::net::URL* url);
	static bool hasFtp();
	static void main($StringArray* args);
	static void part1();
	static void part2();
};

#endif // _RequestPropertyValues_h_