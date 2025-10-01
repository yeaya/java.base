#ifndef _sun_security_x509_UniqueIdentity_h_
#define _sun_security_x509_UniqueIdentity_h_
//$ class sun.security.x509.UniqueIdentity
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace util {
			class BitArray;
			class DerInputStream;
			class DerOutputStream;
			class DerValue;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export UniqueIdentity : public ::java::lang::Object {
	$class(UniqueIdentity, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UniqueIdentity();
	void init$(::sun::security::util::BitArray* id);
	void init$($bytes* id);
	void init$(::sun::security::util::DerInputStream* in);
	void init$(::sun::security::util::DerValue* derVal);
	virtual void encode(::sun::security::util::DerOutputStream* out, int8_t tag);
	virtual $booleans* getId();
	virtual $String* toString() override;
	::sun::security::util::BitArray* id = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_UniqueIdentity_h_