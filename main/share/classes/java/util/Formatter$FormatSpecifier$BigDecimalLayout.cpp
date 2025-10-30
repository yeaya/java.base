#include <java/util/Formatter$FormatSpecifier$BigDecimalLayout.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/math/BigInteger.h>
#include <java/util/Formatter$BigDecimalLayoutForm.h>
#include <java/util/Formatter$FormatSpecifier.h>
#include <jcpp.h>

#undef DECIMAL_FLOAT
#undef SCIENTIFIC

using $CharSequence = ::java::lang::CharSequence;
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

$FieldInfo _Formatter$FormatSpecifier$BigDecimalLayout_FieldInfo_[] = {
	{"this$1", "Ljava/util/Formatter$FormatSpecifier;", nullptr, $FINAL | $SYNTHETIC, $field(Formatter$FormatSpecifier$BigDecimalLayout, this$1)},
	{"mant", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(Formatter$FormatSpecifier$BigDecimalLayout, mant)},
	{"exp", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(Formatter$FormatSpecifier$BigDecimalLayout, exp)},
	{"dot", "Z", nullptr, $PRIVATE, $field(Formatter$FormatSpecifier$BigDecimalLayout, dot)},
	{"scale", "I", nullptr, $PRIVATE, $field(Formatter$FormatSpecifier$BigDecimalLayout, scale$)},
	{}
};

$MethodInfo _Formatter$FormatSpecifier$BigDecimalLayout_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Formatter$FormatSpecifier;Ljava/math/BigInteger;ILjava/util/Formatter$BigDecimalLayoutForm;)V", nullptr, $PUBLIC, $method(static_cast<void(Formatter$FormatSpecifier$BigDecimalLayout::*)($Formatter$FormatSpecifier*,$BigInteger*,int32_t,$Formatter$BigDecimalLayoutForm*)>(&Formatter$FormatSpecifier$BigDecimalLayout::init$))},
	{"exponent", "()Ljava/lang/StringBuilder;", nullptr, $PUBLIC},
	{"hasDot", "()Z", nullptr, $PUBLIC},
	{"layout", "(Ljava/math/BigInteger;ILjava/util/Formatter$BigDecimalLayoutForm;)V", nullptr, $PRIVATE, $method(static_cast<void(Formatter$FormatSpecifier$BigDecimalLayout::*)($BigInteger*,int32_t,$Formatter$BigDecimalLayoutForm*)>(&Formatter$FormatSpecifier$BigDecimalLayout::layout))},
	{"mantissa", "()Ljava/lang/StringBuilder;", nullptr, $PUBLIC},
	{"scale", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Formatter$FormatSpecifier$BigDecimalLayout_InnerClassesInfo_[] = {
	{"java.util.Formatter$FormatSpecifier", "java.util.Formatter", "FormatSpecifier", $PRIVATE},
	{"java.util.Formatter$FormatSpecifier$BigDecimalLayout", "java.util.Formatter$FormatSpecifier", "BigDecimalLayout", $PRIVATE},
	{}
};

$ClassInfo _Formatter$FormatSpecifier$BigDecimalLayout_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Formatter$FormatSpecifier$BigDecimalLayout",
	"java.lang.Object",
	nullptr,
	_Formatter$FormatSpecifier$BigDecimalLayout_FieldInfo_,
	_Formatter$FormatSpecifier$BigDecimalLayout_MethodInfo_,
	nullptr,
	nullptr,
	_Formatter$FormatSpecifier$BigDecimalLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Formatter"
};

$Object* allocate$Formatter$FormatSpecifier$BigDecimalLayout($Class* clazz) {
	return $of($alloc(Formatter$FormatSpecifier$BigDecimalLayout));
}

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
	int32_t len = $nc(coeff)->length();
	$set(this, mant, $new($StringBuilder, len + 14));
	if (scale == 0) {
		if (len > 1) {
			$nc(this->mant)->append(coeff->charAt(0));
			$init($Formatter$BigDecimalLayoutForm);
			if (form == $Formatter$BigDecimalLayoutForm::SCIENTIFIC) {
				$nc(this->mant)->append(u'.');
				this->dot = true;
				$nc(this->mant)->append(static_cast<$CharSequence*>(coeff), 1, len);
				$set(this, exp, $new($StringBuilder, "+"_s));
				if (len < 10) {
					$nc(this->exp)->append(u'0')->append(len - 1);
				} else {
					$nc(this->exp)->append(len - 1);
				}
			} else {
				$nc(this->mant)->append(static_cast<$CharSequence*>(coeff), 1, len);
			}
		} else {
			$nc(this->mant)->append(coeff);
			$init($Formatter$BigDecimalLayoutForm);
			if (form == $Formatter$BigDecimalLayoutForm::SCIENTIFIC) {
				$set(this, exp, $new($StringBuilder, "+00"_s));
			}
		}
	} else {
		$init($Formatter$BigDecimalLayoutForm);
		if (form == $Formatter$BigDecimalLayoutForm::DECIMAL_FLOAT) {
			if (scale >= len) {
				$nc(this->mant)->append("0."_s);
				this->dot = true;
				this->this$1->trailingZeros(this->mant, scale - len);
				$nc(this->mant)->append(coeff);
			} else if (scale > 0) {
				int32_t pad = len - scale;
				$nc(this->mant)->append(static_cast<$CharSequence*>(coeff), 0, pad);
				$nc(this->mant)->append(u'.');
				this->dot = true;
				$nc(this->mant)->append(static_cast<$CharSequence*>(coeff), pad, len);
			} else {
				$nc(this->mant)->append(static_cast<$CharSequence*>(coeff), 0, len);
				if (intVal->signum() != 0) {
					this->this$1->trailingZeros(this->mant, -scale);
				}
				this->scale$ = 0;
			}
		} else {
			$nc(this->mant)->append(coeff->charAt(0));
			if (len > 1) {
				$nc(this->mant)->append(u'.');
				this->dot = true;
				$nc(this->mant)->append(static_cast<$CharSequence*>(coeff), 1, len);
			}
			$set(this, exp, $new($StringBuilder));
			int64_t adjusted = -(int64_t)scale + (len - 1);
			if (adjusted != 0) {
				int64_t abs = $Math::abs(adjusted);
				$nc(this->exp)->append(adjusted < 0 ? u'-' : u'+');
				if (abs < 10) {
					$nc(this->exp)->append(u'0');
				}
				$nc(this->exp)->append(abs);
			} else {
				$nc(this->exp)->append("+00"_s);
			}
		}
	}
}

Formatter$FormatSpecifier$BigDecimalLayout::Formatter$FormatSpecifier$BigDecimalLayout() {
}

$Class* Formatter$FormatSpecifier$BigDecimalLayout::load$($String* name, bool initialize) {
	$loadClass(Formatter$FormatSpecifier$BigDecimalLayout, name, initialize, &_Formatter$FormatSpecifier$BigDecimalLayout_ClassInfo_, allocate$Formatter$FormatSpecifier$BigDecimalLayout);
	return class$;
}

$Class* Formatter$FormatSpecifier$BigDecimalLayout::class$ = nullptr;

	} // util
} // java