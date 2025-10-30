#include <java/math/SignedMutableBigInteger.h>

#include <java/math/BigInteger.h>
#include <java/math/MutableBigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $MutableBigInteger = ::java::math::MutableBigInteger;

namespace java {
	namespace math {

$FieldInfo _SignedMutableBigInteger_FieldInfo_[] = {
	{"sign", "I", nullptr, 0, $field(SignedMutableBigInteger, sign)},
	{}
};

$MethodInfo _SignedMutableBigInteger_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SignedMutableBigInteger::*)()>(&SignedMutableBigInteger::init$))},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(SignedMutableBigInteger::*)(int32_t)>(&SignedMutableBigInteger::init$))},
	{"<init>", "(Ljava/math/MutableBigInteger;)V", nullptr, 0, $method(static_cast<void(SignedMutableBigInteger::*)($MutableBigInteger*)>(&SignedMutableBigInteger::init$))},
	{"signedAdd", "(Ljava/math/SignedMutableBigInteger;)V", nullptr, 0},
	{"signedAdd", "(Ljava/math/MutableBigInteger;)V", nullptr, 0},
	{"signedSubtract", "(Ljava/math/SignedMutableBigInteger;)V", nullptr, 0},
	{"signedSubtract", "(Ljava/math/MutableBigInteger;)V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SignedMutableBigInteger_ClassInfo_ = {
	$ACC_SUPER,
	"java.math.SignedMutableBigInteger",
	"java.math.MutableBigInteger",
	nullptr,
	_SignedMutableBigInteger_FieldInfo_,
	_SignedMutableBigInteger_MethodInfo_
};

$Object* allocate$SignedMutableBigInteger($Class* clazz) {
	return $of($alloc(SignedMutableBigInteger));
}

void SignedMutableBigInteger::init$() {
	$MutableBigInteger::init$();
	this->sign = 1;
}

void SignedMutableBigInteger::init$(int32_t val) {
	$MutableBigInteger::init$(val);
	this->sign = 1;
}

void SignedMutableBigInteger::init$($MutableBigInteger* val) {
	$MutableBigInteger::init$(val);
	this->sign = 1;
}

void SignedMutableBigInteger::signedAdd(SignedMutableBigInteger* addend) {
	if (this->sign == $nc(addend)->sign) {
		add(addend);
	} else {
		this->sign = this->sign * subtract(addend);
	}
}

void SignedMutableBigInteger::signedAdd($MutableBigInteger* addend) {
	if (this->sign == 1) {
		add(addend);
	} else {
		this->sign = this->sign * subtract(addend);
	}
}

void SignedMutableBigInteger::signedSubtract(SignedMutableBigInteger* addend) {
	if (this->sign == $nc(addend)->sign) {
		this->sign = this->sign * subtract(addend);
	} else {
		add(addend);
	}
}

void SignedMutableBigInteger::signedSubtract($MutableBigInteger* addend) {
	if (this->sign == 1) {
		this->sign = this->sign * subtract(addend);
	} else {
		add(addend);
	}
	if (this->intLen == 0) {
		this->sign = 1;
	}
}

$String* SignedMutableBigInteger::toString() {
	return $nc($(this->toBigInteger(this->sign)))->toString();
}

SignedMutableBigInteger::SignedMutableBigInteger() {
}

$Class* SignedMutableBigInteger::load$($String* name, bool initialize) {
	$loadClass(SignedMutableBigInteger, name, initialize, &_SignedMutableBigInteger_ClassInfo_, allocate$SignedMutableBigInteger);
	return class$;
}

$Class* SignedMutableBigInteger::class$ = nullptr;

	} // math
} // java