#include <Truncate$4.h>

#include <Truncate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Truncate$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Truncate$4, init$, void)},
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Truncate$4, uncaughtException, void, $Thread*, $Throwable*)},
	{}
};

$EnclosingMethodInfo _Truncate$4_EnclosingMethodInfo_ = {
	"Truncate",
	"execute",
	"(Ljava/util/concurrent/Callable;)V"
};

$InnerClassInfo _Truncate$4_InnerClassesInfo_[] = {
	{"Truncate$4", nullptr, nullptr, 0},
	{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Truncate$4_ClassInfo_ = {
	$ACC_SUPER,
	"Truncate$4",
	"java.lang.Object",
	"java.lang.Thread$UncaughtExceptionHandler",
	nullptr,
	_Truncate$4_MethodInfo_,
	nullptr,
	&_Truncate$4_EnclosingMethodInfo_,
	_Truncate$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Truncate"
};

$Object* allocate$Truncate$4($Class* clazz) {
	return $of($alloc(Truncate$4));
}

void Truncate$4::init$() {
}

void Truncate$4::uncaughtException($Thread* t, $Throwable* e) {
	$nc(e)->printStackTrace();
}

Truncate$4::Truncate$4() {
}

$Class* Truncate$4::load$($String* name, bool initialize) {
	$loadClass(Truncate$4, name, initialize, &_Truncate$4_ClassInfo_, allocate$Truncate$4);
	return class$;
}

$Class* Truncate$4::class$ = nullptr;