#include <javax/crypto/interfaces/DHKey.h>

#include <javax/crypto/spec/DHParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DHParameterSpec = ::javax::crypto::spec::DHParameterSpec;

namespace javax {
	namespace crypto {
		namespace interfaces {

$MethodInfo _DHKey_MethodInfo_[] = {
	{"getParams", "()Ljavax/crypto/spec/DHParameterSpec;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DHKey, getParams, $DHParameterSpec*)},
	{}
};

$ClassInfo _DHKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.crypto.interfaces.DHKey",
	nullptr,
	nullptr,
	nullptr,
	_DHKey_MethodInfo_
};

$Object* allocate$DHKey($Class* clazz) {
	return $of($alloc(DHKey));
}

$Class* DHKey::load$($String* name, bool initialize) {
	$loadClass(DHKey, name, initialize, &_DHKey_ClassInfo_, allocate$DHKey);
	return class$;
}

$Class* DHKey::class$ = nullptr;

		} // interfaces
	} // crypto
} // javax