#include <jdk/internal/logger/SimpleConsoleLogger$CallerFinder.h>

#include <java/io/Serializable.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/logger/SimpleConsoleLogger$CallerFinder$1.h>
#include <jdk/internal/logger/SimpleConsoleLogger$Formatting.h>
#include <jdk/internal/logger/SimpleConsoleLogger.h>
#include <jcpp.h>

#undef WALKER

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $SimpleConsoleLogger$CallerFinder$1 = ::jdk::internal::logger::SimpleConsoleLogger$CallerFinder$1;
using $SimpleConsoleLogger$Formatting = ::jdk::internal::logger::SimpleConsoleLogger$Formatting;

namespace jdk {
	namespace internal {
		namespace logger {

class SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0 : public $Function {
	$class(SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0, $NO_CLASS_INIT, $Function)
public:
	void init$(SimpleConsoleLogger$CallerFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* s) override {
		 return $of($nc(inst$)->lambda$get$0($cast($Stream, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0>());
	}
	SimpleConsoleLogger$CallerFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0, inst$)},
	{}
};
$MethodInfo SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/logger/SimpleConsoleLogger$CallerFinder;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0::*)(SimpleConsoleLogger$CallerFinder*)>(&SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.logger.SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0::load$($String* name, bool initialize) {
	$loadClass(SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0::class$ = nullptr;

$FieldInfo _SimpleConsoleLogger$CallerFinder_FieldInfo_[] = {
	{"WALKER", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SimpleConsoleLogger$CallerFinder, WALKER)},
	{"lookingForLogger", "Z", nullptr, $PRIVATE, $field(SimpleConsoleLogger$CallerFinder, lookingForLogger)},
	{}
};

$MethodInfo _SimpleConsoleLogger$CallerFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SimpleConsoleLogger$CallerFinder::*)()>(&SimpleConsoleLogger$CallerFinder::init$))},
	{"get", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/StackWalker$StackFrame;>;", 0, $method(static_cast<$Optional*(SimpleConsoleLogger$CallerFinder::*)()>(&SimpleConsoleLogger$CallerFinder::get))},
	{"isLoggerImplFrame", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SimpleConsoleLogger$CallerFinder::*)($String*)>(&SimpleConsoleLogger$CallerFinder::isLoggerImplFrame))},
	{"lambda$get$0", "(Ljava/util/stream/Stream;)Ljava/util/Optional;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Optional*(SimpleConsoleLogger$CallerFinder::*)($Stream*)>(&SimpleConsoleLogger$CallerFinder::lambda$get$0))},
	{"test", "(Ljava/lang/StackWalker$StackFrame;)Z", nullptr, $PUBLIC, $method(static_cast<bool(SimpleConsoleLogger$CallerFinder::*)($StackWalker$StackFrame*)>(&SimpleConsoleLogger$CallerFinder::test))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _SimpleConsoleLogger$CallerFinder_InnerClassesInfo_[] = {
	{"jdk.internal.logger.SimpleConsoleLogger$CallerFinder", "jdk.internal.logger.SimpleConsoleLogger", "CallerFinder", $STATIC | $FINAL},
	{"jdk.internal.logger.SimpleConsoleLogger$CallerFinder$1", nullptr, nullptr, 0},
	{"java.lang.StackWalker$StackFrame", "java.lang.StackWalker", "StackFrame", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SimpleConsoleLogger$CallerFinder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.logger.SimpleConsoleLogger$CallerFinder",
	"java.lang.Object",
	"java.util.function.Predicate",
	_SimpleConsoleLogger$CallerFinder_FieldInfo_,
	_SimpleConsoleLogger$CallerFinder_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Predicate<Ljava/lang/StackWalker$StackFrame;>;",
	nullptr,
	_SimpleConsoleLogger$CallerFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.SimpleConsoleLogger"
};

$Object* allocate$SimpleConsoleLogger$CallerFinder($Class* clazz) {
	return $of($alloc(SimpleConsoleLogger$CallerFinder));
}

$StackWalker* SimpleConsoleLogger$CallerFinder::WALKER = nullptr;

void SimpleConsoleLogger$CallerFinder::init$() {
	this->lookingForLogger = true;
}

$Optional* SimpleConsoleLogger$CallerFinder::get() {
	$beforeCallerSensitive();
	return $cast($Optional, $nc(SimpleConsoleLogger$CallerFinder::WALKER)->walk(static_cast<$Function*>($$new(SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0, this))));
}

bool SimpleConsoleLogger$CallerFinder::test($StackWalker$StackFrame* t) {
	$var($String, cname, $nc(t)->getClassName());
	if (this->lookingForLogger) {
		this->lookingForLogger = !isLoggerImplFrame(cname);
		return false;
	}
	return !$SimpleConsoleLogger$Formatting::isFilteredFrame(t);
}

bool SimpleConsoleLogger$CallerFinder::isLoggerImplFrame($String* cname) {
	bool var$0 = $nc(cname)->equals("sun.util.logging.PlatformLogger"_s);
	return (var$0 || $nc(cname)->equals("jdk.internal.logger.SimpleConsoleLogger"_s));
}

bool SimpleConsoleLogger$CallerFinder::test(Object$* t) {
	return this->test($cast($StackWalker$StackFrame, t));
}

$Optional* SimpleConsoleLogger$CallerFinder::lambda$get$0($Stream* s) {
	return $nc($($nc(s)->filter(this)))->findFirst();
}

void clinit$SimpleConsoleLogger$CallerFinder($Class* class$) {
	$beforeCallerSensitive();
	{
		$var($PrivilegedAction, action, $new($SimpleConsoleLogger$CallerFinder$1));
		$assignStatic(SimpleConsoleLogger$CallerFinder::WALKER, $cast($StackWalker, $AccessController::doPrivileged(action)));
	}
}

SimpleConsoleLogger$CallerFinder::SimpleConsoleLogger$CallerFinder() {
}

$Class* SimpleConsoleLogger$CallerFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0::classInfo$.name)) {
			return SimpleConsoleLogger$CallerFinder$$Lambda$lambda$get$0::load$(name, initialize);
		}
	}
	$loadClass(SimpleConsoleLogger$CallerFinder, name, initialize, &_SimpleConsoleLogger$CallerFinder_ClassInfo_, clinit$SimpleConsoleLogger$CallerFinder, allocate$SimpleConsoleLogger$CallerFinder);
	return class$;
}

$Class* SimpleConsoleLogger$CallerFinder::class$ = nullptr;

		} // logger
	} // internal
} // jdk