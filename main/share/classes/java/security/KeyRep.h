#ifndef _java_security_KeyRep_h_
#define _java_security_KeyRep_h_
//$ class java.security.KeyRep
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("PKCS8")
#undef PKCS8
#pragma push_macro("RAW")
#undef RAW

namespace java {
	namespace security {
		class KeyRep$Type;
	}
}

namespace java {
	namespace security {

class $export KeyRep : public ::java::io::Serializable {
	$class(KeyRep, 0, ::java::io::Serializable)
public:
	KeyRep();
	void init$(::java::security::KeyRep$Type* type, $String* algorithm, $String* format, $bytes* encoded);
	virtual $Object* readResolve();
	static const int64_t serialVersionUID = (int64_t)0xBDF94FB3889AA543;
	static $String* PKCS8;
	static $String* X509;
	static $String* RAW;
	::java::security::KeyRep$Type* type = nullptr;
	$String* algorithm = nullptr;
	$String* format = nullptr;
	$bytes* encoded = nullptr;
};

	} // security
} // java

#pragma pop_macro("PKCS8")
#pragma pop_macro("RAW")

#endif // _java_security_KeyRep_h_