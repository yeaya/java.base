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
	$FieldInfo fieldInfos$$[] = {
		{"doubleVal", "D", nullptr, $PRIVATE | $FINAL, $field(FloatingDecimal$PreparedASCIIToBinaryBuffer, doubleVal)},
		{"floatVal", "F", nullptr, $PRIVATE | $FINAL, $field(FloatingDecimal$PreparedASCIIToBinaryBuffer, floatVal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(DF)V", nullptr, $PUBLIC, $method(FloatingDecimal$PreparedASCIIToBinaryBuffer, init$, void, double, float)},
		{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$PreparedASCIIToBinaryBuffer, doubleValue, double)},
		{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(FloatingDecimal$PreparedASCIIToBinaryBuffer, floatValue, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.math.FloatingDecimal$PreparedASCIIToBinaryBuffer", "jdk.internal.math.FloatingDecimal", "PreparedASCIIToBinaryBuffer", $STATIC},
		{"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter", "jdk.internal.math.FloatingDecimal", "ASCIIToBinaryConverter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.math.FloatingDecimal$PreparedASCIIToBinaryBuffer",
		"java.lang.Object",
		"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.math.FloatingDecimal"
	};
	$loadClass(FloatingDecimal$PreparedASCIIToBinaryBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FloatingDecimal$PreparedASCIIToBinaryBuffer);
	});
	return class$;
}

$Class* FloatingDecimal$PreparedASCIIToBinaryBuffer::class$ = nullptr;

		} // math
	} // internal
} // jdk