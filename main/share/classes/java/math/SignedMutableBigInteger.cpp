#include <java/math/SignedMutableBigInteger.h>
#include <java/math/BigInteger.h>
#include <java/math/MutableBigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableBigInteger = ::java::math::MutableBigInteger;

namespace java {
	namespace math {

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
	return $$nc(this->toBigInteger(this->sign))->toString();
}

SignedMutableBigInteger::SignedMutableBigInteger() {
}

$Class* SignedMutableBigInteger::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sign", "I", nullptr, 0, $field(SignedMutableBigInteger, sign)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SignedMutableBigInteger, init$, void)},
		{"<init>", "(I)V", nullptr, 0, $method(SignedMutableBigInteger, init$, void, int32_t)},
		{"<init>", "(Ljava/math/MutableBigInteger;)V", nullptr, 0, $method(SignedMutableBigInteger, init$, void, $MutableBigInteger*)},
		{"signedAdd", "(Ljava/math/SignedMutableBigInteger;)V", nullptr, 0, $virtualMethod(SignedMutableBigInteger, signedAdd, void, SignedMutableBigInteger*)},
		{"signedAdd", "(Ljava/math/MutableBigInteger;)V", nullptr, 0, $virtualMethod(SignedMutableBigInteger, signedAdd, void, $MutableBigInteger*)},
		{"signedSubtract", "(Ljava/math/SignedMutableBigInteger;)V", nullptr, 0, $virtualMethod(SignedMutableBigInteger, signedSubtract, void, SignedMutableBigInteger*)},
		{"signedSubtract", "(Ljava/math/MutableBigInteger;)V", nullptr, 0, $virtualMethod(SignedMutableBigInteger, signedSubtract, void, $MutableBigInteger*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SignedMutableBigInteger, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.math.SignedMutableBigInteger",
		"java.math.MutableBigInteger",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SignedMutableBigInteger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignedMutableBigInteger);
	});
	return class$;
}

$Class* SignedMutableBigInteger::class$ = nullptr;

	} // math
} // java