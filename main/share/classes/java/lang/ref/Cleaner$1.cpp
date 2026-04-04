#include <java/lang/ref/Cleaner$1.h>
#include <java/lang/ref/Cleaner.h>
#include <jdk/internal/ref/CleanerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner = ::java::lang::ref::Cleaner;
using $CleanerImpl = ::jdk::internal::ref::CleanerImpl;

namespace java {
	namespace lang {
		namespace ref {

void Cleaner$1::init$() {
}

$CleanerImpl* Cleaner$1::apply($Cleaner* cleaner) {
	return $nc(cleaner)->impl;
}

$Object* Cleaner$1::apply(Object$* cleaner) {
	return this->apply($cast($Cleaner, cleaner));
}

Cleaner$1::Cleaner$1() {
}

$Class* Cleaner$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Cleaner$1, init$, void)},
		{"apply", "(Ljava/lang/ref/Cleaner;)Ljdk/internal/ref/CleanerImpl;", nullptr, $PUBLIC, $virtualMethod(Cleaner$1, apply, $CleanerImpl*, $Cleaner*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Cleaner$1, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ref.Cleaner",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Cleaner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ref.Cleaner$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/ref/Cleaner;Ljdk/internal/ref/CleanerImpl;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ref.Cleaner"
	};
	$loadClass(Cleaner$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cleaner$1);
	});
	return class$;
}

$Class* Cleaner$1::class$ = nullptr;

		} // ref
	} // lang
} // java