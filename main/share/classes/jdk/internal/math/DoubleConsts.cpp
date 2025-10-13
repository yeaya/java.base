#include <jdk/internal/math/DoubleConsts.h>

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
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _DoubleConsts_FieldInfo_[] = {
	{"SIGNIFICAND_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGNIFICAND_WIDTH)},
	{"MIN_SUB_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, MIN_SUB_EXPONENT)},
	{"EXP_BIAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, EXP_BIAS)},
	{"SIGN_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGN_BIT_MASK)},
	{"EXP_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, EXP_BIT_MASK)},
	{"SIGNIF_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGNIF_BIT_MASK)},
	{}
};

$MethodInfo _DoubleConsts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DoubleConsts::*)()>(&DoubleConsts::init$))},
	{}
};

$ClassInfo _DoubleConsts_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.math.DoubleConsts",
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

		} // math
	} // internal
} // jdk