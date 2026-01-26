#include <Exceptions4String$7.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4String$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Exceptions4String$7, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$7, run, void)},
	{}
};

$EnclosingMethodInfo _Exceptions4String$7_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"charArrayOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$7_InnerClassesInfo_[] = {
	{"Exceptions4String$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$7_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$7",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$7_MethodInfo_,
	nullptr,
	&_Exceptions4String$7_EnclosingMethodInfo_,
	_Exceptions4String$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$7($Class* clazz) {
	return $of($alloc(Exceptions4String$7));
}

void Exceptions4String$7::init$() {
}

void Exceptions4String$7::run() {
	$new($String, ($chars*)nullptr, 1, 2);
}

Exceptions4String$7::Exceptions4String$7() {
}

$Class* Exceptions4String$7::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$7, name, initialize, &_Exceptions4String$7_ClassInfo_, allocate$Exceptions4String$7);
	return class$;
}

$Class* Exceptions4String$7::class$ = nullptr;