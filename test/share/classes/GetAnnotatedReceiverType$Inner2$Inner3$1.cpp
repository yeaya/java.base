#include <GetAnnotatedReceiverType$Inner2$Inner3$1.h>

#include <GetAnnotatedReceiverType$Inner2$Inner3.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Inner2$Inner3 = ::GetAnnotatedReceiverType$Inner2$Inner3;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Inner2$Inner3$1_FieldInfo_[] = {
	{"this$2", "LGetAnnotatedReceiverType$Inner2$Inner3;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner2$Inner3$1, this$2)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner2$Inner3$1_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType$Inner2$Inner3;)V", nullptr, 0, $method(static_cast<void(GetAnnotatedReceiverType$Inner2$Inner3$1::*)($GetAnnotatedReceiverType$Inner2$Inner3*)>(&GetAnnotatedReceiverType$Inner2$Inner3$1::init$))},
	{}
};

$EnclosingMethodInfo _GetAnnotatedReceiverType$Inner2$Inner3$1_EnclosingMethodInfo_ = {
	"GetAnnotatedReceiverType$Inner2$Inner3",
	"getAnonymousClass",
	"()Ljava/lang/Class;"
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner2$Inner3$1_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner2", "GetAnnotatedReceiverType", "Inner2", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner2$Inner3", "GetAnnotatedReceiverType$Inner2", "Inner3", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner2$Inner3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner2$Inner3$1_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedReceiverType$Inner2$Inner3$1",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner2$Inner3$1_FieldInfo_,
	_GetAnnotatedReceiverType$Inner2$Inner3$1_MethodInfo_,
	nullptr,
	&_GetAnnotatedReceiverType$Inner2$Inner3$1_EnclosingMethodInfo_,
	_GetAnnotatedReceiverType$Inner2$Inner3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner2$Inner3$1($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner2$Inner3$1));
}

void GetAnnotatedReceiverType$Inner2$Inner3$1::init$($GetAnnotatedReceiverType$Inner2$Inner3* this$2) {
	$set(this, this$2, this$2);
}

GetAnnotatedReceiverType$Inner2$Inner3$1::GetAnnotatedReceiverType$Inner2$Inner3$1() {
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$1::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner2$Inner3$1, name, initialize, &_GetAnnotatedReceiverType$Inner2$Inner3$1_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner2$Inner3$1);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$1::class$ = nullptr;