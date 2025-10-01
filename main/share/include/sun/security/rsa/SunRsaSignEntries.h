#ifndef _sun_security_rsa_SunRsaSignEntries_h_
#define _sun_security_rsa_SunRsaSignEntries_h_
//$ class sun.security.rsa.SunRsaSignEntries
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Iterator;
		class LinkedHashSet;
		class List;
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $import SunRsaSignEntries : public ::java::lang::Object {
	$class(SunRsaSignEntries, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SunRsaSignEntries();
	void init$(::java::security::Provider* p);
	void add(::java::security::Provider* p, $String* type, $String* algo, $String* cn, ::java::util::List* aliases, ::java::util::HashMap* attrs);
	void addA(::java::security::Provider* p, $String* type, $String* algo, $String* cn, ::java::util::HashMap* attrs);
	::java::util::Iterator* iterator();
	::java::util::LinkedHashSet* services = nullptr;
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_SunRsaSignEntries_h_