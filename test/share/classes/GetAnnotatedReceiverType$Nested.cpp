#include <GetAnnotatedReceiverType$Nested.h>
#include <GetAnnotatedReceiverType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedReceiverType$Nested::init$() {
}

GetAnnotatedReceiverType$Nested::GetAnnotatedReceiverType$Nested() {
}

$Class* GetAnnotatedReceiverType$Nested::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Nested, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Nested", "GetAnnotatedReceiverType", "Nested", $PUBLIC | $STATIC},
		{"GetAnnotatedReceiverType$Nested$NestedInner", "GetAnnotatedReceiverType$Nested", "NestedInner", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetAnnotatedReceiverType$Nested",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetAnnotatedReceiverType"
	};
	$loadClass(GetAnnotatedReceiverType$Nested, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType$Nested);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType$Nested::class$ = nullptr;