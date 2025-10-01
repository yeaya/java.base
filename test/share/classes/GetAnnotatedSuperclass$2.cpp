#include <GetAnnotatedSuperclass$2.h>

#include <GetAnnotatedSuperclass$Clz.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GetAnnotatedSuperclass$Clz = ::GetAnnotatedSuperclass$Clz;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetAnnotatedSuperclass$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetAnnotatedSuperclass$2::*)()>(&GetAnnotatedSuperclass$2::init$))},
	{}
};

$EnclosingMethodInfo _GetAnnotatedSuperclass$2_EnclosingMethodInfo_ = {
	"GetAnnotatedSuperclass",
	nullptr,
	nullptr
};

$InnerClassInfo _GetAnnotatedSuperclass$2_InnerClassesInfo_[] = {
	{"GetAnnotatedSuperclass$2", nullptr, nullptr, 0},
	{"GetAnnotatedSuperclass$Clz", "GetAnnotatedSuperclass", "Clz", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GetAnnotatedSuperclass$2_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedSuperclass$2",
	"GetAnnotatedSuperclass$Clz",
	nullptr,
	nullptr,
	_GetAnnotatedSuperclass$2_MethodInfo_,
	nullptr,
	&_GetAnnotatedSuperclass$2_EnclosingMethodInfo_,
	_GetAnnotatedSuperclass$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedSuperclass"
};

$Object* allocate$GetAnnotatedSuperclass$2($Class* clazz) {
	return $of($alloc(GetAnnotatedSuperclass$2));
}

void GetAnnotatedSuperclass$2::init$() {
	$GetAnnotatedSuperclass$Clz::init$();
}

GetAnnotatedSuperclass$2::GetAnnotatedSuperclass$2() {
}

$Class* GetAnnotatedSuperclass$2::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedSuperclass$2, name, initialize, &_GetAnnotatedSuperclass$2_ClassInfo_, allocate$GetAnnotatedSuperclass$2);
	return class$;
}

$Class* GetAnnotatedSuperclass$2::class$ = nullptr;