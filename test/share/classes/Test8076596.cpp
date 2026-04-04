#include <Test8076596.h>
#include <Test8076596$1.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $Test8076596$1 = ::Test8076596$1;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

class Test8076596$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(Test8076596$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return Test8076596::lambda$new$0();
	}
};
$Class* Test8076596$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8076596$$Lambda$lambda$new$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Test8076596$$Lambda$lambda$new$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Test8076596$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test8076596$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8076596$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* Test8076596$$Lambda$lambda$new$0::class$ = nullptr;

void Test8076596::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$SecurityManager::init$();
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(Test8076596$$Lambda$lambda$new$0)));
	$AccessController::doPrivileged($$new($Test8076596$1, this));
}

void Test8076596::main($StringArray* args) {
	$init(Test8076596);
}

$Void* Test8076596::lambda$new$0() {
	$init(Test8076596);
	return nullptr;
}

Test8076596::Test8076596() {
}

$Class* Test8076596::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("Test8076596$$Lambda$lambda$new$0")) {
			return Test8076596$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8076596, init$, void)},
		{"lambda$new$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Test8076596, lambda$new$0, $Void*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8076596, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8076596$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8076596",
		"java.lang.SecurityManager",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test8076596$1"
	};
	$loadClass(Test8076596, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8076596);
	});
	return class$;
}

$Class* Test8076596::class$ = nullptr;