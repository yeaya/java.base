#include <NegativeBufferSize.h>
#include <MyStringWriter.h>
#include <jcpp.h>

using $MyStringWriter = ::MyStringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

void NegativeBufferSize::init$() {
}

void NegativeBufferSize::main($StringArray* argv) {
	try {
		$var($MyStringWriter, s, $new($MyStringWriter, -1));
	} catch ($IllegalArgumentException& e) {
		return;
	}
	$throwNew($Exception, "StringWriter constructor must not accept < 0  buffer sizes"_s);
}

NegativeBufferSize::NegativeBufferSize() {
}

$Class* NegativeBufferSize::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NegativeBufferSize, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NegativeBufferSize, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NegativeBufferSize",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NegativeBufferSize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NegativeBufferSize);
	});
	return class$;
}

$Class* NegativeBufferSize::class$ = nullptr;