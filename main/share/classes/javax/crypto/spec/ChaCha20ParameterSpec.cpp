#include <javax/crypto/spec/ChaCha20ParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef NONCE_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace javax {
	namespace crypto {
		namespace spec {

void ChaCha20ParameterSpec::init$($bytes* nonce, int32_t counter) {
	this->counter = counter;
	$Objects::requireNonNull(nonce, "Nonce must be non-null"_s);
	$set(this, nonce, $cast($bytes, $nc(nonce)->clone()));
	if (this->nonce->length != ChaCha20ParameterSpec::NONCE_LENGTH) {
		$throwNew($IllegalArgumentException, "Nonce must be 12-bytes in length"_s);
	}
}

$bytes* ChaCha20ParameterSpec::getNonce() {
	return $cast($bytes, $nc(this->nonce)->clone());
}

int32_t ChaCha20ParameterSpec::getCounter() {
	return this->counter;
}

ChaCha20ParameterSpec::ChaCha20ParameterSpec() {
}

$Class* ChaCha20ParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NONCE_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20ParameterSpec, NONCE_LENGTH)},
		{"nonce", "[B", nullptr, $PRIVATE | $FINAL, $field(ChaCha20ParameterSpec, nonce)},
		{"counter", "I", nullptr, $PRIVATE | $FINAL, $field(ChaCha20ParameterSpec, counter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BI)V", nullptr, $PUBLIC, $method(ChaCha20ParameterSpec, init$, void, $bytes*, int32_t)},
		{"getCounter", "()I", nullptr, $PUBLIC, $method(ChaCha20ParameterSpec, getCounter, int32_t)},
		{"getNonce", "()[B", nullptr, $PUBLIC, $method(ChaCha20ParameterSpec, getNonce, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.crypto.spec.ChaCha20ParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ChaCha20ParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChaCha20ParameterSpec);
	});
	return class$;
}

$Class* ChaCha20ParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax