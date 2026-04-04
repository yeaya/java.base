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
	$useLocalObjectStack();
	{
		$var($StreamOpFlag$TypeArray, arr$, $StreamOpFlag$Type::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
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
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/stream/StreamOpFlag$Type;Ljava/lang/Integer;>;", $FINAL, $field(StreamOpFlag$MaskBuilder, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/util/stream/StreamOpFlag$Type;Ljava/lang/Integer;>;)V", 0, $method(StreamOpFlag$MaskBuilder, init$, void, $Map*)},
		{"build", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/stream/StreamOpFlag$Type;Ljava/lang/Integer;>;", 0, $virtualMethod(StreamOpFlag$MaskBuilder, build, $Map*)},
		{"clear", "(Ljava/util/stream/StreamOpFlag$Type;)Ljava/util/stream/StreamOpFlag$MaskBuilder;", nullptr, 0, $virtualMethod(StreamOpFlag$MaskBuilder, clear, StreamOpFlag$MaskBuilder*, $StreamOpFlag$Type*)},
		{"mask", "(Ljava/util/stream/StreamOpFlag$Type;Ljava/lang/Integer;)Ljava/util/stream/StreamOpFlag$MaskBuilder;", nullptr, 0, $virtualMethod(StreamOpFlag$MaskBuilder, mask, StreamOpFlag$MaskBuilder*, $StreamOpFlag$Type*, $Integer*)},
		{"set", "(Ljava/util/stream/StreamOpFlag$Type;)Ljava/util/stream/StreamOpFlag$MaskBuilder;", nullptr, 0, $virtualMethod(StreamOpFlag$MaskBuilder, set, StreamOpFlag$MaskBuilder*, $StreamOpFlag$Type*)},
		{"setAndClear", "(Ljava/util/stream/StreamOpFlag$Type;)Ljava/util/stream/StreamOpFlag$MaskBuilder;", nullptr, 0, $virtualMethod(StreamOpFlag$MaskBuilder, setAndClear, StreamOpFlag$MaskBuilder*, $StreamOpFlag$Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.StreamOpFlag$MaskBuilder", "java.util.stream.StreamOpFlag", "MaskBuilder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.StreamOpFlag$MaskBuilder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.StreamOpFlag"
	};
	$loadClass(StreamOpFlag$MaskBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamOpFlag$MaskBuilder);
	});
	return class$;
}

$Class* StreamOpFlag$MaskBuilder::class$ = nullptr;

		} // stream
	} // util
} // java