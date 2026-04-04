#include <GetAnnotatedReceiverType$Inner4.h>
#include <GetAnnotatedReceiverType.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType = ::GetAnnotatedReceiverType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedReceiverType$Inner4::init$($GetAnnotatedReceiverType* this$0) {
	$set(this, this$0, this$0);
}

void GetAnnotatedReceiverType$Inner4::innerMethod4() {
}

GetAnnotatedReceiverType$Inner4::GetAnnotatedReceiverType$Inner4() {
}

$Class* GetAnnotatedReceiverType$Inner4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGetAnnotatedReceiverType;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetAnnotatedReceiverType;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Inner4, init$, void, $GetAnnotatedReceiverType*)},
		{"innerMethod4", "()V", nullptr, $PUBLIC, $virtualMethod(GetAnnotatedReceiverType$Inner4, innerMethod4, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Inner4", "GetAnnotatedReceiverType", "Inner4", $PUBLIC},
		{"GetAnnotatedReceiverType$Inner4$Inner5", "GetAnnotatedReceiverType$Inner4", "Inner5", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetAnnotatedReceiverType$Inner4",
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
	$loadClass(GetAnnotatedReceiverType$Inner4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType$Inner4);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner4::class$ = nullptr;