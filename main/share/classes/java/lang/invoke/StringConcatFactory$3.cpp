#include <java/lang/invoke/StringConcatFactory$3.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/StringConcatFactory.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef JLA
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $StringConcatFactory = ::java::lang::invoke::StringConcatFactory;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

void StringConcatFactory$3::init$() {
}

$MethodHandle* StringConcatFactory$3::apply($Class* c) {
	$useLocalObjectStack();
	$init($StringConcatFactory);
	$var($MethodHandle, mix, $nc($StringConcatFactory::JLA)->stringConcatHelper("mix"_s, $($MethodType::methodType($Long::TYPE, $Long::TYPE, $$new($ClassArray, {$Wrapper::asPrimitiveType(c)})))));
	return $nc(mix)->rebind();
}

$Object* StringConcatFactory$3::apply(Object$* c) {
	return this->apply($cast($Class, c));
}

StringConcatFactory$3::StringConcatFactory$3() {
}

$Class* StringConcatFactory$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StringConcatFactory$3, init$, void)},
		{"apply", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC, $virtualMethod(StringConcatFactory$3, apply, $MethodHandle*, $Class*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringConcatFactory$3, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.StringConcatFactory",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.StringConcatFactory$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.StringConcatFactory$3",
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
	$loadClass(StringConcatFactory$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringConcatFactory$3);
	});
	return class$;
}

$Class* StringConcatFactory$3::class$ = nullptr;

		} // invoke
	} // lang
} // java