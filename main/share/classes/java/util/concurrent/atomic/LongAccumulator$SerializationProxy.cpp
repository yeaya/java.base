#include <java/util/concurrent/atomic/LongAccumulator$SerializationProxy.h>

#include <java/util/concurrent/atomic/LongAccumulator.h>
#include <java/util/function/LongBinaryOperator.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongAccumulator = ::java::util::concurrent::atomic::LongAccumulator;
using $Striped64 = ::java::util::concurrent::atomic::Striped64;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _LongAccumulator$SerializationProxy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LongAccumulator$SerializationProxy, serialVersionUID)},
	{"value", "J", nullptr, $PRIVATE | $FINAL, $field(LongAccumulator$SerializationProxy, value)},
	{"function", "Ljava/util/function/LongBinaryOperator;", nullptr, $PRIVATE | $FINAL, $field(LongAccumulator$SerializationProxy, function)},
	{"identity", "J", nullptr, $PRIVATE | $FINAL, $field(LongAccumulator$SerializationProxy, identity)},
	{}
};

$MethodInfo _LongAccumulator$SerializationProxy_MethodInfo_[] = {
	{"<init>", "(JLjava/util/function/LongBinaryOperator;J)V", nullptr, 0, $method(static_cast<void(LongAccumulator$SerializationProxy::*)(int64_t,$LongBinaryOperator*,int64_t)>(&LongAccumulator$SerializationProxy::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(LongAccumulator$SerializationProxy::*)()>(&LongAccumulator$SerializationProxy::readResolve))},
	{}
};

$InnerClassInfo _LongAccumulator$SerializationProxy_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.LongAccumulator$SerializationProxy", "java.util.concurrent.atomic.LongAccumulator", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LongAccumulator$SerializationProxy_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.atomic.LongAccumulator$SerializationProxy",
	"java.lang.Object",
	"java.io.Serializable",
	_LongAccumulator$SerializationProxy_FieldInfo_,
	_LongAccumulator$SerializationProxy_MethodInfo_,
	nullptr,
	nullptr,
	_LongAccumulator$SerializationProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.LongAccumulator"
};

$Object* allocate$LongAccumulator$SerializationProxy($Class* clazz) {
	return $of($alloc(LongAccumulator$SerializationProxy));
}

void LongAccumulator$SerializationProxy::init$(int64_t value, $LongBinaryOperator* function, int64_t identity) {
	this->value = value;
	$set(this, function, function);
	this->identity = identity;
}

$Object* LongAccumulator$SerializationProxy::readResolve() {
	$var($LongAccumulator, a, $new($LongAccumulator, this->function, this->identity));
	a->base = this->value;
	return $of(a);
}

LongAccumulator$SerializationProxy::LongAccumulator$SerializationProxy() {
}

$Class* LongAccumulator$SerializationProxy::load$($String* name, bool initialize) {
	$loadClass(LongAccumulator$SerializationProxy, name, initialize, &_LongAccumulator$SerializationProxy_ClassInfo_, allocate$LongAccumulator$SerializationProxy);
	return class$;
}

$Class* LongAccumulator$SerializationProxy::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java