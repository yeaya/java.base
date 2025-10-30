#include <GetAnnotatedInterfaces$2.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetAnnotatedInterfaces$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetAnnotatedInterfaces$2::*)()>(&GetAnnotatedInterfaces$2::init$))},
	{}
};

$EnclosingMethodInfo _GetAnnotatedInterfaces$2_EnclosingMethodInfo_ = {
	"GetAnnotatedInterfaces",
	nullptr,
	nullptr
};

$InnerClassInfo _GetAnnotatedInterfaces$2_InnerClassesInfo_[] = {
	{"GetAnnotatedInterfaces$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetAnnotatedInterfaces$2_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedInterfaces$2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetAnnotatedInterfaces$2_MethodInfo_,
	nullptr,
	&_GetAnnotatedInterfaces$2_EnclosingMethodInfo_,
	_GetAnnotatedInterfaces$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedInterfaces"
};

$Object* allocate$GetAnnotatedInterfaces$2($Class* clazz) {
	return $of($alloc(GetAnnotatedInterfaces$2));
}

void GetAnnotatedInterfaces$2::init$() {
}

GetAnnotatedInterfaces$2::GetAnnotatedInterfaces$2() {
}

$Class* GetAnnotatedInterfaces$2::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedInterfaces$2, name, initialize, &_GetAnnotatedInterfaces$2_ClassInfo_, allocate$GetAnnotatedInterfaces$2);
	return class$;
}

$Class* GetAnnotatedInterfaces$2::class$ = nullptr;