#include <GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal.h>
#include <GetAnnotatedReceiverType$Nested$NestedInner.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Nested$NestedInner = ::GetAnnotatedReceiverType$Nested$NestedInner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal::init$($GetAnnotatedReceiverType$Nested$NestedInner* this$1) {
	$set(this, this$1, this$1);
}

GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal::GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal() {
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LGetAnnotatedReceiverType$Nested$NestedInner;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetAnnotatedReceiverType$Nested$NestedInner;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal, init$, void, $GetAnnotatedReceiverType$Nested$NestedInner*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetAnnotatedReceiverType$Nested$NestedInner",
		"getLocalClass",
		"()Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Nested", "GetAnnotatedReceiverType", "Nested", $PUBLIC | $STATIC},
		{"GetAnnotatedReceiverType$Nested$NestedInner", "GetAnnotatedReceiverType$Nested", "NestedInner", $PUBLIC},
		{"GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal", nullptr, "NestedInnerLocal", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal",
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
	$loadClass(GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal::class$ = nullptr;