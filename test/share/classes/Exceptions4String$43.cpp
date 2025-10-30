#include <Exceptions4String$43.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$43_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$43::*)()>(&Exceptions4String$43::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$43_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"indexOf",
	"()V"
};

$InnerClassInfo _Exceptions4String$43_InnerClassesInfo_[] = {
	{"Exceptions4String$43", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$43_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$43",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$43_MethodInfo_,
	nullptr,
	&_Exceptions4String$43_EnclosingMethodInfo_,
	_Exceptions4String$43_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$43($Class* clazz) {
	return $of($alloc(Exceptions4String$43));
}

void Exceptions4String$43::init$() {
}

void Exceptions4String$43::run() {
	"foo"_s->indexOf(($String*)nullptr);
}

Exceptions4String$43::Exceptions4String$43() {
}

$Class* Exceptions4String$43::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$43, name, initialize, &_Exceptions4String$43_ClassInfo_, allocate$Exceptions4String$43);
	return class$;
}

$Class* Exceptions4String$43::class$ = nullptr;