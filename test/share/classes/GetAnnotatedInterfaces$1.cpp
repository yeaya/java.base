#include <GetAnnotatedInterfaces$1.h>

#include <GetAnnotatedInterfaces$Clz.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GetAnnotatedInterfaces$Clz = ::GetAnnotatedInterfaces$Clz;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetAnnotatedInterfaces$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetAnnotatedInterfaces$1::*)()>(&GetAnnotatedInterfaces$1::init$))},
	{}
};

$EnclosingMethodInfo _GetAnnotatedInterfaces$1_EnclosingMethodInfo_ = {
	"GetAnnotatedInterfaces",
	nullptr,
	nullptr
};

$InnerClassInfo _GetAnnotatedInterfaces$1_InnerClassesInfo_[] = {
	{"GetAnnotatedInterfaces$1", nullptr, nullptr, 0},
	{"GetAnnotatedInterfaces$Clz", "GetAnnotatedInterfaces", "Clz", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GetAnnotatedInterfaces$1_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedInterfaces$1",
	"GetAnnotatedInterfaces$Clz",
	nullptr,
	nullptr,
	_GetAnnotatedInterfaces$1_MethodInfo_,
	nullptr,
	&_GetAnnotatedInterfaces$1_EnclosingMethodInfo_,
	_GetAnnotatedInterfaces$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedInterfaces"
};

$Object* allocate$GetAnnotatedInterfaces$1($Class* clazz) {
	return $of($alloc(GetAnnotatedInterfaces$1));
}

void GetAnnotatedInterfaces$1::init$() {
	$GetAnnotatedInterfaces$Clz::init$();
}

GetAnnotatedInterfaces$1::GetAnnotatedInterfaces$1() {
}

$Class* GetAnnotatedInterfaces$1::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedInterfaces$1, name, initialize, &_GetAnnotatedInterfaces$1_ClassInfo_, allocate$GetAnnotatedInterfaces$1);
	return class$;
}

$Class* GetAnnotatedInterfaces$1::class$ = nullptr;