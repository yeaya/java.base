#include <sun/nio/ch/Invoker$GroupAndInvokeCount.h>

#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/Invoker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Invoker$GroupAndInvokeCount_FieldInfo_[] = {
	{"group", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $PRIVATE | $FINAL, $field(Invoker$GroupAndInvokeCount, group$)},
	{"handlerInvokeCount", "I", nullptr, $PRIVATE, $field(Invoker$GroupAndInvokeCount, handlerInvokeCount)},
	{}
};

$MethodInfo _Invoker$GroupAndInvokeCount_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;)V", nullptr, 0, $method(Invoker$GroupAndInvokeCount, init$, void, $AsynchronousChannelGroupImpl*)},
	{"group", "()Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, group, $AsynchronousChannelGroupImpl*)},
	{"incrementInvokeCount", "()V", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, incrementInvokeCount, void)},
	{"invokeCount", "()I", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, invokeCount, int32_t)},
	{"resetInvokeCount", "()V", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, resetInvokeCount, void)},
	{"setInvokeCount", "(I)V", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, setInvokeCount, void, int32_t)},
	{}
};

$InnerClassInfo _Invoker$GroupAndInvokeCount_InnerClassesInfo_[] = {
	{"sun.nio.ch.Invoker$GroupAndInvokeCount", "sun.nio.ch.Invoker", "GroupAndInvokeCount", $STATIC},
	{}
};

$ClassInfo _Invoker$GroupAndInvokeCount_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Invoker$GroupAndInvokeCount",
	"java.lang.Object",
	nullptr,
	_Invoker$GroupAndInvokeCount_FieldInfo_,
	_Invoker$GroupAndInvokeCount_MethodInfo_,
	nullptr,
	nullptr,
	_Invoker$GroupAndInvokeCount_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Invoker"
};

$Object* allocate$Invoker$GroupAndInvokeCount($Class* clazz) {
	return $of($alloc(Invoker$GroupAndInvokeCount));
}

void Invoker$GroupAndInvokeCount::init$($AsynchronousChannelGroupImpl* group) {
	$set(this, group$, group);
}

$AsynchronousChannelGroupImpl* Invoker$GroupAndInvokeCount::group() {
	return this->group$;
}

int32_t Invoker$GroupAndInvokeCount::invokeCount() {
	return this->handlerInvokeCount;
}

void Invoker$GroupAndInvokeCount::setInvokeCount(int32_t value) {
	this->handlerInvokeCount = value;
}

void Invoker$GroupAndInvokeCount::resetInvokeCount() {
	this->handlerInvokeCount = 0;
}

void Invoker$GroupAndInvokeCount::incrementInvokeCount() {
	++this->handlerInvokeCount;
}

Invoker$GroupAndInvokeCount::Invoker$GroupAndInvokeCount() {
}

$Class* Invoker$GroupAndInvokeCount::load$($String* name, bool initialize) {
	$loadClass(Invoker$GroupAndInvokeCount, name, initialize, &_Invoker$GroupAndInvokeCount_ClassInfo_, allocate$Invoker$GroupAndInvokeCount);
	return class$;
}

$Class* Invoker$GroupAndInvokeCount::class$ = nullptr;

		} // ch
	} // nio
} // sun