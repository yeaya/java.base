#ifndef _java_security_Permission_h_
#define _java_security_Permission_h_
//$ class java.security.Permission
//$ extends java.security.Guard
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/security/Guard.h>

namespace java {
	namespace security {
		class PermissionCollection;
	}
}

namespace java {
	namespace security {

class $export Permission : public ::java::security::Guard, public ::java::io::Serializable {
	$class(Permission, $PRELOAD | $NO_CLASS_INIT, ::java::security::Guard, ::java::io::Serializable)
public:
	Permission();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name);
	virtual void checkGuard(Object$* object) override;
	virtual $String* getActions() {return nullptr;}
	$String* getName();
	virtual bool implies(::java::security::Permission* permission) {return false;}
	virtual ::java::security::PermissionCollection* newPermissionCollection();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xB1C6E13F2857517E;
	$String* name = nullptr;
};

	} // security
} // java

#endif // _java_security_Permission_h_