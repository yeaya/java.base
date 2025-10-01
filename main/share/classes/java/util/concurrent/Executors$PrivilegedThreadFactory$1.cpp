#include <java/util/concurrent/Executors$PrivilegedThreadFactory$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/Executors$PrivilegedThreadFactory$1$1.h>
#include <java/util/concurrent/Executors$PrivilegedThreadFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Executors$PrivilegedThreadFactory = ::java::util::concurrent::Executors$PrivilegedThreadFactory;
using $Executors$PrivilegedThreadFactory$1$1 = ::java::util::concurrent::Executors$PrivilegedThreadFactory$1$1;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$PrivilegedThreadFactory$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/Executors$PrivilegedThreadFactory;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedThreadFactory$1, this$0)},
	{"val$r", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedThreadFactory$1, val$r)},
	{}
};

$MethodInfo _Executors$PrivilegedThreadFactory$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executors$PrivilegedThreadFactory;Ljava/lang/Runnable;)V", "()V", 0, $method(static_cast<void(Executors$PrivilegedThreadFactory$1::*)($Executors$PrivilegedThreadFactory*,$Runnable*)>(&Executors$PrivilegedThreadFactory$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Executors$PrivilegedThreadFactory$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.Executors$PrivilegedThreadFactory",
	"newThread",
	"(Ljava/lang/Runnable;)Ljava/lang/Thread;"
};

$InnerClassInfo _Executors$PrivilegedThreadFactory$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$PrivilegedThreadFactory", "java.util.concurrent.Executors", "PrivilegedThreadFactory", $PRIVATE | $STATIC},
	{"java.util.concurrent.Executors$PrivilegedThreadFactory$1", nullptr, nullptr, 0},
	{"java.util.concurrent.Executors$PrivilegedThreadFactory$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Executors$PrivilegedThreadFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$PrivilegedThreadFactory$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Executors$PrivilegedThreadFactory$1_FieldInfo_,
	_Executors$PrivilegedThreadFactory$1_MethodInfo_,
	nullptr,
	&_Executors$PrivilegedThreadFactory$1_EnclosingMethodInfo_,
	_Executors$PrivilegedThreadFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$PrivilegedThreadFactory$1($Class* clazz) {
	return $of($alloc(Executors$PrivilegedThreadFactory$1));
}

void Executors$PrivilegedThreadFactory$1::init$($Executors$PrivilegedThreadFactory* this$0, $Runnable* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$r, val$r);
}

void Executors$PrivilegedThreadFactory$1::run() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Executors$PrivilegedThreadFactory$1$1, this)), this->this$0->acc);
}

Executors$PrivilegedThreadFactory$1::Executors$PrivilegedThreadFactory$1() {
}

$Class* Executors$PrivilegedThreadFactory$1::load$($String* name, bool initialize) {
	$loadClass(Executors$PrivilegedThreadFactory$1, name, initialize, &_Executors$PrivilegedThreadFactory$1_ClassInfo_, allocate$Executors$PrivilegedThreadFactory$1);
	return class$;
}

$Class* Executors$PrivilegedThreadFactory$1::class$ = nullptr;

		} // concurrent
	} // util
} // java