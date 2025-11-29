#include <Exceptions4String$34.h>

#include <Exceptions4String.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;

$MethodInfo _Exceptions4String$34_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$34::*)()>(&Exceptions4String$34::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$34_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"getBytes",
	"()V"
};

$InnerClassInfo _Exceptions4String$34_InnerClassesInfo_[] = {
	{"Exceptions4String$34", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$34_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$34",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$34_MethodInfo_,
	nullptr,
	&_Exceptions4String$34_EnclosingMethodInfo_,
	_Exceptions4String$34_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$34($Class* clazz) {
	return $of($alloc(Exceptions4String$34));
}

void Exceptions4String$34::init$() {
}

void Exceptions4String$34::run() {
	"foo"_s->getBytes(($Charset*)nullptr);
}

Exceptions4String$34::Exceptions4String$34() {
}

$Class* Exceptions4String$34::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$34, name, initialize, &_Exceptions4String$34_ClassInfo_, allocate$Exceptions4String$34);
	return class$;
}

$Class* Exceptions4String$34::class$ = nullptr;