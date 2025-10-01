#ifndef _sun_security_x509_X509AttributeName_h_
#define _sun_security_x509_X509AttributeName_h_
//$ class sun.security.x509.X509AttributeName
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SEPARATOR")
#undef SEPARATOR

namespace sun {
	namespace security {
		namespace x509 {

class $export X509AttributeName : public ::java::lang::Object {
	$class(X509AttributeName, $NO_CLASS_INIT, ::java::lang::Object)
public:
	X509AttributeName();
	void init$($String* name);
	virtual $String* getPrefix();
	virtual $String* getSuffix();
	static const char16_t SEPARATOR = ((char16_t)46);
	$String* prefix = nullptr;
	$String* suffix = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("SEPARATOR")

#endif // _sun_security_x509_X509AttributeName_h_