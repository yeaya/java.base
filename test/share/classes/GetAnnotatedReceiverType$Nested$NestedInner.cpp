#include <GetAnnotatedReceiverType$Nested$NestedInner.h>

#include <GetAnnotatedReceiverType$Nested$NestedInner$1.h>
#include <GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal.h>
#include <GetAnnotatedReceiverType$Nested.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Nested = ::GetAnnotatedReceiverType$Nested;
using $GetAnnotatedReceiverType$Nested$NestedInner$1 = ::GetAnnotatedReceiverType$Nested$NestedInner$1;
using $GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal = ::GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Nested$NestedInner_FieldInfo_[] = {
	{"this$0", "LGetAnnotatedReceiverType$Nested;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Nested$NestedInner, this$0)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Nested$NestedInner_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType$Nested;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Nested$NestedInner, init$, void, $GetAnnotatedReceiverType$Nested*)},
	{"getAnonymousClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(GetAnnotatedReceiverType$Nested$NestedInner, getAnonymousClass, $Class*)},
	{"getLocalClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(GetAnnotatedReceiverType$Nested$NestedInner, getLocalClass, $Class*)},
	{}
};

$InnerClassInfo _GetAnnotatedReceiverType$Nested$NestedInner_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Nested", "GetAnnotatedReceiverType", "Nested", $PUBLIC | $STATIC},
	{"GetAnnotatedReceiverType$Nested$NestedInner", "GetAnnotatedReceiverType$Nested", "NestedInner", $PUBLIC},
	{"GetAnnotatedReceiverType$Nested$NestedInner$1", nullptr, nullptr, 0},
	{"GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal", nullptr, "NestedInnerLocal", 0},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Nested$NestedInner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedReceiverType$Nested$NestedInner",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Nested$NestedInner_FieldInfo_,
	_GetAnnotatedReceiverType$Nested$NestedInner_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedReceiverType$Nested$NestedInner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Nested$NestedInner($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Nested$NestedInner));
}

void GetAnnotatedReceiverType$Nested$NestedInner::init$($GetAnnotatedReceiverType$Nested* this$0) {
	$set(this, this$0, this$0);
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner::getLocalClass() {
	{
	}
	$load($GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal);
	return $GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal::class$;
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner::getAnonymousClass() {
	return $of($$new($GetAnnotatedReceiverType$Nested$NestedInner$1, this))->getClass();
}

GetAnnotatedReceiverType$Nested$NestedInner::GetAnnotatedReceiverType$Nested$NestedInner() {
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Nested$NestedInner, name, initialize, &_GetAnnotatedReceiverType$Nested$NestedInner_ClassInfo_, allocate$GetAnnotatedReceiverType$Nested$NestedInner);
	return class$;
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner::class$ = nullptr;