#include <Outer$Inner.h>
#include <Outer.h>
#include <jcpp.h>

using $Outer = ::Outer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Outer$Inner::init$($Outer* this$0) {
	$set(this, this$0, this$0);
}

Outer$Inner::Outer$Inner() {
}

$Class* Outer$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LOuter;", nullptr, $FINAL | $SYNTHETIC, $field(Outer$Inner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LOuter;)V", nullptr, 0, $method(Outer$Inner, init$, void, $Outer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Outer$Inner", "Outer", "Inner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Outer$Inner",
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
		"Outer"
	};
	$loadClass(Outer$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Outer$Inner);
	});
	return class$;
}

$Class* Outer$Inner::class$ = nullptr;