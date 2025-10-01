#include <jdk/internal/logger/SimpleConsoleLogger$CallerFinder$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/logger/SimpleConsoleLogger$CallerFinder.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SimpleConsoleLogger$CallerFinder = ::jdk::internal::logger::SimpleConsoleLogger$CallerFinder;

namespace jdk {
	namespace internal {
		namespace logger {

$MethodInfo _SimpleConsoleLogger$CallerFinder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SimpleConsoleLogger$CallerFinder$1::*)()>(&SimpleConsoleLogger$CallerFinder$1::init$))},
	{"run", "()Ljava/lang/StackWalker;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SimpleConsoleLogger$CallerFinder$1_EnclosingMethodInfo_ = {
	"jdk.internal.logger.SimpleConsoleLogger$CallerFinder",
	nullptr,
	nullptr
};

$InnerClassInfo _SimpleConsoleLogger$CallerFinder$1_InnerClassesInfo_[] = {
	{"jdk.internal.logger.SimpleConsoleLogger$CallerFinder", "jdk.internal.logger.SimpleConsoleLogger", "CallerFinder", $STATIC | $FINAL},
	{"jdk.internal.logger.SimpleConsoleLogger$CallerFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SimpleConsoleLogger$CallerFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.logger.SimpleConsoleLogger$CallerFinder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SimpleConsoleLogger$CallerFinder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/StackWalker;>;",
	&_SimpleConsoleLogger$CallerFinder$1_EnclosingMethodInfo_,
	_SimpleConsoleLogger$CallerFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.SimpleConsoleLogger"
};

$Object* allocate$SimpleConsoleLogger$CallerFinder$1($Class* clazz) {
	return $of($alloc(SimpleConsoleLogger$CallerFinder$1));
}

void SimpleConsoleLogger$CallerFinder$1::init$() {
}

$Object* SimpleConsoleLogger$CallerFinder$1::run() {
	$init($StackWalker$Option);
	return $of($StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE));
}

SimpleConsoleLogger$CallerFinder$1::SimpleConsoleLogger$CallerFinder$1() {
}

$Class* SimpleConsoleLogger$CallerFinder$1::load$($String* name, bool initialize) {
	$loadClass(SimpleConsoleLogger$CallerFinder$1, name, initialize, &_SimpleConsoleLogger$CallerFinder$1_ClassInfo_, allocate$SimpleConsoleLogger$CallerFinder$1);
	return class$;
}

$Class* SimpleConsoleLogger$CallerFinder$1::class$ = nullptr;

		} // logger
	} // internal
} // jdk