#include <java/nio/channels/IllegalChannelGroupException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void IllegalChannelGroupException::init$() {
	$IllegalArgumentException::init$();
}

IllegalChannelGroupException::IllegalChannelGroupException() {
}

IllegalChannelGroupException::IllegalChannelGroupException(const IllegalChannelGroupException& e) : $IllegalArgumentException(e) {
}

void IllegalChannelGroupException::throw$() {
	throw *this;
}

$Class* IllegalChannelGroupException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalChannelGroupException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalChannelGroupException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.IllegalChannelGroupException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalChannelGroupException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalChannelGroupException);
	});
	return class$;
}

$Class* IllegalChannelGroupException::class$ = nullptr;

		} // channels
	} // nio
} // java