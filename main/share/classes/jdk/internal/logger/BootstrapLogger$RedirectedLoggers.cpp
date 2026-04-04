#include <jdk/internal/logger/BootstrapLogger$RedirectedLoggers.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jdk/internal/logger/BootstrapLogger$DetectBackend.h>
#include <jdk/internal/logger/BootstrapLogger$LoggingBackend.h>
#include <jdk/internal/logger/BootstrapLogger.h>
#include <jdk/internal/logger/LazyLoggers$LazyLoggerAccessor.h>
#include <jdk/internal/logger/SimpleConsoleLogger.h>
#include <jdk/internal/logger/SurrogateLogger.h>
#include <jcpp.h>

#undef INSTANCE
#undef JUL_DEFAULT
#undef JUL_WITH_CONFIG

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $BootstrapLogger$DetectBackend = ::jdk::internal::logger::BootstrapLogger$DetectBackend;
using $BootstrapLogger$LoggingBackend = ::jdk::internal::logger::BootstrapLogger$LoggingBackend;
using $LazyLoggers$LazyLoggerAccessor = ::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor;
using $SimpleConsoleLogger = ::jdk::internal::logger::SimpleConsoleLogger;
using $SurrogateLogger = ::jdk::internal::logger::SurrogateLogger;

namespace jdk {
	namespace internal {
		namespace logger {

BootstrapLogger$RedirectedLoggers* BootstrapLogger$RedirectedLoggers::INSTANCE = nullptr;

void BootstrapLogger$RedirectedLoggers::init$() {
	$set(this, redirectedLoggers, $new($HashMap));
}

$SurrogateLogger* BootstrapLogger$RedirectedLoggers::apply($LazyLoggers$LazyLoggerAccessor* t) {
	if (this->cleared) {
		$throwNew($IllegalStateException, "LoggerFinder already initialized"_s);
	}
	return $SurrogateLogger::makeSurrogateLogger($($nc(t)->getLoggerName()));
}

$SurrogateLogger* BootstrapLogger$RedirectedLoggers::get($LazyLoggers$LazyLoggerAccessor* a) {
	if (this->cleared) {
		$throwNew($IllegalStateException, "LoggerFinder already initialized"_s);
	}
	return $cast($SurrogateLogger, this->redirectedLoggers->computeIfAbsent(a, this));
}

$Map* BootstrapLogger$RedirectedLoggers::drainLoggersMap() {
	if (this->redirectedLoggers->isEmpty()) {
		return nullptr;
	}
	if (this->cleared) {
		$throwNew($IllegalStateException, "LoggerFinder already initialized"_s);
	}
	$var($Map, accessors, $new($HashMap, this->redirectedLoggers));
	this->redirectedLoggers->clear();
	this->cleared = true;
	return accessors;
}

void BootstrapLogger$RedirectedLoggers::replaceSurrogateLoggers($Map* accessors) {
	$init(BootstrapLogger$RedirectedLoggers);
	$useLocalObjectStack();
	$init($BootstrapLogger$DetectBackend);
	$BootstrapLogger$LoggingBackend* detectedBackend = $BootstrapLogger$DetectBackend::detectedBackend;
	$init($BootstrapLogger$LoggingBackend);
	bool lazy = detectedBackend != $BootstrapLogger$LoggingBackend::JUL_DEFAULT && detectedBackend != $BootstrapLogger$LoggingBackend::JUL_WITH_CONFIG;
	{
		$var($Iterator, i$, $$nc($nc(accessors)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
			{
				$$sure($LazyLoggers$LazyLoggerAccessor, $nc(a)->getKey())->release($$cast($SimpleConsoleLogger, $nc(a)->getValue()), !lazy);
			}
		}
	}
}

$Object* BootstrapLogger$RedirectedLoggers::apply(Object$* t) {
	return $of(this->apply($cast($LazyLoggers$LazyLoggerAccessor, t)));
}

void BootstrapLogger$RedirectedLoggers::clinit$($Class* clazz) {
	$assignStatic(BootstrapLogger$RedirectedLoggers::INSTANCE, $new(BootstrapLogger$RedirectedLoggers));
}

BootstrapLogger$RedirectedLoggers::BootstrapLogger$RedirectedLoggers() {
}

$Class* BootstrapLogger$RedirectedLoggers::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"redirectedLoggers", "Ljava/util/Map;", "Ljava/util/Map<Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;Ljdk/internal/logger/SurrogateLogger;>;", $FINAL, $field(BootstrapLogger$RedirectedLoggers, redirectedLoggers)},
		{"cleared", "Z", nullptr, 0, $field(BootstrapLogger$RedirectedLoggers, cleared)},
		{"INSTANCE", "Ljdk/internal/logger/BootstrapLogger$RedirectedLoggers;", nullptr, $STATIC | $FINAL, $staticField(BootstrapLogger$RedirectedLoggers, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BootstrapLogger$RedirectedLoggers, init$, void)},
		{"apply", "(Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;)Ljdk/internal/logger/SurrogateLogger;", nullptr, $PUBLIC, $method(BootstrapLogger$RedirectedLoggers, apply, $SurrogateLogger*, $LazyLoggers$LazyLoggerAccessor*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(BootstrapLogger$RedirectedLoggers, apply, $Object*, Object$*)},
		{"drainLoggersMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;Ljdk/internal/logger/SurrogateLogger;>;", 0, $method(BootstrapLogger$RedirectedLoggers, drainLoggersMap, $Map*)},
		{"get", "(Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;)Ljdk/internal/logger/SurrogateLogger;", nullptr, 0, $method(BootstrapLogger$RedirectedLoggers, get, $SurrogateLogger*, $LazyLoggers$LazyLoggerAccessor*)},
		{"replaceSurrogateLoggers", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;Ljdk/internal/logger/SurrogateLogger;>;)V", $STATIC, $staticMethod(BootstrapLogger$RedirectedLoggers, replaceSurrogateLoggers, void, $Map*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.BootstrapLogger$RedirectedLoggers", "jdk.internal.logger.BootstrapLogger", "RedirectedLoggers", $STATIC | $FINAL},
		{"jdk.internal.logger.LazyLoggers$LazyLoggerAccessor", "jdk.internal.logger.LazyLoggers", "LazyLoggerAccessor", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.logger.BootstrapLogger$RedirectedLoggers",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;Ljdk/internal/logger/SurrogateLogger;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.logger.BootstrapLogger"
	};
	$loadClass(BootstrapLogger$RedirectedLoggers, name, initialize, &classInfo$$, BootstrapLogger$RedirectedLoggers::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapLogger$RedirectedLoggers);
	});
	return class$;
}

$Class* BootstrapLogger$RedirectedLoggers::class$ = nullptr;

		} // logger
	} // internal
} // jdk