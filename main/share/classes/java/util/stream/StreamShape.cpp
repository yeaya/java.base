#include <java/util/stream/StreamShape.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DOUBLE_VALUE
#undef INT_VALUE
#undef LONG_VALUE
#undef REFERENCE

using $StreamShapeArray = $Array<::java::util::stream::StreamShape>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamShape_FieldInfo_[] = {
	{"REFERENCE", "Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamShape, REFERENCE)},
	{"INT_VALUE", "Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamShape, INT_VALUE)},
	{"LONG_VALUE", "Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamShape, LONG_VALUE)},
	{"DOUBLE_VALUE", "Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamShape, DOUBLE_VALUE)},
	{"$VALUES", "[Ljava/util/stream/StreamShape;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StreamShape, $VALUES)},
	{}
};

$MethodInfo _StreamShape_MethodInfo_[] = {
	{"$values", "()[Ljava/util/stream/StreamShape;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StreamShapeArray*(*)()>(&StreamShape::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StreamShape::*)($String*,int32_t)>(&StreamShape::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StreamShape*(*)($String*)>(&StreamShape::valueOf))},
	{"values", "()[Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StreamShapeArray*(*)()>(&StreamShape::values))},
	{}
};

$ClassInfo _StreamShape_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.util.stream.StreamShape",
	"java.lang.Enum",
	nullptr,
	_StreamShape_FieldInfo_,
	_StreamShape_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/stream/StreamShape;>;"
};

$Object* allocate$StreamShape($Class* clazz) {
	return $of($alloc(StreamShape));
}


StreamShape* StreamShape::REFERENCE = nullptr;

StreamShape* StreamShape::INT_VALUE = nullptr;

StreamShape* StreamShape::LONG_VALUE = nullptr;

StreamShape* StreamShape::DOUBLE_VALUE = nullptr;
$StreamShapeArray* StreamShape::$VALUES = nullptr;

$StreamShapeArray* StreamShape::$values() {
	$init(StreamShape);
	return $new($StreamShapeArray, {
		StreamShape::REFERENCE,
		StreamShape::INT_VALUE,
		StreamShape::LONG_VALUE,
		StreamShape::DOUBLE_VALUE
	});
}

$StreamShapeArray* StreamShape::values() {
	$init(StreamShape);
	return $cast($StreamShapeArray, StreamShape::$VALUES->clone());
}

StreamShape* StreamShape::valueOf($String* name) {
	$init(StreamShape);
	return $cast(StreamShape, $Enum::valueOf(StreamShape::class$, name));
}

void StreamShape::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StreamShape($Class* class$) {
	$assignStatic(StreamShape::REFERENCE, $new(StreamShape, "REFERENCE"_s, 0));
	$assignStatic(StreamShape::INT_VALUE, $new(StreamShape, "INT_VALUE"_s, 1));
	$assignStatic(StreamShape::LONG_VALUE, $new(StreamShape, "LONG_VALUE"_s, 2));
	$assignStatic(StreamShape::DOUBLE_VALUE, $new(StreamShape, "DOUBLE_VALUE"_s, 3));
	$assignStatic(StreamShape::$VALUES, StreamShape::$values());
}

StreamShape::StreamShape() {
}

$Class* StreamShape::load$($String* name, bool initialize) {
	$loadClass(StreamShape, name, initialize, &_StreamShape_ClassInfo_, clinit$StreamShape, allocate$StreamShape);
	return class$;
}

$Class* StreamShape::class$ = nullptr;

		} // stream
	} // util
} // java