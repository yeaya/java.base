#include <sun/nio/ch/ExtendedSocketOption$1.h>

#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _ExtendedSocketOption$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ExtendedSocketOption$1::*)()>(&ExtendedSocketOption$1::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<Ljava/lang/Boolean;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ExtendedSocketOption$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.ExtendedSocketOption",
	nullptr,
	nullptr
};

$InnerClassInfo _ExtendedSocketOption$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.ExtendedSocketOption$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExtendedSocketOption$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.ExtendedSocketOption$1",
	"java.lang.Object",
	"java.net.SocketOption",
	nullptr,
	_ExtendedSocketOption$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/net/SocketOption<Ljava/lang/Boolean;>;",
	&_ExtendedSocketOption$1_EnclosingMethodInfo_,
	_ExtendedSocketOption$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.ExtendedSocketOption"
};

$Object* allocate$ExtendedSocketOption$1($Class* clazz) {
	return $of($alloc(ExtendedSocketOption$1));
}

void ExtendedSocketOption$1::init$() {
}

$String* ExtendedSocketOption$1::name() {
	return "SO_OOBINLINE"_s;
}

$Class* ExtendedSocketOption$1::type() {
	$load($Boolean);
	return $Boolean::class$;
}

$String* ExtendedSocketOption$1::toString() {
	return name();
}

ExtendedSocketOption$1::ExtendedSocketOption$1() {
}

$Class* ExtendedSocketOption$1::load$($String* name, bool initialize) {
	$loadClass(ExtendedSocketOption$1, name, initialize, &_ExtendedSocketOption$1_ClassInfo_, allocate$ExtendedSocketOption$1);
	return class$;
}

$Class* ExtendedSocketOption$1::class$ = nullptr;

		} // ch
	} // nio
} // sun