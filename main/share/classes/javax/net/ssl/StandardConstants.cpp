#include <javax/net/ssl/StandardConstants.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef SNI_HOST_NAME

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace net {
		namespace ssl {

void StandardConstants::init$() {
	$throwNew($AssertionError, $of("No javax.net.ssl.StandardConstants instances for you!"_s));
}

StandardConstants::StandardConstants() {
}

$Class* StandardConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SNI_HOST_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StandardConstants, SNI_HOST_NAME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StandardConstants, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.net.ssl.StandardConstants",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StandardConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardConstants);
	});
	return class$;
}

$Class* StandardConstants::class$ = nullptr;

		} // ssl
	} // net
} // javax