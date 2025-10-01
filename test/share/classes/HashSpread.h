#ifndef _HashSpread_h_
#define _HashSpread_h_
//$ class HashSpread
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export HashSpread : public ::java::lang::Object {
	$class(HashSpread, 0, ::java::lang::Object)
public:
	HashSpread();
	void init$();
	static void main($StringArray* args);
	static ::java::net::InetAddress* randomIPv6Adress();
	static ::java::util::Random* r;
};

#endif // _HashSpread_h_