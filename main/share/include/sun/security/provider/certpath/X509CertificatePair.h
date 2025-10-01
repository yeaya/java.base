#ifndef _sun_security_provider_certpath_X509CertificatePair_h_
#define _sun_security_provider_certpath_X509CertificatePair_h_
//$ class sun.security.provider.certpath.X509CertificatePair
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TAG_FORWARD")
#undef TAG_FORWARD
#pragma push_macro("TAG_REVERSE")
#undef TAG_REVERSE

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Cache;
			class DerOutputStream;
			class DerValue;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import X509CertificatePair : public ::java::lang::Object {
	$class(X509CertificatePair, 0, ::java::lang::Object)
public:
	X509CertificatePair();
	void init$();
	void init$(::java::security::cert::X509Certificate* forward, ::java::security::cert::X509Certificate* reverse);
	void init$($bytes* encoded);
	void checkPair();
	static void clearCache();
	void emit(::sun::security::util::DerOutputStream* out);
	static ::sun::security::provider::certpath::X509CertificatePair* generateCertificatePair($bytes* encoded);
	virtual $bytes* getEncoded();
	virtual ::java::security::cert::X509Certificate* getForward();
	virtual ::java::security::cert::X509Certificate* getReverse();
	void parse(::sun::security::util::DerValue* val);
	virtual void setForward(::java::security::cert::X509Certificate* cert);
	virtual void setReverse(::java::security::cert::X509Certificate* cert);
	virtual $String* toString() override;
	static const int8_t TAG_FORWARD = 0;
	static const int8_t TAG_REVERSE = 1;
	::java::security::cert::X509Certificate* forward = nullptr;
	::java::security::cert::X509Certificate* reverse = nullptr;
	$bytes* encoded = nullptr;
	static ::sun::security::util::Cache* cache;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("TAG_FORWARD")
#pragma pop_macro("TAG_REVERSE")

#endif // _sun_security_provider_certpath_X509CertificatePair_h_