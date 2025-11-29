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

$FieldInfo _ChaCha20ParameterSpec_FieldInfo_[] = {
	{"NONCE_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20ParameterSpec, NONCE_LENGTH)},
	{"nonce", "[B", nullptr, $PRIVATE | $FINAL, $field(ChaCha20ParameterSpec, nonce)},
	{"counter", "I", nullptr, $PRIVATE | $FINAL, $field(ChaCha20ParameterSpec, counter)},
	{}
};

$MethodInfo _ChaCha20ParameterSpec_MethodInfo_[] = {
	{"<init>", "([BI)V", nullptr, $PUBLIC, $method(static_cast<void(ChaCha20ParameterSpec::*)($bytes*,int32_t)>(&ChaCha20ParameterSpec::init$))},
	{"getCounter", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ChaCha20ParameterSpec::*)()>(&ChaCha20ParameterSpec::getCounter))},
	{"getNonce", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(ChaCha20ParameterSpec::*)()>(&ChaCha20ParameterSpec::getNonce))},
	{}
};

$ClassInfo _ChaCha20ParameterSpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.crypto.spec.ChaCha20ParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_ChaCha20ParameterSpec_FieldInfo_,
	_ChaCha20ParameterSpec_MethodInfo_
};

$Object* allocate$ChaCha20ParameterSpec($Class* clazz) {
	return $of($alloc(ChaCha20ParameterSpec));
}

void ChaCha20ParameterSpec::init$($bytes* nonce, int32_t counter) {
	this->counter = counter;
	$Objects::requireNonNull($of(nonce), "Nonce must be non-null"_s);
	$set(this, nonce, $cast($bytes, $nc(nonce)->clone()));
	if ($nc(this->nonce)->length != ChaCha20ParameterSpec::NONCE_LENGTH) {
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
	$loadClass(ChaCha20ParameterSpec, name, initialize, &_ChaCha20ParameterSpec_ClassInfo_, allocate$ChaCha20ParameterSpec);
	return class$;
}

$Class* ChaCha20ParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax