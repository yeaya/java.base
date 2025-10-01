#ifndef _sun_security_x509_AVAKeyword_h_
#define _sun_security_x509_AVAKeyword_h_
//$ class sun.security.x509.AVAKeyword
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
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

class AVAKeyword : public ::java::lang::Object {
	$class(AVAKeyword, 0, ::java::lang::Object)
public:
	AVAKeyword();
	void init$($String* keyword, ::sun::security::util::ObjectIdentifier* oid, bool rfc1779Compliant, bool rfc2253Compliant);
	static $String* getKeyword(::sun::security::util::ObjectIdentifier* oid, int32_t standard);
	static $String* getKeyword(::sun::security::util::ObjectIdentifier* oid, int32_t standard, ::java::util::Map* extraOidMap);
	static ::sun::security::util::ObjectIdentifier* getOID($String* keyword, int32_t standard, ::java::util::Map* extraKeywordMap);
	static bool hasKeyword(::sun::security::util::ObjectIdentifier* oid, int32_t standard);
	bool isCompliant(int32_t standard);
	static ::java::util::Map* oidMap;
	static ::java::util::Map* keywordMap;
	$String* keyword = nullptr;
	::sun::security::util::ObjectIdentifier* oid = nullptr;
	bool rfc1779Compliant = false;
	bool rfc2253Compliant = false;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_AVAKeyword_h_