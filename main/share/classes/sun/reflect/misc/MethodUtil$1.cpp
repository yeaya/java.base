#include <sun/reflect/misc/MethodUtil$1.h>

#include <java/lang/reflect/Method.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace sun {
	namespace reflect {
		namespace misc {

$MethodInfo _MethodUtil$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MethodUtil$1::*)()>(&MethodUtil$1::init$))},
	{"run", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _MethodUtil$1_EnclosingMethodInfo_ = {
	"sun.reflect.misc.MethodUtil",
	"getTrampoline",
	"()Ljava/lang/reflect/Method;"
};

$InnerClassInfo _MethodUtil$1_InnerClassesInfo_[] = {
	{"sun.reflect.misc.MethodUtil$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodUtil$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.reflect.misc.MethodUtil$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	_MethodUtil$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Method;>;",
	&_MethodUtil$1_EnclosingMethodInfo_,
	_MethodUtil$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.misc.MethodUtil"
};

$Object* allocate$MethodUtil$1($Class* clazz) {
	return $of($alloc(MethodUtil$1));
}

void MethodUtil$1::init$() {
}

$Object* MethodUtil$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* t = $MethodUtil::getTrampolineClass();
	$load($Method);
	$load($ObjectArray);
	$var($ClassArray, types, $new($ClassArray, {
		$Method::class$,
		$Object::class$,
		$getClass($ObjectArray)
	}));
	$var($Method, b, $nc(t)->getDeclaredMethod("invoke"_s, types));
	$nc(b)->setAccessible(true);
	return $of(b);
}

MethodUtil$1::MethodUtil$1() {
}

$Class* MethodUtil$1::load$($String* name, bool initialize) {
	$loadClass(MethodUtil$1, name, initialize, &_MethodUtil$1_ClassInfo_, allocate$MethodUtil$1);
	return class$;
}

$Class* MethodUtil$1::class$ = nullptr;

		} // misc
	} // reflect
} // sun