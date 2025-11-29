#include <HelperSlowToDie$1.h>

#include <HelperSlowToDie.h>
#include <jcpp.h>

using $HelperSlowToDie = ::HelperSlowToDie;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HelperSlowToDie$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HelperSlowToDie$1::*)()>(&HelperSlowToDie$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HelperSlowToDie$1_EnclosingMethodInfo_ = {
	"HelperSlowToDie",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HelperSlowToDie$1_InnerClassesInfo_[] = {
	{"HelperSlowToDie$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HelperSlowToDie$1_ClassInfo_ = {
	$ACC_SUPER,
	"HelperSlowToDie$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_HelperSlowToDie$1_MethodInfo_,
	nullptr,
	&_HelperSlowToDie$1_EnclosingMethodInfo_,
	_HelperSlowToDie$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HelperSlowToDie"
};

$Object* allocate$HelperSlowToDie$1($Class* clazz) {
	return $of($alloc(HelperSlowToDie$1));
}

void HelperSlowToDie$1::init$() {
}

void HelperSlowToDie$1::run() {
	$init($HelperSlowToDie);
	while (!$HelperSlowToDie::done) {
	}
}

HelperSlowToDie$1::HelperSlowToDie$1() {
}

$Class* HelperSlowToDie$1::load$($String* name, bool initialize) {
	$loadClass(HelperSlowToDie$1, name, initialize, &_HelperSlowToDie$1_ClassInfo_, allocate$HelperSlowToDie$1);
	return class$;
}

$Class* HelperSlowToDie$1::class$ = nullptr;