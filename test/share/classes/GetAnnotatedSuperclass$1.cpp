#include <GetAnnotatedSuperclass$1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetAnnotatedSuperclass$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetAnnotatedSuperclass$1::*)()>(&GetAnnotatedSuperclass$1::init$))},
	{}
};

$EnclosingMethodInfo _GetAnnotatedSuperclass$1_EnclosingMethodInfo_ = {
	"GetAnnotatedSuperclass",
	nullptr,
	nullptr
};

$InnerClassInfo _GetAnnotatedSuperclass$1_InnerClassesInfo_[] = {
	{"GetAnnotatedSuperclass$1", nullptr, nullptr, 0},
	{"GetAnnotatedSuperclass$If", "GetAnnotatedSuperclass", "If", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GetAnnotatedSuperclass$1_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedSuperclass$1",
	"java.lang.Object",
	"GetAnnotatedSuperclass$If",
	nullptr,
	_GetAnnotatedSuperclass$1_MethodInfo_,
	nullptr,
	&_GetAnnotatedSuperclass$1_EnclosingMethodInfo_,
	_GetAnnotatedSuperclass$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedSuperclass"
};

$Object* allocate$GetAnnotatedSuperclass$1($Class* clazz) {
	return $of($alloc(GetAnnotatedSuperclass$1));
}

void GetAnnotatedSuperclass$1::init$() {
}

GetAnnotatedSuperclass$1::GetAnnotatedSuperclass$1() {
}

$Class* GetAnnotatedSuperclass$1::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedSuperclass$1, name, initialize, &_GetAnnotatedSuperclass$1_ClassInfo_, allocate$GetAnnotatedSuperclass$1);
	return class$;
}

$Class* GetAnnotatedSuperclass$1::class$ = nullptr;