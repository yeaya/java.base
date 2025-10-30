#include <jdk/internal/math/FormattedFloatingDecimal.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/Arrays.h>
#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIConverter.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jdk/internal/math/FormattedFloatingDecimal$1.h>
#include <jdk/internal/math/FormattedFloatingDecimal$2.h>
#include <jdk/internal/math/FormattedFloatingDecimal$Form.h>
#include <jcpp.h>

#undef COMPATIBLE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Arrays = ::java::util::Arrays;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;
using $FloatingDecimal$BinaryToASCIIConverter = ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter;
using $FormattedFloatingDecimal$1 = ::jdk::internal::math::FormattedFloatingDecimal$1;
using $FormattedFloatingDecimal$2 = ::jdk::internal::math::FormattedFloatingDecimal$2;
using $FormattedFloatingDecimal$Form = ::jdk::internal::math::FormattedFloatingDecimal$Form;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FormattedFloatingDecimal_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FormattedFloatingDecimal, $assertionsDisabled)},
	{"decExponentRounded", "I", nullptr, $PRIVATE, $field(FormattedFloatingDecimal, decExponentRounded)},
	{"mantissa", "[C", nullptr, $PRIVATE, $field(FormattedFloatingDecimal, mantissa)},
	{"exponent", "[C", nullptr, $PRIVATE, $field(FormattedFloatingDecimal, exponent)},
	{"threadLocalCharBuffer", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FormattedFloatingDecimal, threadLocalCharBuffer)},
	{}
};

