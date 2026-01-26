#include <GetAnnotatedSuperclass$Clz.h>

#include <GetAnnotatedSuperclass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetAnnotatedSuperclass$Clz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(GetAnnotatedSuperclass$Clz, init$, void)},
	{}
};

$InnerClassInfo _GetAnnotatedSuperclass$Clz_InnerClassesInfo_[] = {
	{"GetAnnotatedSuperclass$Clz", "GetAnnotatedSuperclass", "Clz", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GetAnnotatedSuperclass$Clz_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"GetAnnotatedSuperclass$Clz",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetAnnotatedSuperclass$Clz_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedSuperclass$Clz_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedSuperclass"
};

$Object* allocate$GetAnnotatedSuperclass$Clz($Class* clazz) {
	return $of($alloc(GetAnnotatedSuperclass$Clz));
}

void GetAnnotatedSuperclass$Clz::init$() {
}

GetAnnotatedSuperclass$Clz::GetAnnotatedSuperclass$Clz() {
}

$Class* GetAnnotatedSuperclass$Clz::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedSuperclass$Clz, name, initialize, &_GetAnnotatedSuperclass$Clz_ClassInfo_, allocate$GetAnnotatedSuperclass$Clz);
	return class$;
}

$Class* GetAnnotatedSuperclass$Clz::class$ = nullptr;