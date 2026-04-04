#include <jdk/internal/perf/Perf$GetPerfAction.h>
#include <jdk/internal/perf/Perf.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Perf = ::jdk::internal::perf::Perf;

namespace jdk {
	namespace internal {
		namespace perf {

void Perf$GetPerfAction::init$() {
}

$Object* Perf$GetPerfAction::run() {
	return $Perf::getPerf();
}

Perf$GetPerfAction::Perf$GetPerfAction() {
}

$Class* Perf$GetPerfAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Perf$GetPerfAction, init$, void)},
		{"run", "()Ljdk/internal/perf/Perf;", nullptr, $PUBLIC, $virtualMethod(Perf$GetPerfAction, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.perf.Perf$GetPerfAction", "jdk.internal.perf.Perf", "GetPerfAction", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.perf.Perf$GetPerfAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljdk/internal/perf/Perf;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.perf.Perf"
	};
	$loadClass(Perf$GetPerfAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Perf$GetPerfAction);
	});
	return class$;
}

$Class* Perf$GetPerfAction::class$ = nullptr;

		} // perf
	} // internal
} // jdk