#include <GetAnnotatedReceiverType$Inner2$Inner3$Inner7.h>

#include <GetAnnotatedReceiverType$Inner2$Inner3.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Inner2$Inner3 = ::GetAnnotatedReceiverType$Inner2$Inner3;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Inner2$Inner3$Inner7_FieldInfo_[] = {
	{"this$2", "LGetAnnotatedReceiverType$Inner2$Inner3;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner2$Inner3$Inner7, this$2)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner2$Inner3$Inner7_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType$Inner2$Inner3;)V", nullptr, $PUBLIC, $method(static_cast<void(GetAnnotatedReceiverType$Inner2$Inner3$Inner7::*)($GetAnnotatedReceiverType$Inner2$Inner3*)>(&GetAnnotatedReceiverType$Inner2$Inner3$Inner7::init$))},
	{"innerMethod7", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner2$Inner3$Inner7_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner2", "GetAnnotatedReceiverType", "Inner2", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner2$Inner3", "GetAnnotatedReceiverType$Inner2", "Inner3", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner2$Inner3$Inner7", "GetAnnotatedReceiverType$Inner2$Inner3", "Inner7", $PUBLIC},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner2$Inner3$Inner7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedReceiverType$Inner2$Inner3$Inner7",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner2$Inner3$Inner7_FieldInfo_,
	_GetAnnotatedReceiverType$Inner2$Inner3$Inner7_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_GetAnnotatedReceiverType$Inner2$Inner3$Inner7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner2$Inner3$Inner7($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner2$Inner3$Inner7));
}

void GetAnnotatedReceiverType$Inner2$Inner3$Inner7::init$($GetAnnotatedReceiverType$Inner2$Inner3* this$2) {
	$set(this, this$2, this$2);
}

void GetAnnotatedReceiverType$Inner2$Inner3$Inner7::innerMethod7() {
}

GetAnnotatedReceiverType$Inner2$Inner3$Inner7::GetAnnotatedReceiverType$Inner2$Inner3$Inner7() {
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$Inner7::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner2$Inner3$Inner7, name, initialize, &_GetAnnotatedReceiverType$Inner2$Inner3$Inner7_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner2$Inner3$Inner7);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner2$Inner3$Inner7::class$ = nullptr;