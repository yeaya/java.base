#include <Available.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Available::init$() {
}

void Available::main($StringArray* args) {
	int32_t bytesAvailable = $nc($System::in)->available();
	if (bytesAvailable != 0) {
		$throwNew($RuntimeException, "System.in.available returned non-zero"_s);
	}
}

Available::Available() {
}

$Class* Available::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Available, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Available, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Available",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Available, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Available);
	});
	return class$;
}

$Class* Available::class$ = nullptr;