$MethodInfo _FormattedFloatingDecimal_MethodInfo_[] = {
	{"<init>", "(ILjdk/internal/math/FormattedFloatingDecimal$Form;Ljdk/internal/math/FloatingDecimal$BinaryToASCIIConverter;)V", nullptr, $PRIVATE, $method(static_cast<void(FormattedFloatingDecimal::*)(int32_t,$FormattedFloatingDecimal$Form*,$FloatingDecimal$BinaryToASCIIConverter*)>(&FormattedFloatingDecimal::init$))},
	{"applyPrecision", "(I[CII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$chars*,int32_t,int32_t)>(&FormattedFloatingDecimal::applyPrecision))},
	{"create", "(ZI)[C", nullptr, $PRIVATE | $STATIC, $method(static_cast<$chars*(*)(bool,int32_t)>(&FormattedFloatingDecimal::create))},
	{"fillCompatible", "(I[CIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(FormattedFloatingDecimal::*)(int32_t,$chars*,int32_t,int32_t,bool)>(&FormattedFloatingDecimal::fillCompatible))},
	{"fillDecimal", "(I[CIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(FormattedFloatingDecimal::*)(int32_t,$chars*,int32_t,int32_t,bool)>(&FormattedFloatingDecimal::fillDecimal))},
	{"fillScientific", "(I[CIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(FormattedFloatingDecimal::*)(int32_t,$chars*,int32_t,int32_t,bool)>(&FormattedFloatingDecimal::fillScientific))},
	{"getBuffer", "()[C", nullptr, $PRIVATE | $STATIC, $method(static_cast<$chars*(*)()>(&FormattedFloatingDecimal::getBuffer))},
	{"getExponent", "()[C", nullptr, $PUBLIC},
	{"getExponentRounded", "()I", nullptr, $PUBLIC},
	{"getMantissa", "()[C", nullptr, $PUBLIC},
	{"valueOf", "(DILjdk/internal/math/FormattedFloatingDecimal$Form;)Ljdk/internal/math/FormattedFloatingDecimal;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FormattedFloatingDecimal*(*)(double,int32_t,$FormattedFloatingDecimal$Form*)>(&FormattedFloatingDecimal::valueOf))},
	{}
};

$InnerClassInfo _FormattedFloatingDecimal_InnerClassesInfo_[] = {
	{"jdk.internal.math.FormattedFloatingDecimal$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"jdk.internal.math.FormattedFloatingDecimal$Form", "jdk.internal.math.FormattedFloatingDecimal", "Form", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"jdk.internal.math.FormattedFloatingDecimal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FormattedFloatingDecimal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.math.FormattedFloatingDecimal",
	"java.lang.Object",
	nullptr,
	_FormattedFloatingDecimal_FieldInfo_,
	_FormattedFloatingDecimal_MethodInfo_,
	nullptr,
	nullptr,
	_FormattedFloatingDecimal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.math.FormattedFloatingDecimal$2,jdk.internal.math.FormattedFloatingDecimal$Form,jdk.internal.math.FormattedFloatingDecimal$1"
};

$Object* allocate$FormattedFloatingDecimal($Class* clazz) {
	return $of($alloc(FormattedFloatingDecimal));
}

bool FormattedFloatingDecimal::$assertionsDisabled = false;
$ThreadLocal* FormattedFloatingDecimal::threadLocalCharBuffer = nullptr;

FormattedFloatingDecimal* FormattedFloatingDecimal::valueOf(double d, int32_t precision, $FormattedFloatingDecimal$Form* form) {
	$init(FormattedFloatingDecimal);
	$init($FormattedFloatingDecimal$Form);
	$var($FloatingDecimal$BinaryToASCIIConverter, fdConverter, $FloatingDecimal::getBinaryToASCIIConverter(d, form == $FormattedFloatingDecimal$Form::COMPATIBLE));
	return $new(FormattedFloatingDecimal, precision, form, fdConverter);
}

$chars* FormattedFloatingDecimal::getBuffer() {
	$init(FormattedFloatingDecimal);
	return $cast($chars, $nc(FormattedFloatingDecimal::threadLocalCharBuffer)->get());
}

void FormattedFloatingDecimal::init$(int32_t precision, $FormattedFloatingDecimal$Form* form, $FloatingDecimal$BinaryToASCIIConverter* fdConverter) {
	$useLocalCurrentObjectStackCache();
	if ($nc(fdConverter)->isExceptional()) {
		$set(this, mantissa, $nc($(fdConverter->toJavaFormatString()))->toCharArray());
		$set(this, exponent, nullptr);
		return;
	}
	$var($chars, digits, getBuffer());
	int32_t nDigits = $nc(fdConverter)->getDigits(digits);
	int32_t decExp = fdConverter->getDecimalExponent();
	int32_t exp = 0;
	bool isNegative = fdConverter->isNegative();
	$init($FormattedFloatingDecimal$2);
	switch ($nc($FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form)->get($nc((form))->ordinal())) {
	case 1:
		{
			exp = decExp;
			this->decExponentRounded = exp;
			fillCompatible(precision, digits, nDigits, exp, isNegative);
			break;
		}
	case 2:
		{
			exp = applyPrecision(decExp, digits, nDigits, decExp + precision);
			fillDecimal(precision, digits, nDigits, exp, isNegative);
			this->decExponentRounded = exp;
			break;
		}
	case 3:
		{
			exp = applyPrecision(decExp, digits, nDigits, precision + 1);
			fillScientific(precision, digits, nDigits, exp, isNegative);
			this->decExponentRounded = exp;
			break;
		}
	case 4:
		{
			exp = applyPrecision(decExp, digits, nDigits, precision);
			if (exp - 1 < -4 || exp - 1 >= precision) {
				--precision;
				fillScientific(precision, digits, nDigits, exp, isNegative);
			} else {
				precision = precision - exp;
				fillDecimal(precision, digits, nDigits, exp, isNegative);
			}
			this->decExponentRounded = exp;
			break;
		}
	default:
		{
			if (!FormattedFloatingDecimal::$assertionsDisabled) {
				$throwNew($AssertionError);
			}
		}
	}
}

int32_t FormattedFloatingDecimal::getExponentRounded() {
	return this->decExponentRounded - 1;
}

$chars* FormattedFloatingDecimal::getMantissa() {
	return this->mantissa;
}

$chars* FormattedFloatingDecimal::getExponent() {
	return this->exponent;
}

int32_t FormattedFloatingDecimal::applyPrecision(int32_t decExp, $chars* digits, int32_t nDigits, int32_t prec) {
	$init(FormattedFloatingDecimal);
	if (prec >= nDigits || prec < 0) {
		return decExp;
	}
	if (prec == 0) {
		if ($nc(digits)->get(0) >= u'5') {
			digits->set(0, u'1');
			$Arrays::fill(digits, 1, nDigits, u'0');
			return decExp + 1;
		} else {
			$Arrays::fill(digits, 0, nDigits, u'0');
			return decExp;
		}
	}
	int32_t q = $nc(digits)->get(prec);
	if (q >= u'5') {
		int32_t i = prec;
		q = digits->get(--i);
		if (q == u'9') {
			while (q == u'9' && i > 0) {
				q = digits->get(--i);
			}
			if (q == u'9') {
				digits->set(0, u'1');
				$Arrays::fill(digits, 1, nDigits, u'0');
				return decExp + 1;
			}
		}
		digits->set(i, (char16_t)(q + 1));
		$Arrays::fill(digits, i + 1, nDigits, u'0');
	} else {
		$Arrays::fill(digits, prec, nDigits, u'0');
	}
	return decExp;
}

void FormattedFloatingDecimal::fillCompatible(int32_t precision, $chars* digits, int32_t nDigits, int32_t exp, bool isNegative) {
	int32_t startIndex = isNegative ? 1 : 0;
	if (exp > 0 && exp < 8) {
		if (nDigits < exp) {
			int32_t extraZeros = exp - nDigits;
			$set(this, mantissa, create(isNegative, nDigits + extraZeros + 2));
			$System::arraycopy(digits, 0, this->mantissa, startIndex, nDigits);
			$Arrays::fill(this->mantissa, startIndex + nDigits, startIndex + nDigits + extraZeros, u'0');
			$nc(this->mantissa)->set(startIndex + nDigits + extraZeros, u'.');
			$nc(this->mantissa)->set(startIndex + nDigits + extraZeros + 1, u'0');
		} else if (exp < nDigits) {
			int32_t t = $Math::min(nDigits - exp, precision);
			$set(this, mantissa, create(isNegative, exp + 1 + t));
			$System::arraycopy(digits, 0, this->mantissa, startIndex, exp);
			$nc(this->mantissa)->set(startIndex + exp, u'.');
			$System::arraycopy(digits, exp, this->mantissa, startIndex + exp + 1, t);
		} else {
			$set(this, mantissa, create(isNegative, nDigits + 2));
			$System::arraycopy(digits, 0, this->mantissa, startIndex, nDigits);
			$nc(this->mantissa)->set(startIndex + nDigits, u'.');
			$nc(this->mantissa)->set(startIndex + nDigits + 1, u'0');
		}
	} else if (exp <= 0 && exp > -3) {
		int32_t zeros = $Math::max(0, $Math::min(-exp, precision));
		int32_t t = $Math::max(0, $Math::min(nDigits, precision + exp));
		if (zeros > 0) {
			$set(this, mantissa, create(isNegative, zeros + 2 + t));
			$nc(this->mantissa)->set(startIndex, u'0');
			$nc(this->mantissa)->set(startIndex + 1, u'.');
			$Arrays::fill(this->mantissa, startIndex + 2, startIndex + 2 + zeros, u'0');
			if (t > 0) {
				$System::arraycopy(digits, 0, this->mantissa, startIndex + 2 + zeros, t);
			}
		} else if (t > 0) {
			$set(this, mantissa, create(isNegative, zeros + 2 + t));
			$nc(this->mantissa)->set(startIndex, u'0');
			$nc(this->mantissa)->set(startIndex + 1, u'.');
			$System::arraycopy(digits, 0, this->mantissa, startIndex + 2, t);
		} else {
			$set(this, mantissa, create(isNegative, 1));
			$nc(this->mantissa)->set(startIndex, u'0');
		}
	} else {
		if (nDigits > 1) {
			$set(this, mantissa, create(isNegative, nDigits + 1));
			$nc(this->mantissa)->set(startIndex, $nc(digits)->get(0));
			$nc(this->mantissa)->set(startIndex + 1, u'.');
			$System::arraycopy(digits, 1, this->mantissa, startIndex + 2, nDigits - 1);
		} else {
			$set(this, mantissa, create(isNegative, 3));
			$nc(this->mantissa)->set(startIndex, $nc(digits)->get(0));
			$nc(this->mantissa)->set(startIndex + 1, u'.');
			$nc(this->mantissa)->set(startIndex + 2, u'0');
		}
		int32_t e = 0;
		int32_t expStartIntex = 0;
		bool isNegExp = (exp <= 0);
		if (isNegExp) {
			e = -exp + 1;
			expStartIntex = 1;
		} else {
			e = exp - 1;
			expStartIntex = 0;
		}
		if (e <= 9) {
			$set(this, exponent, create(isNegExp, 1));
			$nc(this->exponent)->set(expStartIntex, (char16_t)(e + u'0'));
		} else if (e <= 99) {
			$set(this, exponent, create(isNegExp, 2));
			$nc(this->exponent)->set(expStartIntex, (char16_t)(e / 10 + u'0'));
			$nc(this->exponent)->set(expStartIntex + 1, (char16_t)(e % 10 + u'0'));
		} else {
			$set(this, exponent, create(isNegExp, 3));
			$nc(this->exponent)->set(expStartIntex, (char16_t)(e / 100 + u'0'));
			$modAssign(e, 100);
			$nc(this->exponent)->set(expStartIntex + 1, (char16_t)(e / 10 + u'0'));
			$nc(this->exponent)->set(expStartIntex + 2, (char16_t)(e % 10 + u'0'));
		}
	}
}

$chars* FormattedFloatingDecimal::create(bool isNegative, int32_t size) {
	$init(FormattedFloatingDecimal);
	if (isNegative) {
		$var($chars, r, $new($chars, size + 1));
		r->set(0, u'-');
		return r;
	} else {
		return $new($chars, size);
	}
}

void FormattedFloatingDecimal::fillDecimal(int32_t precision, $chars* digits, int32_t nDigits, int32_t exp, bool isNegative) {
	int32_t startIndex = isNegative ? 1 : 0;
	if (exp > 0) {
		if (nDigits < exp) {
			$set(this, mantissa, create(isNegative, exp));
			$System::arraycopy(digits, 0, this->mantissa, startIndex, nDigits);
			$Arrays::fill(this->mantissa, startIndex + nDigits, startIndex + exp, u'0');
		} else {
			int32_t t = $Math::min(nDigits - exp, precision);
			$set(this, mantissa, create(isNegative, exp + (t > 0 ? (t + 1) : 0)));
			$System::arraycopy(digits, 0, this->mantissa, startIndex, exp);
			if (t > 0) {
				$nc(this->mantissa)->set(startIndex + exp, u'.');
				$System::arraycopy(digits, exp, this->mantissa, startIndex + exp + 1, t);
			}
		}
	} else if (exp <= 0) {
		int32_t zeros = $Math::max(0, $Math::min(-exp, precision));
		int32_t t = $Math::max(0, $Math::min(nDigits, precision + exp));
		if (zeros > 0) {
			$set(this, mantissa, create(isNegative, zeros + 2 + t));
			$nc(this->mantissa)->set(startIndex, u'0');
			$nc(this->mantissa)->set(startIndex + 1, u'.');
			$Arrays::fill(this->mantissa, startIndex + 2, startIndex + 2 + zeros, u'0');
			if (t > 0) {
				$System::arraycopy(digits, 0, this->mantissa, startIndex + 2 + zeros, t);
			}
		} else if (t > 0) {
			$set(this, mantissa, create(isNegative, zeros + 2 + t));
			$nc(this->mantissa)->set(startIndex, u'0');
			$nc(this->mantissa)->set(startIndex + 1, u'.');
			$System::arraycopy(digits, 0, this->mantissa, startIndex + 2, t);
		} else {
			$set(this, mantissa, create(isNegative, 1));
			$nc(this->mantissa)->set(startIndex, u'0');
		}
	}
}

void FormattedFloatingDecimal::fillScientific(int32_t precision, $chars* digits, int32_t nDigits, int32_t exp, bool isNegative) {
	int32_t startIndex = isNegative ? 1 : 0;
	int32_t t = $Math::max(0, $Math::min(nDigits - 1, precision));
	if (t > 0) {
		$set(this, mantissa, create(isNegative, t + 2));
		$nc(this->mantissa)->set(startIndex, $nc(digits)->get(0));
		$nc(this->mantissa)->set(startIndex + 1, u'.');
		$System::arraycopy(digits, 1, this->mantissa, startIndex + 2, t);
	} else {
		$set(this, mantissa, create(isNegative, 1));
		$nc(this->mantissa)->set(startIndex, $nc(digits)->get(0));
	}
	char16_t expSign = 0;
	int32_t e = 0;
	if (exp <= 0) {
		expSign = u'-';
		e = -exp + 1;
	} else {
		expSign = u'+';
		e = exp - 1;
	}
	if (e <= 9) {
		$set(this, exponent, $new($chars, {
			expSign,
			u'0',
			(char16_t)(e + u'0')
		}));
	} else if (e <= 99) {
		$set(this, exponent, $new($chars, {
			expSign,
			(char16_t)(e / 10 + u'0'),
			(char16_t)(e % 10 + u'0')
		}));
	} else {
		char16_t hiExpChar = (char16_t)(e / 100 + u'0');
		$modAssign(e, 100);
		$set(this, exponent, $new($chars, {
			expSign,
			hiExpChar,
			(char16_t)(e / 10 + u'0'),
			(char16_t)(e % 10 + u'0')
		}));
	}
}

void clinit$FormattedFloatingDecimal($Class* class$) {
	FormattedFloatingDecimal::$assertionsDisabled = !FormattedFloatingDecimal::class$->desiredAssertionStatus();
	$assignStatic(FormattedFloatingDecimal::threadLocalCharBuffer, $new($FormattedFloatingDecimal$1));
}

FormattedFloatingDecimal::FormattedFloatingDecimal() {
}

$Class* FormattedFloatingDecimal::load$($String* name, bool initialize) {
	$loadClass(FormattedFloatingDecimal, name, initialize, &_FormattedFloatingDecimal_ClassInfo_, clinit$FormattedFloatingDecimal, allocate$FormattedFloatingDecimal);
	return class$;
}

$Class* FormattedFloatingDecimal::class$ = nullptr;

		} // math
	} // internal
} // jdk