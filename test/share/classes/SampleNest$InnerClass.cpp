#include <SampleNest$InnerClass.h>
#include <SampleNest.h>
#include <jcpp.h>

using $SampleNest = ::SampleNest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SampleNest$InnerClass::init$($SampleNest* this$0) {
	$set(this, this$0, this$0);
}

SampleNest$InnerClass::SampleNest$InnerClass() {
}

$Class* SampleNest$InnerClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSampleNest;", nullptr, $FINAL | $SYNTHETIC, $field(SampleNest$InnerClass, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSampleNest;)V", nullptr, 0, $method(SampleNest$InnerClass, init$, void, $SampleNest*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SampleNest$InnerClass", "SampleNest", "InnerClass", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SampleNest$InnerClass",
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
		"SampleNest"
	};
	$loadClass(SampleNest$InnerClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SampleNest$InnerClass);
	});
	return class$;
}

$Class* SampleNest$InnerClass::class$ = nullptr;