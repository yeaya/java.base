#include <GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal.h>

#include <GetAnnotatedReceiverType$Inner2$Inner3.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Inner2$Inner3 = ::GetAnnotatedReceiverType$Inner2$Inner3;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_FieldInfo_[] = {
	{"this$2", "LGetAnnotatedReceiverType$Inner2$Inner3;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal, this$2)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType$Inner2$Inner3;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal, init$, void, $GetAnnotatedReceiverType$Inner2$Inner3*)},
	{}
};

$EnclosingMethodInfo _GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_EnclosingMethodInfo_ = {
	"GetAnnotatedReceiverType$Inner2$Inner3",
	"getLocalClass",
	"()Ljava/lang/Class;"
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner2", "GetAnnotatedReceiverType", "Inner2", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner2$Inner3", "GetAnnotatedReceiverType$Inner2", "Inner3", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal", nullptr, "InnerLocal", 0},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_FieldInfo_,
	_GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_MethodInfo_,
	nullptr,
	&_GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_EnclosingMethodInfo_,
	_GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal));
}

void GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal::init$($GetAnnotatedReceiverType$Inner2$Inner3* this$2) {
	$set(this, this$2, this$2);
}

GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal::GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal() {
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal, name, initialize, &_GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal::class$ = nullptr;