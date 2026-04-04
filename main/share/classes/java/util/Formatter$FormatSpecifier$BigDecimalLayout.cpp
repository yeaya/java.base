#include <java/util/Formatter$FormatSpecifier$BigDecimalLayout.h>
#include <java/lang/Math.h>
#include <java/math/BigInteger.h>
#include <java/util/Formatter$BigDecimalLayoutForm.h>
#include <java/util/Formatter$FormatSpecifier.h>
#include <jcpp.h>

#undef DECIMAL_FLOAT
#undef SCIENTIFIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Formatter$BigDecimalLayoutForm = ::java::util::Formatter$BigDecimalLayoutForm;
using $Formatter$FormatSpecifier = ::java::util::Formatter$FormatSpecifier;

namespace java {
	namespace util {

void Formatter$FormatSpecifier$BigDecimalLayout::init$($Formatter$FormatSpecifier* this$1, $BigInteger* intVal, int32_t scale, $Formatter$BigDecimalLayoutForm* form) {
	$set(this, this$1, this$1);
	this->dot = false;
	layout(intVal, scale, form);
}

bool Formatter$FormatSpecifier$BigDecimalLayout::hasDot() {
	return this->dot;
}

int32_t Formatter$FormatSpecifier$BigDecimalLayout::scale() {
	return this->scale$;
}

$StringBuilder* Formatter$FormatSpecifier$BigDecimalLayout::mantissa() {
	return this->mant;
}

$StringBuilder* Formatter$FormatSpecifier$BigDecimalLayout::exponent() {
	return this->exp;
}

void Formatter$FormatSpecifier$BigDecimalLayout::layout($BigInteger* intVal, int32_t scale, $Formatter$BigDecimalLayoutForm* form) {
	$var($String, coeff, $nc(intVal)->toString());
	this->scale$ = scale;
	int32_t len = coeff->length();
	$set(this, mant, $new($StringBuilder, len + 14));
	if (scale == 0) {
		if (len > 1) {
			this->mant->append(coeff->charAt(0));
			$init($Formatter$BigDecimalLayoutForm);
			if (form == $Formatter$BigDecimalLayoutForm::SCIENTIFIC) {
				this->mant->append(u'.');
				this->dot = true;
				this->mant->append(coeff, 1, len);
				$set(this, exp, $new($StringBuilder, "+"_s));
				if (len < 10) {
					this->exp->append(u'0')->append(len - 1);
				} else {
					this->exp->append(len - 1);
				}
			} else {
				this->mant->append(coeff, 1, len);
			}
		} else {
			this->mant->append(coeff);
			$init($Formatter$BigDecimalLayoutForm);
			if (form == $Formatter$BigDecimalLayoutForm::SCIENTIFIC) {
				$set(this, exp, $new($StringBuilder, "+00"_s));
			}
		}
	} else {
		$init($Formatter$BigDecimalLayoutForm);
		if (form == $Formatter$BigDecimalLayoutForm::DECIMAL_FLOAT) {
			if (scale >= len) {
				this->mant->append("0."_s);
				this->dot = true;
				this->this$1->trailingZeros(this->mant, scale - len);
				this->mant->append(coeff);
			} else if (scale > 0) {
				int32_t pad = len - scale;
				this->mant->append(coeff, 0, pad);
				this->mant->append(u'.');
				this->dot = true;
				this->mant->append(coeff, pad, len);
			} else {
				this->mant->append(coeff, 0, len);
				if (intVal->signum() != 0) {
					this->this$1->trailingZeros(this->mant, -scale);
				}
				this->scale$ = 0;
			}
		} else {
			this->mant->append(coeff->charAt(0));
			if (len > 1) {
				this->mant->append(u'.');
				this->dot = true;
				this->mant->append(coeff, 1, len);
			}
			$set(this, exp, $new($StringBuilder));
			int64_t adjusted = -(int64_t)scale + (len - 1);
			if (adjusted != 0) {
				int64_t abs = $Math::abs(adjusted);
				this->exp->append(adjusted < 0 ? u'-' : u'+');
				if (abs < 10) {
					this->exp->append(u'0');
				}
				this->exp->append(abs);
			} else {
				this->exp->append("+00"_s);
			}
		}
	}
}

Formatter$FormatSpecifier$BigDecimalLayout::Formatter$FormatSpecifier$BigDecimalLayout() {
}

$Class* Formatter$FormatSpecifier$BigDecimalLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/Formatter$FormatSpecifier;", nullptr, $FINAL | $SYNTHETIC, $field(Formatter$FormatSpecifier$BigDecimalLayout, this$1)},
		{"mant", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(Formatter$FormatSpecifier$BigDecimalLayout, mant)},
		{"exp", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(Formatter$FormatSpecifier$BigDecimalLayout, exp)},
		{"dot", "Z", nullptr, $PRIVATE, $field(Formatter$FormatSpecifier$BigDecimalLayout, dot)},
		{"scale", "I", nullptr, $PRIVATE, $field(Formatter$FormatSpecifier$BigDecimalLayout, scale$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Formatter$FormatSpecifier;Ljava/math/BigInteger;ILjava/util/Formatter$BigDecimalLayoutForm;)V", nullptr, $PUBLIC, $method(Formatter$FormatSpecifier$BigDecimalLayout, init$, void, $Formatter$FormatSpecifier*, $BigInteger*, int32_t, $Formatter$BigDecimalLayoutForm*)},
		{"exponent", "()Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(Formatter$FormatSpecifier$BigDecimalLayout, exponent, $StringBuilder*)},
		{"hasDot", "()Z", nullptr, $PUBLIC, $virtualMethod(Formatter$FormatSpecifier$BigDecimalLayout, hasDot, bool)},
		{"layout", "(Ljava/math/BigInteger;ILjava/util/Formatter$BigDecimalLayoutForm;)V", nullptr, $PRIVATE, $method(Formatter$FormatSpecifier$BigDecimalLayout, layout, void, $BigInteger*, int32_t, $Formatter$BigDecimalLayoutForm*)},
		{"mantissa", "()Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(Formatter$FormatSpecifier$BigDecimalLayout, mantissa, $StringBuilder*)},
		{"scale", "()I", nullptr, $PUBLIC, $virtualMethod(Formatter$FormatSpecifier$BigDecimalLayout, scale, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Formatter$FormatSpecifier", "java.util.Formatter", "FormatSpecifier", $PRIVATE},
		{"java.util.Formatter$FormatSpecifier$BigDecimalLayout", "java.util.Formatter$FormatSpecifier", "BigDecimalLayout", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Formatter$FormatSpecifier$BigDecimalLayout",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Formatter"
	};
	$loadClass(Formatter$FormatSpecifier$BigDecimalLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Formatter$FormatSpecifier$BigDecimalLayout);
	});
	return class$;
}

$Class* Formatter$FormatSpecifier$BigDecimalLayout::class$ = nullptr;

	} // util
} // java