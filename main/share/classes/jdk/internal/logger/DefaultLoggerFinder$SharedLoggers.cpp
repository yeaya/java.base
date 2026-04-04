#include <jdk/internal/logger/DefaultLoggerFinder$SharedLoggers.h>
#include <java/lang/System$Logger.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/function/Function.h>
#include <jdk/internal/logger/DefaultLoggerFinder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Function = ::java::util::function::Function;

namespace jdk {
	namespace internal {
		namespace logger {

DefaultLoggerFinder$SharedLoggers* DefaultLoggerFinder$SharedLoggers::system = nullptr;
DefaultLoggerFinder$SharedLoggers* DefaultLoggerFinder$SharedLoggers::application = nullptr;

void DefaultLoggerFinder$SharedLoggers::init$() {
	$set(this, loggers, $new($HashMap));
	$set(this, queue, $new($ReferenceQueue));
}

$System$Logger* DefaultLoggerFinder$SharedLoggers::get($Function* loggerSupplier, $String* name) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($Reference, ref, $cast($Reference, this->loggers->get(name)));
		$var($System$Logger, w, ref == nullptr ? ($System$Logger*)nullptr : $cast($System$Logger, ref->get()));
		if (w == nullptr) {
			$assign(w, $cast($System$Logger, $nc(loggerSupplier)->apply(name)));
			this->loggers->put(name, $$new($WeakReference, w, this->queue));
		}
		$var($Collection, values, nullptr);
		while (($assign(ref, this->queue->poll())) != nullptr) {
			if (values == nullptr) {
				$assign(values, this->loggers->values());
			}
			$nc(values)->remove(ref);
		}
		return w;
	}
}

void DefaultLoggerFinder$SharedLoggers::clinit$($Class* clazz) {
	$assignStatic(DefaultLoggerFinder$SharedLoggers::system, $new(DefaultLoggerFinder$SharedLoggers));
	$assignStatic(DefaultLoggerFinder$SharedLoggers::application, $new(DefaultLoggerFinder$SharedLoggers));
}

DefaultLoggerFinder$SharedLoggers::DefaultLoggerFinder$SharedLoggers() {
}

$Class* DefaultLoggerFinder$SharedLoggers::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loggers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/ref/Reference<Ljava/lang/System$Logger;>;>;", $PRIVATE | $FINAL, $field(DefaultLoggerFinder$SharedLoggers, loggers)},
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/System$Logger;>;", $PRIVATE | $FINAL, $field(DefaultLoggerFinder$SharedLoggers, queue)},
		{"system", "Ljdk/internal/logger/DefaultLoggerFinder$SharedLoggers;", nullptr, $STATIC | $FINAL, $staticField(DefaultLoggerFinder$SharedLoggers, system)},
		{"application", "Ljdk/internal/logger/DefaultLoggerFinder$SharedLoggers;", nullptr, $STATIC | $FINAL, $staticField(DefaultLoggerFinder$SharedLoggers, application)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultLoggerFinder$SharedLoggers, init$, void)},
		{"get", "(Ljava/util/function/Function;Ljava/lang/String;)Ljava/lang/System$Logger;", "(Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/System$Logger;>;Ljava/lang/String;)Ljava/lang/System$Logger;", $SYNCHRONIZED, $method(DefaultLoggerFinder$SharedLoggers, get, $System$Logger*, $Function*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.DefaultLoggerFinder$SharedLoggers", "jdk.internal.logger.DefaultLoggerFinder", "SharedLoggers", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.logger.DefaultLoggerFinder$SharedLoggers",
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
		"jdk.internal.logger.DefaultLoggerFinder"
	};
	$loadClass(DefaultLoggerFinder$SharedLoggers, name, initialize, &classInfo$$, DefaultLoggerFinder$SharedLoggers::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultLoggerFinder$SharedLoggers);
	});
	return class$;
}

$Class* DefaultLoggerFinder$SharedLoggers::class$ = nullptr;

		} // logger
	} // internal
} // jdk