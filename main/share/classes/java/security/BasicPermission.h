#ifndef _java_security_BasicPermission_h_
#define _java_security_BasicPermission_h_
//$ class java.security.BasicPermission
//$ extends java.security.Permission

#include <java/security/Permission.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class PermissionCollection;
	}
}

namespace java {
	namespace security {

class $export BasicPermission : public ::java::security::Permission {
	$class(BasicPermission, $PRELOAD | $NO_CLASS_INIT, ::java::security::Permission)
public:
	BasicPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	virtual bool equals(Object$* obj) override;
	virtual $String* getActions() override;
	$String* getCanonicalName();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	void init($String* name);
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	void readObject(::java::io::ObjectInputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x57250BDCCF4EA67A;
	bool wildcard = false;
	$String* path = nullptr;
	bool exitVM = false;
};

	} // security
} // java

#endif // _java_security_BasicPermission_h_