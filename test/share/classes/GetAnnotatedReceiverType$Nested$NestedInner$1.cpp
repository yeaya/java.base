#include <GetAnnotatedReceiverType$Nested$NestedInner$1.h>
#include <GetAnnotatedReceiverType$Nested$NestedInner.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Nested$NestedInner = ::GetAnnotatedReceiverType$Nested$NestedInner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedReceiverType$Nested$NestedInner$1::init$($GetAnnotatedReceiverType$Nested$NestedInner* this$1) {
	$set(this, this$1, this$1);
}

GetAnnotatedReceiverType$Nested$NestedInner$1::GetAnnotatedReceiverType$Nested$NestedInner$1() {
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LGetAnnotatedReceiverType$Nested$NestedInner;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Nested$NestedInner$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetAnnotatedReceiverType$Nested$NestedInner;)V", nullptr, 0, $method(GetAnnotatedReceiverType$Nested$NestedInner$1, init$, void, $GetAnnotatedReceiverType$Nested$NestedInner*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetAnnotatedReceiverType$Nested$NestedInner",
		"getAnonymousClass",
		"()Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Nested", "GetAnnotatedReceiverType", "Nested", $PUBLIC | $STATIC},
		{"GetAnnotatedReceiverType$Nested$NestedInner", "GetAnnotatedReceiverType$Nested", "NestedInner", $PUBLIC},
		{"GetAnnotatedReceiverType$Nested$NestedInner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedReceiverType$Nested$NestedInner$1",
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
	$loadClass(GetAnnotatedReceiverType$Nested$NestedInner$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType$Nested$NestedInner$1);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner$1::class$ = nullptr;