#include <java/util/Collections$2.h>

#include <java/util/Collections.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DISTINCT
#undef IMMUTABLE
#undef NONNULL
#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$2_FieldInfo_[] = {
	{"val$element", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$2, val$element)},
	{"est", "J", nullptr, 0, $field(Collections$2, est)},
	{}
};

$MethodInfo _Collections$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "()V", 0, $method(Collections$2, init$, void, Object$*)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$2, characteristics, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(Collections$2, estimateSize, int64_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $virtualMethod(Collections$2, forEachRemaining, void, $Consumer*)},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC, $virtualMethod(Collections$2, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC, $virtualMethod(Collections$2, trySplit, $Spliterator*)},
	{}
};

$EnclosingMethodInfo _Collections$2_EnclosingMethodInfo_ = {
	"java.util.Collections",
	"singletonSpliterator",
	"(Ljava/lang/Object;)Ljava/util/Spliterator;"
};

$InnerClassInfo _Collections$2_InnerClassesInfo_[] = {
	{"java.util.Collections$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$2",
	"java.lang.Object",
	"java.util.Spliterator",
	_Collections$2_FieldInfo_,
	_Collections$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	&_Collections$2_EnclosingMethodInfo_,
	_Collections$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$2($Class* clazz) {
	return $of($alloc(Collections$2));
}

void Collections$2::init$(Object$* val$element) {
	$set(this, val$element, val$element);
	this->est = 1;
}

$Spliterator* Collections$2::trySplit() {
	return nullptr;
}

bool Collections$2::tryAdvance($Consumer* consumer) {
	$Objects::requireNonNull(consumer);
	if (this->est > 0) {
		--this->est;
		consumer->accept(this->val$element);
		return true;
	}
	return false;
}

void Collections$2::forEachRemaining($Consumer* consumer) {
	tryAdvance(consumer);
}

int64_t Collections$2::estimateSize() {
	return this->est;
}

int32_t Collections$2::characteristics() {
	int32_t value = (this->val$element != nullptr) ? $Spliterator::NONNULL : 0;
	return ((((value | $Spliterator::SIZED) | $Spliterator::SUBSIZED) | $Spliterator::IMMUTABLE) | $Spliterator::DISTINCT) | $Spliterator::ORDERED;
}

Collections$2::Collections$2() {
}

$Class* Collections$2::load$($String* name, bool initialize) {
	$loadClass(Collections$2, name, initialize, &_Collections$2_ClassInfo_, allocate$Collections$2);
	return class$;
}

$Class* Collections$2::class$ = nullptr;

	} // util
} // java