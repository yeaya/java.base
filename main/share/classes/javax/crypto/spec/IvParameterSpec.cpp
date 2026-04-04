#include <javax/crypto/spec/IvParameterSpec.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace crypto {
		namespace spec {

void IvParameterSpec::init$($bytes* iv) {
	IvParameterSpec::init$(iv, 0, $nc(iv)->length);
}

void IvParameterSpec::init$($bytes* iv, int32_t offset, int32_t len) {
	if (iv == nullptr) {
		$throwNew($IllegalArgumentException, "IV missing"_s);
	}
	if ($nc(iv)->length - offset < len) {
		$throwNew($IllegalArgumentException, "IV buffer too short for given offset/length combination"_s);
	}
	if (len < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, "len is negative"_s);
	}
	$set(this, iv, $new($bytes, len));
	$System::arraycopy(iv, offset, this->iv, 0, len);
}

$bytes* IvParameterSpec::getIV() {
	return $cast($bytes, $nc(this->iv)->clone());
}

IvParameterSpec::IvParameterSpec() {
}

$Class* IvParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iv", "[B", nullptr, $PRIVATE, $field(IvParameterSpec, iv)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(IvParameterSpec, init$, void, $bytes*)},
		{"<init>", "([BII)V", nullptr, $PUBLIC, $method(IvParameterSpec, init$, void, $bytes*, int32_t, int32_t)},
		{"getIV", "()[B", nullptr, $PUBLIC, $virtualMethod(IvParameterSpec, getIV, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.spec.IvParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IvParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IvParameterSpec);
	});
	return class$;
}

$Class* IvParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax