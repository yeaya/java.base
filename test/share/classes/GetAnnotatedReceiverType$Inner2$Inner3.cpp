#include <GetAnnotatedReceiverType$Inner2$Inner3.h>
#include <GetAnnotatedReceiverType$Inner2$Inner3$1.h>
#include <GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal.h>
#include <GetAnnotatedReceiverType$Inner2.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Inner2 = ::GetAnnotatedReceiverType$Inner2;
using $GetAnnotatedReceiverType$Inner2$Inner3$1 = ::GetAnnotatedReceiverType$Inner2$Inner3$1;
using $GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal = ::GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedReceiverType$Inner2$Inner3::init$($GetAnnotatedReceiverType$Inner2* this$1) {
	$set(this, this$1, this$1);
}

void GetAnnotatedReceiverType$Inner2$Inner3::innerMethod3() {
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3::getLocalClass() {
	{
	}
	$load($GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal);
	return $GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal::class$;
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3::getAnonymousClass() {
	return $$new($GetAnnotatedReceiverType$Inner2$Inner3$1, this)->getClass();
}

GetAnnotatedReceiverType$Inner2$Inner3::GetAnnotatedReceiverType$Inner2$Inner3() {
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LGetAnnotatedReceiverType$Inner2;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner2$Inner3, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetAnnotatedReceiverType$Inner2;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Inner2$Inner3, init$, void, $GetAnnotatedReceiverType$Inner2*)},
		{"getAnonymousClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(GetAnnotatedReceiverType$Inner2$Inner3, getAnonymousClass, $Class*)},
		{"getLocalClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(GetAnnotatedReceiverType$Inner2$Inner3, getLocalClass, $Class*)},
		{"innerMethod3", "()V", nullptr, $PUBLIC, $virtualMethod(GetAnnotatedReceiverType$Inner2$Inner3, innerMethod3, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Inner2", "GetAnnotatedReceiverType", "Inner2", $PUBLIC},
		{"GetAnnotatedReceiverType$Inner2$Inner3", "GetAnnotatedReceiverType$Inner2", "Inner3", $PUBLIC},
		{"GetAnnotatedReceiverType$Inner2$Inner3$Inner7", "GetAnnotatedReceiverType$Inner2$Inner3", "Inner7", $PUBLIC},
		{"GetAnnotatedReceiverType$Inner2$Inner3$1", nullptr, nullptr, 0},
		{"GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal", nullptr, "InnerLocal", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetAnnotatedReceiverType$Inner2$Inner3",
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
	$loadClass(GetAnnotatedReceiverType$Inner2$Inner3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType$Inner2$Inner3);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3::class$ = nullptr;