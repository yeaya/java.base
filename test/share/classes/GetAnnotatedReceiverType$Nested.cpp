#include <GetAnnotatedReceiverType$Nested.h>

#include <GetAnnotatedReceiverType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetAnnotatedReceiverType$Nested_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType$Nested, init$, void)},
	{}
};

$InnerClassInfo _GetAnnotatedReceiverType$Nested_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Nested", "GetAnnotatedReceiverType", "Nested", $PUBLIC | $STATIC},
	{"GetAnnotatedReceiverType$Nested$NestedInner", "GetAnnotatedReceiverType$Nested", "NestedInner", $PUBLIC},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Nested_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedReceiverType$Nested",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetAnnotatedReceiverType$Nested_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedReceiverType$Nested_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Nested($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Nested));
}

void GetAnnotatedReceiverType$Nested::init$() {
}

GetAnnotatedReceiverType$Nested::GetAnnotatedReceiverType$Nested() {
}

$Class* GetAnnotatedReceiverType$Nested::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Nested, name, initialize, &_GetAnnotatedReceiverType$Nested_ClassInfo_, allocate$GetAnnotatedReceiverType$Nested);
	return class$;
}

$Class* GetAnnotatedReceiverType$Nested::class$ = nullptr;