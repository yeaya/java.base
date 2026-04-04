#include <C0B.h>
#include <jcpp.h>

#undef C0B

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void C0B::init$() {
}

void C0B::init$(Object$* t) {
}

C0B::C0B() {
}

$Class* C0B::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ft", "Ljava/lang/Object;", "TT;", $PUBLIC, $field(C0B, ft)},
		{"fc1t", "LC0B;", "LC0B<TT;>;", $PUBLIC, $field(C0B, fc1t)},
		{"fc1", "LC0B;", nullptr, $PUBLIC, $field(C0B, fc1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(C0B, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $method(C0B, init$, void, Object$*)},
		{"mc1", "()LC0B;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(C0B, mc1, C0B*)},
		{"mc1t", "(Ljava/lang/Object;LC0B;LC0B;)LC0B;", "(TT;LC0B<TT;>;LC0B;)LC0B<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(C0B, mc1t, C0B*, Object$*, C0B*, C0B*)},
		{"mt", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(C0B, mt, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"C0B",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(C0B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C0B);
	});
	return class$;
}

$Class* C0B::class$ = nullptr;