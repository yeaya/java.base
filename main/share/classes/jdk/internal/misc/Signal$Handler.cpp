#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal$NativeHandler.h>
#include <jdk/internal/misc/Signal.h>
#include <jcpp.h>

#undef SIG_DFL
#undef SIG_IGN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$NativeHandler = ::jdk::internal::misc::Signal$NativeHandler;

namespace jdk {
	namespace internal {
		namespace misc {

Signal$Handler* Signal$Handler::SIG_DFL = nullptr;
Signal$Handler* Signal$Handler::SIG_IGN = nullptr;

void Signal$Handler::clinit$($Class* clazz) {
	$assignStatic(Signal$Handler::SIG_DFL, $new($Signal$NativeHandler, 0));
	$assignStatic(Signal$Handler::SIG_IGN, $new($Signal$NativeHandler, 1));
}

$Class* Signal$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SIG_DFL", "Ljdk/internal/misc/Signal$Handler;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Signal$Handler, SIG_DFL)},
		{"SIG_IGN", "Ljdk/internal/misc/Signal$Handler;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Signal$Handler, SIG_IGN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"handle", "(Ljdk/internal/misc/Signal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Signal$Handler, handle, void, $Signal*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.Signal$Handler", "jdk.internal.misc.Signal", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.misc.Signal$Handler",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.Signal"
	};
	$loadClass(Signal$Handler, name, initialize, &classInfo$$, Signal$Handler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Signal$Handler);
	});
	return class$;
}

$Class* Signal$Handler::class$ = nullptr;

		} // misc
	} // internal
} // jdk