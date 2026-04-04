#include <ParameterizedOuter$ParameterizedInner.h>
#include <ParameterizedOuter.h>
#include <jcpp.h>

using $ParameterizedOuter = ::ParameterizedOuter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ParameterizedOuter$ParameterizedInner::init$($ParameterizedOuter* this$0) {
	$set(this, this$0, this$0);
}

ParameterizedOuter$ParameterizedInner::ParameterizedOuter$ParameterizedInner() {
}

$Class* ParameterizedOuter$ParameterizedInner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LParameterizedOuter;", nullptr, $FINAL | $SYNTHETIC, $field(ParameterizedOuter$ParameterizedInner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LParameterizedOuter;)V", nullptr, 0, $method(ParameterizedOuter$ParameterizedInner, init$, void, $ParameterizedOuter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedOuter$ParameterizedInner", "ParameterizedOuter", "ParameterizedInner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedOuter$ParameterizedInner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ParameterizedOuter"
	};
	$loadClass(ParameterizedOuter$ParameterizedInner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedOuter$ParameterizedInner);
	});
	return class$;
}

$Class* ParameterizedOuter$ParameterizedInner::class$ = nullptr;