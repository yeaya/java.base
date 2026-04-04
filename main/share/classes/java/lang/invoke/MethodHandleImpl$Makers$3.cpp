#include <java/lang/invoke/MethodHandleImpl$Makers$3.h>
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

void MethodHandleImpl$Makers$3::init$() {
	$ClassValue::init$();
}

$Object* MethodHandleImpl$Makers$3::computeValue($Class* type) {
	return $new($MethodHandleArray, 255 + 1);
}

MethodHandleImpl$Makers$3::MethodHandleImpl$Makers$3() {
}

$Class* MethodHandleImpl$Makers$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MethodHandleImpl$Makers$3, init$, void)},
		{"computeValue", "(Ljava/lang/Class;)[Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)[Ljava/lang/invoke/MethodHandle;", $PROTECTED, $virtualMethod(MethodHandleImpl$Makers$3, computeValue, $Object*, $Class*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.MethodHandleImpl$Makers",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleImpl$Makers", "java.lang.invoke.MethodHandleImpl", "Makers", $PRIVATE | $STATIC | $FINAL},
		{"java.lang.invoke.MethodHandleImpl$Makers$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodHandleImpl$Makers$3",
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
	$loadClass(MethodHandleImpl$Makers$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleImpl$Makers$3);
	});
	return class$;
}

$Class* MethodHandleImpl$Makers$3::class$ = nullptr;

		} // invoke
	} // lang
} // java