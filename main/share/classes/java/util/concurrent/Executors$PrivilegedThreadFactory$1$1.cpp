#include <java/util/concurrent/Executors$PrivilegedThreadFactory$1$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Executors$PrivilegedThreadFactory$1.h>
#include <java/util/concurrent/Executors$PrivilegedThreadFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Executors$PrivilegedThreadFactory = ::java::util::concurrent::Executors$PrivilegedThreadFactory;
using $Executors$PrivilegedThreadFactory$1 = ::java::util::concurrent::Executors$PrivilegedThreadFactory$1;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$PrivilegedThreadFactory$1$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/concurrent/Executors$PrivilegedThreadFactory$1;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedThreadFactory$1$1, this$1)},
	{}
};

$MethodInfo _Executors$PrivilegedThreadFactory$1$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executors$PrivilegedThreadFactory$1;)V", nullptr, 0, $method(static_cast<void(Executors$PrivilegedThreadFactory$1$1::*)($Executors$PrivilegedThreadFactory$1*)>(&Executors$PrivilegedThreadFactory$1$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Executors$PrivilegedThreadFactory$1$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.Executors$PrivilegedThreadFactory$1",
	"run",
	"()V"
};

$InnerClassInfo _Executors$PrivilegedThreadFactory$1$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$PrivilegedThreadFactory", "java.util.concurrent.Executors", "PrivilegedThreadFactory", $PRIVATE | $STATIC},
	{"java.util.concurrent.Executors$PrivilegedThreadFactory$1", nullptr, nullptr, 0},
	{"java.util.concurrent.Executors$PrivilegedThreadFactory$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Executors$PrivilegedThreadFactory$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$PrivilegedThreadFactory$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Executors$PrivilegedThreadFactory$1$1_FieldInfo_,
	_Executors$PrivilegedThreadFactory$1$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Executors$PrivilegedThreadFactory$1$1_EnclosingMethodInfo_,
	_Executors$PrivilegedThreadFactory$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$PrivilegedThreadFactory$1$1($Class* clazz) {
	return $of($alloc(Executors$PrivilegedThreadFactory$1$1));
}

void Executors$PrivilegedThreadFactory$1$1::init$($Executors$PrivilegedThreadFactory$1* this$1) {
	$set(this, this$1, this$1);
}

$Object* Executors$PrivilegedThreadFactory$1$1::run() {
	$($Thread::currentThread())->setContextClassLoader($nc(this->this$1->this$0)->ccl);
	$nc(this->this$1->val$r)->run();
	return $of(nullptr);
}

Executors$PrivilegedThreadFactory$1$1::Executors$PrivilegedThreadFactory$1$1() {
}

$Class* Executors$PrivilegedThreadFactory$1$1::load$($String* name, bool initialize) {
	$loadClass(Executors$PrivilegedThreadFactory$1$1, name, initialize, &_Executors$PrivilegedThreadFactory$1$1_ClassInfo_, allocate$Executors$PrivilegedThreadFactory$1$1);
	return class$;
}

$Class* Executors$PrivilegedThreadFactory$1$1::class$ = nullptr;

		} // concurrent
	} // util
} // java