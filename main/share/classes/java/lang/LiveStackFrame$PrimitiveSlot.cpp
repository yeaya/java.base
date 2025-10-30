#include <java/lang/LiveStackFrame$PrimitiveSlot.h>

#include <java/lang/LiveStackFrame.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LiveStackFrame = ::java::lang::LiveStackFrame;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace lang {

$MethodInfo _LiveStackFrame$PrimitiveSlot_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LiveStackFrame$PrimitiveSlot::*)()>(&LiveStackFrame$PrimitiveSlot::init$))},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LiveStackFrame$PrimitiveSlot_InnerClassesInfo_[] = {
	{"java.lang.LiveStackFrame$PrimitiveSlot", "java.lang.LiveStackFrame", "PrimitiveSlot", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LiveStackFrame$PrimitiveSlot_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.LiveStackFrame$PrimitiveSlot",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LiveStackFrame$PrimitiveSlot_MethodInfo_,
	nullptr,
	nullptr,
	_LiveStackFrame$PrimitiveSlot_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.LiveStackFrame"
};

$Object* allocate$LiveStackFrame$PrimitiveSlot($Class* clazz) {
	return $of($alloc(LiveStackFrame$PrimitiveSlot));
}

void LiveStackFrame$PrimitiveSlot::init$() {
}

int32_t LiveStackFrame$PrimitiveSlot::intValue() {
	$useLocalCurrentObjectStackCache();
	$throwNew($UnsupportedOperationException, $$str({"this "_s, $$str(size()), "-byte primitive"_s}));
	$shouldNotReachHere();
}

int64_t LiveStackFrame$PrimitiveSlot::longValue() {
	$useLocalCurrentObjectStackCache();
	$throwNew($UnsupportedOperationException, $$str({"this "_s, $$str(size()), "-byte primitive"_s}));
	$shouldNotReachHere();
}

LiveStackFrame$PrimitiveSlot::LiveStackFrame$PrimitiveSlot() {
}

$Class* LiveStackFrame$PrimitiveSlot::load$($String* name, bool initialize) {
	$loadClass(LiveStackFrame$PrimitiveSlot, name, initialize, &_LiveStackFrame$PrimitiveSlot_ClassInfo_, allocate$LiveStackFrame$PrimitiveSlot);
	return class$;
}

$Class* LiveStackFrame$PrimitiveSlot::class$ = nullptr;

	} // lang
} // java