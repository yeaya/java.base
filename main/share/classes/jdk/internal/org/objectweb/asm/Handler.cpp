#include <jdk/internal/org/objectweb/asm/Handler.h>

#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _Handler_FieldInfo_[] = {
	{"startPc", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $FINAL, $field(Handler, startPc)},
	{"endPc", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $FINAL, $field(Handler, endPc)},
	{"handlerPc", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $FINAL, $field(Handler, handlerPc)},
	{"catchType", "I", nullptr, $FINAL, $field(Handler, catchType)},
	{"catchTypeDescriptor", "Ljava/lang/String;", nullptr, $FINAL, $field(Handler, catchTypeDescriptor)},
	{"nextHandler", "Ljdk/internal/org/objectweb/asm/Handler;", nullptr, 0, $field(Handler, nextHandler)},
	{}
};

$MethodInfo _Handler_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;ILjava/lang/String;)V", nullptr, 0, $method(Handler, init$, void, $Label*, $Label*, $Label*, int32_t, $String*)},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/Handler;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, 0, $method(Handler, init$, void, Handler*, $Label*, $Label*)},
	{"getExceptionTableLength", "(Ljdk/internal/org/objectweb/asm/Handler;)I", nullptr, $STATIC, $staticMethod(Handler, getExceptionTableLength, int32_t, Handler*)},
	{"getExceptionTableSize", "(Ljdk/internal/org/objectweb/asm/Handler;)I", nullptr, $STATIC, $staticMethod(Handler, getExceptionTableSize, int32_t, Handler*)},
	{"putExceptionTable", "(Ljdk/internal/org/objectweb/asm/Handler;Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, $STATIC, $staticMethod(Handler, putExceptionTable, void, Handler*, $ByteVector*)},
	{"removeRange", "(Ljdk/internal/org/objectweb/asm/Handler;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;)Ljdk/internal/org/objectweb/asm/Handler;", nullptr, $STATIC, $staticMethod(Handler, removeRange, Handler*, Handler*, $Label*, $Label*)},
	{}
};

$ClassInfo _Handler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.Handler",
	"java.lang.Object",
	nullptr,
	_Handler_FieldInfo_,
	_Handler_MethodInfo_
};

$Object* allocate$Handler($Class* clazz) {
	return $of($alloc(Handler));
}

void Handler::init$($Label* startPc, $Label* endPc, $Label* handlerPc, int32_t catchType, $String* catchTypeDescriptor) {
	$set(this, startPc, startPc);
	$set(this, endPc, endPc);
	$set(this, handlerPc, handlerPc);
	this->catchType = catchType;
	$set(this, catchTypeDescriptor, catchTypeDescriptor);
}

void Handler::init$(Handler* handler, $Label* startPc, $Label* endPc) {
	Handler::init$(startPc, endPc, $nc(handler)->handlerPc, handler->catchType, handler->catchTypeDescriptor);
	$set(this, nextHandler, $nc(handler)->nextHandler);
}

Handler* Handler::removeRange(Handler* firstHandler, $Label* start, $Label* end) {
	if (firstHandler == nullptr) {
		return nullptr;
	} else {
		$set($nc(firstHandler), nextHandler, removeRange(firstHandler->nextHandler, start, end));
	}
	int32_t handlerStart = $nc($nc(firstHandler)->startPc)->bytecodeOffset;
	int32_t handlerEnd = $nc(firstHandler->endPc)->bytecodeOffset;
	int32_t rangeStart = $nc(start)->bytecodeOffset;
	int32_t rangeEnd = end == nullptr ? $Integer::MAX_VALUE : $nc(end)->bytecodeOffset;
	if (rangeStart >= handlerEnd || rangeEnd <= handlerStart) {
		return firstHandler;
	}
	if (rangeStart <= handlerStart) {
		if (rangeEnd >= handlerEnd) {
			return firstHandler->nextHandler;
		} else {
			return $new(Handler, firstHandler, end, firstHandler->endPc);
		}
	} else if (rangeEnd >= handlerEnd) {
		return $new(Handler, firstHandler, firstHandler->startPc, start);
	} else {
		$set(firstHandler, nextHandler, $new(Handler, firstHandler, end, firstHandler->endPc));
		return $new(Handler, firstHandler, firstHandler->startPc, start);
	}
}

int32_t Handler::getExceptionTableLength(Handler* firstHandler) {
	int32_t length = 0;
	$var(Handler, handler, firstHandler);
	while (handler != nullptr) {
		++length;
		$assign(handler, handler->nextHandler);
	}
	return length;
}

int32_t Handler::getExceptionTableSize(Handler* firstHandler) {
	return 2 + 8 * getExceptionTableLength(firstHandler);
}

void Handler::putExceptionTable(Handler* firstHandler, $ByteVector* output) {
	$useLocalCurrentObjectStackCache();
	$nc(output)->putShort(getExceptionTableLength(firstHandler));
	$var(Handler, handler, firstHandler);
	while (handler != nullptr) {
		$nc($($nc($($nc($(output->putShort($nc(handler->startPc)->bytecodeOffset)))->putShort($nc(handler->endPc)->bytecodeOffset)))->putShort($nc(handler->handlerPc)->bytecodeOffset)))->putShort(handler->catchType);
		$assign(handler, handler->nextHandler);
	}
}

Handler::Handler() {
}

$Class* Handler::load$($String* name, bool initialize) {
	$loadClass(Handler, name, initialize, &_Handler_ClassInfo_, allocate$Handler);
	return class$;
}

$Class* Handler::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk