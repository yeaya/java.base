#include <java/lang/Terminator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Terminator$1.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Terminator$1 = ::java::lang::Terminator$1;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;

namespace java {
	namespace lang {

$FieldInfo _Terminator_FieldInfo_[] = {
	{"handler", "Ljdk/internal/misc/Signal$Handler;", nullptr, $PRIVATE | $STATIC, $staticField(Terminator, handler)},
	{}
};

$MethodInfo _Terminator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Terminator::*)()>(&Terminator::init$))},
	{"setup", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Terminator::setup))},
	{"teardown", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Terminator::teardown))},
	{}
};

$InnerClassInfo _Terminator_InnerClassesInfo_[] = {
	{"java.lang.Terminator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Terminator_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Terminator",
	"java.lang.Object",
	nullptr,
	_Terminator_FieldInfo_,
	_Terminator_MethodInfo_,
	nullptr,
	nullptr,
	_Terminator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.Terminator$1"
};

$Object* allocate$Terminator($Class* clazz) {
	return $of($alloc(Terminator));
}

$Signal$Handler* Terminator::handler = nullptr;

void Terminator::init$() {
}

void Terminator::setup() {
	$init(Terminator);
	$useLocalCurrentObjectStackCache();
	if (Terminator::handler != nullptr) {
		return;
	}
	$var($Signal$Handler, sh, $new($Terminator$1));
	$assignStatic(Terminator::handler, sh);
	try {
		$Signal::handle($$new($Signal, "HUP"_s), sh);
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	try {
		$Signal::handle($$new($Signal, "INT"_s), sh);
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	try {
		$Signal::handle($$new($Signal, "TERM"_s), sh);
	} catch ($IllegalArgumentException&) {
		$catch();
	}
}

void Terminator::teardown() {
	$init(Terminator);
}

void clinit$Terminator($Class* class$) {
	$assignStatic(Terminator::handler, nullptr);
}

Terminator::Terminator() {
}

$Class* Terminator::load$($String* name, bool initialize) {
	$loadClass(Terminator, name, initialize, &_Terminator_ClassInfo_, clinit$Terminator, allocate$Terminator);
	return class$;
}

$Class* Terminator::class$ = nullptr;

	} // lang
} // java