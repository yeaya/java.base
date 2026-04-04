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
	$FieldInfo fieldInfos$$[] = {
		{"group", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $PRIVATE | $FINAL, $field(Invoker$GroupAndInvokeCount, group$)},
		{"handlerInvokeCount", "I", nullptr, $PRIVATE, $field(Invoker$GroupAndInvokeCount, handlerInvokeCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;)V", nullptr, 0, $method(Invoker$GroupAndInvokeCount, init$, void, $AsynchronousChannelGroupImpl*)},
		{"group", "()Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, group, $AsynchronousChannelGroupImpl*)},
		{"incrementInvokeCount", "()V", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, incrementInvokeCount, void)},
		{"invokeCount", "()I", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, invokeCount, int32_t)},
		{"resetInvokeCount", "()V", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, resetInvokeCount, void)},
		{"setInvokeCount", "(I)V", nullptr, 0, $virtualMethod(Invoker$GroupAndInvokeCount, setInvokeCount, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Invoker$GroupAndInvokeCount", "sun.nio.ch.Invoker", "GroupAndInvokeCount", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Invoker$GroupAndInvokeCount",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Invoker"
	};
	$loadClass(Invoker$GroupAndInvokeCount, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Invoker$GroupAndInvokeCount);
	});
	return class$;
}

$Class* Invoker$GroupAndInvokeCount::class$ = nullptr;

		} // ch
	} // nio
} // sun