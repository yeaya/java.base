#include <java/util/stream/Streams$AbstractStreamBuilderImpl.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/Streams.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;

namespace java {
	namespace util {
		namespace stream {

void Streams$AbstractStreamBuilderImpl::init$() {
}

$Spliterator* Streams$AbstractStreamBuilderImpl::trySplit() {
	return nullptr;
}

int64_t Streams$AbstractStreamBuilderImpl::estimateSize() {
	return -this->count - 1;
}

int32_t Streams$AbstractStreamBuilderImpl::characteristics() {
	return (($Spliterator::SIZED | $Spliterator::SUBSIZED) | $Spliterator::ORDERED) | $Spliterator::IMMUTABLE;
}

Streams$AbstractStreamBuilderImpl::Streams$AbstractStreamBuilderImpl() {
}

$Class* Streams$AbstractStreamBuilderImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, 0, $field(Streams$AbstractStreamBuilderImpl, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Streams$AbstractStreamBuilderImpl, init$, void)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(Streams$AbstractStreamBuilderImpl, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(Streams$AbstractStreamBuilderImpl, estimateSize, int64_t)},
		{"trySplit", "()Ljava/util/Spliterator;", "()TS;", $PUBLIC, $virtualMethod(Streams$AbstractStreamBuilderImpl, trySplit, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Streams$AbstractStreamBuilderImpl", "java.util.stream.Streams", "AbstractStreamBuilderImpl", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.Streams$AbstractStreamBuilderImpl",
		"java.lang.Object",
		"java.util.Spliterator",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;S::Ljava/util/Spliterator<TT;>;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Streams"
	};
	$loadClass(Streams$AbstractStreamBuilderImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Streams$AbstractStreamBuilderImpl);
	});
	return class$;
}

$Class* Streams$AbstractStreamBuilderImpl::class$ = nullptr;

		} // stream
	} // util
} // java