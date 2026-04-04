#include <java/lang/Number.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void Number::init$() {
}

int8_t Number::byteValue() {
	return (int8_t)intValue();
}

int16_t Number::shortValue() {
	return (int16_t)intValue();
}

Number::Number() {
}

$Class* Number::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Number, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Number, init$, void)},
		{"byteValue", "()B", nullptr, $PUBLIC, $virtualMethod(Number, byteValue, int8_t)},
		{"doubleValue", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Number, doubleValue, double)},
		{"floatValue", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Number, floatValue, float)},
		{"intValue", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Number, intValue, int32_t)},
		{"longValue", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Number, longValue, int64_t)},
		{"shortValue", "()S", nullptr, $PUBLIC, $virtualMethod(Number, shortValue, int16_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.lang.Number",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Number, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Number);
	});
	return class$;
}

$Class* Number::class$ = nullptr;

	} // lang
} // java