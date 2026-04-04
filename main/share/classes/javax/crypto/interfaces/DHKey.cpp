#include <javax/crypto/interfaces/DHKey.h>
#include <javax/crypto/spec/DHParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DHParameterSpec = ::javax::crypto::spec::DHParameterSpec;

namespace javax {
	namespace crypto {
		namespace interfaces {

$Class* DHKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getParams", "()Ljavax/crypto/spec/DHParameterSpec;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DHKey, getParams, $DHParameterSpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.crypto.interfaces.DHKey",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DHKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DHKey);
	});
	return class$;
}

$Class* DHKey::class$ = nullptr;

		} // interfaces
	} // crypto
} // javax