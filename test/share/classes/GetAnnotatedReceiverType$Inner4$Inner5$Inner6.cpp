#include <GetAnnotatedReceiverType$Inner4$Inner5$Inner6.h>

#include <GetAnnotatedReceiverType$Inner4$Inner5.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType$Inner4$Inner5 = ::GetAnnotatedReceiverType$Inner4$Inner5;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Inner4$Inner5$Inner6_FieldInfo_[] = {
	{"this$2", "LGetAnnotatedReceiverType$Inner4$Inner5;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner4$Inner5$Inner6, this$2)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner4$Inner5$Inner6_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType$Inner4$Inner5;)V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Inner4$Inner5$Inner6, init$, void, $GetAnnotatedReceiverType$Inner4$Inner5*)},
	{}
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner4$Inner5$Inner6_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner4", "GetAnnotatedReceiverType", "Inner4", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner4$Inner5", "GetAnnotatedReceiverType$Inner4", "Inner5", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner4$Inner5$Inner6", "GetAnnotatedReceiverType$Inner4$Inner5", "Inner6", $PUBLIC},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner4$Inner5$Inner6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedReceiverType$Inner4$Inner5$Inner6",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner4$Inner5$Inner6_FieldInfo_,
	_GetAnnotatedReceiverType$Inner4$Inner5$Inner6_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedReceiverType$Inner4$Inner5$Inner6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner4$Inner5$Inner6($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner4$Inner5$Inner6));
}

void GetAnnotatedReceiverType$Inner4$Inner5$Inner6::init$($GetAnnotatedReceiverType$Inner4$Inner5* this$2) {
	$set(this, this$2, this$2);
}

GetAnnotatedReceiverType$Inner4$Inner5$Inner6::GetAnnotatedReceiverType$Inner4$Inner5$Inner6() {
}

$Class* GetAnnotatedReceiverType$Inner4$Inner5$Inner6::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner4$Inner5$Inner6, name, initialize, &_GetAnnotatedReceiverType$Inner4$Inner5$Inner6_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner4$Inner5$Inner6);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner4$Inner5$Inner6::class$ = nullptr;