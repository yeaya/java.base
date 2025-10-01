#ifndef _sun_security_provider_PolicyParser$GrantEntry_h_
#define _sun_security_provider_PolicyParser$GrantEntry_h_
//$ class sun.security.provider.PolicyParser$GrantEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class LinkedList;
		class Vector;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class PolicyParser$PermissionEntry;
			class PolicyParser$PrincipalEntry;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export PolicyParser$GrantEntry : public ::java::lang::Object {
	$class(PolicyParser$GrantEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PolicyParser$GrantEntry();
	void init$();
	void init$($String* signedBy, $String* codeBase);
	virtual void add(::sun::security::provider::PolicyParser$PermissionEntry* pe);
	virtual $Object* clone() override;
	virtual bool contains(::sun::security::provider::PolicyParser$PrincipalEntry* pe);
	virtual bool contains(::sun::security::provider::PolicyParser$PermissionEntry* pe);
	virtual ::java::util::Enumeration* permissionElements();
	virtual bool remove(::sun::security::provider::PolicyParser$PrincipalEntry* pe);
	virtual bool remove(::sun::security::provider::PolicyParser$PermissionEntry* pe);
	virtual void write(::java::io::PrintWriter* out);
	$String* signedBy = nullptr;
	$String* codeBase = nullptr;
	::java::util::LinkedList* principals = nullptr;
	::java::util::Vector* permissionEntries = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyParser$GrantEntry_h_