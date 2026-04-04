#include <ValueOf4Enum$Specialized$1.h>
#include <ValueOf4Enum$Specialized.h>
#include <jcpp.h>

using $ValueOf4Enum$Specialized = ::ValueOf4Enum$Specialized;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ValueOf4Enum$Specialized$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$ValueOf4Enum$Specialized::init$($enum$name, $enum$ordinal);
}

void ValueOf4Enum$Specialized$1::foo() {
}

ValueOf4Enum$Specialized$1::ValueOf4Enum$Specialized$1() {
}

$Class* ValueOf4Enum$Specialized$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(ValueOf4Enum$Specialized$1, init$, void, $String*, int32_t)},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(ValueOf4Enum$Specialized$1, foo, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ValueOf4Enum$Specialized",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ValueOf4Enum$Specialized", "ValueOf4Enum", "Specialized", $STATIC | $ABSTRACT | $ENUM},
		{"ValueOf4Enum$Specialized$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"ValueOf4Enum$Specialized$1",
		"ValueOf4Enum$Specialized",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ValueOf4Enum"
	};
	$loadClass(ValueOf4Enum$Specialized$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ValueOf4Enum$Specialized$1));
	});
	return class$;
}

$Class* ValueOf4Enum$Specialized$1::class$ = nullptr;