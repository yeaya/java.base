#ifndef _java_security_AlgorithmParametersSpi_h_
#define _java_security_AlgorithmParametersSpi_h_
//$ class java.security.AlgorithmParametersSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace java {
	namespace security {

class $import AlgorithmParametersSpi : public ::java::lang::Object {
	$class(AlgorithmParametersSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AlgorithmParametersSpi();
	void init$();
	virtual $bytes* engineGetEncoded() {return nullptr;}
	virtual $bytes* engineGetEncoded($String* format) {return nullptr;}
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) {return nullptr;}
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) {}
	virtual void engineInit($bytes* params) {}
	virtual void engineInit($bytes* params, $String* format) {}
	virtual $String* engineToString() {return nullptr;}
};

	} // security
} // java

#endif // _java_security_AlgorithmParametersSpi_h_