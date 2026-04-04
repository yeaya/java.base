#include <jdk/internal/misc/Signal$NativeHandler.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <jcpp.h>

#undef SIG_DFL
#undef SIG_IGN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;

namespace jdk {
	namespace internal {
		namespace misc {

int64_t Signal$NativeHandler::getHandler() {
	return this->handler;
}

void Signal$NativeHandler::init$(int64_t handler) {
	this->handler = handler;
}

void Signal$NativeHandler::handle($Signal* sig) {
	$throwNew($UnsupportedOperationException, "invoking native signal handle not supported"_s);
}

$String* Signal$NativeHandler::toString() {
	$init($Signal$Handler);
	return $equals(this, $Signal$Handler::SIG_DFL) ? "SIG_DFL"_s : ($equals(this, $Signal$Handler::SIG_IGN) ? "SIG_IGN"_s : $Signal$Handler::toString());
}

Signal$NativeHandler::Signal$NativeHandler() {
}

$Class* Signal$NativeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handler", "J", nullptr, $PRIVATE | $FINAL, $field(Signal$NativeHandler, handler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, 0, $method(Signal$NativeHandler, init$, void, int64_t)},
		{"getHandler", "()J", nullptr, 0, $method(Signal$NativeHandler, getHandler, int64_t)},
		{"handle", "(Ljdk/internal/misc/Signal;)V", nullptr, $PUBLIC, $virtualMethod(Signal$NativeHandler, handle, void, $Signal*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Signal$NativeHandler, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.Signal$NativeHandler", "jdk.internal.misc.Signal", "NativeHandler", $STATIC | $FINAL},
		{"jdk.internal.misc.Signal$Handler", "jdk.internal.misc.Signal", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.misc.Signal$NativeHandler",
		"java.lang.Object",
		"jdk.internal.misc.Signal$Handler",
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
	$loadClass(Signal$NativeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Signal$NativeHandler);
	});
	return class$;
}

$Class* Signal$NativeHandler::class$ = nullptr;

		} // misc
	} // internal
} // jdk