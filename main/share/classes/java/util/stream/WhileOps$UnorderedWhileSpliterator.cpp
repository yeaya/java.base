#include <java/util/stream/WhileOps$UnorderedWhileSpliterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/stream/WhileOps.h>
#include <jcpp.h>

#undef SUBSIZED
#undef SIZED
#undef CANCEL_CHECK_COUNT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $WhileOps = ::java::util::stream::WhileOps;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$UnorderedWhileSpliterator_FieldInfo_[] = {
	{"CANCEL_CHECK_COUNT", "I", nullptr, $STATIC | $FINAL, $constField(WhileOps$UnorderedWhileSpliterator, CANCEL_CHECK_COUNT)},
	{"s", "Ljava/util/Spliterator;", "TT_SPLITR;", $FINAL, $field(WhileOps$UnorderedWhileSpliterator, s)},
	{"noSplitting", "Z", nullptr, $FINAL, $field(WhileOps$UnorderedWhileSpliterator, noSplitting)},
	{"cancel", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL, $field(WhileOps$UnorderedWhileSpliterator, cancel)},
	{"takeOrDrop", "Z", nullptr, 0, $field(WhileOps$UnorderedWhileSpliterator, takeOrDrop)},
	{"count", "I", nullptr, 0, $field(WhileOps$UnorderedWhileSpliterator, count)},
	{}
};

$MethodInfo _WhileOps$UnorderedWhileSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Spliterator;Z)V", "(TT_SPLITR;Z)V", 0, $method(static_cast<void(WhileOps$UnorderedWhileSpliterator::*)($Spliterator*,bool)>(&WhileOps$UnorderedWhileSpliterator::init$))},
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/WhileOps$UnorderedWhileSpliterator;)V", "(TT_SPLITR;Ljava/util/stream/WhileOps$UnorderedWhileSpliterator<TT;TT_SPLITR;>;)V", 0, $method(static_cast<void(WhileOps$UnorderedWhileSpliterator::*)($Spliterator*,WhileOps$UnorderedWhileSpliterator*)>(&WhileOps$UnorderedWhileSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"checkCancelOnCount", "()Z", nullptr, 0},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TT;>;", $PUBLIC},
	{"getExactSizeIfKnown", "()J", nullptr, $PUBLIC},
	{"makeSpliterator", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", "(TT_SPLITR;)TT_SPLITR;", $ABSTRACT},
	{"trySplit", "()Ljava/util/Spliterator;", "()TT_SPLITR;", $PUBLIC},
	{}
};

$InnerClassInfo _WhileOps$UnorderedWhileSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator", "java.util.stream.WhileOps", "UnorderedWhileSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfDouble", "java.util.stream.WhileOps$UnorderedWhileSpliterator", "OfDouble", $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfLong", "java.util.stream.WhileOps$UnorderedWhileSpliterator", "OfLong", $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfInt", "java.util.stream.WhileOps$UnorderedWhileSpliterator", "OfInt", $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef", "java.util.stream.WhileOps$UnorderedWhileSpliterator", "OfRef", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _WhileOps$UnorderedWhileSpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.WhileOps$UnorderedWhileSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_WhileOps$UnorderedWhileSpliterator_FieldInfo_,
	_WhileOps$UnorderedWhileSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator<TT;>;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_WhileOps$UnorderedWhileSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$UnorderedWhileSpliterator($Class* clazz) {
	return $of($alloc(WhileOps$UnorderedWhileSpliterator));
}

void WhileOps$UnorderedWhileSpliterator::init$($Spliterator* s, bool noSplitting) {
	this->takeOrDrop = true;
	$set(this, s, s);
	this->noSplitting = noSplitting;
	$set(this, cancel, $new($AtomicBoolean));
}

void WhileOps$UnorderedWhileSpliterator::init$($Spliterator* s, WhileOps$UnorderedWhileSpliterator* parent) {
	this->takeOrDrop = true;
	$set(this, s, s);
	this->noSplitting = $nc(parent)->noSplitting;
	$set(this, cancel, parent->cancel);
}

int64_t WhileOps$UnorderedWhileSpliterator::estimateSize() {
	return $nc(this->s)->estimateSize();
}

int32_t WhileOps$UnorderedWhileSpliterator::characteristics() {
	return (int32_t)($nc(this->s)->characteristics() & (uint32_t)~($Spliterator::SIZED | $Spliterator::SUBSIZED));
}

int64_t WhileOps$UnorderedWhileSpliterator::getExactSizeIfKnown() {
	return -1;
}

$Comparator* WhileOps$UnorderedWhileSpliterator::getComparator() {
	return $nc(this->s)->getComparator();
}

$Spliterator* WhileOps$UnorderedWhileSpliterator::trySplit() {
	$var($Spliterator, ls, this->noSplitting ? ($Spliterator*)nullptr : $nc(this->s)->trySplit());
	return ls != nullptr ? makeSpliterator(ls) : ($Spliterator*)nullptr;
}

bool WhileOps$UnorderedWhileSpliterator::checkCancelOnCount() {
	return this->count != 0 || !$nc(this->cancel)->get();
}

WhileOps$UnorderedWhileSpliterator::WhileOps$UnorderedWhileSpliterator() {
}

$Class* WhileOps$UnorderedWhileSpliterator::load$($String* name, bool initialize) {
	$loadClass(WhileOps$UnorderedWhileSpliterator, name, initialize, &_WhileOps$UnorderedWhileSpliterator_ClassInfo_, allocate$WhileOps$UnorderedWhileSpliterator);
	return class$;
}

$Class* WhileOps$UnorderedWhileSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java