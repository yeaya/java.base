#ifndef _sun_security_util_LazyCodeSourcePermissionCollection_h_
#define _sun_security_util_LazyCodeSourcePermissionCollection_h_
//$ class sun.security.util.LazyCodeSourcePermissionCollection
//$ extends java.security.PermissionCollection

#include <java/security/PermissionCollection.h>

namespace java {
	namespace security {
		class CodeSource;
		class Permission;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import LazyCodeSourcePermissionCollection : public ::java::security::PermissionCollection {
	$class(LazyCodeSourcePermissionCollection, $NO_CLASS_INIT, ::java::security::PermissionCollection)
public:
	LazyCodeSourcePermissionCollection();
	void init$(::java::security::PermissionCollection* perms, ::java::security::CodeSource* cs);
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	void ensureAdded();
	virtual bool implies(::java::security::Permission* permission) override;
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xA2A4DAD66A180929;
	::java::security::PermissionCollection* perms = nullptr;
	::java::security::CodeSource* cs = nullptr;
	$volatile(bool) permissionAdded = false;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_LazyCodeSourcePermissionCollection_h_