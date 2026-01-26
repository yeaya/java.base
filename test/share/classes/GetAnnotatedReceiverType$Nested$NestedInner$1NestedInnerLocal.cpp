#include <GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal.h>

#include <GetAnnotatedReceiverType$Nested$NestedInner.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Nested$NestedInner = ::GetAnnotatedReceiverType$Nested$NestedInner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_FieldInfo_[] = {
	{"this$1", "LGetAnnotatedReceiverType$Nested$NestedInner;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal, this$1)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType$Nested$NestedInner;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal, init$, void, $GetAnnotatedReceiverType$Nested$NestedInner*)},
	{}
};

$EnclosingMethodInfo _GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_EnclosingMethodInfo_ = {
	"GetAnnotatedReceiverType$Nested$NestedInner",
	"getLocalClass",
	"()Ljava/lang/Class;"
};

$InnerClassInfo _GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Nested", "GetAnnotatedReceiverType", "Nested", $PUBLIC | $STATIC},
	{"GetAnnotatedReceiverType$Nested$NestedInner", "GetAnnotatedReceiverType$Nested", "NestedInner", $PUBLIC},
	{"GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal", nullptr, "NestedInnerLocal", 0},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_FieldInfo_,
	_GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_MethodInfo_,
	nullptr,
	&_GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_EnclosingMethodInfo_,
	_GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal));
}

void GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal::init$($GetAnnotatedReceiverType$Nested$NestedInner* this$1) {
	$set(this, this$1, this$1);
}

GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal::GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal() {
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal, name, initialize, &_GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal_ClassInfo_, allocate$GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal);
	return class$;
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal::class$ = nullptr;