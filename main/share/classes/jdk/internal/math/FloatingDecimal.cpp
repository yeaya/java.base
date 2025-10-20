#include <jdk/internal/math/FloatingDecimal.h>

#include <java/lang/Appendable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jdk/internal/math/DoubleConsts.h>
#include <jdk/internal/math/FloatConsts.h>
#include <jdk/internal/math/FloatingDecimal$1.h>
#include <jdk/internal/math/FloatingDecimal$ASCIIToBinaryBuffer.h>
#include <jdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter.h>
#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer.h>
#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIConverter.h>
#include <jdk/internal/math/FloatingDecimal$ExceptionalBinaryToASCIIBuffer.h>
#include <jdk/internal/math/FloatingDecimal$HexFloatPattern.h>
#include <jdk/internal/math/FloatingDecimal$PreparedASCIIToBinaryBuffer.h>
#include <jcpp.h>

#undef A2BC_NEGATIVE_INFINITY
#undef A2BC_NEGATIVE_ZERO
#undef A2BC_NOT_A_NUMBER
#undef A2BC_POSITIVE_INFINITY
#undef A2BC_POSITIVE_ZERO
#undef B2AC_NEGATIVE_INFINITY
#undef B2AC_NEGATIVE_ZERO
#undef B2AC_NOT_A_NUMBER
#undef B2AC_POSITIVE_INFINITY
#undef B2AC_POSITIVE_ZERO
#undef BIG_DECIMAL_EXPONENT
#undef EXP_BIAS
#undef EXP_BIT_MASK
#undef EXP_ONE
#undef EXP_SHIFT
#undef FRACT_HOB
#undef INFINITY_LENGTH
#undef INFINITY_REP
#undef INT_DECIMAL_DIGITS
#undef MAX_DECIMAL_DIGITS
#undef MAX_DECIMAL_EXPONENT
#undef MAX_EXPONENT
#undef MAX_NDIGITS
#undef MAX_SMALL_BIN_EXP
#undef MAX_VALUE
#undef MIN_DECIMAL_EXPONENT
#undef MIN_EXPONENT
#undef MIN_SMALL_BIN_EXP
#undef MIN_SUB_EXPONENT
#undef NAN_LENGTH
#undef NAN_REP
#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY
#undef SIGNIFICAND_WIDTH
#undef SIGNIF_BIT_MASK
#undef SIGN_BIT_MASK
#undef SINGLE_EXP_SHIFT
#undef SINGLE_FRACT_HOB
#undef SINGLE_MAX_DECIMAL_DIGITS
#undef SINGLE_MAX_DECIMAL_EXPONENT
#undef SINGLE_MAX_NDIGITS
#undef SINGLE_MIN_DECIMAL_EXPONENT
#undef VALUE

