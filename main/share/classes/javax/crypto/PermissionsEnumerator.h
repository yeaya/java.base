#ifndef _javax_crypto_PermissionsEnumerator_h_
#define _javax_crypto_PermissionsEnumerator_h_
//$ class javax.crypto.PermissionsEnumerator
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace javax {
	namespace crypto {

class PermissionsEnumerator : public ::java::util::Enumeration {
	$class(PermissionsEnumerator, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	PermissionsEnumerator();
	void init$(::java::util::Enumeration* e);
	::java::util::Enumeration* getNextEnumWithMore();
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::Enumeration* perms = nullptr;
	::java::util::Enumeration* permset = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_PermissionsEnumerator_h_