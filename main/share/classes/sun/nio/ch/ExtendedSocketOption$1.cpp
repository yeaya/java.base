#include <sun/nio/ch/ExtendedSocketOption$1.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

void ExtendedSocketOption$1::init$() {
}

$String* ExtendedSocketOption$1::name() {
	return "SO_OOBINLINE"_s;
}

$Class* ExtendedSocketOption$1::type() {
	return $Boolean::class$;
}

$String* ExtendedSocketOption$1::toString() {
	return name();
}

ExtendedSocketOption$1::ExtendedSocketOption$1() {
}

$Class* ExtendedSocketOption$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ExtendedSocketOption$1, init$, void)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExtendedSocketOption$1, name, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExtendedSocketOption$1, toString, $String*)},
		{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<Ljava/lang/Boolean;>;", $PUBLIC, $virtualMethod(ExtendedSocketOption$1, type, $Class*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.ExtendedSocketOption",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.ExtendedSocketOption$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.ExtendedSocketOption$1",
		"java.lang.Object",
		"java.net.SocketOption",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/net/SocketOption<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.ExtendedSocketOption"
	};
	$loadClass(ExtendedSocketOption$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedSocketOption$1);
	});
	return class$;
}

$Class* ExtendedSocketOption$1::class$ = nullptr;

		} // ch
	} // nio
} // sun