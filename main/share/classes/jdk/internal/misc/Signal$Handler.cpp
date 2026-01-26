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

$FieldInfo _Signal$Handler_FieldInfo_[] = {
	{"SIG_DFL", "Ljdk/internal/misc/Signal$Handler;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Signal$Handler, SIG_DFL)},
	{"SIG_IGN", "Ljdk/internal/misc/Signal$Handler;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Signal$Handler, SIG_IGN)},
	{}
};

$MethodInfo _Signal$Handler_MethodInfo_[] = {
	{"handle", "(Ljdk/internal/misc/Signal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Signal$Handler, handle, void, $Signal*)},
	{}
};

$InnerClassInfo _Signal$Handler_InnerClassesInfo_[] = {
	{"jdk.internal.misc.Signal$Handler", "jdk.internal.misc.Signal", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Signal$Handler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.misc.Signal$Handler",
	nullptr,
	nullptr,
	_Signal$Handler_FieldInfo_,
	_Signal$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_Signal$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.Signal"
};

$Object* allocate$Signal$Handler($Class* clazz) {
	return $of($alloc(Signal$Handler));
}

Signal$Handler* Signal$Handler::SIG_DFL = nullptr;
Signal$Handler* Signal$Handler::SIG_IGN = nullptr;

void clinit$Signal$Handler($Class* class$) {
	$assignStatic(Signal$Handler::SIG_DFL, $new($Signal$NativeHandler, 0));
	$assignStatic(Signal$Handler::SIG_IGN, $new($Signal$NativeHandler, 1));
}

$Class* Signal$Handler::load$($String* name, bool initialize) {
	$loadClass(Signal$Handler, name, initialize, &_Signal$Handler_ClassInfo_, clinit$Signal$Handler, allocate$Signal$Handler);
	return class$;
}

$Class* Signal$Handler::class$ = nullptr;

		} // misc
	} // internal
} // jdk