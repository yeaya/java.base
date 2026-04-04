#include <sun/nio/ch/Net$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

void Net$1::init$() {
}

$String* Net$1::name() {
	return "UNSPEC"_s;
}

Net$1::Net$1() {
}

$Class* Net$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Net$1, init$, void)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Net$1, name, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.Net",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Net$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Net$1",
		"java.lang.Object",
		"java.net.ProtocolFamily",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Net"
	};
	$loadClass(Net$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Net$1);
	});
	return class$;
}

$Class* Net$1::class$ = nullptr;

		} // ch
	} // nio
} // sun