#ifndef _javax_crypto_spec_PSource$PSpecified_h_
#define _javax_crypto_spec_PSource$PSpecified_h_
//$ class javax.crypto.spec.PSource$PSpecified
//$ extends javax.crypto.spec.PSource

#include <java/lang/Array.h>
#include <javax/crypto/spec/PSource.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace javax {
	namespace crypto {
		namespace spec {

class $import PSource$PSpecified : public ::javax::crypto::spec::PSource {
	$class(PSource$PSpecified, 0, ::javax::crypto::spec::PSource)
public:
	PSource$PSpecified();
	void init$($bytes* p);
	$bytes* getValue();
	$bytes* p = nullptr;
	static ::javax::crypto::spec::PSource$PSpecified* DEFAULT;
};

		} // spec
	} // crypto
} // javax

#pragma pop_macro("DEFAULT")

#endif // _javax_crypto_spec_PSource$PSpecified_h_