#include <jdk/internal/logger/LazyLoggers$1.h>
#include <java/lang/Module.h>
#include <java/lang/System$Logger.h>
#include <jdk/internal/logger/LazyLoggers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $System$Logger = ::java::lang::System$Logger;
using $LazyLoggers = ::jdk::internal::logger::LazyLoggers;

namespace jdk {
	namespace internal {
		namespace logger {

void LazyLoggers$1::init$() {
}

$System$Logger* LazyLoggers$1::apply($String* name, $Module* module) {
	return $LazyLoggers::getLoggerFromFinder(name, module);
}

$Object* LazyLoggers$1::apply(Object$* name, Object$* module) {
	return this->apply($cast($String, name), $cast($Module, module));
}

LazyLoggers$1::LazyLoggers$1() {
}

$Class* LazyLoggers$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LazyLoggers$1, init$, void)},
		{"apply", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/System$Logger;", nullptr, $PUBLIC, $virtualMethod(LazyLoggers$1, apply, $System$Logger*, $String*, $Module*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LazyLoggers$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.logger.LazyLoggers",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.LazyLoggers$1", nullptr, nullptr, 0},
		{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.logger.LazyLoggers$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/lang/Module;Ljava/lang/System$Logger;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.logger.LazyLoggers"
	};
	$loadClass(LazyLoggers$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LazyLoggers$1);
	});
	return class$;
}

$Class* LazyLoggers$1::class$ = nullptr;

		} // logger
	} // internal
} // jdk