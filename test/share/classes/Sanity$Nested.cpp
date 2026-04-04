#include <Sanity$Nested.h>
#include <Sanity.h>
#include <jcpp.h>

using $Sanity = ::Sanity;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Nested::init$($Sanity* this$0) {
	$set(this, this$0, this$0);
}

Sanity$Nested::Sanity$Nested() {
}

$Class* Sanity$Nested::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSanity;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Nested, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSanity;)V", nullptr, 0, $method(Sanity$Nested, init$, void, $Sanity*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Nested", "Sanity", "Nested", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Sanity$Nested",
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
		"Sanity"
	};
	$loadClass(Sanity$Nested, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Nested);
	});
	return class$;
}

$Class* Sanity$Nested::class$ = nullptr;