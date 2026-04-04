#include <java/util/concurrent/Executors$1.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace util {
		namespace concurrent {

void Executors$1::init$($PrivilegedAction* val$action) {
	$set(this, val$action, val$action);
}

$Object* Executors$1::call() {
	return $nc(this->val$action)->run();
}

Executors$1::Executors$1() {
}

$Class* Executors$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$action", "Ljava/security/PrivilegedAction;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$1, val$action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/PrivilegedAction;)V", "()V", 0, $method(Executors$1, init$, void, $PrivilegedAction*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Executors$1, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.Executors",
		"callable",
		"(Ljava/security/PrivilegedAction;)Ljava/util/concurrent/Callable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.Executors$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Executors"
	};
	$loadClass(Executors$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$1);
	});
	return class$;
}

$Class* Executors$1::class$ = nullptr;

		} // concurrent
	} // util
} // java