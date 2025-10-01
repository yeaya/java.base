#ifndef _sun_security_x509_GeneralNameInterface_h_
#define _sun_security_x509_GeneralNameInterface_h_
//$ interface sun.security.x509.GeneralNameInterface
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NAME_NARROWS")
#undef NAME_NARROWS
#pragma push_macro("NAME_WIDENS")
#undef NAME_WIDENS
#pragma push_macro("NAME_RFC822")
#undef NAME_RFC822
#pragma push_macro("NAME_MATCH")
#undef NAME_MATCH
#pragma push_macro("NAME_IP")
#undef NAME_IP
#pragma push_macro("NAME_ANY")
#undef NAME_ANY
#pragma push_macro("NAME_URI")
#undef NAME_URI
#pragma push_macro("NAME_X400")
#undef NAME_X400
#pragma push_macro("NAME_SAME_TYPE")
#undef NAME_SAME_TYPE
#pragma push_macro("NAME_EDI")
#undef NAME_EDI
#pragma push_macro("NAME_OID")
#undef NAME_OID
#pragma push_macro("NAME_DIFF_TYPE")
#undef NAME_DIFF_TYPE
#pragma push_macro("NAME_DNS")
#undef NAME_DNS
#pragma push_macro("NAME_DIRECTORY")
#undef NAME_DIRECTORY

namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export GeneralNameInterface : public ::java::lang::Object {
	$interface(GeneralNameInterface, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) {return 0;}
	virtual void encode(::sun::security::util::DerOutputStream* out) {}
	virtual int32_t getType() {return 0;}
	virtual int32_t subtreeDepth() {return 0;}
	static const int32_t NAME_ANY = 0;
	static const int32_t NAME_RFC822 = 1;
	static const int32_t NAME_DNS = 2;
	static const int32_t NAME_X400 = 3;
	static const int32_t NAME_DIRECTORY = 4;
	static const int32_t NAME_EDI = 5;
	static const int32_t NAME_URI = 6;
	static const int32_t NAME_IP = 7;
	static const int32_t NAME_OID = 8;
	static const int32_t NAME_DIFF_TYPE = (-1);
	static const int32_t NAME_MATCH = 0;
	static const int32_t NAME_NARROWS = 1;
	static const int32_t NAME_WIDENS = 2;
	static const int32_t NAME_SAME_TYPE = 3;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("NAME_NARROWS")
#pragma pop_macro("NAME_WIDENS")
#pragma pop_macro("NAME_RFC822")
#pragma pop_macro("NAME_MATCH")
#pragma pop_macro("NAME_IP")
#pragma pop_macro("NAME_ANY")
#pragma pop_macro("NAME_URI")
#pragma pop_macro("NAME_X400")
#pragma pop_macro("NAME_SAME_TYPE")
#pragma pop_macro("NAME_EDI")
#pragma pop_macro("NAME_OID")
#pragma pop_macro("NAME_DIFF_TYPE")
#pragma pop_macro("NAME_DNS")
#pragma pop_macro("NAME_DIRECTORY")

#endif // _sun_security_x509_GeneralNameInterface_h_