#include <GetAnnotatedReceiverType$Inner0.h>

#include <GetAnnotatedReceiverType.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType = ::GetAnnotatedReceiverType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Inner0_FieldInfo_[] = {
	{"this$0", "LGetAnnotatedReceiverType;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner0, this$0)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner0_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType;)V", nullptr, $PUBLIC, $method(static_cast<void(GetAnnotatedReceiverType$Inner0::*)($GetAnnotatedReceiverType*)>(&GetAnnotatedReceiverType$Inner0::init$))},
	{}
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner0_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner0", "GetAnnotatedReceiverType", "Inner0", 0},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner0_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedReceiverType$Inner0",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner0_FieldInfo_,
	_GetAnnotatedReceiverType$Inner0_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedReceiverType$Inner0_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner0($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner0));
}

void GetAnnotatedReceiverType$Inner0::init$($GetAnnotatedReceiverType* this$0) {
	$set(this, this$0, this$0);
}

GetAnnotatedReceiverType$Inner0::GetAnnotatedReceiverType$Inner0() {
}

$Class* GetAnnotatedReceiverType$Inner0::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner0, name, initialize, &_GetAnnotatedReceiverType$Inner0_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner0);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner0::class$ = nullptr;