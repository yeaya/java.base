#include <GetAnnotatedReceiverType$Inner2.h>

#include <GetAnnotatedReceiverType$Inner2$1.h>
#include <GetAnnotatedReceiverType$Inner2$1InnerLocal.h>
#include <GetAnnotatedReceiverType.h>
#include <jcpp.h>

using $GetAnnotatedReceiverType = ::GetAnnotatedReceiverType;
using $GetAnnotatedReceiverType$Inner2$1 = ::GetAnnotatedReceiverType$Inner2$1;
using $GetAnnotatedReceiverType$Inner2$1InnerLocal = ::GetAnnotatedReceiverType$Inner2$1InnerLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetAnnotatedReceiverType$Inner2_FieldInfo_[] = {
	{"this$0", "LGetAnnotatedReceiverType;", nullptr, $FINAL | $SYNTHETIC, $field(GetAnnotatedReceiverType$Inner2, this$0)},
	{}
};

$MethodInfo _GetAnnotatedReceiverType$Inner2_MethodInfo_[] = {
	{"<init>", "(LGetAnnotatedReceiverType;)V", nullptr, $PUBLIC, $method(static_cast<void(GetAnnotatedReceiverType$Inner2::*)($GetAnnotatedReceiverType*)>(&GetAnnotatedReceiverType$Inner2::init$))},
	{"getAnonymousClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getLocalClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"innerMethod2", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetAnnotatedReceiverType$Inner2_InnerClassesInfo_[] = {
	{"GetAnnotatedReceiverType$Inner2", "GetAnnotatedReceiverType", "Inner2", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner2$Inner3", "GetAnnotatedReceiverType$Inner2", "Inner3", $PUBLIC},
	{"GetAnnotatedReceiverType$Inner2$1", nullptr, nullptr, 0},
	{"GetAnnotatedReceiverType$Inner2$1InnerLocal", nullptr, "InnerLocal", 0},
	{}
};

$ClassInfo _GetAnnotatedReceiverType$Inner2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedReceiverType$Inner2",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedReceiverType$Inner2_FieldInfo_,
	_GetAnnotatedReceiverType$Inner2_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedReceiverType$Inner2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedReceiverType"
};

$Object* allocate$GetAnnotatedReceiverType$Inner2($Class* clazz) {
	return $of($alloc(GetAnnotatedReceiverType$Inner2));
}

void GetAnnotatedReceiverType$Inner2::init$($GetAnnotatedReceiverType* this$0) {
	$set(this, this$0, this$0);
}

void GetAnnotatedReceiverType$Inner2::innerMethod2() {
}

$Class* GetAnnotatedReceiverType$Inner2::getLocalClass() {
	{
	}
	$load($GetAnnotatedReceiverType$Inner2$1InnerLocal);
	return $GetAnnotatedReceiverType$Inner2$1InnerLocal::class$;
}

$Class* GetAnnotatedReceiverType$Inner2::getAnonymousClass() {
	return $of($$new($GetAnnotatedReceiverType$Inner2$1, this))->getClass();
}

GetAnnotatedReceiverType$Inner2::GetAnnotatedReceiverType$Inner2() {
}

$Class* GetAnnotatedReceiverType$Inner2::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedReceiverType$Inner2, name, initialize, &_GetAnnotatedReceiverType$Inner2_ClassInfo_, allocate$GetAnnotatedReceiverType$Inner2);
	return class$;
}

$Class* GetAnnotatedReceiverType$Inner2::class$ = nullptr;