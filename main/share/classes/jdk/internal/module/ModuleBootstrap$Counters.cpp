#include <jdk/internal/module/ModuleBootstrap$Counters.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jdk/internal/module/ModuleBootstrap.h>
#include <jdk/internal/perf/PerfCounter.h>
#include <jcpp.h>

#undef PRINT_COUNTERS
#undef PUBLISH_COUNTERS

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $ModuleBootstrap = ::jdk::internal::module::ModuleBootstrap;
using $PerfCounter = ::jdk::internal::perf::PerfCounter;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleBootstrap$Counters_FieldInfo_[] = {
	{"PUBLISH_COUNTERS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleBootstrap$Counters, PUBLISH_COUNTERS)},
	{"PRINT_COUNTERS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleBootstrap$Counters, PRINT_COUNTERS)},
	{"counters", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Long;>;", $PRIVATE | $STATIC, $staticField(ModuleBootstrap$Counters, counters)},
	{"startTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(ModuleBootstrap$Counters, startTime)},
	{"previousTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(ModuleBootstrap$Counters, previousTime)},
	{}
};

$MethodInfo _ModuleBootstrap$Counters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ModuleBootstrap$Counters::*)()>(&ModuleBootstrap$Counters::init$))},
	{"add", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&ModuleBootstrap$Counters::add))},
	{"publish", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&ModuleBootstrap$Counters::publish))},
	{"start", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ModuleBootstrap$Counters::start))},
	{}
};

$InnerClassInfo _ModuleBootstrap$Counters_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleBootstrap$Counters", "jdk.internal.module.ModuleBootstrap", "Counters", $STATIC},
	{}
};

$ClassInfo _ModuleBootstrap$Counters_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleBootstrap$Counters",
	"java.lang.Object",
	nullptr,
	_ModuleBootstrap$Counters_FieldInfo_,
	_ModuleBootstrap$Counters_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleBootstrap$Counters_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleBootstrap"
};

$Object* allocate$ModuleBootstrap$Counters($Class* clazz) {
	return $of($alloc(ModuleBootstrap$Counters));
}

bool ModuleBootstrap$Counters::PUBLISH_COUNTERS = false;
bool ModuleBootstrap$Counters::PRINT_COUNTERS = false;
$Map* ModuleBootstrap$Counters::counters = nullptr;
int64_t ModuleBootstrap$Counters::startTime = 0;
int64_t ModuleBootstrap$Counters::previousTime = 0;

void ModuleBootstrap$Counters::init$() {
}

void ModuleBootstrap$Counters::start() {
	$init(ModuleBootstrap$Counters);
	if (ModuleBootstrap$Counters::PUBLISH_COUNTERS) {
		ModuleBootstrap$Counters::startTime = (ModuleBootstrap$Counters::previousTime = $System::nanoTime());
	}
}

void ModuleBootstrap$Counters::add($String* name) {
	$init(ModuleBootstrap$Counters);
	if (ModuleBootstrap$Counters::PUBLISH_COUNTERS) {
		int64_t current = $System::nanoTime();
		int64_t elapsed = current - ModuleBootstrap$Counters::previousTime;
		ModuleBootstrap$Counters::previousTime = current;
		$nc(ModuleBootstrap$Counters::counters)->put(name, $($Long::valueOf(elapsed)));
	}
}

void ModuleBootstrap$Counters::publish($String* totalTimeName) {
	$init(ModuleBootstrap$Counters);
	$useLocalCurrentObjectStackCache();
	if (ModuleBootstrap$Counters::PUBLISH_COUNTERS) {
		int64_t currentTime = $System::nanoTime();
		{
			$var($Iterator, i$, $nc($($nc(ModuleBootstrap$Counters::counters)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$var($String, name, $cast($String, $nc(e)->getKey()));
					int64_t value = $nc(($cast($Long, $(e->getValue()))))->longValue();
					$nc($($PerfCounter::newPerfCounter(name)))->set(value);
					if (ModuleBootstrap$Counters::PRINT_COUNTERS) {
						$nc($System::out)->println($$str({name, " = "_s, $$str(value)}));
					}
				}
			}
		}
		int64_t elapsedTotal = currentTime - ModuleBootstrap$Counters::startTime;
		$nc($($PerfCounter::newPerfCounter(totalTimeName)))->set(elapsedTotal);
		if (ModuleBootstrap$Counters::PRINT_COUNTERS) {
			$nc($System::out)->println($$str({totalTimeName, " = "_s, $$str(elapsedTotal)}));
		}
	}
}

void clinit$ModuleBootstrap$Counters($Class* class$) {
	{
		$var($String, s, $System::getProperty("jdk.module.boot.usePerfData"_s));
		if (s == nullptr) {
			ModuleBootstrap$Counters::PUBLISH_COUNTERS = false;
			ModuleBootstrap$Counters::PRINT_COUNTERS = false;
		} else {
			ModuleBootstrap$Counters::PUBLISH_COUNTERS = true;
			ModuleBootstrap$Counters::PRINT_COUNTERS = $nc(s)->equals("debug"_s);
			$assignStatic(ModuleBootstrap$Counters::counters, $new($LinkedHashMap));
		}
	}
}

ModuleBootstrap$Counters::ModuleBootstrap$Counters() {
}

$Class* ModuleBootstrap$Counters::load$($String* name, bool initialize) {
	$loadClass(ModuleBootstrap$Counters, name, initialize, &_ModuleBootstrap$Counters_ClassInfo_, clinit$ModuleBootstrap$Counters, allocate$ModuleBootstrap$Counters);
	return class$;
}

$Class* ModuleBootstrap$Counters::class$ = nullptr;

		} // module
	} // internal
} // jdk