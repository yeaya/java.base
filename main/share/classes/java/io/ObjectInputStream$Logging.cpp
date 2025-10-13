#include <java/io/ObjectInputStream$Logging.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DEBUG
#undef TRACE

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$Logging_FieldInfo_[] = {
	{"filterLogger", "Ljava/lang/System$Logger;", nullptr, $STATIC | $FINAL, $staticField(ObjectInputStream$Logging, filterLogger)},
	{}
};

$MethodInfo _ObjectInputStream$Logging_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ObjectInputStream$Logging::*)()>(&ObjectInputStream$Logging::init$))},
	{}
};

$InnerClassInfo _ObjectInputStream$Logging_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$Logging", "java.io.ObjectInputStream", "Logging", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectInputStream$Logging_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$Logging",
	"java.lang.Object",
	nullptr,
	_ObjectInputStream$Logging_FieldInfo_,
	_ObjectInputStream$Logging_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$Logging_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$Logging($Class* clazz) {
	return $of($alloc(ObjectInputStream$Logging));
}

$System$Logger* ObjectInputStream$Logging::filterLogger = nullptr;

void ObjectInputStream$Logging::init$() {
}

void clinit$ObjectInputStream$Logging($Class* class$) {
	$beforeCallerSensitive();
	{
		$var($System$Logger, filterLog, $System::getLogger("java.io.serialization"_s));
		$init($System$Logger$Level);
		bool var$0 = $nc(filterLog)->isLoggable($System$Logger$Level::DEBUG);
		$assignStatic(ObjectInputStream$Logging::filterLogger, (var$0 || $nc(filterLog)->isLoggable($System$Logger$Level::TRACE)) ? filterLog : ($System$Logger*)nullptr);
	}
}

ObjectInputStream$Logging::ObjectInputStream$Logging() {
}

$Class* ObjectInputStream$Logging::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$Logging, name, initialize, &_ObjectInputStream$Logging_ClassInfo_, clinit$ObjectInputStream$Logging, allocate$ObjectInputStream$Logging);
	return class$;
}

$Class* ObjectInputStream$Logging::class$ = nullptr;

	} // io
} // java