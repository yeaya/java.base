#include <p1/A.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

#undef A

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;

namespace p1 {

$Object* A::lock = nullptr;

void A::init$() {
}

void A::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$$nc($MethodHandles::lookup())->ensureInitialized(A::class$);
			$assignStatic(A::lock, $new($Object));
		} catch ($IllegalAccessException& e) {
			$throwNew($RuntimeException, e);
		}
	}
}

A::A() {
}

$Class* A::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lock", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(A, lock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(A, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p1.A",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(A, name, initialize, &classInfo$$, A::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(A);
	});
	return class$;
}

$Class* A::class$ = nullptr;

} // p1