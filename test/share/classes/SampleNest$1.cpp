#include <SampleNest$1.h>
#include <SampleNest.h>
#include <java/util/List.h>
#include <jcpp.h>

using $SampleNest = ::SampleNest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SampleNest$1::init$($SampleNest* this$0) {
	$set(this, this$0, this$0);
}

void SampleNest$1::run() {
	$init($SampleNest);
	$nc($SampleNest::_nestedTypes)->add($of(this)->getClass());
}

SampleNest$1::SampleNest$1() {
}

$Class* SampleNest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSampleNest;", nullptr, $FINAL | $SYNTHETIC, $field(SampleNest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSampleNest;)V", nullptr, 0, $method(SampleNest$1, init$, void, $SampleNest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SampleNest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SampleNest",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SampleNest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SampleNest$1",
		"java.lang.Object",
		"java.lang.Runnable",
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
	$loadClass(SampleNest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SampleNest$1);
	});
	return class$;
}

$Class* SampleNest$1::class$ = nullptr;