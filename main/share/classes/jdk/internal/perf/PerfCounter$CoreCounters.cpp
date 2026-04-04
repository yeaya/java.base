#include <jdk/internal/perf/PerfCounter$CoreCounters.h>
#include <jdk/internal/perf/PerfCounter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PerfCounter = ::jdk::internal::perf::PerfCounter;

namespace jdk {
	namespace internal {
		namespace perf {

$PerfCounter* PerfCounter$CoreCounters::pdt = nullptr;
$PerfCounter* PerfCounter$CoreCounters::lc = nullptr;
$PerfCounter* PerfCounter$CoreCounters::lct = nullptr;
$PerfCounter* PerfCounter$CoreCounters::rcbt = nullptr;
$PerfCounter* PerfCounter$CoreCounters::zfc = nullptr;
$PerfCounter* PerfCounter$CoreCounters::zfot = nullptr;

void PerfCounter$CoreCounters::init$() {
}

void PerfCounter$CoreCounters::clinit$($Class* clazz) {
	$assignStatic(PerfCounter$CoreCounters::pdt, $PerfCounter::newPerfCounter("sun.classloader.parentDelegationTime"_s));
	$assignStatic(PerfCounter$CoreCounters::lc, $PerfCounter::newPerfCounter("sun.classloader.findClasses"_s));
	$assignStatic(PerfCounter$CoreCounters::lct, $PerfCounter::newPerfCounter("sun.classloader.findClassTime"_s));
	$assignStatic(PerfCounter$CoreCounters::rcbt, $PerfCounter::newPerfCounter("sun.urlClassLoader.readClassBytesTime"_s));
	$assignStatic(PerfCounter$CoreCounters::zfc, $PerfCounter::newPerfCounter("sun.zip.zipFiles"_s));
	$assignStatic(PerfCounter$CoreCounters::zfot, $PerfCounter::newPerfCounter("sun.zip.zipFile.openTime"_s));
}

PerfCounter$CoreCounters::PerfCounter$CoreCounters() {
}

$Class* PerfCounter$CoreCounters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pdt", "Ljdk/internal/perf/PerfCounter;", nullptr, $STATIC | $FINAL, $staticField(PerfCounter$CoreCounters, pdt)},
		{"lc", "Ljdk/internal/perf/PerfCounter;", nullptr, $STATIC | $FINAL, $staticField(PerfCounter$CoreCounters, lc)},
		{"lct", "Ljdk/internal/perf/PerfCounter;", nullptr, $STATIC | $FINAL, $staticField(PerfCounter$CoreCounters, lct)},
		{"rcbt", "Ljdk/internal/perf/PerfCounter;", nullptr, $STATIC | $FINAL, $staticField(PerfCounter$CoreCounters, rcbt)},
		{"zfc", "Ljdk/internal/perf/PerfCounter;", nullptr, $STATIC | $FINAL, $staticField(PerfCounter$CoreCounters, zfc)},
		{"zfot", "Ljdk/internal/perf/PerfCounter;", nullptr, $STATIC | $FINAL, $staticField(PerfCounter$CoreCounters, zfot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PerfCounter$CoreCounters, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.perf.PerfCounter$CoreCounters", "jdk.internal.perf.PerfCounter", "CoreCounters", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.perf.PerfCounter$CoreCounters",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.perf.PerfCounter"
	};
	$loadClass(PerfCounter$CoreCounters, name, initialize, &classInfo$$, PerfCounter$CoreCounters::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PerfCounter$CoreCounters);
	});
	return class$;
}

$Class* PerfCounter$CoreCounters::class$ = nullptr;

		} // perf
	} // internal
} // jdk