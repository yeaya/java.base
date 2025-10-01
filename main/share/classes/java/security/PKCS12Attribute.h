#ifndef _java_security_PKCS12Attribute_h_
#define _java_security_PKCS12Attribute_h_
//$ class java.security.PKCS12Attribute
//$ extends java.security.KeyStore$Entry$Attribute

#include <java/lang/Array.h>
#include <java/security/KeyStore$Entry$Attribute.h>

#pragma push_macro("COLON_SEPARATED_HEX_PAIRS")
#undef COLON_SEPARATED_HEX_PAIRS

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace java {
	namespace security {

class $export PKCS12Attribute : public ::java::security::KeyStore$Entry$Attribute {
	$class(PKCS12Attribute, 0, ::java::security::KeyStore$Entry$Attribute)
public:
	PKCS12Attribute();
	void init$($String* name, $String* value);
	void init$($bytes* encoded);
	$bytes* encode(::sun::security::util::ObjectIdentifier* type, $StringArray* values);
	virtual bool equals(Object$* obj) override;
	$bytes* getEncoded();
	virtual $String* getName() override;
	virtual $String* getValue() override;
	virtual int32_t hashCode() override;
	void parse($bytes* encoded);
	virtual $String* toString() override;
	static ::java::util::regex::Pattern* COLON_SEPARATED_HEX_PAIRS;
	$String* name = nullptr;
	$String* value = nullptr;
	$bytes* encoded = nullptr;
	int32_t hashValue = 0;
};

	} // security
} // java

#pragma pop_macro("COLON_SEPARATED_HEX_PAIRS")

#endif // _java_security_PKCS12Attribute_h_