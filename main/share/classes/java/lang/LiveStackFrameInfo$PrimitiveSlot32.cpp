#include <java/lang/LiveStackFrameInfo$PrimitiveSlot32.h>

#include <java/lang/LiveStackFrame$PrimitiveSlot.h>
#include <java/lang/LiveStackFrameInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LiveStackFrame$PrimitiveSlot = ::java::lang::LiveStackFrame$PrimitiveSlot;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _LiveStackFrameInfo$PrimitiveSlot32_FieldInfo_[] = {
	{"value", "I", nullptr, $FINAL, $field(LiveStackFrameInfo$PrimitiveSlot32, value)},
	{}
};

$MethodInfo _LiveStackFrameInfo$PrimitiveSlot32_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(LiveStackFrameInfo$PrimitiveSlot32, init$, void, int32_t)},
	{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(LiveStackFrameInfo$PrimitiveSlot32, intValue, int32_t)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(LiveStackFrameInfo$PrimitiveSlot32, size, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LiveStackFrameInfo$PrimitiveSlot32, toString, $String*)},
	{}
};

$InnerClassInfo _LiveStackFrameInfo$PrimitiveSlot32_InnerClassesInfo_[] = {
	{"java.lang.LiveStackFrameInfo$PrimitiveSlot32", "java.lang.LiveStackFrameInfo", "PrimitiveSlot32", $PRIVATE | $STATIC},
	{"java.lang.LiveStackFrame$PrimitiveSlot", "java.lang.LiveStackFrame", "PrimitiveSlot", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LiveStackFrameInfo$PrimitiveSlot32_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.LiveStackFrameInfo$PrimitiveSlot32",
	"java.lang.LiveStackFrame$PrimitiveSlot",
	nullptr,
	_LiveStackFrameInfo$PrimitiveSlot32_FieldInfo_,
	_LiveStackFrameInfo$PrimitiveSlot32_MethodInfo_,
	nullptr,
	nullptr,
	_LiveStackFrameInfo$PrimitiveSlot32_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.LiveStackFrameInfo"
};

$Object* allocate$LiveStackFrameInfo$PrimitiveSlot32($Class* clazz) {
	return $of($alloc(LiveStackFrameInfo$PrimitiveSlot32));
}

void LiveStackFrameInfo$PrimitiveSlot32::init$(int32_t value) {
	$LiveStackFrame$PrimitiveSlot::init$();
	this->value = value;
}

int32_t LiveStackFrameInfo$PrimitiveSlot32::size() {
	return 4;
}

int32_t LiveStackFrameInfo$PrimitiveSlot32::intValue() {
	return this->value;
}

$String* LiveStackFrameInfo$PrimitiveSlot32::toString() {
	return $String::valueOf(this->value);
}

LiveStackFrameInfo$PrimitiveSlot32::LiveStackFrameInfo$PrimitiveSlot32() {
}

$Class* LiveStackFrameInfo$PrimitiveSlot32::load$($String* name, bool initialize) {
	$loadClass(LiveStackFrameInfo$PrimitiveSlot32, name, initialize, &_LiveStackFrameInfo$PrimitiveSlot32_ClassInfo_, allocate$LiveStackFrameInfo$PrimitiveSlot32);
	return class$;
}

$Class* LiveStackFrameInfo$PrimitiveSlot32::class$ = nullptr;

	} // lang
} // java