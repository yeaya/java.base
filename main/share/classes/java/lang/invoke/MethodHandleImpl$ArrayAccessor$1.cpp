#include <java/lang/invoke/MethodHandleImpl$ArrayAccessor$1.h>
#include <java/lang/ClassValue.h>
#include <java/lang/invoke/MethodHandle.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void MethodHandleImpl$ArrayAccessor$1::init$() {
	$ClassValue::init$();
}

$Object* MethodHandleImpl$ArrayAccessor$1::computeValue($Class* type) {
	return $new($MethodHandleArray, 3);
}

MethodHandleImpl$ArrayAccessor$1::MethodHandleImpl$ArrayAccessor$1() {
}

$Class* MethodHandleImpl$ArrayAccessor$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MethodHandleImpl$ArrayAccessor$1, init$, void)},
		{"computeValue", "(Ljava/lang/Class;)[Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)[Ljava/lang/invoke/MethodHandle;", $PROTECTED, $virtualMethod(MethodHandleImpl$ArrayAccessor$1, computeValue, $Object*, $Class*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.MethodHandleImpl$ArrayAccessor",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleImpl$ArrayAccessor", "java.lang.invoke.MethodHandleImpl", "ArrayAccessor", $STATIC | $FINAL},
		{"java.lang.invoke.MethodHandleImpl$ArrayAccessor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodHandleImpl$ArrayAccessor$1",
		"java.lang.ClassValue",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ClassValue<[Ljava/lang/invoke/MethodHandle;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.MethodHandleImpl"
	};
	$loadClass(MethodHandleImpl$ArrayAccessor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleImpl$ArrayAccessor$1);
	});
	return class$;
}

$Class* MethodHandleImpl$ArrayAccessor$1::class$ = nullptr;

		} // invoke
	} // lang
} // java