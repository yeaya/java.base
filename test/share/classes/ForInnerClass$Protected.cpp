#include <ForInnerClass$Protected.h>
#include <ForInnerClass.h>
#include <jcpp.h>

using $ForInnerClass = ::ForInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ForInnerClass$Protected::init$($ForInnerClass* this$0) {
	$set(this, this$0, this$0);
}

ForInnerClass$Protected::ForInnerClass$Protected() {
}

$Class* ForInnerClass$Protected::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LForInnerClass;", nullptr, $FINAL | $SYNTHETIC, $field(ForInnerClass$Protected, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LForInnerClass;)V", nullptr, $PROTECTED, $method(ForInnerClass$Protected, init$, void, $ForInnerClass*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ForInnerClass$Protected", "ForInnerClass", "Protected", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ForInnerClass$Protected",
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
		"ForInnerClass"
	};
	$loadClass(ForInnerClass$Protected, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForInnerClass$Protected);
	});
	return class$;
}

$Class* ForInnerClass$Protected::class$ = nullptr;