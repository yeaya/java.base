#ifndef _Serialize_h_
#define _Serialize_h_
//$ class Serialize
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class Inet6Address;
	}
}

class $export Serialize : public ::java::lang::Object {
	$class(Serialize, 0, ::java::lang::Object)
public:
	Serialize();
	void init$();
	static void main($StringArray* args);
	static bool test(::java::net::Inet6Address* obj);
	static bool test1(::java::net::Inet6Address* obj, $bytes* buf);
	static $bytes* addr1;
	static $bytes* addr2;
	static $bytes* addr3;
};

#endif // _Serialize_h_