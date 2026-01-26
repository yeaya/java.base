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

$FieldInfo _LongAdder$SerializationProxy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LongAdder$SerializationProxy, serialVersionUID)},
	{"value", "J", nullptr, $PRIVATE | $FINAL, $field(LongAdder$SerializationProxy, value)},
	{}
};

$MethodInfo _LongAdder$SerializationProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/LongAdder;)V", nullptr, 0, $method(LongAdder$SerializationProxy, init$, void, $LongAdder*)},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(LongAdder$SerializationProxy, readResolve, $Object*)},
	{}
};

$InnerClassInfo _LongAdder$SerializationProxy_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.LongAdder$SerializationProxy", "java.util.concurrent.atomic.LongAdder", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LongAdder$SerializationProxy_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.atomic.LongAdder$SerializationProxy",
	"java.lang.Object",
	"java.io.Serializable",
	_LongAdder$SerializationProxy_FieldInfo_,
	_LongAdder$SerializationProxy_MethodInfo_,
	nullptr,
	nullptr,
	_LongAdder$SerializationProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.LongAdder"
};

$Object* allocate$LongAdder$SerializationProxy($Class* clazz) {
	return $of($alloc(LongAdder$SerializationProxy));
}

void LongAdder$SerializationProxy::init$($LongAdder* a) {
	this->value = $nc(a)->sum();
}

$Object* LongAdder$SerializationProxy::readResolve() {
	$var($LongAdder, a, $new($LongAdder));
	a->base = this->value;
	return $of(a);
}

LongAdder$SerializationProxy::LongAdder$SerializationProxy() {
}

$Class* LongAdder$SerializationProxy::load$($String* name, bool initialize) {
	$loadClass(LongAdder$SerializationProxy, name, initialize, &_LongAdder$SerializationProxy_ClassInfo_, allocate$LongAdder$SerializationProxy);
	return class$;
}

$Class* LongAdder$SerializationProxy::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java