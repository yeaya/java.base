#ifndef _sun_security_x509_UnparseableExtension_h_
#define _sun_security_x509_UnparseableExtension_h_
//$ class sun.security.x509.UnparseableExtension
//$ extends sun.security.x509.Extension

#include <sun/security/x509/Extension.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class UnparseableExtension : public ::sun::security::x509::Extension {
	$class(UnparseableExtension, $NO_CLASS_INIT, ::sun::security::x509::Extension)
public:
	UnparseableExtension();
	void init$(::sun::security::x509::Extension* ext, $Throwable* why);
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* exceptionDescription = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_UnparseableExtension_h_