#include <java/util/concurrent/atomic/DoubleAccumulator$SerializationProxy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/DoubleAccumulator.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleAccumulator = ::java::util::concurrent::atomic::DoubleAccumulator;
using $Striped64 = ::java::util::concurrent::atomic::Striped64;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _DoubleAccumulator$SerializationProxy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleAccumulator$SerializationProxy, serialVersionUID)},
	{"value", "D", nullptr, $PRIVATE | $FINAL, $field(DoubleAccumulator$SerializationProxy, value)},
	{"function", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $PRIVATE | $FINAL, $field(DoubleAccumulator$SerializationProxy, function)},
	{"identity", "J", nullptr, $PRIVATE | $FINAL, $field(DoubleAccumulator$SerializationProxy, identity)},
	{}
};

$MethodInfo _DoubleAccumulator$SerializationProxy_MethodInfo_[] = {
	{"<init>", "(DLjava/util/function/DoubleBinaryOperator;J)V", nullptr, 0, $method(static_cast<void(DoubleAccumulator$SerializationProxy::*)(double,$DoubleBinaryOperator*,int64_t)>(&DoubleAccumulator$SerializationProxy::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(DoubleAccumulator$SerializationProxy::*)()>(&DoubleAccumulator$SerializationProxy::readResolve))},
	{}
};

$InnerClassInfo _DoubleAccumulator$SerializationProxy_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.DoubleAccumulator$SerializationProxy", "java.util.concurrent.atomic.DoubleAccumulator", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DoubleAccumulator$SerializationProxy_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.atomic.DoubleAccumulator$SerializationProxy",
	"java.lang.Object",
	"java.io.Serializable",
	_DoubleAccumulator$SerializationProxy_FieldInfo_,
	_DoubleAccumulator$SerializationProxy_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleAccumulator$SerializationProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.DoubleAccumulator"
};

$Object* allocate$DoubleAccumulator$SerializationProxy($Class* clazz) {
	return $of($alloc(DoubleAccumulator$SerializationProxy));
}

void DoubleAccumulator$SerializationProxy::init$(double value, $DoubleBinaryOperator* function, int64_t identity) {
	this->value = value;
	$set(this, function, function);
	this->identity = identity;
}

$Object* DoubleAccumulator$SerializationProxy::readResolve() {
	double d = $Double::longBitsToDouble(this->identity);
	$var($DoubleAccumulator, a, $new($DoubleAccumulator, this->function, d));
	a->base = $Double::doubleToRawLongBits(this->value);
	return $of(a);
}

DoubleAccumulator$SerializationProxy::DoubleAccumulator$SerializationProxy() {
}

$Class* DoubleAccumulator$SerializationProxy::load$($String* name, bool initialize) {
	$loadClass(DoubleAccumulator$SerializationProxy, name, initialize, &_DoubleAccumulator$SerializationProxy_ClassInfo_, allocate$DoubleAccumulator$SerializationProxy);
	return class$;
}

$Class* DoubleAccumulator$SerializationProxy::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java