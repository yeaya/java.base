#include <AnotherEnum$1.h>
#include <AnotherEnum.h>
#include <jcpp.h>

using $AnotherEnum = ::AnotherEnum;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void AnotherEnum$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$AnotherEnum::init$($enum$name, $enum$ordinal);
}

AnotherEnum$1::AnotherEnum$1() {
}

$Class* AnotherEnum$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(AnotherEnum$1, init$, void, $String*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AnotherEnum",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnotherEnum$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"AnotherEnum$1",
		"AnotherEnum",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AnotherEnum"
	};
	$loadClass(AnotherEnum$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AnotherEnum$1));
	});
	return class$;
}

$Class* AnotherEnum$1::class$ = nullptr;