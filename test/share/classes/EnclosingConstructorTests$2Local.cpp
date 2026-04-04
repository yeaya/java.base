#include <EnclosingConstructorTests$2Local.h>
#include <EnclosingConstructorTests.h>
#include <jcpp.h>

using $EnclosingConstructorTests = ::EnclosingConstructorTests;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EnclosingConstructorTests$2Local::init$($EnclosingConstructorTests* this$0) {
	$set(this, this$0, this$0);
}

EnclosingConstructorTests$2Local::EnclosingConstructorTests$2Local() {
}

$Class* EnclosingConstructorTests$2Local::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LEnclosingConstructorTests;", nullptr, $FINAL | $SYNTHETIC, $field(EnclosingConstructorTests$2Local, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LEnclosingConstructorTests;)V", nullptr, 0, $method(EnclosingConstructorTests$2Local, init$, void, $EnclosingConstructorTests*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"EnclosingConstructorTests",
		"<init>",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingConstructorTests$2Local", nullptr, "Local", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EnclosingConstructorTests$2Local",
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
	$loadClass(EnclosingConstructorTests$2Local, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingConstructorTests$2Local);
	});
	return class$;
}

$Class* EnclosingConstructorTests$2Local::class$ = nullptr;