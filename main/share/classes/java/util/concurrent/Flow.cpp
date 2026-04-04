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

void Flow::init$() {
}

int32_t Flow::defaultBufferSize() {
	return Flow::DEFAULT_BUFFER_SIZE;
}

Flow::Flow() {
}

$Class* Flow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_BUFFER_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Flow, DEFAULT_BUFFER_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Flow, init$, void)},
		{"defaultBufferSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Flow, defaultBufferSize, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Flow$Processor", "java.util.concurrent.Flow", "Processor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.util.concurrent.Flow",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.concurrent.Flow$Processor,java.util.concurrent.Flow$Subscription,java.util.concurrent.Flow$Subscriber,java.util.concurrent.Flow$Publisher"
	};
	$loadClass(Flow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Flow);
	});
	return class$;
}

$Class* Flow::class$ = nullptr;

		} // concurrent
	} // util
} // java