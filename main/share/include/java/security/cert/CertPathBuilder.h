#ifndef _java_security_cert_CertPathBuilder_h_
#define _java_security_cert_CertPathBuilder_h_
//$ class java.security.cert.CertPathBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CPB_TYPE")
#undef CPB_TYPE

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPathBuilderResult;
			class CertPathBuilderSpi;
			class CertPathChecker;
			class CertPathParameters;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import CertPathBuilder : public ::java::lang::Object {
	$class(CertPathBuilder, 0, ::java::lang::Object)
public:
	CertPathBuilder();
	void init$(::java::security::cert::CertPathBuilderSpi* builderSpi, ::java::security::Provider* provider, $String* algorithm);
	::java::security::cert::CertPathBuilderResult* build(::java::security::cert::CertPathParameters* params);
	$String* getAlgorithm();
	static $String* getDefaultType();
	static ::java::security::cert::CertPathBuilder* getInstance($String* algorithm);
	static ::java::security::cert::CertPathBuilder* getInstance($String* algorithm, $String* provider);
	static ::java::security::cert::CertPathBuilder* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	::java::security::cert::CertPathChecker* getRevocationChecker();
	static $String* CPB_TYPE;
	::java::security::cert::CertPathBuilderSpi* builderSpi = nullptr;
	::java::security::Provider* provider = nullptr;
	$String* algorithm = nullptr;
};

		} // cert
	} // security
} // java

#pragma pop_macro("CPB_TYPE")

#endif // _java_security_cert_CertPathBuilder_h_