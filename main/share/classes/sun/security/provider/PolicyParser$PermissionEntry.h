#ifndef _sun_security_provider_PolicyParser$PermissionEntry_h_
#define _sun_security_provider_PolicyParser$PermissionEntry_h_
//$ class sun.security.provider.PolicyParser$PermissionEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export PolicyParser$PermissionEntry : public ::java::lang::Object {
	$class(PolicyParser$PermissionEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PolicyParser$PermissionEntry();
	void init$();
	void init$($String* permission, $String* name, $String* action);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual void write(::java::io::PrintWriter* out);
	$String* permission = nullptr;
	$String* name = nullptr;
	$String* action = nullptr;
	$String* signedBy = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyParser$PermissionEntry_h_