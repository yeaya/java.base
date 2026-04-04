#include <javax/crypto/interfaces/PBEKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace crypto {
		namespace interfaces {

$Class* PBEKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(PBEKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getIterationCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PBEKey, getIterationCount, int32_t)},
		{"getPassword", "()[C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PBEKey, getPassword, $chars*)},
		{"getSalt", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PBEKey, getSalt, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.crypto.interfaces.PBEKey",
		nullptr,
		"javax.crypto.SecretKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PBEKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PBEKey));
	});
	return class$;
}

$Class* PBEKey::class$ = nullptr;

		} // interfaces
	} // crypto
} // javax