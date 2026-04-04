#include <jdk/internal/misc/Signal$1.h>
#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;

namespace jdk {
	namespace internal {
		namespace misc {

void Signal$1::init$($Signal$Handler* val$handler, $Signal* val$sig) {
	$set(this, val$handler, val$handler);
	$set(this, val$sig, val$sig);
}

void Signal$1::run() {
	$nc(this->val$handler)->handle(this->val$sig);
}

Signal$1::Signal$1() {
}

$Class* Signal$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$sig", "Ljdk/internal/misc/Signal;", nullptr, $FINAL | $SYNTHETIC, $field(Signal$1, val$sig)},
		{"val$handler", "Ljdk/internal/misc/Signal$Handler;", nullptr, $FINAL | $SYNTHETIC, $field(Signal$1, val$handler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/misc/Signal$Handler;Ljdk/internal/misc/Signal;)V", "()V", 0, $method(Signal$1, init$, void, $Signal$Handler*, $Signal*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Signal$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.misc.Signal",
		"dispatch",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.Signal$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.misc.Signal$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.Signal"
	};
	$loadClass(Signal$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Signal$1);
	});
	return class$;
}

$Class* Signal$1::class$ = nullptr;

		} // misc
	} // internal
} // jdk