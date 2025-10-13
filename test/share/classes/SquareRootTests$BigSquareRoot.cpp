#include <SquareRootTests$BigSquareRoot.h>

#include <SquareRootTests$1.h>
#include <SquareRootTests.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/math/MathContext.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

#undef DOWN
#undef HALF_EVEN
#undef ONE
#undef ONE_HALF
#undef ONE_TENTH
#undef TEN
#undef UNNECESSARY
#undef ZERO

using $SquareRootTests = ::SquareRootTests;
using $SquareRootTests$1 = ::SquareRootTests$1;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $MathContext = ::java::math::MathContext;
using $RoundingMode = ::java::math::RoundingMode;

$FieldInfo _SquareRootTests$BigSquareRoot_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SquareRootTests$BigSquareRoot, $assertionsDisabled)},
	{"ONE_HALF", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SquareRootTests$BigSquareRoot, ONE_HALF)},
	{}
};

$MethodInfo _SquareRootTests$BigSquareRoot_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SquareRootTests$BigSquareRoot::*)()>(&SquareRootTests$BigSquareRoot::init$))},
	{"isPowerOfTen", "(Ljava/math/BigDecimal;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($BigDecimal*)>(&SquareRootTests$BigSquareRoot::isPowerOfTen))},
	{"sqrt", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BigDecimal*(*)($BigDecimal*,$MathContext*)>(&SquareRootTests$BigSquareRoot::sqrt))},
	{"square", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BigDecimal*(*)($BigDecimal*)>(&SquareRootTests$BigSquareRoot::square))},
	{"squareRootResultAssertions", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/MathContext;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($BigDecimal*,$BigDecimal*,$MathContext*)>(&SquareRootTests$BigSquareRoot::squareRootResultAssertions))},
	{"squareRootZeroResultAssertions", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/MathContext;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($BigDecimal*,$BigDecimal*,$MathContext*)>(&SquareRootTests$BigSquareRoot::squareRootZeroResultAssertions))},
	{}
};

