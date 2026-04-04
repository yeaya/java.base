#include <sun/security/util/ECKeySizeParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

void ECKeySizeParameterSpec::init$(int32_t keySize) {
	this->keySize = keySize;
}

int32_t ECKeySizeParameterSpec::getKeySize() {
	return this->keySize;
}

ECKeySizeParameterSpec::ECKeySizeParameterSpec() {
}

$Class* ECKeySizeParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"keySize", "I", nullptr, $PRIVATE, $field(ECKeySizeParameterSpec, keySize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ECKeySizeParameterSpec, init$, void, int32_t)},
		{"getKeySize", "()I", nullptr, $PUBLIC, $virtualMethod(ECKeySizeParameterSpec, getKeySize, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.ECKeySizeParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ECKeySizeParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECKeySizeParameterSpec);
	});
	return class$;
}

$Class* ECKeySizeParameterSpec::class$ = nullptr;

		} // util
	} // security
} // sun