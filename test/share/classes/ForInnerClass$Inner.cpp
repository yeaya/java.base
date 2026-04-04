#include <ForInnerClass$Inner.h>
#include <ForInnerClass.h>
#include <jcpp.h>

using $ForInnerClass = ::ForInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ForInnerClass$Inner::init$($ForInnerClass* this$0) {
	$set(this, this$0, this$0);
}

ForInnerClass$Inner::ForInnerClass$Inner() {
}

$Class* ForInnerClass$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LForInnerClass;", nullptr, $FINAL | $SYNTHETIC, $field(ForInnerClass$Inner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LForInnerClass;)V", nullptr, $PRIVATE, $method(ForInnerClass$Inner, init$, void, $ForInnerClass*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ForInnerClass$Inner", "ForInnerClass", "Inner", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ForInnerClass$Inner",
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
	$loadClass(ForInnerClass$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForInnerClass$Inner);
	});
	return class$;
}

$Class* ForInnerClass$Inner::class$ = nullptr;