#include <java/nio/channels/ShutdownChannelGroupException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void ShutdownChannelGroupException::init$() {
	$IllegalStateException::init$();
}

ShutdownChannelGroupException::ShutdownChannelGroupException() {
}

ShutdownChannelGroupException::ShutdownChannelGroupException(const ShutdownChannelGroupException& e) : $IllegalStateException(e) {
}

void ShutdownChannelGroupException::throw$() {
	throw *this;
}

$Class* ShutdownChannelGroupException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ShutdownChannelGroupException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ShutdownChannelGroupException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.ShutdownChannelGroupException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ShutdownChannelGroupException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShutdownChannelGroupException);
	});
	return class$;
}

$Class* ShutdownChannelGroupException::class$ = nullptr;

		} // channels
	} // nio
} // java