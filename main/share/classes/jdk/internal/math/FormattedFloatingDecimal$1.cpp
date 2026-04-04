#include <jdk/internal/math/FormattedFloatingDecimal$1.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace jdk {
	namespace internal {
		namespace math {

void FormattedFloatingDecimal$1::init$() {
	$ThreadLocal::init$();
}

$Object* FormattedFloatingDecimal$1::initialValue() {
	return $new($chars, 20);
}

FormattedFloatingDecimal$1::FormattedFloatingDecimal$1() {
}

$Class* FormattedFloatingDecimal$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FormattedFloatingDecimal$1, init$, void)},
		{"initialValue", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(FormattedFloatingDecimal$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.math.FormattedFloatingDecimal",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.math.FormattedFloatingDecimal$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.math.FormattedFloatingDecimal$1",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.math.FormattedFloatingDecimal"
	};
	$loadClass(FormattedFloatingDecimal$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormattedFloatingDecimal$1);
	});
	return class$;
}

$Class* FormattedFloatingDecimal$1::class$ = nullptr;

		} // math
	} // internal
} // jdk