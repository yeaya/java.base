#include <GetAnnotatedReceiverType$Inner4.h>

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

$FieldInfo _GetAnnotatedReceiverType$Inner4_FieldInfo_[] = {
	{"this$0", "LGetAnnotatedReceiverType;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner4, this$0)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner4_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType;)V", nullptr, $PUBLIC, $method(static_cast<void(GetAnnotatedReceiverType$Inner4::*)($GetAnnotatedReceiverType*)>(&GetAnnotatedReceiverType$Inner4::init$))},
	{"innerMethod4", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner4_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner4", "GetAnnotatedReceiverType", "Inner4", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner4$Inner5", "GetAnnotatedReceiverType$Inner4", "Inner5", $PUBLIC},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner4_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedReceiverType$Inner4",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner4_FieldInfo_,
	_GetAnnotatedReceiverType$Inner4_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_GetAnnotatedReceiverType$Inner4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner4($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner4));
}

void GetAnnotatedReceiverType$Inner4::init$($GetAnnotatedReceiverType* this$0) {
	$set(this, this$0, this$0);
}

void GetAnnotatedReceiverType$Inner4::innerMethod4() {
}

GetAnnotatedReceiverType$Inner4::GetAnnotatedReceiverType$Inner4() {
}

$Class* GetAnnotatedReceiverType$Inner4::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner4, name, initialize, &_GetAnnotatedReceiverType$Inner4_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner4);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner4::class$ = nullptr;