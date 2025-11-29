#include <java/lang/Number.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _Number_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Number, serialVersionUID)},
	{}
};

$MethodInfo _Number_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Number::*)()>(&Number::init$))},
	{"byteValue", "()B", nullptr, $PUBLIC},
	{"doubleValue", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"floatValue", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"intValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"longValue", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"shortValue", "()S", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Number_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.Number",
	"java.lang.Object",
	"java.io.Serializable",
	_Number_FieldInfo_,
	_Number_MethodInfo_
};

$Object* allocate$Number($Class* clazz) {
	return $of($alloc(Number));
}

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
	$loadClass(Number, name, initialize, &_Number_ClassInfo_, allocate$Number);
	return class$;
}

$Class* Number::class$ = nullptr;

	} // lang
} // java