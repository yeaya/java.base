#include <Exceptions4String$44.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$44_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$44::*)()>(&Exceptions4String$44::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$44_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"indexOf",
	"()V"
};

$InnerClassInfo _Exceptions4String$44_InnerClassesInfo_[] = {
	{"Exceptions4String$44", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$44_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$44",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$44_MethodInfo_,
	nullptr,
	&_Exceptions4String$44_EnclosingMethodInfo_,
	_Exceptions4String$44_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$44($Class* clazz) {
	return $of($alloc(Exceptions4String$44));
}

void Exceptions4String$44::init$() {
}

void Exceptions4String$44::run() {
	"foo"_s->indexOf(($String*)nullptr, 1);
}

Exceptions4String$44::Exceptions4String$44() {
}

$Class* Exceptions4String$44::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$44, name, initialize, &_Exceptions4String$44_ClassInfo_, allocate$Exceptions4String$44);
	return class$;
}

$Class* Exceptions4String$44::class$ = nullptr;