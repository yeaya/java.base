#ifndef _sun_security_rsa_RSAUtil_h_
#define _sun_security_rsa_RSAUtil_h_
//$ class sun.security.rsa.RSAUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace rsa {
			class RSAUtil$KeyType;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $export RSAUtil : public ::java::lang::Object {
	$class(RSAUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RSAUtil();
	void init$();
	static ::java::security::spec::AlgorithmParameterSpec* checkParamsAgainstType(::sun::security::rsa::RSAUtil$KeyType* type, ::java::security::spec::AlgorithmParameterSpec* paramSpec);
	static ::sun::security::x509::AlgorithmId* createAlgorithmId(::sun::security::rsa::RSAUtil$KeyType* type, ::java::security::spec::AlgorithmParameterSpec* paramSpec);
	static ::java::security::spec::AlgorithmParameterSpec* getParamSpec(::java::security::AlgorithmParameters* params);
	static ::java::security::AlgorithmParameters* getParams(::sun::security::rsa::RSAUtil$KeyType* type, ::java::security::spec::AlgorithmParameterSpec* spec);
	static $ObjectArray* getTypeAndParamSpec(::sun::security::x509::AlgorithmId* algid);
	static void requireNonNull(Object$* obj, $String* msg);
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_RSAUtil_h_