#ifndef _sun_security_x509_OIDMap$OIDInfo_h_
#define _sun_security_x509_OIDMap$OIDInfo_h_
//$ class sun.security.x509.OIDMap$OIDInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class OIDMap$OIDInfo : public ::java::lang::Object {
	$class(OIDMap$OIDInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OIDMap$OIDInfo();
	void init$($String* name, ::sun::security::util::ObjectIdentifier* oid, $String* className);
	void init$($String* name, ::sun::security::util::ObjectIdentifier* oid, $Class* clazz);
	virtual $Class* getClazz();
	::sun::security::util::ObjectIdentifier* oid = nullptr;
	$String* name = nullptr;
	$String* className = nullptr;
	$volatile($Class*) clazz = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_OIDMap$OIDInfo_h_