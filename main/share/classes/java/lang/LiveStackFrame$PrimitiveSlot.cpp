#include <java/lang/LiveStackFrame$PrimitiveSlot.h>
#include <java/lang/LiveStackFrame.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace lang {

void LiveStackFrame$PrimitiveSlot::init$() {
}

int32_t LiveStackFrame$PrimitiveSlot::intValue() {
	$useLocalObjectStack();
	$throwNew($UnsupportedOperationException, $$str({"this "_s, $$str(size()), "-byte primitive"_s}));
	$shouldNotReachHere();
}

int64_t LiveStackFrame$PrimitiveSlot::longValue() {
	$useLocalObjectStack();
	$throwNew($UnsupportedOperationException, $$str({"this "_s, $$str(size()), "-byte primitive"_s}));
	$shouldNotReachHere();
}

LiveStackFrame$PrimitiveSlot::LiveStackFrame$PrimitiveSlot() {
}

$Class* LiveStackFrame$PrimitiveSlot::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LiveStackFrame$PrimitiveSlot, init$, void)},
		{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(LiveStackFrame$PrimitiveSlot, intValue, int32_t)},
		{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(LiveStackFrame$PrimitiveSlot, longValue, int64_t)},
		{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LiveStackFrame$PrimitiveSlot, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.LiveStackFrame$PrimitiveSlot", "java.lang.LiveStackFrame", "PrimitiveSlot", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.lang.LiveStackFrame$PrimitiveSlot",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.LiveStackFrame"
	};
	$loadClass(LiveStackFrame$PrimitiveSlot, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LiveStackFrame$PrimitiveSlot);
	});
	return class$;
}

$Class* LiveStackFrame$PrimitiveSlot::class$ = nullptr;

	} // lang
} // java