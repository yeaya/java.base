#include <Exceptions4String$38.h>

#include <Exceptions4String.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$38_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$38::*)()>(&Exceptions4String$38::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$38_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"regionMatches",
	"()V"
};

$InnerClassInfo _Exceptions4String$38_InnerClassesInfo_[] = {
	{"Exceptions4String$38", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$38_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$38",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$38_MethodInfo_,
	nullptr,
	&_Exceptions4String$38_EnclosingMethodInfo_,
	_Exceptions4String$38_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$38($Class* clazz) {
	return $of($alloc(Exceptions4String$38));
}

void Exceptions4String$38::init$() {
}

void Exceptions4String$38::run() {
	"foo"_s->regionMatches(1, nullptr, 1, 1);
}

Exceptions4String$38::Exceptions4String$38() {
}

$Class* Exceptions4String$38::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$38, name, initialize, &_Exceptions4String$38_ClassInfo_, allocate$Exceptions4String$38);
	return class$;
}

$Class* Exceptions4String$38::class$ = nullptr;