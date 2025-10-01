#ifndef _java_security_AllPermissionCollection_h_
#define _java_security_AllPermissionCollection_h_
//$ class java.security.AllPermissionCollection
//$ extends java.security.PermissionCollection

#include <java/security/PermissionCollection.h>

namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace java {
	namespace security {

class AllPermissionCollection : public ::java::security::PermissionCollection {
	$class(AllPermissionCollection, $NO_CLASS_INIT, ::java::security::PermissionCollection)
public:
	AllPermissionCollection();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	static const int64_t serialVersionUID = (int64_t)0xC828BFA3E7C328FA;
	bool all_allowed = false;
};

	} // security
} // java

#endif // _java_security_AllPermissionCollection_h_