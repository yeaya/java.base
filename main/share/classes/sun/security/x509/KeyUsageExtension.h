#ifndef _sun_security_x509_KeyUsageExtension_h_
#define _sun_security_x509_KeyUsageExtension_h_
//$ class sun.security.x509.KeyUsageExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <java/lang/Array.h>
#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("DATA_ENCIPHERMENT")
#undef DATA_ENCIPHERMENT
#pragma push_macro("CRL_SIGN")
#undef CRL_SIGN
#pragma push_macro("KEY_AGREEMENT")
#undef KEY_AGREEMENT
#pragma push_macro("DECIPHER_ONLY")
#undef DECIPHER_ONLY
#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("DIGITAL_SIGNATURE")
#undef DIGITAL_SIGNATURE
#pragma push_macro("ENCIPHER_ONLY")
#undef ENCIPHER_ONLY
#pragma push_macro("KEY_ENCIPHERMENT")
#undef KEY_ENCIPHERMENT
#pragma push_macro("NON_REPUDIATION")
#undef NON_REPUDIATION
#pragma push_macro("KEY_CERTSIGN")
#undef KEY_CERTSIGN
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class BitArray;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export KeyUsageExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(KeyUsageExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	KeyUsageExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($bytes* bitString);
	void init$($booleans* bitString);
	void init$(::sun::security::util::BitArray* bitString);
	void init$(::java::lang::Boolean* critical, Object$* value);
	void init$();
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual $booleans* getBits();
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	bool isSet(int32_t position);
	void set(int32_t position, bool val);
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
	static $String* DIGITAL_SIGNATURE;
	static $String* NON_REPUDIATION;
	static $String* KEY_ENCIPHERMENT;
	static $String* DATA_ENCIPHERMENT;
	static $String* KEY_AGREEMENT;
	static $String* KEY_CERTSIGN;
	static $String* CRL_SIGN;
	static $String* ENCIPHER_ONLY;
	static $String* DECIPHER_ONLY;
	$booleans* bitString = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("DATA_ENCIPHERMENT")
#pragma pop_macro("CRL_SIGN")
#pragma pop_macro("KEY_AGREEMENT")
#pragma pop_macro("DECIPHER_ONLY")
#pragma pop_macro("IDENT")
#pragma pop_macro("DIGITAL_SIGNATURE")
#pragma pop_macro("ENCIPHER_ONLY")
#pragma pop_macro("KEY_ENCIPHERMENT")
#pragma pop_macro("NON_REPUDIATION")
#pragma pop_macro("KEY_CERTSIGN")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_KeyUsageExtension_h_