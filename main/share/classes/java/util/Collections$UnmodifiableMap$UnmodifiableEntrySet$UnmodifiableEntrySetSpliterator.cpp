#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator.h>

#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet.h>
#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections$UnmodifiableMap$UnmodifiableEntrySet = ::java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet;
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_FieldInfo_[] = {
	{"s", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;", $FINAL, $field(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, s)},
	{}
};

$MethodInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Spliterator;)V", "(Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;)V", 0, $method(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, init$, void, $Spliterator*)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, characteristics, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, estimateSize, int64_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC, $virtualMethod(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, forEachRemaining, void, $Consumer*)},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, getComparator, $Comparator*)},
	{"getExactSizeIfKnown", "()J", nullptr, $PUBLIC, $virtualMethod(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, getExactSizeIfKnown, int64_t)},
	{"hasCharacteristics", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, hasCharacteristics, bool, int32_t)},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC, $virtualMethod(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableMap", "java.util.Collections", "UnmodifiableMap", $PRIVATE | $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet", "java.util.Collections$UnmodifiableMap", "UnmodifiableEntrySet", $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator", "java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet", "UnmodifiableEntrySetSpliterator", $STATIC | $FINAL},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_FieldInfo_,
	_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator));
}

void Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::init$($Spliterator* s) {
	$set(this, s, s);
}

bool Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	return $nc(this->s)->tryAdvance($($Collections$UnmodifiableMap$UnmodifiableEntrySet::entryConsumer(action)));
}

void Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	$nc(this->s)->forEachRemaining($($Collections$UnmodifiableMap$UnmodifiableEntrySet::entryConsumer(action)));
}

$Spliterator* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::trySplit() {
	$var($Spliterator, split, $nc(this->s)->trySplit());
	return split == nullptr ? ($Spliterator*)nullptr : static_cast<$Spliterator*>($new(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, split));
}

int64_t Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::estimateSize() {
	return $nc(this->s)->estimateSize();
}

int64_t Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::getExactSizeIfKnown() {
	return $nc(this->s)->getExactSizeIfKnown();
}

int32_t Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::characteristics() {
	return $nc(this->s)->characteristics();
}

bool Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::hasCharacteristics(int32_t characteristics) {
	return $nc(this->s)->hasCharacteristics(characteristics);
}

$Comparator* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::getComparator() {
	return $nc(this->s)->getComparator();
}

Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator() {
}

$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, name, initialize, &_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_ClassInfo_, allocate$Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator);
	return class$;
}

$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator::class$ = nullptr;

	} // util
} // java