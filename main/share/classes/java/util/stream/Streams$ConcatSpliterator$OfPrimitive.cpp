#include <java/util/stream/Streams$ConcatSpliterator$OfPrimitive.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Streams$ConcatSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $Streams$ConcatSpliterator = ::java::util::stream::Streams$ConcatSpliterator;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Streams$ConcatSpliterator$OfPrimitive_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfPrimitive;Ljava/util/Spliterator$OfPrimitive;)V", "(TT_SPLITR;TT_SPLITR;)V", $PRIVATE, $method(static_cast<void(Streams$ConcatSpliterator$OfPrimitive::*)($Spliterator$OfPrimitive*,$Spliterator$OfPrimitive*)>(&Streams$ConcatSpliterator$OfPrimitive::init$))},
	{"forEachRemaining", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", "(TT_CONS;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator$OfPrimitive;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Streams$ConcatSpliterator$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$ConcatSpliterator", "java.util.stream.Streams", "ConcatSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.Streams$ConcatSpliterator$OfPrimitive", "java.util.stream.Streams$ConcatSpliterator", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Streams$ConcatSpliterator$OfPrimitive_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Streams$ConcatSpliterator$OfPrimitive",
	"java.util.stream.Streams$ConcatSpliterator",
	"java.util.Spliterator$OfPrimitive",
	nullptr,
	_Streams$ConcatSpliterator$OfPrimitive_MethodInfo_,
	"<T:Ljava/lang/Object;T_CONS:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;>Ljava/util/stream/Streams$ConcatSpliterator<TT;TT_SPLITR;>;Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;",
	nullptr,
	_Streams$ConcatSpliterator$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$ConcatSpliterator$OfPrimitive($Class* clazz) {
	return $of($alloc(Streams$ConcatSpliterator$OfPrimitive));
}

bool Streams$ConcatSpliterator$OfPrimitive::tryAdvance($Consumer* consumer) {
	 return this->$Streams$ConcatSpliterator::tryAdvance(consumer);
}

void Streams$ConcatSpliterator$OfPrimitive::forEachRemaining($Consumer* consumer) {
	this->$Streams$ConcatSpliterator::forEachRemaining(consumer);
}

int64_t Streams$ConcatSpliterator$OfPrimitive::estimateSize() {
	 return this->$Streams$ConcatSpliterator::estimateSize();
}

int32_t Streams$ConcatSpliterator$OfPrimitive::characteristics() {
	 return this->$Streams$ConcatSpliterator::characteristics();
}

$Comparator* Streams$ConcatSpliterator$OfPrimitive::getComparator() {
	 return this->$Streams$ConcatSpliterator::getComparator();
}

int64_t Streams$ConcatSpliterator$OfPrimitive::getExactSizeIfKnown() {
	 return this->$Streams$ConcatSpliterator::getExactSizeIfKnown();
}

bool Streams$ConcatSpliterator$OfPrimitive::hasCharacteristics(int32_t characteristics) {
	 return this->$Streams$ConcatSpliterator::hasCharacteristics(characteristics);
}

int32_t Streams$ConcatSpliterator$OfPrimitive::hashCode() {
	 return this->$Streams$ConcatSpliterator::hashCode();
}

bool Streams$ConcatSpliterator$OfPrimitive::equals(Object$* obj) {
	 return this->$Streams$ConcatSpliterator::equals(obj);
}

$Object* Streams$ConcatSpliterator$OfPrimitive::clone() {
	 return this->$Streams$ConcatSpliterator::clone();
}

$String* Streams$ConcatSpliterator$OfPrimitive::toString() {
	 return this->$Streams$ConcatSpliterator::toString();
}

void Streams$ConcatSpliterator$OfPrimitive::finalize() {
	this->$Streams$ConcatSpliterator::finalize();
}

void Streams$ConcatSpliterator$OfPrimitive::init$($Spliterator$OfPrimitive* aSpliterator, $Spliterator$OfPrimitive* bSpliterator) {
	$Streams$ConcatSpliterator::init$(aSpliterator, bSpliterator);
}

bool Streams$ConcatSpliterator$OfPrimitive::tryAdvance(Object$* action) {
	bool hasNext = false;
	if (this->beforeSplit) {
		hasNext = $nc(($cast($Spliterator$OfPrimitive, this->aSpliterator)))->tryAdvance(action);
		if (!hasNext) {
			this->beforeSplit = false;
			hasNext = $nc(($cast($Spliterator$OfPrimitive, this->bSpliterator)))->tryAdvance(action);
		}
	} else {
		hasNext = $nc(($cast($Spliterator$OfPrimitive, this->bSpliterator)))->tryAdvance(action);
	}
	return hasNext;
}

void Streams$ConcatSpliterator$OfPrimitive::forEachRemaining(Object$* action) {
	if (this->beforeSplit) {
		$nc(($cast($Spliterator$OfPrimitive, this->aSpliterator)))->forEachRemaining(action);
	}
	$nc(($cast($Spliterator$OfPrimitive, this->bSpliterator)))->forEachRemaining(action);
}

$Spliterator* Streams$ConcatSpliterator$OfPrimitive::trySplit() {
	return $cast($Spliterator$OfPrimitive, $Streams$ConcatSpliterator::trySplit());
}

Streams$ConcatSpliterator$OfPrimitive::Streams$ConcatSpliterator$OfPrimitive() {
}

$Class* Streams$ConcatSpliterator$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(Streams$ConcatSpliterator$OfPrimitive, name, initialize, &_Streams$ConcatSpliterator$OfPrimitive_ClassInfo_, allocate$Streams$ConcatSpliterator$OfPrimitive);
	return class$;
}

$Class* Streams$ConcatSpliterator$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java