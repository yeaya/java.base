#include <jdk/internal/misc/Signal.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <java/util/Objects.h>
#include <jdk/internal/misc/Signal$1.h>
#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal$NativeHandler.h>
#include <jcpp.h>

#undef SIG_DFL
#undef SIG_IGN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Hashtable = ::java::util::Hashtable;
using $Objects = ::java::util::Objects;
using $Signal$1 = ::jdk::internal::misc::Signal$1;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;
using $Signal$NativeHandler = ::jdk::internal::misc::Signal$NativeHandler;

namespace jdk {
	namespace internal {
		namespace misc {

$FieldInfo _Signal_FieldInfo_[] = {
	{"handlers", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljdk/internal/misc/Signal;Ljdk/internal/misc/Signal$Handler;>;", $PRIVATE | $STATIC, $staticField(Signal, handlers)},
	{"signals", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Integer;Ljdk/internal/misc/Signal;>;", $PRIVATE | $STATIC, $staticField(Signal, signals)},
	{"number", "I", nullptr, $PRIVATE, $field(Signal, number)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Signal, name)},
	{}
};

$MethodInfo _Signal_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Signal::*)($String*)>(&Signal::init$))},
	{"dispatch", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&Signal::dispatch))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"findSignal0", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*)>(&Signal::findSignal0))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Signal::*)()>(&Signal::getName))},
	{"getNumber", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Signal::*)()>(&Signal::getNumber))},
	{"handle", "(Ljdk/internal/misc/Signal;Ljdk/internal/misc/Signal$Handler;)Ljdk/internal/misc/Signal$Handler;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$Signal$Handler*(*)(Signal*,$Signal$Handler*)>(&Signal::handle)), "java.lang.IllegalArgumentException"},
	{"handle0", "(IJ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t,int64_t)>(&Signal::handle0))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"raise", "(Ljdk/internal/misc/Signal;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Signal*)>(&Signal::raise)), "java.lang.IllegalArgumentException"},
	{"raise0", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&Signal::raise0))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_findSignal0 3
#define _METHOD_INDEX_handle0 7
#define _METHOD_INDEX_raise0 10

$InnerClassInfo _Signal_InnerClassesInfo_[] = {
	{"jdk.internal.misc.Signal$NativeHandler", "jdk.internal.misc.Signal", "NativeHandler", $STATIC | $FINAL},
	{"jdk.internal.misc.Signal$Handler", "jdk.internal.misc.Signal", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.misc.Signal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Signal_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.misc.Signal",
	"java.lang.Object",
	nullptr,
	_Signal_FieldInfo_,
	_Signal_MethodInfo_,
	nullptr,
	nullptr,
	_Signal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.misc.Signal$NativeHandler,jdk.internal.misc.Signal$Handler,jdk.internal.misc.Signal$1"
};

$Object* allocate$Signal($Class* clazz) {
	return $of($alloc(Signal));
}

$Hashtable* Signal::handlers = nullptr;
$Hashtable* Signal::signals = nullptr;

int32_t Signal::getNumber() {
	return this->number;
}

$String* Signal::getName() {
	return this->name;
}

bool Signal::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	{
		$var(Signal, other, nullptr);
		bool var$0 = $instanceOf(Signal, obj);
		if (var$0) {
			$assign(other, $cast(Signal, obj));
			var$0 = true;
		}
		if (var$0) {
			return $nc(this->name)->equals($nc(other)->name) && (this->number == $nc(other)->number);
		}
	}
	return false;
}

int32_t Signal::hashCode() {
	return this->number;
}

$String* Signal::toString() {
	return $str({"SIG"_s, this->name});
}

void Signal::init$($String* name) {
	$Objects::requireNonNull($of(name), "name"_s);
	if ($nc(name)->startsWith("SIG"_s)) {
		$throwNew($IllegalArgumentException, $$str({"Unknown signal: "_s, name}));
	}
	$set(this, name, name);
	this->number = findSignal0(name);
	if (this->number < 0) {
		$throwNew($IllegalArgumentException, $$str({"Unknown signal: "_s, name}));
	}
}

