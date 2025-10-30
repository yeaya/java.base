#include <GetAnnotatedReceiverType$Nested$NestedInner$1.h>

#include <GetAnnotatedReceiverType$Nested$NestedInner.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Nested$NestedInner = ::GetAnnotatedReceiverType$Nested$NestedInner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Nested$NestedInner$1_FieldInfo_[] = {
	{"this$1", "LGetAnnotatedReceiverType$Nested$NestedInner;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Nested$NestedInner$1, this$1)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Nested$NestedInner$1_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType$Nested$NestedInner;)V", nullptr, 0, $method(static_cast<void(GetAnnotatedReceiverType$Nested$NestedInner$1::*)($GetAnnotatedReceiverType$Nested$NestedInner*)>(&GetAnnotatedReceiverType$Nested$NestedInner$1::init$))},
	{}
};

$EnclosingMethodInfo _GetAnnotatedReceiverType$Nested$NestedInner$1_EnclosingMethodInfo_ = {
	"GetAnnotatedReceiverType$Nested$NestedInner",
	"getAnonymousClass",
	"()Ljava/lang/Class;"
};

$InnerClassInfo _GetAnnotatedReceiverType$Nested$NestedInner$1_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Nested", "GetAnnotatedReceiverType", "Nested", $PUBLIC | $STATIC},
	{"GetAnnotatedReceiverType$Nested$NestedInner", "GetAnnotatedReceiverType$Nested", "NestedInner", $PUBLIC},
	{"GetAnnotatedReceiverType$Nested$NestedInner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Nested$NestedInner$1_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedReceiverType$Nested$NestedInner$1",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Nested$NestedInner$1_FieldInfo_,
	_GetAnnotatedReceiverType$Nested$NestedInner$1_MethodInfo_,
	nullptr,
	&_GetAnnotatedReceiverType$Nested$NestedInner$1_EnclosingMethodInfo_,
	_GetAnnotatedReceiverType$Nested$NestedInner$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Nested$NestedInner$1($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Nested$NestedInner$1));
}

void GetAnnotatedReceiverType$Nested$NestedInner$1::init$($GetAnnotatedReceiverType$Nested$NestedInner* this$1) {
	$set(this, this$1, this$1);
}

GetAnnotatedReceiverType$Nested$NestedInner$1::GetAnnotatedReceiverType$Nested$NestedInner$1() {
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner$1::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Nested$NestedInner$1, name, initialize, &_GetAnnotatedReceiverType$Nested$NestedInner$1_ClassInfo_, allocate$GetAnnotatedReceiverType$Nested$NestedInner$1);
	return class$;
}

$Class* GetAnnotatedReceiverType$Nested$NestedInner$1::class$ = nullptr;