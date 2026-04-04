#include <java/util/concurrent/atomic/Striped64$1.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/util/concurrent/atomic/Striped64.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

void Striped64$1::init$() {
}

$Object* Striped64$1::run() {
	$beforeCallerSensitive();
	try {
		return $MethodHandles::privateLookupIn($Thread::class$, $($MethodHandles::lookup()));
	} catch ($ReflectiveOperationException& e) {
		$throwNew($ExceptionInInitializerError, e);
	}
	$shouldNotReachHere();
}

Striped64$1::Striped64$1() {
}

$Class* Striped64$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Striped64$1, init$, void)},
		{"run", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $virtualMethod(Striped64$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.atomic.Striped64",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.Striped64$1", nullptr, nullptr, 0},
		{"java.lang.invoke.MethodHandles$Lookup", "java.lang.invoke.MethodHandles", "Lookup", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.atomic.Striped64$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/invoke/MethodHandles$Lookup;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.atomic.Striped64"
	};
	$loadClass(Striped64$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Striped64$1);
	});
	return class$;
}

$Class* Striped64$1::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java