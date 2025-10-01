#ifndef _sun_security_ssl_X509KeyManagerImpl$EntryStatus_h_
#define _sun_security_ssl_X509KeyManagerImpl$EntryStatus_h_
//$ class sun.security.ssl.X509KeyManagerImpl$EntryStatus
//$ extends java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
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

class X509KeyManagerImpl$EntryStatus : public ::java::lang::Comparable {
	$class(X509KeyManagerImpl$EntryStatus, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	X509KeyManagerImpl$EntryStatus();
	void init$(int32_t builderIndex, int32_t keyIndex, $String* alias, $Array<::java::security::cert::Certificate>* chain, ::sun::security::ssl::X509KeyManagerImpl$CheckResult* checkResult);
	virtual int32_t compareTo(::sun::security::ssl::X509KeyManagerImpl$EntryStatus* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual $String* toString() override;
	int32_t builderIndex = 0;
	int32_t keyIndex = 0;
	$String* alias = nullptr;
	::sun::security::ssl::X509KeyManagerImpl$CheckResult* checkResult = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_X509KeyManagerImpl$EntryStatus_h_