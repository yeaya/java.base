#ifndef _sun_security_rsa_RSAUtil$KeyType_h_
#define _sun_security_rsa_RSAUtil$KeyType_h_
//$ class sun.security.rsa.RSAUtil$KeyType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PSS")
#undef PSS
#pragma push_macro("RSA")
#undef RSA

namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $export RSAUtil$KeyType : public ::java::lang::Enum {
	$class(RSAUtil$KeyType, 0, ::java::lang::Enum)
public:
	RSAUtil$KeyType();
	static $Array<::sun::security::rsa::RSAUtil$KeyType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* keyAlgo, ::sun::security::util::ObjectIdentifier* oid, $Class* paramSpecCls);
	static ::sun::security::rsa::RSAUtil$KeyType* lookup($String* name);
	static ::sun::security::rsa::RSAUtil$KeyType* valueOf($String* name);
	static $Array<::sun::security::rsa::RSAUtil$KeyType>* values();
	static ::sun::security::rsa::RSAUtil$KeyType* RSA;
	static ::sun::security::rsa::RSAUtil$KeyType* PSS;
	static $Array<::sun::security::rsa::RSAUtil$KeyType>* $VALUES;
	$String* keyAlgo = nullptr;
	::sun::security::util::ObjectIdentifier* oid = nullptr;
	$Class* paramSpecCls = nullptr;
};

		} // rsa
	} // security
} // sun

#pragma pop_macro("PSS")
#pragma pop_macro("RSA")

#endif // _sun_security_rsa_RSAUtil$KeyType_h_