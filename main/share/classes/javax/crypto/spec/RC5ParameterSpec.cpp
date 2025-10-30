#include <javax/crypto/spec/RC5ParameterSpec.h>

#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _RC5ParameterSpec_FieldInfo_[] = {
	{"iv", "[B", nullptr, $PRIVATE, $field(RC5ParameterSpec, iv)},
	{"version", "I", nullptr, $PRIVATE, $field(RC5ParameterSpec, version)},
	{"rounds", "I", nullptr, $PRIVATE, $field(RC5ParameterSpec, rounds)},
	{"wordSize", "I", nullptr, $PRIVATE, $field(RC5ParameterSpec, wordSize)},
	{}
};

$MethodInfo _RC5ParameterSpec_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(RC5ParameterSpec::*)(int32_t,int32_t,int32_t)>(&RC5ParameterSpec::init$))},
	{"<init>", "(III[B)V", nullptr, $PUBLIC, $method(static_cast<void(RC5ParameterSpec::*)(int32_t,int32_t,int32_t,$bytes*)>(&RC5ParameterSpec::init$))},
	{"<init>", "(III[BI)V", nullptr, $PUBLIC, $method(static_cast<void(RC5ParameterSpec::*)(int32_t,int32_t,int32_t,$bytes*,int32_t)>(&RC5ParameterSpec::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getIV", "()[B", nullptr, $PUBLIC},
	{"getRounds", "()I", nullptr, $PUBLIC},
	{"getVersion", "()I", nullptr, $PUBLIC},
	{"getWordSize", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RC5ParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.RC5ParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_RC5ParameterSpec_FieldInfo_,
	_RC5ParameterSpec_MethodInfo_
};

$Object* allocate$RC5ParameterSpec($Class* clazz) {
	return $of($alloc(RC5ParameterSpec));
}

void RC5ParameterSpec::init$(int32_t version, int32_t rounds, int32_t wordSize) {
	$set(this, iv, nullptr);
	this->version = version;
	this->rounds = rounds;
	this->wordSize = wordSize;
}

void RC5ParameterSpec::init$(int32_t version, int32_t rounds, int32_t wordSize, $bytes* iv) {
	RC5ParameterSpec::init$(version, rounds, wordSize, iv, 0);
}

void RC5ParameterSpec::init$(int32_t version, int32_t rounds, int32_t wordSize, $bytes* iv, int32_t offset) {
	$set(this, iv, nullptr);
	this->version = version;
	this->rounds = rounds;
	this->wordSize = wordSize;
	if (iv == nullptr) {
		$throwNew($IllegalArgumentException, "IV missing"_s);
	}
	int32_t blockSize = (wordSize / 8) * 2;
	if ($nc(iv)->length - offset < blockSize) {
		$throwNew($IllegalArgumentException, "IV too short"_s);
	}
	$set(this, iv, $new($bytes, blockSize));
	$System::arraycopy(iv, offset, this->iv, 0, blockSize);
}

int32_t RC5ParameterSpec::getVersion() {
	return this->version;
}

int32_t RC5ParameterSpec::getRounds() {
	return this->rounds;
}

int32_t RC5ParameterSpec::getWordSize() {
	return this->wordSize;
}

$bytes* RC5ParameterSpec::getIV() {
	return (this->iv == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->iv)->clone()));
}

bool RC5ParameterSpec::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(RC5ParameterSpec, obj))) {
		return false;
	}
	$var(RC5ParameterSpec, other, $cast(RC5ParameterSpec, obj));
	return ((this->version == $nc(other)->version) && (this->rounds == other->rounds) && (this->wordSize == other->wordSize) && $Arrays::equals(this->iv, other->iv));
}

int32_t RC5ParameterSpec::hashCode() {
	int32_t retval = 0;
	if (this->iv != nullptr) {
		for (int32_t i = 1; i < $nc(this->iv)->length; ++i) {
			retval += $nc(this->iv)->get(i) * i;
		}
	}
	retval += (this->version + this->rounds + this->wordSize);
	return retval;
}

RC5ParameterSpec::RC5ParameterSpec() {
}

$Class* RC5ParameterSpec::load$($String* name, bool initialize) {
	$loadClass(RC5ParameterSpec, name, initialize, &_RC5ParameterSpec_ClassInfo_, allocate$RC5ParameterSpec);
	return class$;
}

$Class* RC5ParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax