#include <java/util/concurrent/Flow.h>

#include <jcpp.h>

#undef DEFAULT_BUFFER_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Flow_FieldInfo_[] = {
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Flow, DEFAULT_BUFFER_SIZE)},
	{}
};

$MethodInfo _Flow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Flow, init$, void)},
	{"defaultBufferSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Flow, defaultBufferSize, int32_t)},
	{}
};

$InnerClassInfo _Flow_InnerClassesInfo_[] = {
	{"java.util.concurrent.Flow$Processor", "java.util.concurrent.Flow", "Processor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Flow_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.concurrent.Flow",
	"java.lang.Object",
	nullptr,
	_Flow_FieldInfo_,
	_Flow_MethodInfo_,
	nullptr,
	nullptr,
	_Flow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.Flow$Processor,java.util.concurrent.Flow$Subscription,java.util.concurrent.Flow$Subscriber,java.util.concurrent.Flow$Publisher"
};

$Object* allocate$Flow($Class* clazz) {
	return $of($alloc(Flow));
}

void Flow::init$() {
}

int32_t Flow::defaultBufferSize() {
	return Flow::DEFAULT_BUFFER_SIZE;
}

Flow::Flow() {
}

$Class* Flow::load$($String* name, bool initialize) {
	$loadClass(Flow, name, initialize, &_Flow_ClassInfo_, allocate$Flow);
	return class$;
}

$Class* Flow::class$ = nullptr;

		} // concurrent
	} // util
} // java