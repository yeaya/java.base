#include <jdk/internal/logger/LazyLoggers$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/String.h>
#include <java/lang/System$Logger.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/logger/LazyLoggers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $System$Logger = ::java::lang::System$Logger;
using $BiFunction = ::java::util::function::BiFunction;
using $LazyLoggers = ::jdk::internal::logger::LazyLoggers;

namespace jdk {
	namespace internal {
		namespace logger {

$MethodInfo _LazyLoggers$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LazyLoggers$1::*)()>(&LazyLoggers$1::init$))},
	{"apply", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/System$Logger;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _LazyLoggers$1_EnclosingMethodInfo_ = {
	"jdk.internal.logger.LazyLoggers",
	nullptr,
	nullptr
};

$InnerClassInfo _LazyLoggers$1_InnerClassesInfo_[] = {
	{"jdk.internal.logger.LazyLoggers$1", nullptr, nullptr, 0},
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LazyLoggers$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.logger.LazyLoggers$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	nullptr,
	_LazyLoggers$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/lang/Module;Ljava/lang/System$Logger;>;",
	&_LazyLoggers$1_EnclosingMethodInfo_,
	_LazyLoggers$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.LazyLoggers"
};

$Object* allocate$LazyLoggers$1($Class* clazz) {
	return $of($alloc(LazyLoggers$1));
}

void LazyLoggers$1::init$() {
}

$System$Logger* LazyLoggers$1::apply($String* name, $Module* module) {
	return $LazyLoggers::getLoggerFromFinder(name, module);
}

$Object* LazyLoggers$1::apply(Object$* name, Object$* module) {
	return $of(this->apply($cast($String, name), $cast($Module, module)));
}

LazyLoggers$1::LazyLoggers$1() {
}

$Class* LazyLoggers$1::load$($String* name, bool initialize) {
	$loadClass(LazyLoggers$1, name, initialize, &_LazyLoggers$1_ClassInfo_, allocate$LazyLoggers$1);
	return class$;
}

$Class* LazyLoggers$1::class$ = nullptr;

		} // logger
	} // internal
} // jdk