#include <Exceptions4String$12.h>

#include <Exceptions4String.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Exceptions4String = ::Exceptions4String;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Exceptions4String$12_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4String$12::*)()>(&Exceptions4String$12::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4String$12_EnclosingMethodInfo_ = {
	"Exceptions4String",
	"byteArrayHiOffCount",
	"()V"
};

$InnerClassInfo _Exceptions4String$12_InnerClassesInfo_[] = {
	{"Exceptions4String$12", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4String$12_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4String$12",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4String$12_MethodInfo_,
	nullptr,
	&_Exceptions4String$12_EnclosingMethodInfo_,
	_Exceptions4String$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4String"
};

$Object* allocate$Exceptions4String$12($Class* clazz) {
	return $of($alloc(Exceptions4String$12));
}

void Exceptions4String$12::init$() {
}

void Exceptions4String$12::run() {
	$init($System);
	$init($Exceptions4String);
	$nc($System::out)->println($$new($String, $Exceptions4String::b, 0, 0, $nc($Exceptions4String::b)->length));
}

Exceptions4String$12::Exceptions4String$12() {
}

$Class* Exceptions4String$12::load$($String* name, bool initialize) {
	$loadClass(Exceptions4String$12, name, initialize, &_Exceptions4String$12_ClassInfo_, allocate$Exceptions4String$12);
	return class$;
}

$Class* Exceptions4String$12::class$ = nullptr;