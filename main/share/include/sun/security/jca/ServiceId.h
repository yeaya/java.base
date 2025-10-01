#ifndef _sun_security_jca_ServiceId_h_
#define _sun_security_jca_ServiceId_h_
//$ class sun.security.jca.ServiceId
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace jca {

class $import ServiceId : public ::java::lang::Object {
	$class(ServiceId, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ServiceId();
	void init$($String* type, $String* algorithm);
	$String* type = nullptr;
	$String* algorithm = nullptr;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ServiceId_h_