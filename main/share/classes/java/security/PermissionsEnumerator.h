#ifndef _java_security_PermissionsEnumerator_h_
#define _java_security_PermissionsEnumerator_h_
//$ class java.security.PermissionsEnumerator
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace security {

class PermissionsEnumerator : public ::java::util::Enumeration {
	$class(PermissionsEnumerator, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	PermissionsEnumerator();
	void init$(::java::util::Iterator* e);
	::java::util::Enumeration* getNextEnumWithMore();
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::Iterator* perms = nullptr;
	::java::util::Enumeration* permset = nullptr;
};

	} // security
} // java

#endif // _java_security_PermissionsEnumerator_h_