#include <java/util/concurrent/Executors$PrivilegedCallable$1.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executors$PrivilegedCallable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Executors$PrivilegedCallable = ::java::util::concurrent::Executors$PrivilegedCallable;

namespace java {
	namespace util {
		namespace concurrent {

void Executors$PrivilegedCallable$1::init$($Executors$PrivilegedCallable* this$0) {
	$set(this, this$0, this$0);
}

$Object* Executors$PrivilegedCallable$1::run() {
	return $nc(this->this$0->task)->call();
}

Executors$PrivilegedCallable$1::Executors$PrivilegedCallable$1() {
}

$Class* Executors$PrivilegedCallable$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/Executors$PrivilegedCallable;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedCallable$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executors$PrivilegedCallable;)V", nullptr, 0, $method(Executors$PrivilegedCallable$1, init$, void, $Executors$PrivilegedCallable*)},
		{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Executors$PrivilegedCallable$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.Executors$PrivilegedCallable",
		"call",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$PrivilegedCallable", "java.util.concurrent.Executors", "PrivilegedCallable", $PRIVATE | $STATIC | $FINAL},
		{"java.util.concurrent.Executors$PrivilegedCallable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.Executors$PrivilegedCallable$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Executors"
	};
	$loadClass(Executors$PrivilegedCallable$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$PrivilegedCallable$1);
	});
	return class$;
}

$Class* Executors$PrivilegedCallable$1::class$ = nullptr;

		} // concurrent
	} // util
} // java