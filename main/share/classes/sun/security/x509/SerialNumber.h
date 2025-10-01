#ifndef _sun_security_x509_SerialNumber_h_
#define _sun_security_x509_SerialNumber_h_
//$ class sun.security.x509.SerialNumber
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
			class DerOutputStream;
			class DerValue;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export SerialNumber : public ::java::lang::Object {
	$class(SerialNumber, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SerialNumber();
	void init$(::java::math::BigInteger* num);
	void init$(int32_t num);
	void init$(::sun::security::util::DerInputStream* in);
	void init$(::sun::security::util::DerValue* val);
	void init$(::java::io::InputStream* in);
	void construct(::sun::security::util::DerValue* derVal);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual ::java::math::BigInteger* getNumber();
	virtual $String* toString() override;
	::java::math::BigInteger* serialNum = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_SerialNumber_h_