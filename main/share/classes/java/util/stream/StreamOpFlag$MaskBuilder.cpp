#include <java/util/stream/StreamOpFlag$MaskBuilder.h>

#include <java/util/Map.h>
#include <java/util/stream/StreamOpFlag$Type.h>
#include <java/util/stream/StreamOpFlag.h>
#include <jcpp.h>

using $StreamOpFlag$TypeArray = $Array<::java::util::stream::StreamOpFlag$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $StreamOpFlag$Type = ::java::util::stream::StreamOpFlag$Type;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamOpFlag$MaskBuilder_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/stream/StreamOpFlag$Type;Ljava/lang/Integer;>;", $FINAL, $field(StreamOpFlag$MaskBuilder, map)},
	{}
};

$MethodInfo _StreamOpFlag$MaskBuilder_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/util/stream/StreamOpFlag$Type;Ljava/lang/Integer;>;)V", 0, $method(static_cast<void(StreamOpFlag$MaskBuilder::*)($Map*)>(&StreamOpFlag$MaskBuilder::init$))},
	{"build", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/stream/StreamOpFlag$Type;Ljava/lang/Integer;>;", 0},
	{"clear", "(Ljava/util/stream/StreamOpFlag$Type;)Ljava/util/stream/StreamOpFlag$MaskBuilder;", nullptr, 0},
	{"mask", "(Ljava/util/stream/StreamOpFlag$Type;Ljava/lang/Integer;)Ljava/util/stream/StreamOpFlag$MaskBuilder;", nullptr, 0},
	{"set", "(Ljava/util/stream/StreamOpFlag$Type;)Ljava/util/stream/StreamOpFlag$MaskBuilder;", nullptr, 0},
	{"setAndClear", "(Ljava/util/stream/StreamOpFlag$Type;)Ljava/util/stream/StreamOpFlag$MaskBuilder;", nullptr, 0},
	{}
};

$InnerClassInfo _StreamOpFlag$MaskBuilder_InnerClassesInfo_[] = {
	{"java.util.stream.StreamOpFlag$MaskBuilder", "java.util.stream.StreamOpFlag", "MaskBuilder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StreamOpFlag$MaskBuilder_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.StreamOpFlag$MaskBuilder",
	"java.lang.Object",
	nullptr,
	_StreamOpFlag$MaskBuilder_FieldInfo_,
	_StreamOpFlag$MaskBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_StreamOpFlag$MaskBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamOpFlag"
};

$Object* allocate$StreamOpFlag$MaskBuilder($Class* clazz) {
	return $of($alloc(StreamOpFlag$MaskBuilder));
}

void StreamOpFlag$MaskBuilder::init$($Map* map) {
	$set(this, map, map);
}

StreamOpFlag$MaskBuilder* StreamOpFlag$MaskBuilder::mask($StreamOpFlag$Type* t, $Integer* i) {
	$nc(this->map)->put(t, i);
	return this;
}

StreamOpFlag$MaskBuilder* StreamOpFlag$MaskBuilder::set($StreamOpFlag$Type* t) {
	return mask(t, $($Integer::valueOf(1)));
}

StreamOpFlag$MaskBuilder* StreamOpFlag$MaskBuilder::clear($StreamOpFlag$Type* t) {
	return mask(t, $($Integer::valueOf(2)));
}

StreamOpFlag$MaskBuilder* StreamOpFlag$MaskBuilder::setAndClear($StreamOpFlag$Type* t) {
	return mask(t, $($Integer::valueOf(3)));
}

$Map* StreamOpFlag$MaskBuilder::build() {
	$useLocalCurrentObjectStackCache();
	{
		$var($StreamOpFlag$TypeArray, arr$, $StreamOpFlag$Type::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$StreamOpFlag$Type* t = arr$->get(i$);
			{
				$nc(this->map)->putIfAbsent(t, $($Integer::valueOf(0)));
			}
		}
	}
	return this->map;
}

StreamOpFlag$MaskBuilder::StreamOpFlag$MaskBuilder() {
}

$Class* StreamOpFlag$MaskBuilder::load$($String* name, bool initialize) {
	$loadClass(StreamOpFlag$MaskBuilder, name, initialize, &_StreamOpFlag$MaskBuilder_ClassInfo_, allocate$StreamOpFlag$MaskBuilder);
	return class$;
}

$Class* StreamOpFlag$MaskBuilder::class$ = nullptr;

		} // stream
	} // util
} // java