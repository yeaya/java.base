#include <java/lang/invoke/StringConcatFactory$2.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/StringConcatFactory.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef PREPEND
#undef PREPENDERS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $StringConcatFactory = ::java::lang::invoke::StringConcatFactory;

namespace java {
	namespace lang {
		namespace invoke {

void StringConcatFactory$2::init$() {
}

$MethodHandle* StringConcatFactory$2::apply($Class* c) {
	$useLocalObjectStack();
	$init($StringConcatFactory);
	return $MethodHandles::insertArguments($$cast($MethodHandle, $nc($StringConcatFactory::PREPENDERS)->computeIfAbsent(c, $StringConcatFactory::PREPEND)), 3, $$new($ObjectArray, {($String*)nullptr}));
}

$Object* StringConcatFactory$2::apply(Object$* c) {
	return this->apply($cast($Class, c));
}

StringConcatFactory$2::StringConcatFactory$2() {
}

$Class* StringConcatFactory$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StringConcatFactory$2, init$, void)},
		{"apply", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC, $virtualMethod(StringConcatFactory$2, apply, $MethodHandle*, $Class*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringConcatFactory$2, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.StringConcatFactory",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.StringConcatFactory$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.StringConcatFactory$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.StringConcatFactory"
	};
	$loadClass(StringConcatFactory$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringConcatFactory$2);
	});
	return class$;
}

$Class* StringConcatFactory$2::class$ = nullptr;

		} // invoke
	} // lang
} // java