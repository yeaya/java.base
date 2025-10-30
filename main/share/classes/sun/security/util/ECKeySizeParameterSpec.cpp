#include <sun/security/util/ECKeySizeParameterSpec.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _ECKeySizeParameterSpec_FieldInfo_[] = {
	{"keySize", "I", nullptr, $PRIVATE, $field(ECKeySizeParameterSpec, keySize)},
	{}
};

$MethodInfo _ECKeySizeParameterSpec_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ECKeySizeParameterSpec::*)(int32_t)>(&ECKeySizeParameterSpec::init$))},
	{"getKeySize", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ECKeySizeParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.ECKeySizeParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_ECKeySizeParameterSpec_FieldInfo_,
	_ECKeySizeParameterSpec_MethodInfo_
};

$Object* allocate$ECKeySizeParameterSpec($Class* clazz) {
	return $of($alloc(ECKeySizeParameterSpec));
}

void ECKeySizeParameterSpec::init$(int32_t keySize) {
	this->keySize = keySize;
}

int32_t ECKeySizeParameterSpec::getKeySize() {
	return this->keySize;
}

ECKeySizeParameterSpec::ECKeySizeParameterSpec() {
}

$Class* ECKeySizeParameterSpec::load$($String* name, bool initialize) {
	$loadClass(ECKeySizeParameterSpec, name, initialize, &_ECKeySizeParameterSpec_ClassInfo_, allocate$ECKeySizeParameterSpec);
	return class$;
}

$Class* ECKeySizeParameterSpec::class$ = nullptr;

		} // util
	} // security
} // sun