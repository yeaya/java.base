#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus.h>

#include <java/lang/Enum.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

#undef MAYBE_MORE
#undef NO_MORE
#undef UNLIMITED

using $StreamSpliterators$UnorderedSliceSpliterator$PermitStatusArray = $Array<::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StreamSpliterators = ::java::util::stream::StreamSpliterators;
using $StreamSpliterators$UnorderedSliceSpliterator = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_FieldInfo_[] = {
	{"NO_MORE", "Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, NO_MORE)},
	{"MAYBE_MORE", "Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, MAYBE_MORE)},
	{"UNLIMITED", "Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, UNLIMITED)},
	{"$VALUES", "[Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, $VALUES)},
	{}
};

$MethodInfo _StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_MethodInfo_[] = {
	{"$values", "()[Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StreamSpliterators$UnorderedSliceSpliterator$PermitStatusArray*(*)()>(&StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::*)($String*,int32_t)>(&StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StreamSpliterators$UnorderedSliceSpliterator$PermitStatus*(*)($String*)>(&StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::valueOf))},
	{"values", "()[Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StreamSpliterators$UnorderedSliceSpliterator$PermitStatusArray*(*)()>(&StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::values))},
	{}
};

$InnerClassInfo _StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "java.util.stream.StreamSpliterators", "UnorderedSliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$PermitStatus", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "PermitStatus", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$PermitStatus",
	"java.lang.Enum",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_FieldInfo_,
	_StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;>;",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$UnorderedSliceSpliterator$PermitStatus($Class* clazz) {
	return $of($alloc(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus));
}

StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::NO_MORE = nullptr;
StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::MAYBE_MORE = nullptr;
StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::UNLIMITED = nullptr;
$StreamSpliterators$UnorderedSliceSpliterator$PermitStatusArray* StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::$VALUES = nullptr;

$StreamSpliterators$UnorderedSliceSpliterator$PermitStatusArray* StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::$values() {
	$init(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
	return $new($StreamSpliterators$UnorderedSliceSpliterator$PermitStatusArray, {
		StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::NO_MORE,
		StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::MAYBE_MORE,
		StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::UNLIMITED
	});
}

$StreamSpliterators$UnorderedSliceSpliterator$PermitStatusArray* StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::values() {
	$init(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
	return $cast($StreamSpliterators$UnorderedSliceSpliterator$PermitStatusArray, StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::$VALUES->clone());
}

StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::valueOf($String* name) {
	$init(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
	return $cast(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, $Enum::valueOf(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::class$, name));
}

void StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StreamSpliterators$UnorderedSliceSpliterator$PermitStatus($Class* class$) {
	$assignStatic(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::NO_MORE, $new(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, "NO_MORE"_s, 0));
	$assignStatic(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::MAYBE_MORE, $new(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, "MAYBE_MORE"_s, 1));
	$assignStatic(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::UNLIMITED, $new(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, "UNLIMITED"_s, 2));
	$assignStatic(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::$VALUES, StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::$values());
}

StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus() {
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, name, initialize, &_StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_ClassInfo_, clinit$StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, allocate$StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
	return class$;
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::class$ = nullptr;

		} // stream
	} // util
} // java