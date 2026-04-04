#include <GetAnnotatedReceiverType$Inner2$Inner3$Inner7.h>
#include <GetAnnotatedReceiverType$Inner2$Inner3.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Inner2$Inner3 = ::GetAnnotatedReceiverType$Inner2$Inner3;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedReceiverType$Inner2$Inner3$Inner7::init$($GetAnnotatedReceiverType$Inner2$Inner3* this$2) {
	$set(this, this$2, this$2);
}

void GetAnnotatedReceiverType$Inner2$Inner3$Inner7::innerMethod7() {
}

GetAnnotatedReceiverType$Inner2$Inner3$Inner7::GetAnnotatedReceiverType$Inner2$Inner3$Inner7() {
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$Inner7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$2", "LGetAnnotatedReceiverType$Inner2$Inner3;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner2$Inner3$Inner7, this$2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetAnnotatedReceiverType$Inner2$Inner3;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Inner2$Inner3$Inner7, init$, void, $GetAnnotatedReceiverType$Inner2$Inner3*)},
		{"innerMethod7", "()V", nullptr, $PUBLIC, $virtualMethod(GetAnnotatedReceiverType$Inner2$Inner3$Inner7, innerMethod7, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Inner2", "GetAnnotatedReceiverType", "Inner2", $PUBLIC},
		{"GetAnnotatedReceiverType$Inner2$Inner3", "GetAnnotatedReceiverType$Inner2", "Inner3", $PUBLIC},
		{"GetAnnotatedReceiverType$Inner2$Inner3$Inner7", "GetAnnotatedReceiverType$Inner2$Inner3", "Inner7", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetAnnotatedReceiverType$Inner2$Inner3$Inner7",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetAnnotatedReceiverType"
	};
	$loadClass(GetAnnotatedReceiverType$Inner2$Inner3$Inner7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType$Inner2$Inner3$Inner7);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$Inner7::class$ = nullptr;