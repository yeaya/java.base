#include <java/util/concurrent/atomic/LongAdder$SerializationProxy.h>
#include <java/util/concurrent/atomic/LongAdder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongAdder = ::java::util::concurrent::atomic::LongAdder;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

void LongAdder$SerializationProxy::init$($LongAdder* a) {
	this->value = $nc(a)->sum();
}

$Object* LongAdder$SerializationProxy::readResolve() {
	$var($LongAdder, a, $new($LongAdder));
	a->base = this->value;
	return a;
}

LongAdder$SerializationProxy::LongAdder$SerializationProxy() {
}

$Class* LongAdder$SerializationProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LongAdder$SerializationProxy, serialVersionUID)},
		{"value", "J", nullptr, $PRIVATE | $FINAL, $field(LongAdder$SerializationProxy, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/LongAdder;)V", nullptr, 0, $method(LongAdder$SerializationProxy, init$, void, $LongAdder*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(LongAdder$SerializationProxy, readResolve, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.LongAdder$SerializationProxy", "java.util.concurrent.atomic.LongAdder", "SerializationProxy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.atomic.LongAdder$SerializationProxy",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.atomic.LongAdder"
	};
	$loadClass(LongAdder$SerializationProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongAdder$SerializationProxy);
	});
	return class$;
}

$Class* LongAdder$SerializationProxy::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java