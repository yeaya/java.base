#ifndef _sun_security_ssl_X509KeyManagerImpl$CheckType_h_
#define _sun_security_ssl_X509KeyManagerImpl$CheckType_h_
//$ class sun.security.ssl.X509KeyManagerImpl$CheckType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLIENT")
#undef CLIENT
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("SERVER")
#undef SERVER

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class List;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class X509KeyManagerImpl$CheckResult;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class X509KeyManagerImpl$CheckType : public ::java::lang::Enum {
	$class(X509KeyManagerImpl$CheckType, 0, ::java::lang::Enum)
public:
	X509KeyManagerImpl$CheckType();
	static $Array<::sun::security::ssl::X509KeyManagerImpl$CheckType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::java::util::Set* validEku);
	virtual ::sun::security::ssl::X509KeyManagerImpl$CheckResult* check(::java::security::cert::X509Certificate* cert, ::java::util::Date* date, ::java::util::List* serverNames, $String* idAlgorithm);
	static bool getBit($booleans* keyUsage, int32_t bit);
	virtual $String* getValidator();
	static ::sun::security::ssl::X509KeyManagerImpl$CheckType* valueOf($String* name);
	static $Array<::sun::security::ssl::X509KeyManagerImpl$CheckType>* values();
	static ::sun::security::ssl::X509KeyManagerImpl$CheckType* NONE;
	static ::sun::security::ssl::X509KeyManagerImpl$CheckType* CLIENT;
	static ::sun::security::ssl::X509KeyManagerImpl$CheckType* SERVER;
	static $Array<::sun::security::ssl::X509KeyManagerImpl$CheckType>* $VALUES;
	::java::util::Set* validEku = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("CLIENT")
#pragma pop_macro("NONE")
#pragma pop_macro("SERVER")

#endif // _sun_security_ssl_X509KeyManagerImpl$CheckType_h_