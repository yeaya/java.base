#include <Bug4990596$MutableInteger.h>

#include <Bug4990596.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Bug4990596 = ::Bug4990596;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

$FieldInfo _Bug4990596$MutableInteger_FieldInfo_[] = {
	{"value", "I", nullptr, $PUBLIC, $field(Bug4990596$MutableInteger, value)},
	{}
};

$MethodInfo _Bug4990596$MutableInteger_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4990596$MutableInteger::*)()>(&Bug4990596$MutableInteger::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Bug4990596$MutableInteger::*)(int32_t)>(&Bug4990596$MutableInteger::init$))},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Bug4990596$MutableInteger_InnerClassesInfo_[] = {
	{"Bug4990596$MutableInteger", "Bug4990596", "MutableInteger", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Bug4990596$MutableInteger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4990596$MutableInteger",
	"java.lang.Number",
	nullptr,
	_Bug4990596$MutableInteger_FieldInfo_,
	_Bug4990596$MutableInteger_MethodInfo_,
	nullptr,
	nullptr,
	_Bug4990596$MutableInteger_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Bug4990596"
};

$Object* allocate$Bug4990596$MutableInteger($Class* clazz) {
	return $of($alloc(Bug4990596$MutableInteger));
}

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
	$loadClass(Bug4990596$MutableInteger, name, initialize, &_Bug4990596$MutableInteger_ClassInfo_, allocate$Bug4990596$MutableInteger);
	return class$;
}

$Class* Bug4990596$MutableInteger::class$ = nullptr;