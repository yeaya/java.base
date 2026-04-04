#include <N1$Inner1.h>
#include <N1.h>
#include <jcpp.h>

using $N1 = ::N1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void N1$Inner1::init$($N1* this$0) {
	$set(this, this$0, this$0);
}

N1$Inner1::N1$Inner1() {
}

$Class* N1$Inner1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LN1;", nullptr, $FINAL | $SYNTHETIC, $field(N1$Inner1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LN1;)V", nullptr, $PUBLIC, $method(N1$Inner1, init$, void, $N1*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"N1$Inner1", "N1", "Inner1", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"N1$Inner1",
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
		"N1"
	};
	$loadClass(N1$Inner1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(N1$Inner1);
	});
	return class$;
}

$Class* N1$Inner1::class$ = nullptr;