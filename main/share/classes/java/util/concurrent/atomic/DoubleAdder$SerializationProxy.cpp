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

$FieldInfo _DoubleAdder$SerializationProxy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleAdder$SerializationProxy, serialVersionUID)},
	{"value", "D", nullptr, $PRIVATE | $FINAL, $field(DoubleAdder$SerializationProxy, value)},
	{}
};

$MethodInfo _DoubleAdder$SerializationProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/DoubleAdder;)V", nullptr, 0, $method(static_cast<void(DoubleAdder$SerializationProxy::*)($DoubleAdder*)>(&DoubleAdder$SerializationProxy::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(DoubleAdder$SerializationProxy::*)()>(&DoubleAdder$SerializationProxy::readResolve))},
	{}
};

$InnerClassInfo _DoubleAdder$SerializationProxy_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.DoubleAdder$SerializationProxy", "java.util.concurrent.atomic.DoubleAdder", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DoubleAdder$SerializationProxy_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.atomic.DoubleAdder$SerializationProxy",
	"java.lang.Object",
	"java.io.Serializable",
	_DoubleAdder$SerializationProxy_FieldInfo_,
	_DoubleAdder$SerializationProxy_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleAdder$SerializationProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.DoubleAdder"
};

$Object* allocate$DoubleAdder$SerializationProxy($Class* clazz) {
	return $of($alloc(DoubleAdder$SerializationProxy));
}

void DoubleAdder$SerializationProxy::init$($DoubleAdder* a) {
	this->value = $nc(a)->sum();
}

$Object* DoubleAdder$SerializationProxy::readResolve() {
	$var($DoubleAdder, a, $new($DoubleAdder));
	a->base = $Double::doubleToRawLongBits(this->value);
	return $of(a);
}

DoubleAdder$SerializationProxy::DoubleAdder$SerializationProxy() {
}

$Class* DoubleAdder$SerializationProxy::load$($String* name, bool initialize) {
	$loadClass(DoubleAdder$SerializationProxy, name, initialize, &_DoubleAdder$SerializationProxy_ClassInfo_, allocate$DoubleAdder$SerializationProxy);
	return class$;
}

$Class* DoubleAdder$SerializationProxy::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java