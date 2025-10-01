#ifndef _java_security_AlgorithmParameters_h_
#define _java_security_AlgorithmParameters_h_
//$ class java.security.AlgorithmParameters
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmParametersSpi;
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace java {
	namespace security {

class $import AlgorithmParameters : public ::java::lang::Object {
	$class(AlgorithmParameters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AlgorithmParameters();
	void init$(::java::security::AlgorithmParametersSpi* paramSpi, ::java::security::Provider* provider, $String* algorithm);
	$String* getAlgorithm();
	$bytes* getEncoded();
	$bytes* getEncoded($String* format);
	static ::java::security::AlgorithmParameters* getInstance($String* algorithm);
	static ::java::security::AlgorithmParameters* getInstance($String* algorithm, $String* provider);
	static ::java::security::AlgorithmParameters* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::spec::AlgorithmParameterSpec* getParameterSpec($Class* paramSpec);
	::java::security::Provider* getProvider();
	void init(::java::security::spec::AlgorithmParameterSpec* paramSpec);
	void init($bytes* params);
	void init($bytes* params, $String* format);
	virtual $String* toString() override;
	::java::security::Provider* provider = nullptr;
	::java::security::AlgorithmParametersSpi* paramSpi = nullptr;
	$String* algorithm = nullptr;
	bool initialized = false;
};

	} // security
} // java

#endif // _java_security_AlgorithmParameters_h_