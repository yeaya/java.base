#include <java/util/concurrent/atomic/DoubleAdder$SerializationProxy.h>
#include <java/util/concurrent/atomic/DoubleAdder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleAdder = ::java::util::concurrent::atomic::DoubleAdder;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

void DoubleAdder$SerializationProxy::init$($DoubleAdder* a) {
	this->value = $nc(a)->sum();
}

$Object* DoubleAdder$SerializationProxy::readResolve() {
	$var($DoubleAdder, a, $new($DoubleAdder));
	a->base = $Double::doubleToRawLongBits(this->value);
	return a;
}

DoubleAdder$SerializationProxy::DoubleAdder$SerializationProxy() {
}

$Class* DoubleAdder$SerializationProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleAdder$SerializationProxy, serialVersionUID)},
		{"value", "D", nullptr, $PRIVATE | $FINAL, $field(DoubleAdder$SerializationProxy, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/DoubleAdder;)V", nullptr, 0, $method(DoubleAdder$SerializationProxy, init$, void, $DoubleAdder*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(DoubleAdder$SerializationProxy, readResolve, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.DoubleAdder$SerializationProxy", "java.util.concurrent.atomic.DoubleAdder", "SerializationProxy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.atomic.DoubleAdder$SerializationProxy",
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
		"java.util.concurrent.atomic.DoubleAdder"
	};
	$loadClass(DoubleAdder$SerializationProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleAdder$SerializationProxy);
	});
	return class$;
}

$Class* DoubleAdder$SerializationProxy::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java