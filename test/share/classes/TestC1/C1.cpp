#include <TestC1/C1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace TestC1 {

void C1::init$(Object$* t) {
}

C1::C1() {
}

$Class* C1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ft", "Ljava/lang/Object;", "TT;", $PUBLIC, $field(C1, ft)},
		{"fc1t", "LTestC1/C1;", "LTestC1/C1<TT;>;", $PUBLIC, $field(C1, fc1t)},
		{"fc1", "LTestC1/C1;", nullptr, $PUBLIC, $field(C1, fc1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $method(C1, init$, void, Object$*)},
		{"mc1", "()LTestC1/C1;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(C1, mc1, C1*)},
		{"mc1t", "(Ljava/lang/Object;LTestC1/C1;LTestC1/C1;)LTestC1/C1;", "(TT;LTestC1/C1<TT;>;LTestC1/C1;)LTestC1/C1<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(C1, mc1t, C1*, Object$*, C1*, C1*)},
		{"mt", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(C1, mt, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"TestC1.C1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(C1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C1);
	});
	return class$;
}

$Class* C1::class$ = nullptr;

} // TestC1