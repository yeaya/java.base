#include <java/util/stream/StreamSpliterators$DelegatingSpliterator.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;

namespace java {
	namespace util {
		namespace stream {

void StreamSpliterators$DelegatingSpliterator::init$($Supplier* supplier) {
	$set(this, supplier, supplier);
}

$Spliterator* StreamSpliterators$DelegatingSpliterator::get() {
	if (this->s == nullptr) {
		$set(this, s, $cast($Spliterator, $nc(this->supplier)->get()));
	}
	return this->s;
}

$Spliterator* StreamSpliterators$DelegatingSpliterator::trySplit() {
	return $$nc(get())->trySplit();
}

bool StreamSpliterators$DelegatingSpliterator::tryAdvance($Consumer* consumer) {
	return $$nc(get())->tryAdvance(consumer);
}

void StreamSpliterators$DelegatingSpliterator::forEachRemaining($Consumer* consumer) {
	$$nc(get())->forEachRemaining(consumer);
}

int64_t StreamSpliterators$DelegatingSpliterator::estimateSize() {
	return $$nc(get())->estimateSize();
}

int32_t StreamSpliterators$DelegatingSpliterator::characteristics() {
	return $$nc(get())->characteristics();
}

$Comparator* StreamSpliterators$DelegatingSpliterator::getComparator() {
	return $$nc(get())->getComparator();
}

int64_t StreamSpliterators$DelegatingSpliterator::getExactSizeIfKnown() {
	return $$nc(get())->getExactSizeIfKnown();
}

$String* StreamSpliterators$DelegatingSpliterator::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("["_s);
	var$0->append($(get()));
	var$0->append("]"_s);
	return $str(var$0);
}

StreamSpliterators$DelegatingSpliterator::StreamSpliterators$DelegatingSpliterator() {
}

$Class* StreamSpliterators$DelegatingSpliterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"supplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+TT_SPLITR;>;", $PRIVATE | $FINAL, $field(StreamSpliterators$DelegatingSpliterator, supplier)},
		{"s", "Ljava/util/Spliterator;", "TT_SPLITR;", $PRIVATE, $field(StreamSpliterators$DelegatingSpliterator, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<+TT_SPLITR;>;)V", 0, $method(StreamSpliterators$DelegatingSpliterator, init$, void, $Supplier*)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator, estimateSize, int64_t)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator, forEachRemaining, void, $Consumer*)},
		{"get", "()Ljava/util/Spliterator;", "()TT_SPLITR;", 0, $virtualMethod(StreamSpliterators$DelegatingSpliterator, get, $Spliterator*)},
		{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TT;>;", $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator, getComparator, $Comparator*)},
		{"getExactSizeIfKnown", "()J", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator, getExactSizeIfKnown, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator, toString, $String*)},
		{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator, tryAdvance, bool, $Consumer*)},
		{"trySplit", "()Ljava/util/Spliterator;", "()TT_SPLITR;", $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator, trySplit, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.StreamSpliterators$DelegatingSpliterator", "java.util.stream.StreamSpliterators", "DelegatingSpliterator", $STATIC},
		{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfDouble", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfDouble", $STATIC | $FINAL},
		{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfLong", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfLong", $STATIC | $FINAL},
		{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfInt", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfInt", $STATIC | $FINAL},
		{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfPrimitive", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.StreamSpliterators$DelegatingSpliterator",
		"java.lang.Object",
		"java.util.Spliterator",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator<TT;>;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.StreamSpliterators"
	};
	$loadClass(StreamSpliterators$DelegatingSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamSpliterators$DelegatingSpliterator);
	});
	return class$;
}

$Class* StreamSpliterators$DelegatingSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java