#include <sun/security/action/GetPropertyAction$1.h>

#include <java/util/Properties.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace action {

$MethodInfo _GetPropertyAction$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(GetPropertyAction$1, init$, void)},
	{"run", "()Ljava/util/Properties;", nullptr, $PUBLIC, $virtualMethod(GetPropertyAction$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _GetPropertyAction$1_EnclosingMethodInfo_ = {
	"sun.security.action.GetPropertyAction",
	"privilegedGetProperties",
	"()Ljava/util/Properties;"
};

$InnerClassInfo _GetPropertyAction$1_InnerClassesInfo_[] = {
	{"sun.security.action.GetPropertyAction$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetPropertyAction$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.action.GetPropertyAction$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_GetPropertyAction$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/Properties;>;",
	&_GetPropertyAction$1_EnclosingMethodInfo_,
	_GetPropertyAction$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.action.GetPropertyAction"
};

$Object* allocate$GetPropertyAction$1($Class* clazz) {
	return $of($alloc(GetPropertyAction$1));
}

void GetPropertyAction$1::init$() {
}

$Object* GetPropertyAction$1::run() {
	return $of($System::getProperties());
}

GetPropertyAction$1::GetPropertyAction$1() {
}

$Class* GetPropertyAction$1::load$($String* name, bool initialize) {
	$loadClass(GetPropertyAction$1, name, initialize, &_GetPropertyAction$1_ClassInfo_, allocate$GetPropertyAction$1);
	return class$;
}

$Class* GetPropertyAction$1::class$ = nullptr;

		} // action
	} // security
} // sun