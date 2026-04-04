#include <java/io/ObjectInputStream$Logging.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <jcpp.h>

#undef DEBUG
#undef TRACE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;

namespace java {
	namespace io {

$System$Logger* ObjectInputStream$Logging::filterLogger = nullptr;

void ObjectInputStream$Logging::init$() {
}

void ObjectInputStream$Logging::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$var($System$Logger, filterLog, $System::getLogger("java.io.serialization"_s));
		$init($System$Logger$Level);
		bool var$0 = $nc(filterLog)->isLoggable($System$Logger$Level::DEBUG);
		$assignStatic(ObjectInputStream$Logging::filterLogger, (var$0 || filterLog->isLoggable($System$Logger$Level::TRACE)) ? filterLog : ($System$Logger*)nullptr);
	}
}

ObjectInputStream$Logging::ObjectInputStream$Logging() {
}

$Class* ObjectInputStream$Logging::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filterLogger", "Ljava/lang/System$Logger;", nullptr, $STATIC | $FINAL, $staticField(ObjectInputStream$Logging, filterLogger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ObjectInputStream$Logging, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputStream$Logging", "java.io.ObjectInputStream", "Logging", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputStream$Logging",
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
		"java.io.ObjectInputStream"
	};
	$loadClass(ObjectInputStream$Logging, name, initialize, &classInfo$$, ObjectInputStream$Logging::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputStream$Logging);
	});
	return class$;
}

$Class* ObjectInputStream$Logging::class$ = nullptr;

	} // io
} // java