#include <SampleNest$1LocalClass.h>
#include <SampleNest.h>
#include <jcpp.h>

using $SampleNest = ::SampleNest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SampleNest$1LocalClass::init$($SampleNest* this$0) {
	$set(this, this$0, this$0);
}

SampleNest$1LocalClass::SampleNest$1LocalClass() {
}

$Class* SampleNest$1LocalClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSampleNest;", nullptr, $FINAL | $SYNTHETIC, $field(SampleNest$1LocalClass, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSampleNest;)V", nullptr, 0, $method(SampleNest$1LocalClass, init$, void, $SampleNest*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SampleNest",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SampleNest$1LocalClass", nullptr, "LocalClass", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SampleNest$1LocalClass",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SampleNest"
	};
	$loadClass(SampleNest$1LocalClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SampleNest$1LocalClass);
	});
	return class$;
}

$Class* SampleNest$1LocalClass::class$ = nullptr;