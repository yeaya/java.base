#include <GetAnnotatedInterfaces$Clz.h>

#include <GetAnnotatedInterfaces.h>
#include <jcpp.h>

using $GetAnnotatedInterfaces = ::GetAnnotatedInterfaces;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetAnnotatedInterfaces$Clz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetAnnotatedInterfaces$Clz::*)()>(&GetAnnotatedInterfaces$Clz::init$))},
	{}
};

$InnerClassInfo _GetAnnotatedInterfaces$Clz_InnerClassesInfo_[] = {
	{"GetAnnotatedInterfaces$Clz", "GetAnnotatedInterfaces", "Clz", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GetAnnotatedInterfaces$Clz_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"GetAnnotatedInterfaces$Clz",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetAnnotatedInterfaces$Clz_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedInterfaces$Clz_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedInterfaces"
};

$Object* allocate$GetAnnotatedInterfaces$Clz($Class* clazz) {
	return $of($alloc(GetAnnotatedInterfaces$Clz));
}

void GetAnnotatedInterfaces$Clz::init$() {
}

GetAnnotatedInterfaces$Clz::GetAnnotatedInterfaces$Clz() {
}

$Class* GetAnnotatedInterfaces$Clz::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedInterfaces$Clz, name, initialize, &_GetAnnotatedInterfaces$Clz_ClassInfo_, allocate$GetAnnotatedInterfaces$Clz);
	return class$;
}

$Class* GetAnnotatedInterfaces$Clz::class$ = nullptr;