#include <java/util/stream/StreamOpFlag$Type.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/StreamOpFlag.h>
#include <jcpp.h>

#undef SPLITERATOR
#undef OP
#undef TERMINAL_OP
#undef STREAM
#undef UPSTREAM_TERMINAL_OP

using $StreamOpFlag$TypeArray = $Array<::java::util::stream::StreamOpFlag$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamOpFlag$Type_FieldInfo_[] = {
	{"SPLITERATOR", "Ljava/util/stream/StreamOpFlag$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamOpFlag$Type, SPLITERATOR)},
	{"STREAM", "Ljava/util/stream/StreamOpFlag$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamOpFlag$Type, STREAM)},
	{"OP", "Ljava/util/stream/StreamOpFlag$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamOpFlag$Type, OP)},
	{"TERMINAL_OP", "Ljava/util/stream/StreamOpFlag$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamOpFlag$Type, TERMINAL_OP)},
	{"UPSTREAM_TERMINAL_OP", "Ljava/util/stream/StreamOpFlag$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamOpFlag$Type, UPSTREAM_TERMINAL_OP)},
	{"$VALUES", "[Ljava/util/stream/StreamOpFlag$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StreamOpFlag$Type, $VALUES)},
	{}
};

$MethodInfo _StreamOpFlag$Type_MethodInfo_[] = {
	{"$values", "()[Ljava/util/stream/StreamOpFlag$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StreamOpFlag$TypeArray*(*)()>(&StreamOpFlag$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StreamOpFlag$Type::*)($String*,int32_t)>(&StreamOpFlag$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/stream/StreamOpFlag$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StreamOpFlag$Type*(*)($String*)>(&StreamOpFlag$Type::valueOf))},
	{"values", "()[Ljava/util/stream/StreamOpFlag$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StreamOpFlag$TypeArray*(*)()>(&StreamOpFlag$Type::values))},
	{}
};

$InnerClassInfo _StreamOpFlag$Type_InnerClassesInfo_[] = {
	{"java.util.stream.StreamOpFlag$Type", "java.util.stream.StreamOpFlag", "Type", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StreamOpFlag$Type_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.util.stream.StreamOpFlag$Type",
	"java.lang.Enum",
	nullptr,
	_StreamOpFlag$Type_FieldInfo_,
	_StreamOpFlag$Type_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/stream/StreamOpFlag$Type;>;",
	nullptr,
	_StreamOpFlag$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamOpFlag"
};

$Object* allocate$StreamOpFlag$Type($Class* clazz) {
	return $of($alloc(StreamOpFlag$Type));
}


StreamOpFlag$Type* StreamOpFlag$Type::SPLITERATOR = nullptr;

StreamOpFlag$Type* StreamOpFlag$Type::STREAM = nullptr;

StreamOpFlag$Type* StreamOpFlag$Type::OP = nullptr;

StreamOpFlag$Type* StreamOpFlag$Type::TERMINAL_OP = nullptr;

StreamOpFlag$Type* StreamOpFlag$Type::UPSTREAM_TERMINAL_OP = nullptr;
$StreamOpFlag$TypeArray* StreamOpFlag$Type::$VALUES = nullptr;

$StreamOpFlag$TypeArray* StreamOpFlag$Type::$values() {
	$init(StreamOpFlag$Type);
	return $new($StreamOpFlag$TypeArray, {
		StreamOpFlag$Type::SPLITERATOR,
		StreamOpFlag$Type::STREAM,
		StreamOpFlag$Type::OP,
		StreamOpFlag$Type::TERMINAL_OP,
		StreamOpFlag$Type::UPSTREAM_TERMINAL_OP
	});
}

$StreamOpFlag$TypeArray* StreamOpFlag$Type::values() {
	$init(StreamOpFlag$Type);
	return $cast($StreamOpFlag$TypeArray, StreamOpFlag$Type::$VALUES->clone());
}

StreamOpFlag$Type* StreamOpFlag$Type::valueOf($String* name) {
	$init(StreamOpFlag$Type);
	return $cast(StreamOpFlag$Type, $Enum::valueOf(StreamOpFlag$Type::class$, name));
}

void StreamOpFlag$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StreamOpFlag$Type($Class* class$) {
	$assignStatic(StreamOpFlag$Type::SPLITERATOR, $new(StreamOpFlag$Type, "SPLITERATOR"_s, 0));
	$assignStatic(StreamOpFlag$Type::STREAM, $new(StreamOpFlag$Type, "STREAM"_s, 1));
	$assignStatic(StreamOpFlag$Type::OP, $new(StreamOpFlag$Type, "OP"_s, 2));
	$assignStatic(StreamOpFlag$Type::TERMINAL_OP, $new(StreamOpFlag$Type, "TERMINAL_OP"_s, 3));
	$assignStatic(StreamOpFlag$Type::UPSTREAM_TERMINAL_OP, $new(StreamOpFlag$Type, "UPSTREAM_TERMINAL_OP"_s, 4));
	$assignStatic(StreamOpFlag$Type::$VALUES, StreamOpFlag$Type::$values());
}

StreamOpFlag$Type::StreamOpFlag$Type() {
}

$Class* StreamOpFlag$Type::load$($String* name, bool initialize) {
	$loadClass(StreamOpFlag$Type, name, initialize, &_StreamOpFlag$Type_ClassInfo_, clinit$StreamOpFlag$Type, allocate$StreamOpFlag$Type);
	return class$;
}

$Class* StreamOpFlag$Type::class$ = nullptr;

		} // stream
	} // util
} // java