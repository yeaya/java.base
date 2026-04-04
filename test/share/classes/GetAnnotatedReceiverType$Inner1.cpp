#include <GetAnnotatedReceiverType$Inner1.h>
#include <GetAnnotatedReceiverType.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType = ::GetAnnotatedReceiverType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedReceiverType$Inner1::init$($GetAnnotatedReceiverType* this$0) {
	$set(this, this$0, this$0);
}

GetAnnotatedReceiverType$Inner1::GetAnnotatedReceiverType$Inner1() {
}

$Class* GetAnnotatedReceiverType$Inner1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGetAnnotatedReceiverType;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetAnnotatedReceiverType;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Inner1, init$, void, $GetAnnotatedReceiverType*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Inner1", "GetAnnotatedReceiverType", "Inner1", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedReceiverType$Inner1",
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
	$loadClass(GetAnnotatedReceiverType$Inner1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType$Inner1);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner1::class$ = nullptr;