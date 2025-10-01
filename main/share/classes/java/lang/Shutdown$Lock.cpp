#include <java/lang/Shutdown$Lock.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Shutdown.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Shutdown = ::java::lang::Shutdown;

namespace java {
	namespace lang {

$MethodInfo _Shutdown$Lock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Shutdown$Lock::*)()>(&Shutdown$Lock::init$))},
	{}
};

$InnerClassInfo _Shutdown$Lock_InnerClassesInfo_[] = {
	{"java.lang.Shutdown$Lock", "java.lang.Shutdown", "Lock", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Shutdown$Lock_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Shutdown$Lock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Shutdown$Lock_MethodInfo_,
	nullptr,
	nullptr,
	_Shutdown$Lock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Shutdown"
};

$Object* allocate$Shutdown$Lock($Class* clazz) {
	return $of($alloc(Shutdown$Lock));
}

void Shutdown$Lock::init$() {
}

Shutdown$Lock::Shutdown$Lock() {
}

$Class* Shutdown$Lock::load$($String* name, bool initialize) {
	$loadClass(Shutdown$Lock, name, initialize, &_Shutdown$Lock_ClassInfo_, allocate$Shutdown$Lock);
	return class$;
}

$Class* Shutdown$Lock::class$ = nullptr;

	} // lang
} // java