#include <GetAnnotatedSuperclass$3.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetAnnotatedSuperclass$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetAnnotatedSuperclass$3::*)()>(&GetAnnotatedSuperclass$3::init$))},
	{}
};

$EnclosingMethodInfo _GetAnnotatedSuperclass$3_EnclosingMethodInfo_ = {
	"GetAnnotatedSuperclass",
	nullptr,
	nullptr
};

$InnerClassInfo _GetAnnotatedSuperclass$3_InnerClassesInfo_[] = {
	{"GetAnnotatedSuperclass$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetAnnotatedSuperclass$3_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedSuperclass$3",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetAnnotatedSuperclass$3_MethodInfo_,
	nullptr,
	&_GetAnnotatedSuperclass$3_EnclosingMethodInfo_,
	_GetAnnotatedSuperclass$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedSuperclass"
};

$Object* allocate$GetAnnotatedSuperclass$3($Class* clazz) {
	return $of($alloc(GetAnnotatedSuperclass$3));
}

void GetAnnotatedSuperclass$3::init$() {
}

GetAnnotatedSuperclass$3::GetAnnotatedSuperclass$3() {
}

$Class* GetAnnotatedSuperclass$3::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedSuperclass$3, name, initialize, &_GetAnnotatedSuperclass$3_ClassInfo_, allocate$GetAnnotatedSuperclass$3);
	return class$;
}

$Class* GetAnnotatedSuperclass$3::class$ = nullptr;