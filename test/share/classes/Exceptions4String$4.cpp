#include <Exceptions4String$4.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$4::*)()>(&Exceptions4String$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$4_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"charArray",
	"()V"
};

$InnerClassInfo _Exceptions4String$4_InnerClassesInfo_[] = {
	{"Exceptions4String$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$4_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$4_MethodInfo_,
	nullptr,
	&_Exceptions4String$4_EnclosingMethodInfo_,
	_Exceptions4String$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$4($Class* clazz) {
	return $of($alloc(Exceptions4String$4));
}

void Exceptions4String$4::init$() {
}

void Exceptions4String$4::run() {
	$new($String, $("Duke says \"Hi!\""_s->toCharArray()));
}

Exceptions4String$4::Exceptions4String$4() {
}

$Class* Exceptions4String$4::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$4, name, initialize, &_Exceptions4String$4_ClassInfo_, allocate$Exceptions4String$4);
	return class$;
}

$Class* Exceptions4String$4::class$ = nullptr;