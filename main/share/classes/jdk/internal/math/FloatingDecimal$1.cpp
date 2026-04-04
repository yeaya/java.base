#include <jdk/internal/math/FloatingDecimal$1.h>
#include <java/lang/ThreadLocal.h>
#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $FloatingDecimal$BinaryToASCIIBuffer = ::jdk::internal::math::FloatingDecimal$BinaryToASCIIBuffer;

namespace jdk {
	namespace internal {
		namespace math {

void FloatingDecimal$1::init$() {
	$ThreadLocal::init$();
}

$Object* FloatingDecimal$1::initialValue() {
	return $new($FloatingDecimal$BinaryToASCIIBuffer);
}

FloatingDecimal$1::FloatingDecimal$1() {
}

$Class* FloatingDecimal$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FloatingDecimal$1, init$, void)},
		{"initialValue", "()Ljdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer;", nullptr, $PROTECTED, $virtualMethod(FloatingDecimal$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.math.FloatingDecimal",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.math.FloatingDecimal$1", nullptr, nullptr, 0},
		{"jdk.internal.math.FloatingDecimal$BinaryToASCIIBuffer", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIBuffer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.math.FloatingDecimal$1",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.math.FloatingDecimal"
	};
	$loadClass(FloatingDecimal$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FloatingDecimal$1);
	});
	return class$;
}

$Class* FloatingDecimal$1::class$ = nullptr;

		} // math
	} // internal
} // jdk