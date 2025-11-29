#include <jdk/internal/math/FloatingDecimal$PreparedASCIIToBinaryBuffer.h>

#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FloatingDecimal$PreparedASCIIToBinaryBuffer_FieldInfo_[] = {
	{"doubleVal", "D", nullptr, $PRIVATE | $FINAL, $field(FloatingDecimal$PreparedASCIIToBinaryBuffer, doubleVal)},
	{"floatVal", "F", nullptr, $PRIVATE | $FINAL, $field(FloatingDecimal$PreparedASCIIToBinaryBuffer, floatVal)},
	{}
};

$MethodInfo _FloatingDecimal$PreparedASCIIToBinaryBuffer_MethodInfo_[] = {
	{"<init>", "(DF)V", nullptr, $PUBLIC, $method(static_cast<void(FloatingDecimal$PreparedASCIIToBinaryBuffer::*)(double,float)>(&FloatingDecimal$PreparedASCIIToBinaryBuffer::init$))},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FloatingDecimal$PreparedASCIIToBinaryBuffer_InnerClassesInfo_[] = {
	{"jdk.internal.math.FloatingDecimal$PreparedASCIIToBinaryBuffer", "jdk.internal.math.FloatingDecimal", "PreparedASCIIToBinaryBuffer", $STATIC},
	{"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter", "jdk.internal.math.FloatingDecimal", "ASCIIToBinaryConverter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FloatingDecimal$PreparedASCIIToBinaryBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.math.FloatingDecimal$PreparedASCIIToBinaryBuffer",
	"java.lang.Object",
	"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter",
	_FloatingDecimal$PreparedASCIIToBinaryBuffer_FieldInfo_,
	_FloatingDecimal$PreparedASCIIToBinaryBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_FloatingDecimal$PreparedASCIIToBinaryBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FloatingDecimal"
};

$Object* allocate$FloatingDecimal$PreparedASCIIToBinaryBuffer($Class* clazz) {
	return $of($alloc(FloatingDecimal$PreparedASCIIToBinaryBuffer));
}

void FloatingDecimal$PreparedASCIIToBinaryBuffer::init$(double doubleVal, float floatVal) {
	this->doubleVal = doubleVal;
	this->floatVal = floatVal;
}

double FloatingDecimal$PreparedASCIIToBinaryBuffer::doubleValue() {
	return this->doubleVal;
}

float FloatingDecimal$PreparedASCIIToBinaryBuffer::floatValue() {
	return this->floatVal;
}

FloatingDecimal$PreparedASCIIToBinaryBuffer::FloatingDecimal$PreparedASCIIToBinaryBuffer() {
}

$Class* FloatingDecimal$PreparedASCIIToBinaryBuffer::load$($String* name, bool initialize) {
	$loadClass(FloatingDecimal$PreparedASCIIToBinaryBuffer, name, initialize, &_FloatingDecimal$PreparedASCIIToBinaryBuffer_ClassInfo_, allocate$FloatingDecimal$PreparedASCIIToBinaryBuffer);
	return class$;
}

$Class* FloatingDecimal$PreparedASCIIToBinaryBuffer::class$ = nullptr;

		} // math
	} // internal
} // jdk