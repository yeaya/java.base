#include <java/lang/Terminator$1.h>

#include <java/lang/Shutdown.h>
#include <java/lang/Terminator.h>
#include <jdk/internal/misc/Signal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Shutdown = ::java::lang::Shutdown;
using $Signal = ::jdk::internal::misc::Signal;

namespace java {
	namespace lang {

$MethodInfo _Terminator$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Terminator$1::*)()>(&Terminator$1::init$))},
	{"handle", "(Ljdk/internal/misc/Signal;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Terminator$1_EnclosingMethodInfo_ = {
	"java.lang.Terminator",
	"setup",
	"()V"
};

$InnerClassInfo _Terminator$1_InnerClassesInfo_[] = {
	{"java.lang.Terminator$1", nullptr, nullptr, 0},
	{"jdk.internal.misc.Signal$Handler", "jdk.internal.misc.Signal", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Terminator$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Terminator$1",
	"java.lang.Object",
	"jdk.internal.misc.Signal$Handler",
	nullptr,
	_Terminator$1_MethodInfo_,
	nullptr,
	&_Terminator$1_EnclosingMethodInfo_,
	_Terminator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Terminator"
};

$Object* allocate$Terminator$1($Class* clazz) {
	return $of($alloc(Terminator$1));
}

void Terminator$1::init$() {
}

void Terminator$1::handle($Signal* sig) {
	$Shutdown::exit($nc(sig)->getNumber() + 128);
}

Terminator$1::Terminator$1() {
}

$Class* Terminator$1::load$($String* name, bool initialize) {
	$loadClass(Terminator$1, name, initialize, &_Terminator$1_ClassInfo_, allocate$Terminator$1);
	return class$;
}

$Class* Terminator$1::class$ = nullptr;

	} // lang
} // java