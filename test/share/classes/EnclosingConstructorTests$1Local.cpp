#include <EnclosingConstructorTests$1Local.h>
#include <EnclosingConstructorTests.h>
#include <jcpp.h>

using $EnclosingConstructorTests = ::EnclosingConstructorTests;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EnclosingConstructorTests$1Local::init$($EnclosingConstructorTests* this$0) {
	$set(this, this$0, this$0);
}

EnclosingConstructorTests$1Local::EnclosingConstructorTests$1Local() {
}

$Class* EnclosingConstructorTests$1Local::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LEnclosingConstructorTests;", nullptr, $FINAL | $SYNTHETIC, $field(EnclosingConstructorTests$1Local, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LEnclosingConstructorTests;)V", nullptr, 0, $method(EnclosingConstructorTests$1Local, init$, void, $EnclosingConstructorTests*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"EnclosingConstructorTests",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingConstructorTests$1Local", nullptr, "Local", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EnclosingConstructorTests$1Local",
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
		"EnclosingConstructorTests"
	};
	$loadClass(EnclosingConstructorTests$1Local, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingConstructorTests$1Local);
	});
	return class$;
}

$Class* EnclosingConstructorTests$1Local::class$ = nullptr;