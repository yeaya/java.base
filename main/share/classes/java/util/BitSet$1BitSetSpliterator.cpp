#include <java/util/BitSet$1BitSetSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/BitSet.h>
#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED
#undef DISTINCT
#undef MAX_VALUE
#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {

$FieldInfo _BitSet$1BitSetSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/BitSet;", nullptr, $FINAL | $SYNTHETIC, $field(BitSet$1BitSetSpliterator, this$0)},
	{"index", "I", nullptr, $PRIVATE, $field(BitSet$1BitSetSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE, $field(BitSet$1BitSetSpliterator, fence)},
	{"est", "I", nullptr, $PRIVATE, $field(BitSet$1BitSetSpliterator, est)},
	{"root", "Z", nullptr, $PRIVATE, $field(BitSet$1BitSetSpliterator, root)},
	{}
};

$MethodInfo _BitSet$1BitSetSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/BitSet;IIIZ)V", nullptr, 0, $method(static_cast<void(BitSet$1BitSetSpliterator::*)($BitSet*,int32_t,int32_t,int32_t,bool)>(&BitSet$1BitSetSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Integer;>;", $PUBLIC},
	{"getFence", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BitSet$1BitSetSpliterator::*)()>(&BitSet$1BitSetSpliterator::getFence))},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BitSet$1BitSetSpliterator_EnclosingMethodInfo_ = {
	"java.util.BitSet",
	"stream",
	"()Ljava/util/stream/IntStream;"
};

$InnerClassInfo _BitSet$1BitSetSpliterator_InnerClassesInfo_[] = {
	{"java.util.BitSet$1BitSetSpliterator", nullptr, "BitSetSpliterator", 0},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _BitSet$1BitSetSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.BitSet$1BitSetSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfInt",
	_BitSet$1BitSetSpliterator_FieldInfo_,
	_BitSet$1BitSetSpliterator_MethodInfo_,
	nullptr,
	&_BitSet$1BitSetSpliterator_EnclosingMethodInfo_,
	_BitSet$1BitSetSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.BitSet"
};

$Object* allocate$BitSet$1BitSetSpliterator($Class* clazz) {
	return $of($alloc(BitSet$1BitSetSpliterator));
}

void BitSet$1BitSetSpliterator::init$($BitSet* this$0, int32_t origin, int32_t fence, int32_t est, bool root) {
	$set(this, this$0, this$0);
	this->index = origin;
	this->fence = fence;
	this->est = est;
	this->root = root;
}

int32_t BitSet$1BitSetSpliterator::getFence() {
	int32_t hi = 0;
	if ((hi = this->fence) < 0) {
		hi = (this->fence = (this->this$0->wordsInUse >= $BitSet::wordIndex($Integer::MAX_VALUE)) ? $Integer::MAX_VALUE : this->this$0->wordsInUse << 6);
		this->est = this->this$0->cardinality();
		this->index = this->this$0->nextSetBit(0);
	}
	return hi;
}

bool BitSet$1BitSetSpliterator::tryAdvance($IntConsumer* action) {
	$Objects::requireNonNull(action);
	int32_t hi = getFence();
	int32_t i = this->index;
	if (i < 0 || i >= hi) {
		if (i == $Integer::MAX_VALUE && hi == $Integer::MAX_VALUE) {
			this->index = -1;
			action->accept($Integer::MAX_VALUE);
			return true;
		}
		return false;
	}
	this->index = this->this$0->nextSetBit(i + 1, $BitSet::wordIndex(hi - 1));
	action->accept(i);
	return true;
}

void BitSet$1BitSetSpliterator::forEachRemaining($IntConsumer* action) {
	$Objects::requireNonNull(action);
	int32_t hi = getFence();
	int32_t i = this->index;
	this->index = -1;
	if (i >= 0 && i < hi) {
		action->accept(i++);
		int32_t u = $BitSet::wordIndex(i);
		int32_t v = $BitSet::wordIndex(hi - 1);
		bool words_loop$break = false;
		for (; u <= v && i <= hi; ++u, i = u << 6) {
			int64_t word = (int64_t)($nc(this->this$0->words)->get(u) & (uint64_t)($sl((int64_t)-1, i)));
			while (word != 0) {
				i = (u << 6) + $Long::numberOfTrailingZeros(word);
				if (i >= hi) {
					words_loop$break = true;
					break;
				}
				word &= (uint64_t)~($sl((int64_t)1, i));
				action->accept(i);
			}
			if (words_loop$break) {
				break;
			}
		}
	}
	if (i == $Integer::MAX_VALUE && hi == $Integer::MAX_VALUE) {
		action->accept($Integer::MAX_VALUE);
	}
}

$Spliterator$OfInt* BitSet$1BitSetSpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	if (lo < 0) {
		return nullptr;
	}
	hi = (this->fence = (hi < $Integer::MAX_VALUE || !this->this$0->get($Integer::MAX_VALUE)) ? this->this$0->previousSetBit(hi - 1) + 1 : $Integer::MAX_VALUE);
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	if (lo >= mid) {
		return nullptr;
	}
	this->index = this->this$0->nextSetBit(mid, $BitSet::wordIndex(hi - 1));
	this->root = false;
	return $new(BitSet$1BitSetSpliterator, this->this$0, lo, mid, $usrAssign(this->est, 1), false);
}

int64_t BitSet$1BitSetSpliterator::estimateSize() {
	getFence();
	return this->est;
}

int32_t BitSet$1BitSetSpliterator::characteristics() {
	return (((this->root ? $Spliterator::SIZED : 0) | $Spliterator::ORDERED) | $Spliterator::DISTINCT) | $Spliterator::SORTED;
}

$Comparator* BitSet$1BitSetSpliterator::getComparator() {
	return nullptr;
}

void BitSet$1BitSetSpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

bool BitSet$1BitSetSpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

BitSet$1BitSetSpliterator::BitSet$1BitSetSpliterator() {
}

$Class* BitSet$1BitSetSpliterator::load$($String* name, bool initialize) {
	$loadClass(BitSet$1BitSetSpliterator, name, initialize, &_BitSet$1BitSetSpliterator_ClassInfo_, allocate$BitSet$1BitSetSpliterator);
	return class$;
}

$Class* BitSet$1BitSetSpliterator::class$ = nullptr;

	} // util
} // java