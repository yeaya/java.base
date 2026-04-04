#include <java/util/concurrent/Executors$2.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace java {
	namespace util {
		namespace concurrent {

void Executors$2::init$($PrivilegedExceptionAction* val$action) {
	$set(this, val$action, val$action);
}

$Object* Executors$2::call() {
	return $nc(this->val$action)->run();
}

Executors$2::Executors$2() {
}

$Class* Executors$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$action", "Ljava/security/PrivilegedExceptionAction;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$2, val$action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/PrivilegedExceptionAction;)V", "()V", 0, $method(Executors$2, init$, void, $PrivilegedExceptionAction*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Executors$2, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.Executors",
		"callable",
		"(Ljava/security/PrivilegedExceptionAction;)Ljava/util/concurrent/Callable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.Executors$2",
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
	$loadClass(Executors$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$2);
	});
	return class$;
}

$Class* Executors$2::class$ = nullptr;

		} // concurrent
	} // util
} // java