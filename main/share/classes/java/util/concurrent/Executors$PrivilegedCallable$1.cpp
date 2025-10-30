#include <java/util/concurrent/Executors$PrivilegedCallable$1.h>

#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executors$PrivilegedCallable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Callable = ::java::util::concurrent::Callable;
using $Executors$PrivilegedCallable = ::java::util::concurrent::Executors$PrivilegedCallable;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$PrivilegedCallable$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/Executors$PrivilegedCallable;", nullptr, $FINAL | $SYNTHETIC, $field(Executors$PrivilegedCallable$1, this$0)},
	{}
};

$MethodInfo _Executors$PrivilegedCallable$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executors$PrivilegedCallable;)V", nullptr, 0, $method(static_cast<void(Executors$PrivilegedCallable$1::*)($Executors$PrivilegedCallable*)>(&Executors$PrivilegedCallable$1::init$))},
	{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Executors$PrivilegedCallable$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.Executors$PrivilegedCallable",
	"call",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _Executors$PrivilegedCallable$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$PrivilegedCallable", "java.util.concurrent.Executors", "PrivilegedCallable", $PRIVATE | $STATIC | $FINAL},
	{"java.util.concurrent.Executors$PrivilegedCallable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Executors$PrivilegedCallable$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$PrivilegedCallable$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Executors$PrivilegedCallable$1_FieldInfo_,
	_Executors$PrivilegedCallable$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<TT;>;",
	&_Executors$PrivilegedCallable$1_EnclosingMethodInfo_,
	_Executors$PrivilegedCallable$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$PrivilegedCallable$1($Class* clazz) {
	return $of($alloc(Executors$PrivilegedCallable$1));
}

void Executors$PrivilegedCallable$1::init$($Executors$PrivilegedCallable* this$0) {
	$set(this, this$0, this$0);
}

$Object* Executors$PrivilegedCallable$1::run() {
	return $of($nc(this->this$0->task)->call());
}

Executors$PrivilegedCallable$1::Executors$PrivilegedCallable$1() {
}

$Class* Executors$PrivilegedCallable$1::load$($String* name, bool initialize) {
	$loadClass(Executors$PrivilegedCallable$1, name, initialize, &_Executors$PrivilegedCallable$1_ClassInfo_, allocate$Executors$PrivilegedCallable$1);
	return class$;
}

$Class* Executors$PrivilegedCallable$1::class$ = nullptr;

		} // concurrent
	} // util
} // java