#ifndef _javax_crypto_spec_PSource_h_
#define _javax_crypto_spec_PSource_h_
//$ class javax.crypto.spec.PSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace crypto {
		namespace spec {

class $import PSource : public ::java::lang::Object {
	$class(PSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PSource();
	void init$($String* pSrcName);
	virtual $String* getAlgorithm();
	$String* pSrcName = nullptr;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_PSource_h_