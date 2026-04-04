#include <Bug4990596$MutableInteger.h>
#include <Bug4990596.h>
#include <java/lang/Number.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

void Bug4990596$MutableInteger::init$() {
	$Number::init$();
}

void Bug4990596$MutableInteger::init$(int32_t value) {
	$Number::init$();
	this->value = value;
}

double Bug4990596$MutableInteger::doubleValue() {
	return (double)this->value;
}

float Bug4990596$MutableInteger::floatValue() {
	return (float)this->value;
}

int32_t Bug4990596$MutableInteger::intValue() {
	return this->value;
}

int64_t Bug4990596$MutableInteger::longValue() {
	return this->value;
}

Bug4990596$MutableInteger::Bug4990596$MutableInteger() {
}

$Class* Bug4990596$MutableInteger::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "I", nullptr, $PUBLIC, $field(Bug4990596$MutableInteger, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4990596$MutableInteger, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Bug4990596$MutableInteger, init$, void, int32_t)},
		{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(Bug4990596$MutableInteger, doubleValue, double)},
		{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(Bug4990596$MutableInteger, floatValue, float)},
		{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(Bug4990596$MutableInteger, intValue, int32_t)},
		{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(Bug4990596$MutableInteger, longValue, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Bug4990596$MutableInteger", "Bug4990596", "MutableInteger", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug4990596$MutableInteger",
		"java.lang.Number",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Bug4990596"
	};
	$loadClass(Bug4990596$MutableInteger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug4990596$MutableInteger);
	});
	return class$;
}

$Class* Bug4990596$MutableInteger::class$ = nullptr;