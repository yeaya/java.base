#include <jdk/internal/math/FloatingDecimal$ExceptionalBinaryToASCIIBuffer.h>
#include <java/lang/Appendable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/StringBuffer.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

using $Appendable = ::java::lang::Appendable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;

namespace jdk {
	namespace internal {
		namespace math {

bool FloatingDecimal$ExceptionalBinaryToASCIIBuffer::$assertionsDisabled = false;

void FloatingDecimal$ExceptionalBinaryToASCIIBuffer::init$($String* image, bool isNegative) {
	$set(this, image, image);
	this->isNegative$ = isNegative;
}

$String* FloatingDecimal$ExceptionalBinaryToASCIIBuffer::toJavaFormatString() {
	return this->image;
}

void FloatingDecimal$ExceptionalBinaryToASCIIBuffer::appendTo($Appendable* buf) {
	if ($instanceOf($StringBuilder, buf)) {
		$cast($StringBuilder, buf)->append(this->image);
	} else if ($instanceOf($StringBuffer, buf)) {
		$cast($StringBuffer, buf)->append(this->image);
	} else if (!FloatingDecimal$ExceptionalBinaryToASCIIBuffer::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
}

int32_t FloatingDecimal$ExceptionalBinaryToASCIIBuffer::getDecimalExponent() {
	$throwNew($IllegalArgumentException, "Exceptional value does not have an exponent"_s);
	$shouldNotReachHere();
}

int32_t FloatingDecimal$ExceptionalBinaryToASCIIBuffer::getDigits($chars* digits) {
	$throwNew($IllegalArgumentException, "Exceptional value does not have digits"_s);
	$shouldNotReachHere();
}

bool FloatingDecimal$ExceptionalBinaryToASCIIBuffer::isNegative() {
	return this->isNegative$;
}

bool FloatingDecimal$ExceptionalBinaryToASCIIBuffer::isExceptional() {
	return true;
}

bool FloatingDecimal$ExceptionalBinaryToASCIIBuffer::digitsRoundedUp() {
	$throwNew($IllegalArgumentException, "Exceptional value is not rounded"_s);
	$shouldNotReachHere();
}

bool FloatingDecimal$ExceptionalBinaryToASCIIBuffer::decimalDigitsExact() {
	$throwNew($IllegalArgumentException, "Exceptional value is not exact"_s);
	$shouldNotReachHere();
}

void FloatingDecimal$ExceptionalBinaryToASCIIBuffer::clinit$($Class* clazz) {
	$load($FloatingDecimal);
	FloatingDecimal$ExceptionalBinaryToASCIIBuffer::$assertionsDisabled = !$FloatingDecimal::class$->desiredAssertionStatus();
}

FloatingDecimal$ExceptionalBinaryToASCIIBuffer::FloatingDecimal$ExceptionalBinaryToASCIIBuffer() {
}

$Class* FloatingDecimal$ExceptionalBinaryToASCIIBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, $assertionsDisabled)},
		{"image", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, image)},
		{"isNegative", "Z", nullptr, $PRIVATE, $field(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, isNegative$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, init$, void, $String*, bool)},
		{"appendTo", "(Ljava/lang/Appendable;)V", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, appendTo, void, $Appendable*)},
		{"decimalDigitsExact", "()Z", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, decimalDigitsExact, bool)},
		{"digitsRoundedUp", "()Z", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, digitsRoundedUp, bool)},
		{"getDecimalExponent", "()I", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, getDecimalExponent, int32_t)},
		{"getDigits", "([C)I", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, getDigits, int32_t, $chars*)},
		{"isExceptional", "()Z", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, isExceptional, bool)},
		{"isNegative", "()Z", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, isNegative, bool)},
		{"toJavaFormatString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, toJavaFormatString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.math.FloatingDecimal$ExceptionalBinaryToASCIIBuffer", "jdk.internal.math.FloatingDecimal", "ExceptionalBinaryToASCIIBuffer", $PRIVATE | $STATIC},
		{"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIConverter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.math.FloatingDecimal$ExceptionalBinaryToASCIIBuffer",
		"java.lang.Object",
		"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.math.FloatingDecimal"
	};
	$loadClass(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, name, initialize, &classInfo$$, FloatingDecimal$ExceptionalBinaryToASCIIBuffer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FloatingDecimal$ExceptionalBinaryToASCIIBuffer);
	});
	return class$;
}

$Class* FloatingDecimal$ExceptionalBinaryToASCIIBuffer::class$ = nullptr;

		} // math
	} // internal
} // jdk