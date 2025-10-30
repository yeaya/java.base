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
using $StreamSpliterators = ::java::util::stream::StreamSpliterators;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$DelegatingSpliterator_FieldInfo_[] = {
	{"supplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+TT_SPLITR;>;", $PRIVATE | $FINAL, $field(StreamSpliterators$DelegatingSpliterator, supplier)},
	{"s", "Ljava/util/Spliterator;", "TT_SPLITR;", $PRIVATE, $field(StreamSpliterators$DelegatingSpliterator, s)},
	{}
};

$MethodInfo _StreamSpliterators$DelegatingSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<+TT_SPLITR;>;)V", 0, $method(static_cast<void(StreamSpliterators$DelegatingSpliterator::*)($Supplier*)>(&StreamSpliterators$DelegatingSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"get", "()Ljava/util/Spliterator;", "()TT_SPLITR;", 0},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TT;>;", $PUBLIC},
	{"getExactSizeIfKnown", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()TT_SPLITR;", $PUBLIC},
	{}
};

$InnerClassInfo _StreamSpliterators$DelegatingSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator", "java.util.stream.StreamSpliterators", "DelegatingSpliterator", $STATIC},
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfDouble", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfLong", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfInt", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfPrimitive", $STATIC},
	{}
};

$ClassInfo _StreamSpliterators$DelegatingSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.StreamSpliterators$DelegatingSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_StreamSpliterators$DelegatingSpliterator_FieldInfo_,
	_StreamSpliterators$DelegatingSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator<TT;>;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_StreamSpliterators$DelegatingSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$DelegatingSpliterator($Class* clazz) {
	return $of($alloc(StreamSpliterators$DelegatingSpliterator));
}

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
	return $nc($(get()))->trySplit();
}

bool StreamSpliterators$DelegatingSpliterator::tryAdvance($Consumer* consumer) {
	return $nc($(get()))->tryAdvance(consumer);
}

void StreamSpliterators$DelegatingSpliterator::forEachRemaining($Consumer* consumer) {
	$nc($(get()))->forEachRemaining(consumer);
}

int64_t StreamSpliterators$DelegatingSpliterator::estimateSize() {
	return $nc($(get()))->estimateSize();
}

int32_t StreamSpliterators$DelegatingSpliterator::characteristics() {
	return $nc($(get()))->characteristics();
}

$Comparator* StreamSpliterators$DelegatingSpliterator::getComparator() {
	return $nc($(get()))->getComparator();
}

int64_t StreamSpliterators$DelegatingSpliterator::getExactSizeIfKnown() {
	return $nc($(get()))->getExactSizeIfKnown();
}

$String* StreamSpliterators$DelegatingSpliterator::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "["_s}));
	$var($String, var$0, $$concat(var$1, $(get())));
	return $concat(var$0, "]");
}

StreamSpliterators$DelegatingSpliterator::StreamSpliterators$DelegatingSpliterator() {
}

$Class* StreamSpliterators$DelegatingSpliterator::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$DelegatingSpliterator, name, initialize, &_StreamSpliterators$DelegatingSpliterator_ClassInfo_, allocate$StreamSpliterators$DelegatingSpliterator);
	return class$;
}

$Class* StreamSpliterators$DelegatingSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java