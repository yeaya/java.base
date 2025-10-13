#ifndef _sun_security_x509_CertificateSerialNumber_h_
#define _sun_security_x509_CertificateSerialNumber_h_
//$ class sun.security.x509.CertificateSerialNumber
//$ extends sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("NUMBER")
#undef NUMBER

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Random;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
			class DerValue;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class SerialNumber;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export CertificateSerialNumber : public ::sun::security::x509::CertAttrSet {
	$class(CertificateSerialNumber, 0, ::sun::security::x509::CertAttrSet)
public:
	CertificateSerialNumber();
	void init$(::java::math::BigInteger* num);
	void init$(int32_t num);
	void init$(::sun::security::util::DerInputStream* in);
	void init$(::java::io::InputStream* in);
	void init$(::sun::security::util::DerValue* val);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	static ::sun::security::x509::CertificateSerialNumber* newRandom64bit(::java::util::Random* rand);
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
	static $String* NUMBER;
	::sun::security::x509::SerialNumber* serial = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("NAME")
#pragma pop_macro("NUMBER")

#endif // _sun_security_x509_CertificateSerialNumber_h_