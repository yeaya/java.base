#include <java/util/Spliterators$AbstractSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractSpliterator$HoldingConsumer.h>
#include <java/util/Spliterators$ArraySpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef BATCH_UNIT
#undef MAX_BATCH
#undef MAX_VALUE
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Spliterators$AbstractSpliterator$HoldingConsumer = ::java::util::Spliterators$AbstractSpliterator$HoldingConsumer;
using $Spliterators$ArraySpliterator = ::java::util::Spliterators$ArraySpliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$AbstractSpliterator_FieldInfo_[] = {
	{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractSpliterator, BATCH_UNIT)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractSpliterator, MAX_BATCH)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$AbstractSpliterator, characteristics$)},
	{"est", "J", nullptr, $PRIVATE, $field(Spliterators$AbstractSpliterator, est)},
	{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$AbstractSpliterator, batch)},
	{}
};

$MethodInfo _Spliterators$AbstractSpliterator_MethodInfo_[] = {
	{"<init>", "(JI)V", nullptr, $PROTECTED, $method(static_cast<void(Spliterators$AbstractSpliterator::*)(int64_t,int32_t)>(&Spliterators$AbstractSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$AbstractSpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$AbstractSpliterator$HoldingConsumer", "java.util.Spliterators$AbstractSpliterator", "HoldingConsumer", $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$AbstractSpliterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.Spliterators$AbstractSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_Spliterators$AbstractSpliterator_FieldInfo_,
	_Spliterators$AbstractSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_Spliterators$AbstractSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$AbstractSpliterator($Class* clazz) {
	return $of($alloc(Spliterators$AbstractSpliterator));
}

void Spliterators$AbstractSpliterator::init$(int64_t est, int32_t additionalCharacteristics) {
	this->est = est;
	this->characteristics$ = (((int32_t)(additionalCharacteristics & (uint32_t)$Spliterator::SIZED)) != 0) ? additionalCharacteristics | $Spliterator::SUBSIZED : additionalCharacteristics;
}

$Spliterator* Spliterators$AbstractSpliterator::trySplit() {
	$var($Spliterators$AbstractSpliterator$HoldingConsumer, holder, $new($Spliterators$AbstractSpliterator$HoldingConsumer));
	int64_t s = this->est;
	if (s > 1 && tryAdvance(holder)) {
		int32_t n = this->batch + Spliterators$AbstractSpliterator::BATCH_UNIT;
		if (n > s) {
			n = (int32_t)s;
		}
		if (n > Spliterators$AbstractSpliterator::MAX_BATCH) {
			n = Spliterators$AbstractSpliterator::MAX_BATCH;
		}
		$var($ObjectArray, a, $new($ObjectArray, n));
		int32_t j = 0;
		do {
			a->set(j, holder->value);
		} while (++j < n && tryAdvance(holder));
		this->batch = j;
		if (this->est != $Long::MAX_VALUE) {
			this->est -= j;
		}
		return $new($Spliterators$ArraySpliterator, a, 0, j, characteristics());
	}
	return nullptr;
}

int64_t Spliterators$AbstractSpliterator::estimateSize() {
	return this->est;
}

int32_t Spliterators$AbstractSpliterator::characteristics() {
	return this->characteristics$;
}

Spliterators$AbstractSpliterator::Spliterators$AbstractSpliterator() {
}

$Class* Spliterators$AbstractSpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$AbstractSpliterator, name, initialize, &_Spliterators$AbstractSpliterator_ClassInfo_, allocate$Spliterators$AbstractSpliterator);
	return class$;
}

$Class* Spliterators$AbstractSpliterator::class$ = nullptr;

	} // util
} // java