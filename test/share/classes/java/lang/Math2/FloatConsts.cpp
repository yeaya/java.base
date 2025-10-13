#include <java/lang/Math2/FloatConsts.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EXP_BIAS
#undef EXP_BIT_MASK
#undef MIN_SUB_EXPONENT
#undef SIGNIFICAND_WIDTH
#undef SIGNIF_BIT_MASK
#undef SIGN_BIT_MASK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace Math2 {

$FieldInfo _FloatConsts_FieldInfo_[] = {
	{"EXP_BIAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, EXP_BIAS)},
	{"EXP_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, EXP_BIT_MASK)},
	{"SIGN_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, SIGN_BIT_MASK)},
	{"SIGNIF_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, SIGNIF_BIT_MASK)},
	{"SIGNIFICAND_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, SIGNIFICAND_WIDTH)},
	{"MIN_SUB_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, MIN_SUB_EXPONENT)},
	{}
};

$MethodInfo _FloatConsts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FloatConsts::*)()>(&FloatConsts::init$))},
	{}
};

$ClassInfo _FloatConsts_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Math2.FloatConsts",
	"java.lang.Object",
	nullptr,
	_FloatConsts_FieldInfo_,
	_FloatConsts_MethodInfo_
};

$Object* allocate$FloatConsts($Class* clazz) {
	return $of($alloc(FloatConsts));
}

void FloatConsts::init$() {
}

void clinit$FloatConsts($Class* class$) {
	{
	}
}

FloatConsts::FloatConsts() {
}

$Class* FloatConsts::load$($String* name, bool initialize) {
	$loadClass(FloatConsts, name, initialize, &_FloatConsts_ClassInfo_, clinit$FloatConsts, allocate$FloatConsts);
	return class$;
}

$Class* FloatConsts::class$ = nullptr;

		} // Math2
	} // lang
} // java