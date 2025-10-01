#include <java/lang/Math2/DoubleConsts.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef SIGN_BIT_MASK
#undef EXP_BIT_MASK
#undef SIGNIF_BIT_MASK
#undef EXP_BIAS
#undef MIN_SUB_EXPONENT
#undef SIGNIFICAND_WIDTH

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace Math2 {

$FieldInfo _DoubleConsts_FieldInfo_[] = {
	{"EXP_BIAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, EXP_BIAS)},
	{"EXP_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, EXP_BIT_MASK)},
	{"SIGN_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGN_BIT_MASK)},
	{"SIGNIF_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGNIF_BIT_MASK)},
	{"SIGNIFICAND_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGNIFICAND_WIDTH)},
	{"MIN_SUB_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, MIN_SUB_EXPONENT)},
	{}
};

$MethodInfo _DoubleConsts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DoubleConsts::*)()>(&DoubleConsts::init$))},
	{}
};

$ClassInfo _DoubleConsts_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Math2.DoubleConsts",
	"java.lang.Object",
	nullptr,
	_DoubleConsts_FieldInfo_,
	_DoubleConsts_MethodInfo_
};

$Object* allocate$DoubleConsts($Class* clazz) {
	return $of($alloc(DoubleConsts));
}

void DoubleConsts::init$() {
}

void clinit$DoubleConsts($Class* class$) {
	{
	}
}

DoubleConsts::DoubleConsts() {
}

$Class* DoubleConsts::load$($String* name, bool initialize) {
	$loadClass(DoubleConsts, name, initialize, &_DoubleConsts_ClassInfo_, clinit$DoubleConsts, allocate$DoubleConsts);
	return class$;
}

$Class* DoubleConsts::class$ = nullptr;

		} // Math2
	} // lang
} // java