$InnerClassInfo _SquareRootTests$BigSquareRoot_InnerClassesInfo_[] = {
	{"SquareRootTests$BigSquareRoot", "SquareRootTests", "BigSquareRoot", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SquareRootTests$BigSquareRoot_ClassInfo_ = {
	$ACC_SUPER,
	"SquareRootTests$BigSquareRoot",
	"java.lang.Object",
	nullptr,
	_SquareRootTests$BigSquareRoot_FieldInfo_,
	_SquareRootTests$BigSquareRoot_MethodInfo_,
	nullptr,
	nullptr,
	_SquareRootTests$BigSquareRoot_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SquareRootTests"
};

$Object* allocate$SquareRootTests$BigSquareRoot($Class* clazz) {
	return $of($alloc(SquareRootTests$BigSquareRoot));
}

bool SquareRootTests$BigSquareRoot::$assertionsDisabled = false;

$BigDecimal* SquareRootTests$BigSquareRoot::ONE_HALF = nullptr;

void SquareRootTests$BigSquareRoot::init$() {
}

bool SquareRootTests$BigSquareRoot::isPowerOfTen($BigDecimal* bd) {
	$init(SquareRootTests$BigSquareRoot);
	$init($BigInteger);
	return $nc($BigInteger::ONE)->equals($($nc(bd)->unscaledValue()));
}

$BigDecimal* SquareRootTests$BigSquareRoot::square($BigDecimal* bd) {
	$init(SquareRootTests$BigSquareRoot);
	return $nc(bd)->multiply(bd);
}

$BigDecimal* SquareRootTests$BigSquareRoot::sqrt($BigDecimal* bd, $MathContext* mc) {
	$init(SquareRootTests$BigSquareRoot);
	int32_t signum = $nc(bd)->signum();
	if (signum == 1) {
		int32_t preferredScale = bd->scale() / 2;
		$var($BigDecimal, zeroWithFinalPreferredScale, $BigDecimal::valueOf(0, preferredScale));
		$var($BigDecimal, stripped, bd->stripTrailingZeros());
		int32_t strippedScale = $nc(stripped)->scale();
		if (isPowerOfTen(stripped) && strippedScale % 2 == 0) {
			$var($BigDecimal, result, $BigDecimal::valueOf(1, strippedScale / 2));
			if ($nc(result)->scale() != preferredScale) {
				$assign(result, result->add(zeroWithFinalPreferredScale, mc));
			}
			return result;
		}
		int32_t scaleAdjust = 0;
		int32_t var$0 = stripped->scale();
		int32_t scale = var$0 - stripped->precision() + 1;
		if (scale % 2 == 0) {
			scaleAdjust = scale;
		} else {
			scaleAdjust = scale - 1;
		}
		$var($BigDecimal, working, stripped->scaleByPowerOfTen(scaleAdjust));
		bool var$1 = !SquareRootTests$BigSquareRoot::$assertionsDisabled;
		if (var$1) {
			$init($SquareRootTests);
			bool var$2 = $nc($SquareRootTests::ONE_TENTH)->compareTo(working) <= 0;
			var$1 = !(var$2 && $nc(working)->compareTo($BigDecimal::TEN) < 0);
		}
		if (var$1) {
			$throwNew($AssertionError);
		}
		$var($BigDecimal, guess, $new($BigDecimal, $Math::sqrt($nc(working)->doubleValue())));
		int32_t guessPrecision = 15;
		int32_t originalPrecision = $nc(mc)->getPrecision();
		int32_t targetPrecision = 0;
		if (originalPrecision == 0) {
			targetPrecision = stripped->precision() / 2 + 1;
		} else {
			targetPrecision = originalPrecision;
		}
		$var($BigDecimal, approx, guess);
		int32_t workingPrecision = $nc(working)->precision();
		int32_t loopPrecision = $Math::max(2 * $Math::max(targetPrecision, workingPrecision) + 2, 34);
		do {
			$init($RoundingMode);
			$var($MathContext, mcTmp, $new($MathContext, loopPrecision, $RoundingMode::HALF_EVEN));
			$assign(approx, $nc(SquareRootTests$BigSquareRoot::ONE_HALF)->multiply($(approx->add($(working->divide(approx, mcTmp)), mcTmp))));
			guessPrecision *= 2;
		} while (guessPrecision < loopPrecision);
		$var($BigDecimal, result, nullptr);
		$RoundingMode* targetRm = mc->getRoundingMode();
		$init($RoundingMode);
		if (targetRm == $RoundingMode::UNNECESSARY || originalPrecision == 0) {
			$RoundingMode* tmpRm = (targetRm == $RoundingMode::UNNECESSARY) ? $RoundingMode::DOWN : targetRm;
			$var($MathContext, mcTmp, $new($MathContext, targetPrecision, tmpRm));
			$assign(result, $nc($(approx->scaleByPowerOfTen(-scaleAdjust / 2)))->round(mcTmp));
			if ($nc($(bd->subtract($(square(result)))))->compareTo($BigDecimal::ZERO) != 0) {
				$throwNew($ArithmeticException, "Computed square root not exact."_s);
			}
		} else {
			$assign(result, $nc($(approx->scaleByPowerOfTen(-scaleAdjust / 2)))->round(mc));
		}
		if (!SquareRootTests$BigSquareRoot::$assertionsDisabled && !squareRootResultAssertions(bd, result, mc)) {
			$throwNew($AssertionError);
		}
		if ($nc(result)->scale() != preferredScale) {
			$assign(result, $nc($(result->stripTrailingZeros()))->add(zeroWithFinalPreferredScale, $$new($MathContext, originalPrecision, $RoundingMode::UNNECESSARY)));
		}
		return result;
	} else {
		switch (signum) {
		case -1:
			{
				$throwNew($ArithmeticException, "Attempted square root of negative BigDecimal"_s);
			}
		case 0:
			{
				return $BigDecimal::valueOf(0, bd->scale() / 2);
			}
		default:
			{
				$throwNew($AssertionError, $of("Bad value from signum"_s));
			}
		}
	}
}

bool SquareRootTests$BigSquareRoot::squareRootResultAssertions($BigDecimal* input, $BigDecimal* result, $MathContext* mc) {
	$init(SquareRootTests$BigSquareRoot);
	if ($nc(result)->signum() == 0) {
		return squareRootZeroResultAssertions(input, result, mc);
	} else {
		$RoundingMode* rm = $nc(mc)->getRoundingMode();
		$var($BigDecimal, ulp, result->ulp());
		$var($BigDecimal, neighborUp, result->add(ulp));
		if (isPowerOfTen(result)) {
			$assign(ulp, $nc(ulp)->divide($BigDecimal::TEN));
		}
		$var($BigDecimal, neighborDown, result->subtract(ulp));
		bool var$0 = result->signum() != 1;
		if (var$0 || $nc(input)->signum() != 1) {
			return false;
		}
			$init($SquareRootTests$1);
		{
			$var($BigDecimal, err, nullptr)
			$var($BigDecimal, errUp, nullptr)
			$var($BigDecimal, errDown, nullptr)
			int32_t err_comp_errUp = 0;
			int32_t err_comp_errDown = 0;
			switch ($nc($SquareRootTests$1::$SwitchMap$java$math$RoundingMode)->get($nc((rm))->ordinal())) {
			case 1:
				{}
			case 2:
				{
					bool var$1 = !SquareRootTests$BigSquareRoot::$assertionsDisabled;
					if (var$1) {
						bool var$2 = $nc($(square(result)))->compareTo(input) <= 0;
						var$1 = !(var$2 && $nc($(square(neighborUp)))->compareTo(input) > 0);
					}
					if (var$1) {
						$throwNew($AssertionError, $of($$str({"Square of result out for bounds rounding "_s, rm})));
					}
					return true;
				}
			case 3:
				{}
			case 4:
				{
					if (!SquareRootTests$BigSquareRoot::$assertionsDisabled && !($nc($(square(result)))->compareTo(input) >= 0)) {
						$throwNew($AssertionError, $of($$str({"Square of result too small rounding "_s, rm})));
					}
					if (!SquareRootTests$BigSquareRoot::$assertionsDisabled && !($nc($(square(neighborDown)))->compareTo(input) < 0)) {
						$throwNew($AssertionError, $of($$str({"Square of down neighbor too large rounding  "_s, rm, "\n\t input: "_s, input, "\t neighborDown: "_s, neighborDown, "\t sqrt: "_s, result, "\t"_s, mc})));
					}
					return true;
				}
			case 5:
				{}
			case 6:
				{}
			case 7:
				{
					$assign(err, $nc($($nc($(square(result)))->subtract(input)))->abs());
					$assign(errUp, $nc($(square(neighborUp)))->subtract(input));
					$assign(errDown, $nc(input)->subtract($(square(neighborDown))));
					err_comp_errUp = $nc(err)->compareTo(errUp);
					err_comp_errDown = err->compareTo(errDown);
					bool var$3 = !SquareRootTests$BigSquareRoot::$assertionsDisabled;
					if (var$3) {
						bool var$4 = $nc(errUp)->signum() == 1;
						var$3 = !(var$4 && $nc(errDown)->signum() == 1);
					}
					if (var$3) {
						$throwNew($AssertionError, $of("Errors of neighbors squared don\'t have correct signs"_s));
					}
					if (!SquareRootTests$BigSquareRoot::$assertionsDisabled && !(((err_comp_errUp == 0) ? err_comp_errDown < 0 : true) && ((err_comp_errDown == 0) ? err_comp_errUp < 0 : true))) {
						$throwNew($AssertionError, $of("Incorrect error relationships"_s));
					}
					return true;
				}
			default:
				{
					return true;
				}
			}
		}
	}
}

bool SquareRootTests$BigSquareRoot::squareRootZeroResultAssertions($BigDecimal* input, $BigDecimal* result, $MathContext* mc) {
	$init(SquareRootTests$BigSquareRoot);
	$init($BigDecimal);
	return $nc(input)->compareTo($BigDecimal::ZERO) == 0;
}

void clinit$SquareRootTests$BigSquareRoot($Class* class$) {
	$load($SquareRootTests);
	SquareRootTests$BigSquareRoot::$assertionsDisabled = !$SquareRootTests::class$->desiredAssertionStatus();
	$assignStatic(SquareRootTests$BigSquareRoot::ONE_HALF, $BigDecimal::valueOf(5, 1));
}

SquareRootTests$BigSquareRoot::SquareRootTests$BigSquareRoot() {
}

$Class* SquareRootTests$BigSquareRoot::load$($String* name, bool initialize) {
	$loadClass(SquareRootTests$BigSquareRoot, name, initialize, &_SquareRootTests$BigSquareRoot_ClassInfo_, clinit$SquareRootTests$BigSquareRoot, allocate$SquareRootTests$BigSquareRoot);
	return class$;
}

$Class* SquareRootTests$BigSquareRoot::class$ = nullptr;