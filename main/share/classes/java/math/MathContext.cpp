#include <java/math/MathContext.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

#undef DECIMAL128
#undef DECIMAL32
#undef DECIMAL64
#undef DEFAULT_DIGITS
#undef DEFAULT_ROUNDINGMODE
#undef HALF_EVEN
#undef HALF_UP
#undef MIN_DIGITS
#undef UNLIMITED

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $RoundingMode = ::java::math::RoundingMode;

namespace java {
	namespace math {

$FieldInfo _MathContext_FieldInfo_[] = {
	{"DEFAULT_DIGITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MathContext, DEFAULT_DIGITS)},
	{"DEFAULT_ROUNDINGMODE", "Ljava/math/RoundingMode;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MathContext, DEFAULT_ROUNDINGMODE)},
	{"MIN_DIGITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MathContext, MIN_DIGITS)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MathContext, serialVersionUID)},
	{"UNLIMITED", "Ljava/math/MathContext;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MathContext, UNLIMITED)},
	{"DECIMAL32", "Ljava/math/MathContext;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MathContext, DECIMAL32)},
	{"DECIMAL64", "Ljava/math/MathContext;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MathContext, DECIMAL64)},
	{"DECIMAL128", "Ljava/math/MathContext;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MathContext, DECIMAL128)},
	{"precision", "I", nullptr, $FINAL, $field(MathContext, precision)},
	{"roundingMode", "Ljava/math/RoundingMode;", nullptr, $FINAL, $field(MathContext, roundingMode)},
	{}
};

$MethodInfo _MathContext_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MathContext::*)(int32_t)>(&MathContext::init$))},
	{"<init>", "(ILjava/math/RoundingMode;)V", nullptr, $PUBLIC, $method(static_cast<void(MathContext::*)(int32_t,$RoundingMode*)>(&MathContext::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MathContext::*)($String*)>(&MathContext::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getPrecision", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(MathContext::*)()>(&MathContext::getPrecision))},
	{"getRoundingMode", "()Ljava/math/RoundingMode;", nullptr, $PUBLIC, $method(static_cast<$RoundingMode*(MathContext::*)()>(&MathContext::getRoundingMode))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MathContext::*)($ObjectInputStream*)>(&MathContext::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MathContext_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.math.MathContext",
	"java.lang.Object",
	"java.io.Serializable",
	_MathContext_FieldInfo_,
	_MathContext_MethodInfo_
};

$Object* allocate$MathContext($Class* clazz) {
	return $of($alloc(MathContext));
}

$RoundingMode* MathContext::DEFAULT_ROUNDINGMODE = nullptr;

MathContext* MathContext::UNLIMITED = nullptr;

MathContext* MathContext::DECIMAL32 = nullptr;

MathContext* MathContext::DECIMAL64 = nullptr;

MathContext* MathContext::DECIMAL128 = nullptr;

void MathContext::init$(int32_t setPrecision) {
	MathContext::init$(setPrecision, MathContext::DEFAULT_ROUNDINGMODE);
	return;
}

void MathContext::init$(int32_t setPrecision, $RoundingMode* setRoundingMode) {
	if (setPrecision < MathContext::MIN_DIGITS) {
		$throwNew($IllegalArgumentException, "Digits < 0"_s);
	}
	if (setRoundingMode == nullptr) {
		$throwNew($NullPointerException, "null RoundingMode"_s);
	}
	this->precision = setPrecision;
	$set(this, roundingMode, setRoundingMode);
	return;
}

void MathContext::init$($String* val) {
	$useLocalCurrentObjectStackCache();
	bool bad = false;
	int32_t setPrecision = 0;
	if (val == nullptr) {
		$throwNew($NullPointerException, "null String"_s);
	}
	try {
		if (!$nc(val)->startsWith("precision="_s)) {
			$throwNew($RuntimeException);
		}
		int32_t fence = $nc(val)->indexOf((int32_t)u' ');
		int32_t off = 10;
		setPrecision = $Integer::parseInt($(val->substring(10, fence)));
		if (!val->startsWith("roundingMode="_s, fence + 1)) {
			$throwNew($RuntimeException);
		}
		off = fence + 1 + 13;
		$var($String, str, val->substring(off, val->length()));
		$set(this, roundingMode, $RoundingMode::valueOf(str));
	} catch ($RuntimeException&) {
		$var($RuntimeException, re, $catch());
		$throwNew($IllegalArgumentException, "bad string format"_s);
	}
	if (setPrecision < MathContext::MIN_DIGITS) {
		$throwNew($IllegalArgumentException, "Digits < 0"_s);
	}
	this->precision = setPrecision;
}

int32_t MathContext::getPrecision() {
	return this->precision;
}

$RoundingMode* MathContext::getRoundingMode() {
	return this->roundingMode;
}

bool MathContext::equals(Object$* x) {
	$var(MathContext, mc, nullptr);
	bool var$0 = $instanceOf(MathContext, x);
	if (var$0) {
		$assign(mc, $cast(MathContext, x));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	return $nc(mc)->precision == this->precision && mc->roundingMode == this->roundingMode;
}

int32_t MathContext::hashCode() {
	return this->precision + this->roundingMode->hashCode() * 59;
}

$String* MathContext::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"precision="_s, $$str(this->precision), " roundingMode="_s, $(this->roundingMode->toString())});
}

void MathContext::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	if (this->precision < MathContext::MIN_DIGITS) {
		$var($String, message, "MathContext: invalid digits in stream"_s);
		$throwNew($StreamCorruptedException, message);
	}
	if (this->roundingMode == nullptr) {
		$var($String, message, "MathContext: null roundingMode in stream"_s);
		$throwNew($StreamCorruptedException, message);
	}
}

void clinit$MathContext($Class* class$) {
	$init($RoundingMode);
	$assignStatic(MathContext::DEFAULT_ROUNDINGMODE, $RoundingMode::HALF_UP);
	$assignStatic(MathContext::UNLIMITED, $new(MathContext, 0, $RoundingMode::HALF_UP));
	$assignStatic(MathContext::DECIMAL32, $new(MathContext, 7, $RoundingMode::HALF_EVEN));
	$assignStatic(MathContext::DECIMAL64, $new(MathContext, 16, $RoundingMode::HALF_EVEN));
	$assignStatic(MathContext::DECIMAL128, $new(MathContext, 34, $RoundingMode::HALF_EVEN));
}

MathContext::MathContext() {
}

$Class* MathContext::load$($String* name, bool initialize) {
	$loadClass(MathContext, name, initialize, &_MathContext_ClassInfo_, clinit$MathContext, allocate$MathContext);
	return class$;
}

$Class* MathContext::class$ = nullptr;

	} // math
} // java