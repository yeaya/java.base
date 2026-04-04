#include <java/lang/invoke/VarHandle$1.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandle$1::init$() {
}

$ArrayIndexOutOfBoundsException* VarHandle$1::apply($String* s) {
	return $new($ArrayIndexOutOfBoundsException, s);
}

$Object* VarHandle$1::apply(Object$* s) {
	return this->apply($cast($String, s));
}

VarHandle$1::VarHandle$1() {
}

$Class* VarHandle$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandle$1, init$, void)},
		{"apply", "(Ljava/lang/String;)Ljava/lang/ArrayIndexOutOfBoundsException;", nullptr, $PUBLIC, $virtualMethod(VarHandle$1, apply, $ArrayIndexOutOfBoundsException*, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(VarHandle$1, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.VarHandle",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandle$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandle$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/ArrayIndexOutOfBoundsException;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandle"
	};
	$loadClass(VarHandle$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandle$1);
	});
	return class$;
}

$Class* VarHandle$1::class$ = nullptr;

		} // invoke
	} // lang
} // java