#include <jdk/internal/math/FormattedFloatingDecimal$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/math/FormattedFloatingDecimal$Form.h>
#include <jdk/internal/math/FormattedFloatingDecimal.h>
#include <jcpp.h>

#undef COMPATIBLE
#undef DECIMAL_FLOAT
#undef GENERAL
#undef SCIENTIFIC

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $FormattedFloatingDecimal$Form = ::jdk::internal::math::FormattedFloatingDecimal$Form;

namespace jdk {
	namespace internal {
		namespace math {

$ints* FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form = nullptr;

void FormattedFloatingDecimal$2::clinit$($Class* clazz) {
	$assignStatic(FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form, $new($ints, $($FormattedFloatingDecimal$Form::values())->length));
	{
		try {
			FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form->set($FormattedFloatingDecimal$Form::COMPATIBLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form->set($FormattedFloatingDecimal$Form::DECIMAL_FLOAT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form->set($FormattedFloatingDecimal$Form::SCIENTIFIC->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormattedFloatingDecimal$2::$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form->set($FormattedFloatingDecimal$Form::GENERAL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

FormattedFloatingDecimal$2::FormattedFloatingDecimal$2() {
}

$Class* FormattedFloatingDecimal$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FormattedFloatingDecimal$2, $SwitchMap$jdk$internal$math$FormattedFloatingDecimal$Form)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.math.FormattedFloatingDecimal",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.math.FormattedFloatingDecimal$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.math.FormattedFloatingDecimal$2",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.math.FormattedFloatingDecimal"
	};
	$loadClass(FormattedFloatingDecimal$2, name, initialize, &classInfo$$, FormattedFloatingDecimal$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FormattedFloatingDecimal$2);
	});
	return class$;
}

$Class* FormattedFloatingDecimal$2::class$ = nullptr;

		} // math
	} // internal
} // jdk