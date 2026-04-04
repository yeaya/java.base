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

$SocketOption* ExtendedSocketOption::SO_OOBINLINE = nullptr;

void ExtendedSocketOption::init$() {
}

void ExtendedSocketOption::clinit$($Class* clazz) {
	$assignStatic(ExtendedSocketOption::SO_OOBINLINE, $new($ExtendedSocketOption$1));
}

ExtendedSocketOption::ExtendedSocketOption() {
}

$Class* ExtendedSocketOption::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SO_OOBINLINE", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(ExtendedSocketOption, SO_OOBINLINE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExtendedSocketOption, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.ExtendedSocketOption$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.ExtendedSocketOption",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.ch.ExtendedSocketOption$1"
	};
	$loadClass(ExtendedSocketOption, name, initialize, &classInfo$$, ExtendedSocketOption::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedSocketOption);
	});
	return class$;
}

$Class* ExtendedSocketOption::class$ = nullptr;

		} // ch
	} // nio
} // sun