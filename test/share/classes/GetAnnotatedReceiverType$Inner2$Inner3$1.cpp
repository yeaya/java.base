#include <GetAnnotatedReceiverType$Inner2$Inner3$1.h>
#include <GetAnnotatedReceiverType$Inner2$Inner3.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Inner2$Inner3 = ::GetAnnotatedReceiverType$Inner2$Inner3;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedReceiverType$Inner2$Inner3$1::init$($GetAnnotatedReceiverType$Inner2$Inner3* this$2) {
	$set(this, this$2, this$2);
}

GetAnnotatedReceiverType$Inner2$Inner3$1::GetAnnotatedReceiverType$Inner2$Inner3$1() {
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$2", "LGetAnnotatedReceiverType$Inner2$Inner3;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner2$Inner3$1, this$2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetAnnotatedReceiverType$Inner2$Inner3;)V", nullptr, 0, $method(GetAnnotatedReceiverType$Inner2$Inner3$1, init$, void, $GetAnnotatedReceiverType$Inner2$Inner3*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetAnnotatedReceiverType$Inner2$Inner3",
		"getAnonymousClass",
		"()Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Inner2", "GetAnnotatedReceiverType", "Inner2", $PUBLIC},
		{"GetAnnotatedReceiverType$Inner2$Inner3", "GetAnnotatedReceiverType$Inner2", "Inner3", $PUBLIC},
		{"GetAnnotatedReceiverType$Inner2$Inner3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedReceiverType$Inner2$Inner3$1",
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
		"GetAnnotatedReceiverType"
	};
	$loadClass(GetAnnotatedReceiverType$Inner2$Inner3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType$Inner2$Inner3$1);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$1::class$ = nullptr;