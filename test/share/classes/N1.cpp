#include <N1.h>
#include <N1$Inner1.h>
#include <N1$Inner2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void N1::init$() {
}

N1::N1() {
}

$Class* N1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"i1", "LN1$Inner1;", "LN1<TT1;TT2;>.Inner1;", $PUBLIC, $field(N1, i1)},
		{"i2", "LN1$Inner2;", nullptr, $PUBLIC, $field(N1, i2)},
		{"i2sc", "LN1$Inner2;", "LN1<TT1;TT2;>.Inner2<-Ljava/lang/Character;>;", $PUBLIC, $field(N1, i2sc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(N1, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"N1$Inner3", "N1", "Inner3", $PUBLIC},
		{"N1$Inner2", "N1", "Inner2", $PUBLIC},
		{"N1$Inner1", "N1", "Inner1", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"N1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T1:Ljava/lang/Object;T2:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"N1$Inner3,N1$Inner3$InnerInner,N1$Inner2,N1$Inner1"
	};
	$loadClass(N1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(N1);
	});
	return class$;
}

$Class* N1::class$ = nullptr;