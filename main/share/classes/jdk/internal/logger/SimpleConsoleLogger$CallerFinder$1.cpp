#include <jdk/internal/logger/SimpleConsoleLogger$CallerFinder$1.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker.h>
#include <jdk/internal/logger/SimpleConsoleLogger$CallerFinder.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;

namespace jdk {
	namespace internal {
		namespace logger {

void SimpleConsoleLogger$CallerFinder$1::init$() {
}

$Object* SimpleConsoleLogger$CallerFinder$1::run() {
	$init($StackWalker$Option);
	return $StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE);
}

SimpleConsoleLogger$CallerFinder$1::SimpleConsoleLogger$CallerFinder$1() {
}

$Class* SimpleConsoleLogger$CallerFinder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SimpleConsoleLogger$CallerFinder$1, init$, void)},
		{"run", "()Ljava/lang/StackWalker;", nullptr, $PUBLIC, $virtualMethod(SimpleConsoleLogger$CallerFinder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.logger.SimpleConsoleLogger$CallerFinder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.SimpleConsoleLogger$CallerFinder", "jdk.internal.logger.SimpleConsoleLogger", "CallerFinder", $STATIC | $FINAL},
		{"jdk.internal.logger.SimpleConsoleLogger$CallerFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.logger.SimpleConsoleLogger$CallerFinder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/StackWalker;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.logger.SimpleConsoleLogger"
	};
	$loadClass(SimpleConsoleLogger$CallerFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleConsoleLogger$CallerFinder$1);
	});
	return class$;
}

$Class* SimpleConsoleLogger$CallerFinder$1::class$ = nullptr;

		} // logger
	} // internal
} // jdk