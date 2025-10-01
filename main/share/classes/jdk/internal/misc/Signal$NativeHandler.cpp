#include <jdk/internal/misc/Signal$NativeHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Signal$NativeHandler_FieldInfo_[] = {
	{"handler", "J", nullptr, $PRIVATE | $FINAL, $field(Signal$NativeHandler, handler)},
	{}
};

$MethodInfo _Signal$NativeHandler_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(Signal$NativeHandler::*)(int64_t)>(&Signal$NativeHandler::init$))},
	{"getHandler", "()J", nullptr, 0, $method(static_cast<int64_t(Signal$NativeHandler::*)()>(&Signal$NativeHandler::getHandler))},
	{"handle", "(Ljdk/internal/misc/Signal;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Signal$NativeHandler_InnerClassesInfo_[] = {
	{"jdk.internal.misc.Signal$NativeHandler", "jdk.internal.misc.Signal", "NativeHandler", $STATIC | $FINAL},
	{"jdk.internal.misc.Signal$Handler", "jdk.internal.misc.Signal", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Signal$NativeHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.misc.Signal$NativeHandler",
	"java.lang.Object",
	"jdk.internal.misc.Signal$Handler",
	_Signal$NativeHandler_FieldInfo_,
	_Signal$NativeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Signal$NativeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.Signal"
};

$Object* allocate$Signal$NativeHandler($Class* clazz) {
	return $of($alloc(Signal$NativeHandler));
}

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
	$loadClass(Signal$NativeHandler, name, initialize, &_Signal$NativeHandler_ClassInfo_, allocate$Signal$NativeHandler);
	return class$;
}

$Class* Signal$NativeHandler::class$ = nullptr;

		} // misc
	} // internal
} // jdk