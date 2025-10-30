#include <GetAnnotatedReceiverType$Inner1.h>

#include <GetAnnotatedReceiverType.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType = ::GetAnnotatedReceiverType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Inner1_FieldInfo_[] = {
	{"this$0", "LGetAnnotatedReceiverType;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner1, this$0)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner1_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType;)V", nullptr, $PUBLIC, $method(static_cast<void(GetAnnotatedReceiverType$Inner1::*)($GetAnnotatedReceiverType*)>(&GetAnnotatedReceiverType$Inner1::init$))},
	{}
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner1_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner1", "GetAnnotatedReceiverType", "Inner1", 0},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner1_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedReceiverType$Inner1",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner1_FieldInfo_,
	_GetAnnotatedReceiverType$Inner1_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedReceiverType$Inner1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner1($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner1));
}

void GetAnnotatedReceiverType$Inner1::init$($GetAnnotatedReceiverType* this$0) {
	$set(this, this$0, this$0);
}

GetAnnotatedReceiverType$Inner1::GetAnnotatedReceiverType$Inner1() {
}

$Class* GetAnnotatedReceiverType$Inner1::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner1, name, initialize, &_GetAnnotatedReceiverType$Inner1_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner1);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner1::class$ = nullptr;