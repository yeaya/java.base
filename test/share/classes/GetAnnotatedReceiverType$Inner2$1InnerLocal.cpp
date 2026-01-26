#include <GetAnnotatedReceiverType$Inner2$1InnerLocal.h>

#include <GetAnnotatedReceiverType$Inner2.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Inner2 = ::GetAnnotatedReceiverType$Inner2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Inner2$1InnerLocal_FieldInfo_[] = {
	{"this$1", "LGetAnnotatedReceiverType$Inner2;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner2$1InnerLocal, this$1)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner2$1InnerLocal_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType$Inner2;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Inner2$1InnerLocal, init$, void, $GetAnnotatedReceiverType$Inner2*)},
	{}
};

$EnclosingMethodInfo _GetAnnotatedReceiverType$Inner2$1InnerLocal_EnclosingMethodInfo_ = {
	"GetAnnotatedReceiverType$Inner2",
	"getLocalClass",
	"()Ljava/lang/Class;"
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner2$1InnerLocal_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner2", "GetAnnotatedReceiverType", "Inner2", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner2$1InnerLocal", nullptr, "InnerLocal", 0},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner2$1InnerLocal_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedReceiverType$Inner2$1InnerLocal",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner2$1InnerLocal_FieldInfo_,
	_GetAnnotatedReceiverType$Inner2$1InnerLocal_MethodInfo_,
	nullptr,
	&_GetAnnotatedReceiverType$Inner2$1InnerLocal_EnclosingMethodInfo_,
	_GetAnnotatedReceiverType$Inner2$1InnerLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner2$1InnerLocal($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner2$1InnerLocal));
}

void GetAnnotatedReceiverType$Inner2$1InnerLocal::init$($GetAnnotatedReceiverType$Inner2* this$1) {
	$set(this, this$1, this$1);
}

GetAnnotatedReceiverType$Inner2$1InnerLocal::GetAnnotatedReceiverType$Inner2$1InnerLocal() {
}

$Class* GetAnnotatedReceiverType$Inner2$1InnerLocal::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner2$1InnerLocal, name, initialize, &_GetAnnotatedReceiverType$Inner2$1InnerLocal_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner2$1InnerLocal);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner2$1InnerLocal::class$ = nullptr;