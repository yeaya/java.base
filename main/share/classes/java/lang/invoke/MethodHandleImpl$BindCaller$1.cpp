#include <java/lang/invoke/MethodHandleImpl$BindCaller$1.h>
#include <java/lang/ClassValue.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$BindCaller.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleImpl$BindCaller = ::java::lang::invoke::MethodHandleImpl$BindCaller;

namespace java {
	namespace lang {
		namespace invoke {

void MethodHandleImpl$BindCaller$1::init$() {
	$ClassValue::init$();
}

$Object* MethodHandleImpl$BindCaller$1::computeValue($Class* hostClass) {
	return $MethodHandleImpl$BindCaller::makeInjectedInvoker(hostClass);
}

MethodHandleImpl$BindCaller$1::MethodHandleImpl$BindCaller$1() {
}

$Class* MethodHandleImpl$BindCaller$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MethodHandleImpl$BindCaller$1, init$, void)},
		{"computeValue", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PROTECTED, $virtualMethod(MethodHandleImpl$BindCaller$1, computeValue, $Object*, $Class*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.MethodHandleImpl$BindCaller",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleImpl$BindCaller", "java.lang.invoke.MethodHandleImpl", "BindCaller", $PRIVATE | $STATIC},
		{"java.lang.invoke.MethodHandleImpl$BindCaller$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodHandleImpl$BindCaller$1",
		"java.lang.ClassValue",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ClassValue<Ljava/lang/invoke/MethodHandle;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.MethodHandleImpl"
	};
	$loadClass(MethodHandleImpl$BindCaller$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleImpl$BindCaller$1);
	});
	return class$;
}

$Class* MethodHandleImpl$BindCaller$1::class$ = nullptr;

		} // invoke
	} // lang
} // java