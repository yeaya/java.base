#include <CheckProvider.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;

void CheckProvider::init$() {
}

void CheckProvider::main($StringArray* args) {
	$useLocalObjectStack();
	$Class* c = $$nc($AsynchronousChannelProvider::provider())->getClass();
	$var($String, expected, $nc(args)->get(0));
	$var($String, actual, c->getName());
	if (!$nc(actual)->equals(expected)) {
		$throwNew($RuntimeException, $$str({"Provider is of type \'"_s, actual, "\', expected \'"_s, expected, "\'"_s}));
	}
}

CheckProvider::CheckProvider() {
}

$Class* CheckProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CheckProvider, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CheckProvider, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CheckProvider",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CheckProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckProvider);
	});
	return class$;
}

$Class* CheckProvider::class$ = nullptr;