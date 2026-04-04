#include <EnclosingMethodTests$1Local.h>
#include <EnclosingMethodTests.h>
#include <jcpp.h>

using $EnclosingMethodTests = ::EnclosingMethodTests;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EnclosingMethodTests$1Local::init$($EnclosingMethodTests* this$0) {
	$set(this, this$0, this$0);
}

EnclosingMethodTests$1Local::EnclosingMethodTests$1Local() {
}

$Class* EnclosingMethodTests$1Local::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LEnclosingMethodTests;", nullptr, $FINAL | $SYNTHETIC, $field(EnclosingMethodTests$1Local, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LEnclosingMethodTests;)V", nullptr, 0, $method(EnclosingMethodTests$1Local, init$, void, $EnclosingMethodTests*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"EnclosingMethodTests",
		"getLocalClass",
		"(Ljava/lang/Object;)Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingMethodTests$1Local", nullptr, "Local", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EnclosingMethodTests$1Local",
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
		"EnclosingMethodTests"
	};
	$loadClass(EnclosingMethodTests$1Local, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingMethodTests$1Local);
	});
	return class$;
}

$Class* EnclosingMethodTests$1Local::class$ = nullptr;