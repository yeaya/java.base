#include <NullThreadName$1.h>

#include <NullThreadName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _NullThreadName$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NullThreadName$1::*)()>(&NullThreadName$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NullThreadName$1_EnclosingMethodInfo_ = {
	"NullThreadName",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _NullThreadName$1_InnerClassesInfo_[] = {
	{"NullThreadName$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NullThreadName$1_ClassInfo_ = {
	$ACC_SUPER,
	"NullThreadName$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NullThreadName$1_MethodInfo_,
	nullptr,
	&_NullThreadName$1_EnclosingMethodInfo_,
	_NullThreadName$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NullThreadName"
};

$Object* allocate$NullThreadName$1($Class* clazz) {
	return $of($alloc(NullThreadName$1));
}

void NullThreadName$1::init$() {
}

void NullThreadName$1::run() {
}

NullThreadName$1::NullThreadName$1() {
}

$Class* NullThreadName$1::load$($String* name, bool initialize) {
	$loadClass(NullThreadName$1, name, initialize, &_NullThreadName$1_ClassInfo_, allocate$NullThreadName$1);
	return class$;
}

$Class* NullThreadName$1::class$ = nullptr;