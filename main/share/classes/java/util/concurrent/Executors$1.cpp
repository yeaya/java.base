#include <java/util/concurrent/Executors$1.h>

#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Callable = ::java::util::concurrent::Callable;
using $Executors = ::java::util::concurrent::Executors;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$1_FieldInfo_[] = {
	{"val$action", "Ljava/security/PrivilegedAction;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$1, val$action)},
	{}
};

$MethodInfo _Executors$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PrivilegedAction;)V", "()V", 0, $method(static_cast<void(Executors$1::*)($PrivilegedAction*)>(&Executors$1::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Executors$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.Executors",
	"callable",
	"(Ljava/security/PrivilegedAction;)Ljava/util/concurrent/Callable;"
};

$InnerClassInfo _Executors$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Executors$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Executors$1_FieldInfo_,
	_Executors$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Object;>;",
	&_Executors$1_EnclosingMethodInfo_,
	_Executors$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$1($Class* clazz) {
	return $of($alloc(Executors$1));
}

void Executors$1::init$($PrivilegedAction* val$action) {
	$set(this, val$action, val$action);
}

$Object* Executors$1::call() {
	return $of($nc(this->val$action)->run());
}

Executors$1::Executors$1() {
}

$Class* Executors$1::load$($String* name, bool initialize) {
	$loadClass(Executors$1, name, initialize, &_Executors$1_ClassInfo_, allocate$Executors$1);
	return class$;
}

$Class* Executors$1::class$ = nullptr;

		} // concurrent
	} // util
} // java