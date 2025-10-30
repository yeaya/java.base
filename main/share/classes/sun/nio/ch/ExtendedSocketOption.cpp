#include <sun/nio/ch/ExtendedSocketOption.h>

#include <java/net/SocketOption.h>
#include <sun/nio/ch/ExtendedSocketOption$1.h>
#include <jcpp.h>

#undef SO_OOBINLINE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;
using $ExtendedSocketOption$1 = ::sun::nio::ch::ExtendedSocketOption$1;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _ExtendedSocketOption_FieldInfo_[] = {
	{"SO_OOBINLINE", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(ExtendedSocketOption, SO_OOBINLINE)},
	{}
};

$MethodInfo _ExtendedSocketOption_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedSocketOption::*)()>(&ExtendedSocketOption::init$))},
	{}
};

$InnerClassInfo _ExtendedSocketOption_InnerClassesInfo_[] = {
	{"sun.nio.ch.ExtendedSocketOption$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExtendedSocketOption_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.ExtendedSocketOption",
	"java.lang.Object",
	nullptr,
	_ExtendedSocketOption_FieldInfo_,
	_ExtendedSocketOption_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedSocketOption_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.ExtendedSocketOption$1"
};

$Object* allocate$ExtendedSocketOption($Class* clazz) {
	return $of($alloc(ExtendedSocketOption));
}

$SocketOption* ExtendedSocketOption::SO_OOBINLINE = nullptr;

void ExtendedSocketOption::init$() {
}

void clinit$ExtendedSocketOption($Class* class$) {
	$assignStatic(ExtendedSocketOption::SO_OOBINLINE, $new($ExtendedSocketOption$1));
}

ExtendedSocketOption::ExtendedSocketOption() {
}

$Class* ExtendedSocketOption::load$($String* name, bool initialize) {
	$loadClass(ExtendedSocketOption, name, initialize, &_ExtendedSocketOption_ClassInfo_, clinit$ExtendedSocketOption, allocate$ExtendedSocketOption);
	return class$;
}

$Class* ExtendedSocketOption::class$ = nullptr;

		} // ch
	} // nio
} // sun