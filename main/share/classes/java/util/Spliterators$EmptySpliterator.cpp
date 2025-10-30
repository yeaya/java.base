#include <java/util/Spliterators$EmptySpliterator.h>

#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <jcpp.h>

#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;

namespace java {
	namespace util {

$MethodInfo _Spliterators$EmptySpliterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Spliterators$EmptySpliterator::*)()>(&Spliterators$EmptySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", "(TC;)V", $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", "(TC;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()TS;", $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$EmptySpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$EmptySpliterator", "java.util.Spliterators", "EmptySpliterator", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$EmptySpliterator$OfDouble", "java.util.Spliterators$EmptySpliterator", "OfDouble", $PRIVATE | $STATIC | $FINAL},
	{"java.util.Spliterators$EmptySpliterator$OfLong", "java.util.Spliterators$EmptySpliterator", "OfLong", $PRIVATE | $STATIC | $FINAL},
	{"java.util.Spliterators$EmptySpliterator$OfInt", "java.util.Spliterators$EmptySpliterator", "OfInt", $PRIVATE | $STATIC | $FINAL},
	{"java.util.Spliterators$EmptySpliterator$OfRef", "java.util.Spliterators$EmptySpliterator", "OfRef", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$EmptySpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.Spliterators$EmptySpliterator",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Spliterators$EmptySpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;S::Ljava/util/Spliterator<TT;>;C:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Spliterators$EmptySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$EmptySpliterator($Class* clazz) {
	return $of($alloc(Spliterators$EmptySpliterator));
}

void Spliterators$EmptySpliterator::init$() {
}

$Spliterator* Spliterators$EmptySpliterator::trySplit() {
	return nullptr;
}

bool Spliterators$EmptySpliterator::tryAdvance(Object$* consumer) {
	$Objects::requireNonNull(consumer);
	return false;
}

void Spliterators$EmptySpliterator::forEachRemaining(Object$* consumer) {
	$Objects::requireNonNull(consumer);
}

int64_t Spliterators$EmptySpliterator::estimateSize() {
	return 0;
}

int32_t Spliterators$EmptySpliterator::characteristics() {
	return $Spliterator::SIZED | $Spliterator::SUBSIZED;
}

Spliterators$EmptySpliterator::Spliterators$EmptySpliterator() {
}

$Class* Spliterators$EmptySpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$EmptySpliterator, name, initialize, &_Spliterators$EmptySpliterator_ClassInfo_, allocate$Spliterators$EmptySpliterator);
	return class$;
}

$Class* Spliterators$EmptySpliterator::class$ = nullptr;

	} // util
} // java