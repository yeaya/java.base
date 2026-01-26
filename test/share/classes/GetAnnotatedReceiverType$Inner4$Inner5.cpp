#include <GetAnnotatedReceiverType$Inner4$Inner5.h>

#include <GetAnnotatedReceiverType$Inner4.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Inner4 = ::GetAnnotatedReceiverType$Inner4;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Inner4$Inner5_FieldInfo_[] = {
	{"this$1", "LGetAnnotatedReceiverType$Inner4;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner4$Inner5, this$1)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner4$Inner5_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType$Inner4;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Inner4$Inner5, init$, void, $GetAnnotatedReceiverType$Inner4*)},
	{"innerMethod5", "()V", nullptr, $PUBLIC, $virtualMethod(GetAnnotatedReceiverType$Inner4$Inner5, innerMethod5, void)},
	{}
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner4$Inner5_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner4", "GetAnnotatedReceiverType", "Inner4", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner4$Inner5", "GetAnnotatedReceiverType$Inner4", "Inner5", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner4$Inner5$Inner6", "GetAnnotatedReceiverType$Inner4$Inner5", "Inner6", $PUBLIC},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner4$Inner5_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedReceiverType$Inner4$Inner5",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner4$Inner5_FieldInfo_,
	_GetAnnotatedReceiverType$Inner4$Inner5_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedReceiverType$Inner4$Inner5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner4$Inner5($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner4$Inner5));
}

void GetAnnotatedReceiverType$Inner4$Inner5::init$($GetAnnotatedReceiverType$Inner4* this$1) {
	$set(this, this$1, this$1);
}

void GetAnnotatedReceiverType$Inner4$Inner5::innerMethod5() {
}

GetAnnotatedReceiverType$Inner4$Inner5::GetAnnotatedReceiverType$Inner4$Inner5() {
}

$Class* GetAnnotatedReceiverType$Inner4$Inner5::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner4$Inner5, name, initialize, &_GetAnnotatedReceiverType$Inner4$Inner5_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner4$Inner5);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner4$Inner5::class$ = nullptr;