using $Appendable = ::java::lang::Appendable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;
using $FloatConsts = ::jdk::internal::math::FloatConsts;
using $FloatingDecimal$1 = ::jdk::internal::math::FloatingDecimal$1;
using $FloatingDecimal$ASCIIToBinaryBuffer = ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryBuffer;
using $FloatingDecimal$ASCIIToBinaryConverter = ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter;
using $FloatingDecimal$BinaryToASCIIBuffer = ::jdk::internal::math::FloatingDecimal$BinaryToASCIIBuffer;
using $FloatingDecimal$BinaryToASCIIConverter = ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter;
using $FloatingDecimal$ExceptionalBinaryToASCIIBuffer = ::jdk::internal::math::FloatingDecimal$ExceptionalBinaryToASCIIBuffer;
using $FloatingDecimal$HexFloatPattern = ::jdk::internal::math::FloatingDecimal$HexFloatPattern;
using $FloatingDecimal$PreparedASCIIToBinaryBuffer = ::jdk::internal::math::FloatingDecimal$PreparedASCIIToBinaryBuffer;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FloatingDecimal_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FloatingDecimal, $assertionsDisabled)},
	{"EXP_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, EXP_SHIFT)},
	{"FRACT_HOB", "J", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, FRACT_HOB)},
	{"EXP_ONE", "J", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, EXP_ONE)},
	{"MAX_SMALL_BIN_EXP", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, MAX_SMALL_BIN_EXP)},
	{"MIN_SMALL_BIN_EXP", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, MIN_SMALL_BIN_EXP)},
	{"MAX_DECIMAL_DIGITS", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, MAX_DECIMAL_DIGITS)},
	{"MAX_DECIMAL_EXPONENT", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, MAX_DECIMAL_EXPONENT)},
	{"MIN_DECIMAL_EXPONENT", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, MIN_DECIMAL_EXPONENT)},
	{"BIG_DECIMAL_EXPONENT", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, BIG_DECIMAL_EXPONENT)},
	{"MAX_NDIGITS", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, MAX_NDIGITS)},
	{"SINGLE_EXP_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, SINGLE_EXP_SHIFT)},
	{"SINGLE_FRACT_HOB", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, SINGLE_FRACT_HOB)},
	{"SINGLE_MAX_DECIMAL_DIGITS", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, SINGLE_MAX_DECIMAL_DIGITS)},
	{"SINGLE_MAX_DECIMAL_EXPONENT", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, SINGLE_MAX_DECIMAL_EXPONENT)},
	{"SINGLE_MIN_DECIMAL_EXPONENT", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, SINGLE_MIN_DECIMAL_EXPONENT)},
	{"SINGLE_MAX_NDIGITS", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, SINGLE_MAX_NDIGITS)},
	{"INT_DECIMAL_DIGITS", "I", nullptr, $STATIC | $FINAL, $constField(FloatingDecimal, INT_DECIMAL_DIGITS)},
	{"INFINITY_REP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, INFINITY_REP)},
	{"INFINITY_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, INFINITY_LENGTH)},
	{"NAN_REP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, NAN_REP)},
	{"NAN_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, NAN_LENGTH)},
	{"B2AC_POSITIVE_INFINITY", "Ljdk/internal/math/FloatingDecimal$BinaryToASCIIConverter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, B2AC_POSITIVE_INFINITY)},
	{"B2AC_NEGATIVE_INFINITY", "Ljdk/internal/math/FloatingDecimal$BinaryToASCIIConverter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, B2AC_NEGATIVE_INFINITY)},
	{"B2AC_NOT_A_NUMBER", "Ljdk/internal/math/FloatingDecimal$BinaryToASCIIConverter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, B2AC_NOT_A_NUMBER)},
	{"B2AC_POSITIVE_ZERO", "Ljdk/internal/math/FloatingDecimal$BinaryToASCIIConverter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, B2AC_POSITIVE_ZERO)},
	{"B2AC_NEGATIVE_ZERO", "Ljdk/internal/math/FloatingDecimal$BinaryToASCIIConverter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, B2AC_NEGATIVE_ZERO)},
	{"threadLocalBinaryToASCIIBuffer", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal, threadLocalBinaryToASCIIBuffer)},
	{"A2BC_POSITIVE_INFINITY", "Ljdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter;", nullptr, $STATIC | $FINAL, $staticField(FloatingDecimal, A2BC_POSITIVE_INFINITY)},
	{"A2BC_NEGATIVE_INFINITY", "Ljdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter;", nullptr, $STATIC | $FINAL, $staticField(FloatingDecimal, A2BC_NEGATIVE_INFINITY)},
	{"A2BC_NOT_A_NUMBER", "Ljdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter;", nullptr, $STATIC | $FINAL, $staticField(FloatingDecimal, A2BC_NOT_A_NUMBER)},
	{"A2BC_POSITIVE_ZERO", "Ljdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter;", nullptr, $STATIC | $FINAL, $staticField(FloatingDecimal, A2BC_POSITIVE_ZERO)},
	{"A2BC_NEGATIVE_ZERO", "Ljdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter;", nullptr, $STATIC | $FINAL, $staticField(FloatingDecimal, A2BC_NEGATIVE_ZERO)},
	{}
};

$MethodInfo _FloatingDecimal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FloatingDecimal::*)()>(&FloatingDecimal::init$))},
	{"appendTo", "(DLjava/lang/Appendable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(double,$Appendable*)>(&FloatingDecimal::appendTo))},
	{"appendTo", "(FLjava/lang/Appendable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(float,$Appendable*)>(&FloatingDecimal::appendTo))},
	{"getBinaryToASCIIBuffer", "()Ljdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FloatingDecimal$BinaryToASCIIBuffer*(*)()>(&FloatingDecimal::getBinaryToASCIIBuffer))},
	{"getBinaryToASCIIConverter", "(D)Ljdk/internal/math/FloatingDecimal$BinaryToASCIIConverter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FloatingDecimal$BinaryToASCIIConverter*(*)(double)>(&FloatingDecimal::getBinaryToASCIIConverter))},
	{"getBinaryToASCIIConverter", "(DZ)Ljdk/internal/math/FloatingDecimal$BinaryToASCIIConverter;", nullptr, $STATIC, $method(static_cast<$FloatingDecimal$BinaryToASCIIConverter*(*)(double,bool)>(&FloatingDecimal::getBinaryToASCIIConverter))},
	{"getBinaryToASCIIConverter", "(F)Ljdk/internal/math/FloatingDecimal$BinaryToASCIIConverter;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FloatingDecimal$BinaryToASCIIConverter*(*)(float)>(&FloatingDecimal::getBinaryToASCIIConverter))},
	{"getHexDigit", "(Ljava/lang/String;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,int32_t)>(&FloatingDecimal::getHexDigit))},
	{"parseDouble", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&FloatingDecimal::parseDouble)), "java.lang.NumberFormatException"},
	{"parseFloat", "(Ljava/lang/String;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($String*)>(&FloatingDecimal::parseFloat)), "java.lang.NumberFormatException"},
	{"parseHexString", "(Ljava/lang/String;)Ljdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter;", nullptr, $STATIC, $method(static_cast<$FloatingDecimal$ASCIIToBinaryConverter*(*)($String*)>(&FloatingDecimal::parseHexString))},
	{"readJavaFormatString", "(Ljava/lang/String;)Ljdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter;", nullptr, $STATIC, $method(static_cast<$FloatingDecimal$ASCIIToBinaryConverter*(*)($String*)>(&FloatingDecimal::readJavaFormatString)), "java.lang.NumberFormatException"},
	{"stripLeadingZeros", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&FloatingDecimal::stripLeadingZeros))},
	{"toJavaFormatString", "(D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(double)>(&FloatingDecimal::toJavaFormatString))},
	{"toJavaFormatString", "(F)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(float)>(&FloatingDecimal::toJavaFormatString))},
	{}
};

$InnerClassInfo _FloatingDecimal_InnerClassesInfo_[] = {
	{"jdk.internal.math.FloatingDecimal$HexFloatPattern", "jdk.internal.math.FloatingDecimal", "HexFloatPattern", $PRIVATE | $STATIC},
	{"jdk.internal.math.FloatingDecimal$ASCIIToBinaryBuffer", "jdk.internal.math.FloatingDecimal", "ASCIIToBinaryBuffer", $STATIC},
	{"jdk.internal.math.FloatingDecimal$PreparedASCIIToBinaryBuffer", "jdk.internal.math.FloatingDecimal", "PreparedASCIIToBinaryBuffer", $STATIC},
	{"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter", "jdk.internal.math.FloatingDecimal", "ASCIIToBinaryConverter", $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.math.FloatingDecimal$BinaryToASCIIBuffer", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIBuffer", $STATIC},
	{"jdk.internal.math.FloatingDecimal$ExceptionalBinaryToASCIIBuffer", "jdk.internal.math.FloatingDecimal", "ExceptionalBinaryToASCIIBuffer", $PRIVATE | $STATIC},
	{"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIConverter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.math.FloatingDecimal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FloatingDecimal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.math.FloatingDecimal",
	"java.lang.Object",
	nullptr,
	_FloatingDecimal_FieldInfo_,
	_FloatingDecimal_MethodInfo_,
	nullptr,
	nullptr,
	_FloatingDecimal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.math.FloatingDecimal$HexFloatPattern,jdk.internal.math.FloatingDecimal$ASCIIToBinaryBuffer,jdk.internal.math.FloatingDecimal$PreparedASCIIToBinaryBuffer,jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter,jdk.internal.math.FloatingDecimal$BinaryToASCIIBuffer,jdk.internal.math.FloatingDecimal$ExceptionalBinaryToASCIIBuffer,jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter,jdk.internal.math.FloatingDecimal$1"
};

$Object* allocate$FloatingDecimal($Class* clazz) {
	return $of($alloc(FloatingDecimal));
}

bool FloatingDecimal::$assertionsDisabled = false;
$String* FloatingDecimal::INFINITY_REP = nullptr;
int32_t FloatingDecimal::INFINITY_LENGTH = 0;
$String* FloatingDecimal::NAN_REP = nullptr;
int32_t FloatingDecimal::NAN_LENGTH = 0;
$FloatingDecimal$BinaryToASCIIConverter* FloatingDecimal::B2AC_POSITIVE_INFINITY = nullptr;
$FloatingDecimal$BinaryToASCIIConverter* FloatingDecimal::B2AC_NEGATIVE_INFINITY = nullptr;
$FloatingDecimal$BinaryToASCIIConverter* FloatingDecimal::B2AC_NOT_A_NUMBER = nullptr;
$FloatingDecimal$BinaryToASCIIConverter* FloatingDecimal::B2AC_POSITIVE_ZERO = nullptr;
$FloatingDecimal$BinaryToASCIIConverter* FloatingDecimal::B2AC_NEGATIVE_ZERO = nullptr;
$ThreadLocal* FloatingDecimal::threadLocalBinaryToASCIIBuffer = nullptr;
$FloatingDecimal$ASCIIToBinaryConverter* FloatingDecimal::A2BC_POSITIVE_INFINITY = nullptr;
$FloatingDecimal$ASCIIToBinaryConverter* FloatingDecimal::A2BC_NEGATIVE_INFINITY = nullptr;
$FloatingDecimal$ASCIIToBinaryConverter* FloatingDecimal::A2BC_NOT_A_NUMBER = nullptr;
$FloatingDecimal$ASCIIToBinaryConverter* FloatingDecimal::A2BC_POSITIVE_ZERO = nullptr;
$FloatingDecimal$ASCIIToBinaryConverter* FloatingDecimal::A2BC_NEGATIVE_ZERO = nullptr;

void FloatingDecimal::init$() {
}

$String* FloatingDecimal::toJavaFormatString(double d) {
	$init(FloatingDecimal);
	return $nc($(getBinaryToASCIIConverter(d)))->toJavaFormatString();
}

$String* FloatingDecimal::toJavaFormatString(float f) {
	$init(FloatingDecimal);
	return $nc($(getBinaryToASCIIConverter(f)))->toJavaFormatString();
}

void FloatingDecimal::appendTo(double d, $Appendable* buf) {
	$init(FloatingDecimal);
	$nc($(getBinaryToASCIIConverter(d)))->appendTo(buf);
}

void FloatingDecimal::appendTo(float f, $Appendable* buf) {
	$init(FloatingDecimal);
	$nc($(getBinaryToASCIIConverter(f)))->appendTo(buf);
}

double FloatingDecimal::parseDouble($String* s) {
	$init(FloatingDecimal);
	return $nc($(readJavaFormatString(s)))->doubleValue();
}

float FloatingDecimal::parseFloat($String* s) {
	$init(FloatingDecimal);
	return $nc($(readJavaFormatString(s)))->floatValue();
}

$FloatingDecimal$BinaryToASCIIBuffer* FloatingDecimal::getBinaryToASCIIBuffer() {
	$init(FloatingDecimal);
	return $cast($FloatingDecimal$BinaryToASCIIBuffer, $nc(FloatingDecimal::threadLocalBinaryToASCIIBuffer)->get());
}

$FloatingDecimal$BinaryToASCIIConverter* FloatingDecimal::getBinaryToASCIIConverter(double d) {
	$init(FloatingDecimal);
	return getBinaryToASCIIConverter(d, true);
}

$FloatingDecimal$BinaryToASCIIConverter* FloatingDecimal::getBinaryToASCIIConverter(double d, bool isCompatibleFormat) {
	$init(FloatingDecimal);
	int64_t dBits = $Double::doubleToRawLongBits(d);
	bool isNegative = ((int64_t)(dBits & (uint64_t)$DoubleConsts::SIGN_BIT_MASK)) != 0;
	int64_t fractBits = (int64_t)(dBits & (uint64_t)$DoubleConsts::SIGNIF_BIT_MASK);
	int32_t binExp = (int32_t)($sr((int64_t)(dBits & (uint64_t)$DoubleConsts::EXP_BIT_MASK), FloatingDecimal::EXP_SHIFT));
	if (binExp == (int32_t)($sr($DoubleConsts::EXP_BIT_MASK, FloatingDecimal::EXP_SHIFT))) {
		if (fractBits == (int64_t)0) {
			return isNegative ? FloatingDecimal::B2AC_NEGATIVE_INFINITY : FloatingDecimal::B2AC_POSITIVE_INFINITY;
		} else {
			return FloatingDecimal::B2AC_NOT_A_NUMBER;
		}
	}
	int32_t nSignificantBits = 0;
	if (binExp == 0) {
		if (fractBits == (int64_t)0) {
			return isNegative ? FloatingDecimal::B2AC_NEGATIVE_ZERO : FloatingDecimal::B2AC_POSITIVE_ZERO;
		}
		int32_t leadingZeros = $Long::numberOfLeadingZeros(fractBits);
		int32_t shift = leadingZeros - (63 - FloatingDecimal::EXP_SHIFT);
		fractBits <<= shift;
		binExp = 1 - shift;
		nSignificantBits = 64 - leadingZeros;
	} else {
		fractBits |= FloatingDecimal::FRACT_HOB;
		nSignificantBits = FloatingDecimal::EXP_SHIFT + 1;
	}
	binExp -= $DoubleConsts::EXP_BIAS;
	$var($FloatingDecimal$BinaryToASCIIBuffer, buf, getBinaryToASCIIBuffer());
	$nc(buf)->setSign(isNegative);
	buf->dtoa(binExp, fractBits, nSignificantBits, isCompatibleFormat);
	return buf;
}

$FloatingDecimal$BinaryToASCIIConverter* FloatingDecimal::getBinaryToASCIIConverter(float f) {
	$init(FloatingDecimal);
	int32_t fBits = $Float::floatToRawIntBits(f);
	bool isNegative = ((int32_t)(fBits & (uint32_t)$FloatConsts::SIGN_BIT_MASK)) != 0;
	int32_t fractBits = (int32_t)(fBits & (uint32_t)$FloatConsts::SIGNIF_BIT_MASK);
	int32_t binExp = $sr((int32_t)(fBits & (uint32_t)$FloatConsts::EXP_BIT_MASK), FloatingDecimal::SINGLE_EXP_SHIFT);
	if (binExp == ($sr($FloatConsts::EXP_BIT_MASK, FloatingDecimal::SINGLE_EXP_SHIFT))) {
		if (fractBits == (int64_t)0) {
			return isNegative ? FloatingDecimal::B2AC_NEGATIVE_INFINITY : FloatingDecimal::B2AC_POSITIVE_INFINITY;
		} else {
			return FloatingDecimal::B2AC_NOT_A_NUMBER;
		}
	}
	int32_t nSignificantBits = 0;
	if (binExp == 0) {
		if (fractBits == 0) {
			return isNegative ? FloatingDecimal::B2AC_NEGATIVE_ZERO : FloatingDecimal::B2AC_POSITIVE_ZERO;
		}
		int32_t leadingZeros = $Integer::numberOfLeadingZeros(fractBits);
		int32_t shift = leadingZeros - (31 - FloatingDecimal::SINGLE_EXP_SHIFT);
		fractBits <<= shift;
		binExp = 1 - shift;
		nSignificantBits = 32 - leadingZeros;
	} else {
		fractBits |= FloatingDecimal::SINGLE_FRACT_HOB;
		nSignificantBits = FloatingDecimal::SINGLE_EXP_SHIFT + 1;
	}
	binExp -= $FloatConsts::EXP_BIAS;
	$var($FloatingDecimal$BinaryToASCIIBuffer, buf, getBinaryToASCIIBuffer());
	$nc(buf)->setSign(isNegative);
	buf->dtoa(binExp, $sl((int64_t)fractBits, FloatingDecimal::EXP_SHIFT - FloatingDecimal::SINGLE_EXP_SHIFT), nSignificantBits, true);
	return buf;
}

$FloatingDecimal$ASCIIToBinaryConverter* FloatingDecimal::readJavaFormatString($String* in$renamed) {
	$init(FloatingDecimal);
	$useLocalCurrentObjectStackCache();
	$var($String, in, in$renamed);
	bool isNegative = false;
	bool signSeen = false;
	int32_t decExp = 0;
	char16_t c = 0;
	bool parseNumber$break = false;
	for (;;) {
		try {
			$assign(in, $nc(in)->trim());
			int32_t len = in->length();
			if (len == 0) {
				$throwNew($NumberFormatException, "empty String"_s);
			}
			int32_t i = 0;
			switch (in->charAt(i)) {
			case u'-':
				{
					isNegative = true;
				}
			case u'+':
				{
					++i;
					signSeen = true;
				}
			}
			c = in->charAt(i);
			if (c == u'N') {
				if ((len - i) == FloatingDecimal::NAN_LENGTH && in->indexOf(FloatingDecimal::NAN_REP, i) == i) {
					return FloatingDecimal::A2BC_NOT_A_NUMBER;
				}
				parseNumber$break = true;
				break;
			} else if (c == u'I') {
				if ((len - i) == FloatingDecimal::INFINITY_LENGTH && in->indexOf(FloatingDecimal::INFINITY_REP, i) == i) {
					return isNegative ? FloatingDecimal::A2BC_NEGATIVE_INFINITY : FloatingDecimal::A2BC_POSITIVE_INFINITY;
				}
				parseNumber$break = true;
				break;
			} else if (c == u'0') {
				if (len > i + 1) {
					char16_t ch = in->charAt(i + 1);
					if (ch == u'x' || ch == u'X') {
						return parseHexString(in);
					}
				}
			}
			$var($chars, digits, $new($chars, len));
			bool decSeen = false;
			int32_t nDigits = 0;
			int32_t decPt = 0;
			int32_t nLeadZero = 0;
			int32_t nTrailZero = 0;
			bool skipLeadingZerosLoop$break = false;
			while (i < len) {
				c = in->charAt(i);
				if (c == u'0') {
					++nLeadZero;
				} else if (c == u'.') {
					if (decSeen) {
						$throwNew($NumberFormatException, "multiple points"_s);
					}
					decPt = i;
					if (signSeen) {
						decPt -= 1;
					}
					decSeen = true;
				} else {
					skipLeadingZerosLoop$break = true;
					break;
				}
				++i;
			}
			bool digitLoop$break = false;
			while (i < len) {
				c = in->charAt(i);
				if (c >= u'1' && c <= u'9') {
					digits->set(nDigits++, c);
					nTrailZero = 0;
				} else if (c == u'0') {
					digits->set(nDigits++, c);
					++nTrailZero;
				} else if (c == u'.') {
					if (decSeen) {
						$throwNew($NumberFormatException, "multiple points"_s);
					}
					decPt = i;
					if (signSeen) {
						decPt -= 1;
					}
					decSeen = true;
				} else {
					digitLoop$break = true;
					break;
				}
				++i;
			}
			nDigits -= nTrailZero;
			bool isZero = (nDigits == 0);
			if (isZero && nLeadZero == 0) {
				parseNumber$break = true;
				break;
			}
			if (decSeen) {
				decExp = decPt - nLeadZero;
			} else {
				decExp = nDigits + nTrailZero;
			}
			if ((i < len) && (((c = in->charAt(i)) == u'e') || (c == u'E'))) {
				int32_t expSign = 1;
				int32_t expVal = 0;
				int32_t reallyBig = $Integer::MAX_VALUE / 10;
				bool expOverflow = false;
				switch (in->charAt(++i)) {
				case u'-':
					{
						expSign = -1;
					}
				case u'+':
					{
						++i;
					}
				}
				int32_t expAt = i;
				bool expLoop$break = false;
				while (i < len) {
					if (expVal >= reallyBig) {
						expOverflow = true;
					}
					c = in->charAt(i++);
					if (c >= u'0' && c <= u'9') {
						expVal = expVal * 10 + ((int32_t)c - (int32_t)u'0');
					} else {
						--i;
						expLoop$break = true;
						break;
					}
				}
				int32_t expLimit = FloatingDecimal::BIG_DECIMAL_EXPONENT + nDigits + nTrailZero;
				if (expOverflow || (expVal > expLimit)) {
					if (!expOverflow && (expSign == 1 && decExp < 0) && (expVal + decExp) < expLimit) {
						decExp += expVal;
					} else {
						decExp = expSign * expLimit;
					}
				} else {
					decExp = decExp + expSign * expVal;
				}
				if (i == expAt) {
					parseNumber$break = true;
					break;
				}
			}
			bool var$0 = i < len;
			if (var$0) {
				bool var$1 = (i != len - 1);
				if (!var$1) {
					bool var$4 = in->charAt(i) != u'f';
					bool var$3 = var$4 && in->charAt(i) != u'F';
					bool var$2 = var$3 && in->charAt(i) != u'd';
					var$1 = (var$2 && in->charAt(i) != u'D');
				}
				var$0 = (var$1);
			}
			if (var$0) {
				parseNumber$break = true;
				break;
			}
			if (isZero) {
				return isNegative ? FloatingDecimal::A2BC_NEGATIVE_ZERO : FloatingDecimal::A2BC_POSITIVE_ZERO;
			}
			return $new($FloatingDecimal$ASCIIToBinaryBuffer, isNegative, decExp, digits, nDigits);
		} catch ($StringIndexOutOfBoundsException&) {
			$catch();
		}
		break;
	}
	$throwNew($NumberFormatException, $$str({"For input string: \""_s, in, "\""_s}));
	$shouldNotReachHere();
}

$FloatingDecimal$ASCIIToBinaryConverter* FloatingDecimal::parseHexString($String* s) {
	$init(FloatingDecimal);
	$useLocalCurrentObjectStackCache();
	$init($FloatingDecimal$HexFloatPattern);
	$var($Matcher, m, $nc($FloatingDecimal$HexFloatPattern::VALUE)->matcher(s));
	bool validInput = $nc(m)->matches();
	if (!validInput) {
		$throwNew($NumberFormatException, $$str({"For input string: \""_s, s, "\""_s}));
	} else {
		$var($String, group1, m->group(1));
		bool isNegative = ((group1 != nullptr) && group1->equals("-"_s));
		$var($String, significandString, nullptr);
		int32_t signifLength = 0;
		int32_t exponentAdjust = 0;
		{
			int32_t leftDigits = 0;
			int32_t rightDigits = 0;
			$var($String, group4, nullptr);
			if (($assign(group4, m->group(4))) != nullptr) {
				$assign(significandString, stripLeadingZeros(group4));
				leftDigits = $nc(significandString)->length();
			} else {
				$var($String, group6, stripLeadingZeros($(m->group(6))));
				leftDigits = $nc(group6)->length();
				$var($String, group7, m->group(7));
				rightDigits = $nc(group7)->length();
				$assign(significandString, $str({((group6 == nullptr) ? ""_s : group6), group7}));
			}
			$assign(significandString, stripLeadingZeros(significandString));
			signifLength = $nc(significandString)->length();
			if (leftDigits >= 1) {
				exponentAdjust = 4 * (leftDigits - 1);
			} else {
				exponentAdjust = -4 * (rightDigits - signifLength + 1);
			}
			if (signifLength == 0) {
				return isNegative ? FloatingDecimal::A2BC_NEGATIVE_ZERO : FloatingDecimal::A2BC_POSITIVE_ZERO;
			}
		}
		$var($String, group8, m->group(8));
		bool positiveExponent = (group8 == nullptr) || $nc(group8)->equals("+"_s);
		int64_t unsignedRawExponent = 0;
		try {
			unsignedRawExponent = $Integer::parseInt($(m->group(9)));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, e, $catch());
			return isNegative ? (positiveExponent ? FloatingDecimal::A2BC_NEGATIVE_INFINITY : FloatingDecimal::A2BC_NEGATIVE_ZERO) : (positiveExponent ? FloatingDecimal::A2BC_POSITIVE_INFINITY : FloatingDecimal::A2BC_POSITIVE_ZERO);
		}
		int64_t rawExponent = (positiveExponent ? (int64_t)1 : (int64_t)-1) * unsignedRawExponent;
		int64_t exponent = rawExponent + exponentAdjust;
		bool round = false;
		bool sticky = false;
		int32_t nextShift = 0;
		int64_t significand = 0;
		int64_t leadingDigit = getHexDigit(significandString, 0);
		if (leadingDigit == 1) {
			significand |= leadingDigit << 52;
			nextShift = 52 - 4;
		} else if (leadingDigit <= 3) {
			significand |= leadingDigit << 51;
			nextShift = 52 - 5;
			exponent += 1;
		} else if (leadingDigit <= 7) {
			significand |= leadingDigit << 50;
			nextShift = 52 - 6;
			exponent += 2;
		} else if (leadingDigit <= 15) {
			significand |= leadingDigit << 49;
			nextShift = 52 - 7;
			exponent += 3;
		} else {
			$throwNew($AssertionError, $of("Result from digit conversion too large!"_s));
		}
		int32_t i = 0;
		for (i = 1; i < signifLength && nextShift >= 0; ++i) {
			int64_t currentDigit = getHexDigit(significandString, i);
			significand |= ($sl(currentDigit, nextShift));
			nextShift -= 4;
		}
		if (i < signifLength) {
			int64_t currentDigit = getHexDigit(significandString, i);
			switch (nextShift) {
			case -1:
				{
					significand |= (((int64_t)(currentDigit & (uint64_t)(int64_t)14)) >> 1);
					round = ((int64_t)(currentDigit & (uint64_t)(int64_t)1)) != (int64_t)0;
					break;
				}
			case -2:
				{
					significand |= (((int64_t)(currentDigit & (uint64_t)(int64_t)12)) >> 2);
					round = ((int64_t)(currentDigit & (uint64_t)(int64_t)2)) != (int64_t)0;
					sticky = ((int64_t)(currentDigit & (uint64_t)(int64_t)1)) != 0;
					break;
				}
			case -3:
				{
					significand |= (((int64_t)(currentDigit & (uint64_t)(int64_t)8)) >> 3);
					round = ((int64_t)(currentDigit & (uint64_t)(int64_t)4)) != (int64_t)0;
					sticky = ((int64_t)(currentDigit & (uint64_t)(int64_t)3)) != 0;
					break;
				}
			case -4:
				{
					round = (((int64_t)(currentDigit & (uint64_t)(int64_t)8)) != 0);
					sticky = ((int64_t)(currentDigit & (uint64_t)(int64_t)7)) != 0;
					break;
				}
			default:
				{
					$throwNew($AssertionError, $of("Unexpected shift distance remainder."_s));
				}
			}
			++i;
			while (i < signifLength && !sticky) {
				currentDigit = getHexDigit(significandString, i);
				sticky = sticky || (currentDigit != 0);
				++i;
			}
		}
		int32_t floatBits = isNegative ? $FloatConsts::SIGN_BIT_MASK : 0;
		if (exponent >= $Float::MIN_EXPONENT) {
			if (exponent > $Float::MAX_EXPONENT) {
				floatBits |= $FloatConsts::EXP_BIT_MASK;
			} else {
				int32_t threshShift = $DoubleConsts::SIGNIFICAND_WIDTH - $FloatConsts::SIGNIFICAND_WIDTH - 1;
				bool floatSticky = ((int64_t)(significand & (uint64_t)(($sl((int64_t)1, threshShift)) - 1))) != 0 || round || sticky;
				int32_t iValue = (int32_t)($usr(significand, threshShift));
				if (((int32_t)(iValue & (uint32_t)3)) != 1 || floatSticky) {
					++iValue;
				}
				floatBits |= ($sl(((int32_t)exponent) + ($FloatConsts::EXP_BIAS - 1), FloatingDecimal::SINGLE_EXP_SHIFT)) + (iValue >> 1);
			}
		} else if (exponent < $FloatConsts::MIN_SUB_EXPONENT - 1) {
		} else {
			int32_t threshShift = (int32_t)(($DoubleConsts::SIGNIFICAND_WIDTH - 2 + $FloatConsts::MIN_SUB_EXPONENT) - exponent);
			if (!FloatingDecimal::$assertionsDisabled && !(threshShift >= $DoubleConsts::SIGNIFICAND_WIDTH - $FloatConsts::SIGNIFICAND_WIDTH)) {
				$throwNew($AssertionError);
			}
			if (!FloatingDecimal::$assertionsDisabled && !(threshShift < $DoubleConsts::SIGNIFICAND_WIDTH)) {
				$throwNew($AssertionError);
			}
			bool floatSticky = ((int64_t)(significand & (uint64_t)(($sl((int64_t)1, threshShift)) - 1))) != 0 || round || sticky;
			int32_t iValue = (int32_t)($usr(significand, threshShift));
			if (((int32_t)(iValue & (uint32_t)3)) != 1 || floatSticky) {
				++iValue;
			}
			floatBits |= iValue >> 1;
		}
		float fValue = $Float::intBitsToFloat(floatBits);
		if (exponent > $Double::MAX_EXPONENT) {
			return isNegative ? FloatingDecimal::A2BC_NEGATIVE_INFINITY : FloatingDecimal::A2BC_POSITIVE_INFINITY;
		} else {
			if (exponent <= $Double::MAX_EXPONENT && exponent >= $Double::MIN_EXPONENT) {
				significand = ((int64_t)(($sl(exponent + (int64_t)$DoubleConsts::EXP_BIAS, $DoubleConsts::SIGNIFICAND_WIDTH - 1)) & (uint64_t)$DoubleConsts::EXP_BIT_MASK)) | ((int64_t)($DoubleConsts::SIGNIF_BIT_MASK & (uint64_t)significand));
			} else if (exponent < ($DoubleConsts::MIN_SUB_EXPONENT - 1)) {
				return isNegative ? FloatingDecimal::A2BC_NEGATIVE_ZERO : FloatingDecimal::A2BC_POSITIVE_ZERO;
			} else {
				sticky = sticky || round;
				round = false;
				int32_t bitsDiscarded = 53 - ((int32_t)exponent - $DoubleConsts::MIN_SUB_EXPONENT + 1);
				if (!FloatingDecimal::$assertionsDisabled && !(bitsDiscarded >= 1 && bitsDiscarded <= 53)) {
					$throwNew($AssertionError);
				}
				round = ((int64_t)(significand & (uint64_t)($sl((int64_t)1, bitsDiscarded - 1)))) != (int64_t)0;
				if (bitsDiscarded > 1) {
					int64_t mask = ~($sl(~(int64_t)0, bitsDiscarded - 1));
					sticky = sticky || (((int64_t)(significand & (uint64_t)mask)) != (int64_t)0);
				}
				significand = $sr(significand, bitsDiscarded);
				significand = ((int64_t)(($sl((int64_t)($Double::MIN_EXPONENT - 1) + (int64_t)$DoubleConsts::EXP_BIAS, $DoubleConsts::SIGNIFICAND_WIDTH - 1)) & (uint64_t)$DoubleConsts::EXP_BIT_MASK)) | ((int64_t)($DoubleConsts::SIGNIF_BIT_MASK & (uint64_t)significand));
			}
			bool leastZero = (((int64_t)(significand & (uint64_t)(int64_t)1)) == (int64_t)0);
			if ((leastZero && round && sticky) || ((!leastZero) && round)) {
				++significand;
			}
			double value = isNegative ? $Double::longBitsToDouble(significand | $DoubleConsts::SIGN_BIT_MASK) : $Double::longBitsToDouble(significand);
			return $new($FloatingDecimal$PreparedASCIIToBinaryBuffer, value, fValue);
		}
	}
}

$String* FloatingDecimal::stripLeadingZeros($String* s) {
	$init(FloatingDecimal);
	bool var$0 = !$nc(s)->isEmpty();
	if (var$0 && s->charAt(0) == u'0') {
		for (int32_t i = 1; i < s->length(); ++i) {
			if (s->charAt(i) != u'0') {
				return s->substring(i);
			}
		}
		return ""_s;
	}
	return s;
}

int32_t FloatingDecimal::getHexDigit($String* s, int32_t position) {
	$init(FloatingDecimal);
	$useLocalCurrentObjectStackCache();
	int32_t value = $Character::digit($nc(s)->charAt(position), 16);
	if (value <= -1 || value >= 16) {
		$throwNew($AssertionError, $of($$str({"Unexpected failure of digit conversion of "_s, $$str($nc(s)->charAt(position))})));
	}
	return value;
}

void clinit$FloatingDecimal($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(FloatingDecimal::INFINITY_REP, "Infinity"_s);
	$assignStatic(FloatingDecimal::NAN_REP, "NaN"_s);
	FloatingDecimal::$assertionsDisabled = !FloatingDecimal::class$->desiredAssertionStatus();
	FloatingDecimal::INFINITY_LENGTH = $nc(FloatingDecimal::INFINITY_REP)->length();
	FloatingDecimal::NAN_LENGTH = $nc(FloatingDecimal::NAN_REP)->length();
	$assignStatic(FloatingDecimal::B2AC_POSITIVE_INFINITY, $new($FloatingDecimal$ExceptionalBinaryToASCIIBuffer, FloatingDecimal::INFINITY_REP, false));
	$assignStatic(FloatingDecimal::B2AC_NEGATIVE_INFINITY, $new($FloatingDecimal$ExceptionalBinaryToASCIIBuffer, $$str({"-"_s, FloatingDecimal::INFINITY_REP}), true));
	$assignStatic(FloatingDecimal::B2AC_NOT_A_NUMBER, $new($FloatingDecimal$ExceptionalBinaryToASCIIBuffer, FloatingDecimal::NAN_REP, false));
	$assignStatic(FloatingDecimal::B2AC_POSITIVE_ZERO, $new($FloatingDecimal$BinaryToASCIIBuffer, false, $$new($chars, {u'0'})));
	$assignStatic(FloatingDecimal::B2AC_NEGATIVE_ZERO, $new($FloatingDecimal$BinaryToASCIIBuffer, true, $$new($chars, {u'0'})));
	$assignStatic(FloatingDecimal::threadLocalBinaryToASCIIBuffer, $new($FloatingDecimal$1));
	$init($Double);
	$init($Float);
	$assignStatic(FloatingDecimal::A2BC_POSITIVE_INFINITY, $new($FloatingDecimal$PreparedASCIIToBinaryBuffer, $Double::POSITIVE_INFINITY, $Float::POSITIVE_INFINITY));
	$assignStatic(FloatingDecimal::A2BC_NEGATIVE_INFINITY, $new($FloatingDecimal$PreparedASCIIToBinaryBuffer, $Double::NEGATIVE_INFINITY, $Float::NEGATIVE_INFINITY));
	$assignStatic(FloatingDecimal::A2BC_NOT_A_NUMBER, $new($FloatingDecimal$PreparedASCIIToBinaryBuffer, $Double::NaN, $Float::NaN));
	$assignStatic(FloatingDecimal::A2BC_POSITIVE_ZERO, $new($FloatingDecimal$PreparedASCIIToBinaryBuffer, 0.0, 0.0f));
	$assignStatic(FloatingDecimal::A2BC_NEGATIVE_ZERO, $new($FloatingDecimal$PreparedASCIIToBinaryBuffer, -0.0, -0.0f));
}

FloatingDecimal::FloatingDecimal() {
}

$Class* FloatingDecimal::load$($String* name, bool initialize) {
	$loadClass(FloatingDecimal, name, initialize, &_FloatingDecimal_ClassInfo_, clinit$FloatingDecimal, allocate$FloatingDecimal);
	return class$;
}

$Class* FloatingDecimal::class$ = nullptr;

		} // math
	} // internal
} // jdk