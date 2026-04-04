#include <GetAnnotatedReceiverType$Inner0.h>
#include <GetAnnotatedReceiverType.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType = ::GetAnnotatedReceiverType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedReceiverType$Inner0::init$($GetAnnotatedReceiverType* this$0) {
	$set(this, this$0, this$0);
}

GetAnnotatedReceiverType$Inner0::GetAnnotatedReceiverType$Inner0() {
}

$Class* GetAnnotatedReceiverType$Inner0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGetAnnotatedReceiverType;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner0, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetAnnotatedReceiverType;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Inner0, init$, void, $GetAnnotatedReceiverType*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Inner0", "GetAnnotatedReceiverType", "Inner0", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedReceiverType$Inner0",
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
		"GetAnnotatedReceiverType"
	};
	$loadClass(GetAnnotatedReceiverType$Inner0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType$Inner0);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner0::class$ = nullptr;