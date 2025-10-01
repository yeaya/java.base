#ifndef _java_security_AllPermission_h_
#define _java_security_AllPermission_h_
//$ class java.security.AllPermission
//$ extends java.security.Permission

#include <java/security/Permission.h>

namespace java {
	namespace security {
		class PermissionCollection;
	}
}

namespace java {
	namespace security {

class $export AllPermission : public ::java::security::Permission {
	$class(AllPermission, $NO_CLASS_INIT, ::java::security::Permission)
public:
	AllPermission();
	void init$();
	void init$($String* name, $String* actions);
	virtual bool equals(Object$* obj) override;
	virtual $String* getActions() override;
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	static const int64_t serialVersionUID = (int64_t)0xD78699D4542F40C5;
};

	} // security
} // java

#endif // _java_security_AllPermission_h_