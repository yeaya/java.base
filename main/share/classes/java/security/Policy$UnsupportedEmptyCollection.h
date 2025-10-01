#ifndef _java_security_Policy$UnsupportedEmptyCollection_h_
#define _java_security_Policy$UnsupportedEmptyCollection_h_
//$ class java.security.Policy$UnsupportedEmptyCollection
//$ extends java.security.PermissionCollection

#include <java/security/PermissionCollection.h>

namespace java {
	namespace security {
		class Permission;
		class Permissions;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace java {
	namespace security {

class Policy$UnsupportedEmptyCollection : public ::java::security::PermissionCollection {
	$class(Policy$UnsupportedEmptyCollection, $NO_CLASS_INIT, ::java::security::PermissionCollection)
public:
	Policy$UnsupportedEmptyCollection();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	static const int64_t serialVersionUID = (int64_t)0x8A25663202F7BA0A;
	::java::security::Permissions* perms = nullptr;
};

	} // security
} // java

#endif // _java_security_Policy$UnsupportedEmptyCollection_h_