#include <jdk/internal/math/FormattedFloatingDecimal$2.h>

#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/math/FormattedFloatingDecimal$Form.h>
#include <jdk/internal/math/FormattedFloatingDecimal.h>
#include <jcpp.h>

#undef COMPATIBLE
#undef DECIMAL_FLOAT
#undef GENERAL
#undef SCIENTIFIC

using $FormattedFloatingDecimal$FormArray = $Array<::jdk::internal::math::FormattedFloatingDecimal$Form>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $FormattedFloatingDecimal = ::jdk::internal::math::FormattedFloatingDecimal;
using $FormattedFloatingDecimal$Form = ::jdk::internal::math::FormattedFloatingDecimal$Form;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FormattedFloatingDecimal$2_FieldInfo_[] = {
	{"$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FormattedFloatingDecimal$2, $SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form)},
	{}
};

$EnclosingMethodInfo _FormattedFloatingDecimal$2_EnclosingMethodInfo_ = {
	"jdk.internal.math.FormattedFloatingDecimal",
	nullptr,
	nullptr
};

$InnerClassInfo _FormattedFloatingDecimal$2_InnerClassesInfo_[] = {
	{"jdk.internal.math.FormattedFloatingDecimal$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _FormattedFloatingDecimal$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.internal.math.FormattedFloatingDecimal$2",
	"java.lang.Object",
	nullptr,
	_FormattedFloatingDecimal$2_FieldInfo_,
	nullptr,
	nullptr,
	&_FormattedFloatingDecimal$2_EnclosingMethodInfo_,
	_FormattedFloatingDecimal$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FormattedFloatingDecimal"
};

$Object* allocate$FormattedFloatingDecimal$2($Class* clazz) {
	return $of($alloc(FormattedFloatingDecimal$2));
}

$ints* FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form = nullptr;

void clinit$FormattedFloatingDecimal$2($Class* class$) {
	$assignStatic(FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form, $new($ints, $($FormattedFloatingDecimal$Form::values())->length));
	{
		try {
			$nc(FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form)->set($FormattedFloatingDecimal$Form::COMPATIBLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form)->set($FormattedFloatingDecimal$Form::DECIMAL_FLOAT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form)->set($FormattedFloatingDecimal$Form::SCIENTIFIC->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form)->set($FormattedFloatingDecimal$Form::GENERAL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

FormattedFloatingDecimal$2::FormattedFloatingDecimal$2() {
}

$Class* FormattedFloatingDecimal$2::load$($String* name, bool initialize) {
	$loadClass(FormattedFloatingDecimal$2, name, initialize, &_FormattedFloatingDecimal$2_ClassInfo_, clinit$FormattedFloatingDecimal$2, allocate$FormattedFloatingDecimal$2);
	return class$;
}

$Class* FormattedFloatingDecimal$2::class$ = nullptr;

		} // math
	} // internal
} // jdk