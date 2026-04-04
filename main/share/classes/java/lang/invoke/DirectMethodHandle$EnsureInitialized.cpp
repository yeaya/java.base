#include <java/lang/invoke/DirectMethodHandle$EnsureInitialized.h>
#include <java/lang/ClassValue.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/ref/WeakReference.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef INSTANCE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace lang {
		namespace invoke {

DirectMethodHandle$EnsureInitialized* DirectMethodHandle$EnsureInitialized::INSTANCE = nullptr;

void DirectMethodHandle$EnsureInitialized::init$() {
	$ClassValue::init$();
}

$Object* DirectMethodHandle$EnsureInitialized::computeValue($Class* type) {
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized(type);
	if ($MethodHandleStatics::UNSAFE->shouldBeInitialized(type)) {
		return $new($WeakReference, $($Thread::currentThread()));
	}
	return nullptr;
}

void DirectMethodHandle$EnsureInitialized::clinit$($Class* clazz) {
	$assignStatic(DirectMethodHandle$EnsureInitialized::INSTANCE, $new(DirectMethodHandle$EnsureInitialized));
}

DirectMethodHandle$EnsureInitialized::DirectMethodHandle$EnsureInitialized() {
}

$Class* DirectMethodHandle$EnsureInitialized::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/lang/invoke/DirectMethodHandle$EnsureInitialized;", nullptr, $STATIC | $FINAL, $staticField(DirectMethodHandle$EnsureInitialized, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DirectMethodHandle$EnsureInitialized, init$, void)},
		{"computeValue", "(Ljava/lang/Class;)Ljava/lang/ref/WeakReference;", "(Ljava/lang/Class<*>;)Ljava/lang/ref/WeakReference<Ljava/lang/Thread;>;", $PROTECTED, $virtualMethod(DirectMethodHandle$EnsureInitialized, computeValue, $Object*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.DirectMethodHandle$EnsureInitialized", "java.lang.invoke.DirectMethodHandle", "EnsureInitialized", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.DirectMethodHandle$EnsureInitialized",
		"java.lang.ClassValue",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ClassValue<Ljava/lang/ref/WeakReference<Ljava/lang/Thread;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.DirectMethodHandle"
	};
	$loadClass(DirectMethodHandle$EnsureInitialized, name, initialize, &classInfo$$, DirectMethodHandle$EnsureInitialized::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DirectMethodHandle$EnsureInitialized);
	});
	return class$;
}

$Class* DirectMethodHandle$EnsureInitialized::class$ = nullptr;

		} // invoke
	} // lang
} // java