$Signal$Handler* Signal::handle(Signal* sig, $Signal$Handler* handler) {
	$load(Signal);
	$synchronized(class$) {
		$init(Signal);
		$Objects::requireNonNull($of(sig), "sig"_s);
		$Objects::requireNonNull($of(handler), "handler"_s);
		int64_t newH = ($instanceOf($Signal$NativeHandler, handler)) ? $nc(($cast($Signal$NativeHandler, handler)))->getHandler() : (int64_t)2;
		int64_t oldH = handle0($nc(sig)->number, newH);
		if (oldH == -1) {
			$throwNew($IllegalArgumentException, $$str({"Signal already used by VM or OS: "_s, sig}));
		}
		$nc(Signal::signals)->put($($Integer::valueOf($nc(sig)->number)), sig);
		$synchronized(Signal::handlers) {
			$var($Signal$Handler, oldHandler, $cast($Signal$Handler, $nc(Signal::handlers)->get(sig)));
			$nc(Signal::handlers)->remove(sig);
			if (newH == 2) {
				$nc(Signal::handlers)->put(sig, handler);
			}
			if (oldH == 0) {
				$init($Signal$Handler);
				return $Signal$Handler::SIG_DFL;
			} else if (oldH == 1) {
				$init($Signal$Handler);
				return $Signal$Handler::SIG_IGN;
			} else if (oldH == 2) {
				return oldHandler;
			} else {
				return $new($Signal$NativeHandler, oldH);
			}
		}
	}
}

void Signal::raise(Signal* sig) {
	$init(Signal);
	$Objects::requireNonNull($of(sig), "sig"_s);
	if ($nc(Signal::handlers)->get(sig) == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Unhandled signal: "_s, sig}));
	}
	raise0($nc(sig)->number);
}

void Signal::dispatch(int32_t number) {
	$init(Signal);
	$var(Signal, sig, $cast(Signal, $nc(Signal::signals)->get($($Integer::valueOf(number)))));
	$var($Signal$Handler, handler, $cast($Signal$Handler, $nc(Signal::handlers)->get(sig)));
	$var($Runnable, runnable, $new($Signal$1, handler, sig));
	if (handler != nullptr) {
		$$new($Thread, nullptr, runnable, $$str({sig, " handler"_s}), 0, false)->start();
	}
}

int32_t Signal::findSignal0($String* sigName) {
	$init(Signal);
	int32_t $ret = 0;
	$prepareNativeStatic(Signal, findSignal0, int32_t, $String* sigName);
	$ret = $invokeNativeStatic(Signal, findSignal0, sigName);
	$finishNativeStatic();
	return $ret;
}

int64_t Signal::handle0(int32_t sig, int64_t nativeH) {
	$init(Signal);
	int64_t $ret = 0;
	$prepareNativeStatic(Signal, handle0, int64_t, int32_t sig, int64_t nativeH);
	$ret = $invokeNativeStatic(Signal, handle0, sig, nativeH);
	$finishNativeStatic();
	return $ret;
}

void Signal::raise0(int32_t sig) {
	$init(Signal);
	$prepareNativeStatic(Signal, raise0, void, int32_t sig);
	$invokeNativeStatic(Signal, raise0, sig);
	$finishNativeStatic();
}

void clinit$Signal($Class* class$) {
	$assignStatic(Signal::handlers, $new($Hashtable, 4));
	$assignStatic(Signal::signals, $new($Hashtable, 4));
}

Signal::Signal() {
}

$Class* Signal::load$($String* name, bool initialize) {
	$loadClass(Signal, name, initialize, &_Signal_ClassInfo_, clinit$Signal, allocate$Signal);
	return class$;
}

$Class* Signal::class$ = nullptr;

		} // misc
	} // internal
} // jdk