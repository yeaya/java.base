#include <Tricky$Nested.h>
#include <Tricky.h>
#include <jcpp.h>

using $Tricky = ::Tricky;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Tricky$Nested::init$() {
	$set(this, t, $new($Tricky));
}

Tricky$Nested::Tricky$Nested() {
}

$Class* Tricky$Nested::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"t", "LTricky;", nullptr, 0, $field(Tricky$Nested, t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Tricky$Nested, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Tricky$Nested", "Tricky", "Nested", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Tricky$Nested",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Tricky"
	};
	$loadClass(Tricky$Nested, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Tricky$Nested);
	});
	return class$;
}

$Class* Tricky$Nested::class$ = nullptr;