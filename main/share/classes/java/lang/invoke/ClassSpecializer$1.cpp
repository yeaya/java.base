#include <java/lang/invoke/ClassSpecializer$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void ClassSpecializer$1::init$() {
}

$Object* ClassSpecializer$1::apply(Object$* key) {
	return $new($Object);
}

ClassSpecializer$1::ClassSpecializer$1() {
}

$Class* ClassSpecializer$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClassSpecializer$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ClassSpecializer$1, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.ClassSpecializer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.ClassSpecializer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.ClassSpecializer$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/Object;Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.ClassSpecializer"
	};
	$loadClass(ClassSpecializer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassSpecializer$1);
	});
	return class$;
}

$Class* ClassSpecializer$1::class$ = nullptr;

		} // invoke
	} // lang
} // java