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
using $FloatingDecimal$BinaryToASCIIConverter = ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FloatingDecimal$ExceptionalBinaryToASCIIBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, $assertionsDisabled)},
	{"image", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, image)},
	{"isNegative", "Z", nullptr, $PRIVATE, $field(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, isNegative$)},
	{}
};

$MethodInfo _FloatingDecimal$ExceptionalBinaryToASCIIBuffer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(FloatingDecimal$ExceptionalBinaryToASCIIBuffer::*)($String*,bool)>(&FloatingDecimal$ExceptionalBinaryToASCIIBuffer::init$))},
	{"appendTo", "(Ljava/lang/Appendable;)V", nullptr, $PUBLIC},
	{"decimalDigitsExact", "()Z", nullptr, $PUBLIC},
	{"digitsRoundedUp", "()Z", nullptr, $PUBLIC},
	{"getDecimalExponent", "()I", nullptr, $PUBLIC},
	{"getDigits", "([C)I", nullptr, $PUBLIC},
	{"isExceptional", "()Z", nullptr, $PUBLIC},
	{"isNegative", "()Z", nullptr, $PUBLIC},
	{"toJavaFormatString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FloatingDecimal$ExceptionalBinaryToASCIIBuffer_InnerClassesInfo_[] = {
	{"jdk.internal.math.FloatingDecimal$ExceptionalBinaryToASCIIBuffer", "jdk.internal.math.FloatingDecimal", "ExceptionalBinaryToASCIIBuffer", $PRIVATE | $STATIC},
	{"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIConverter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FloatingDecimal$ExceptionalBinaryToASCIIBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.math.FloatingDecimal$ExceptionalBinaryToASCIIBuffer",
	"java.lang.Object",
	"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter",
	_FloatingDecimal$ExceptionalBinaryToASCIIBuffer_FieldInfo_,
	_FloatingDecimal$ExceptionalBinaryToASCIIBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_FloatingDecimal$ExceptionalBinaryToASCIIBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FloatingDecimal"
};

$Object* allocate$FloatingDecimal$ExceptionalBinaryToASCIIBuffer($Class* clazz) {
	return $of($alloc(FloatingDecimal$ExceptionalBinaryToASCIIBuffer));
}

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
		$nc(($cast($StringBuilder, buf)))->append(this->image);
	} else if ($instanceOf($StringBuffer, buf)) {
		$nc(($cast($StringBuffer, buf)))->append(this->image);
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

void clinit$FloatingDecimal$ExceptionalBinaryToASCIIBuffer($Class* class$) {
	$load($FloatingDecimal);
	FloatingDecimal$ExceptionalBinaryToASCIIBuffer::$assertionsDisabled = !$FloatingDecimal::class$->desiredAssertionStatus();
}

FloatingDecimal$ExceptionalBinaryToASCIIBuffer::FloatingDecimal$ExceptionalBinaryToASCIIBuffer() {
}

$Class* FloatingDecimal$ExceptionalBinaryToASCIIBuffer::load$($String* name, bool initialize) {
	$loadClass(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, name, initialize, &_FloatingDecimal$ExceptionalBinaryToASCIIBuffer_ClassInfo_, clinit$FloatingDecimal$ExceptionalBinaryToASCIIBuffer, allocate$FloatingDecimal$ExceptionalBinaryToASCIIBuffer);
	return class$;
}

$Class* FloatingDecimal$ExceptionalBinaryToASCIIBuffer::class$ = nullptr;

		} // math
	} // internal
} // jdk