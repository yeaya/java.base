#include <java/util/Spliterators$EmptySpliterator$OfRef.h>

#include <java/util/Spliterator.h>
#include <java/util/Spliterators$EmptySpliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators$EmptySpliterator = ::java::util::Spliterators$EmptySpliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$MethodInfo _Spliterators$EmptySpliterator$OfRef_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(Spliterators$EmptySpliterator$OfRef, init$, void)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spliterators$EmptySpliterator$OfRef, forEachRemaining, void, $Consumer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spliterators$EmptySpliterator$OfRef, tryAdvance, bool, $Consumer*)},
	{"*trySplit", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$EmptySpliterator$OfRef_InnerClassesInfo_[] = {
	{"java.util.Spliterators$EmptySpliterator", "java.util.Spliterators", "EmptySpliterator", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$EmptySpliterator$OfRef", "java.util.Spliterators$EmptySpliterator", "OfRef", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$EmptySpliterator$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$EmptySpliterator$OfRef",
	"java.util.Spliterators$EmptySpliterator",
	"java.util.Spliterator",
	nullptr,
	_Spliterators$EmptySpliterator$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/Spliterators$EmptySpliterator<TT;Ljava/util/Spliterator<TT;>;Ljava/util/function/Consumer<-TT;>;>;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_Spliterators$EmptySpliterator$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$EmptySpliterator$OfRef($Class* clazz) {
	return $of($alloc(Spliterators$EmptySpliterator$OfRef));
}

$Spliterator* Spliterators$EmptySpliterator$OfRef::trySplit() {
	 return this->$Spliterators$EmptySpliterator::trySplit();
}

int64_t Spliterators$EmptySpliterator$OfRef::estimateSize() {
	 return this->$Spliterators$EmptySpliterator::estimateSize();
}

int32_t Spliterators$EmptySpliterator$OfRef::characteristics() {
	 return this->$Spliterators$EmptySpliterator::characteristics();
}

int32_t Spliterators$EmptySpliterator$OfRef::hashCode() {
	 return this->$Spliterators$EmptySpliterator::hashCode();
}

bool Spliterators$EmptySpliterator$OfRef::equals(Object$* obj) {
	 return this->$Spliterators$EmptySpliterator::equals(obj);
}

$Object* Spliterators$EmptySpliterator$OfRef::clone() {
	 return this->$Spliterators$EmptySpliterator::clone();
}

$String* Spliterators$EmptySpliterator$OfRef::toString() {
	 return this->$Spliterators$EmptySpliterator::toString();
}

void Spliterators$EmptySpliterator$OfRef::finalize() {
	this->$Spliterators$EmptySpliterator::finalize();
}

void Spliterators$EmptySpliterator$OfRef::init$() {
	$Spliterators$EmptySpliterator::init$();
}

void Spliterators$EmptySpliterator$OfRef::forEachRemaining($Consumer* consumer) {
	$Spliterators$EmptySpliterator::forEachRemaining(consumer);
}

bool Spliterators$EmptySpliterator$OfRef::tryAdvance($Consumer* consumer) {
	return $Spliterators$EmptySpliterator::tryAdvance(consumer);
}

Spliterators$EmptySpliterator$OfRef::Spliterators$EmptySpliterator$OfRef() {
}

$Class* Spliterators$EmptySpliterator$OfRef::load$($String* name, bool initialize) {
	$loadClass(Spliterators$EmptySpliterator$OfRef, name, initialize, &_Spliterators$EmptySpliterator$OfRef_ClassInfo_, allocate$Spliterators$EmptySpliterator$OfRef);
	return class$;
}

$Class* Spliterators$EmptySpliterator$OfRef::class$ = nullptr;

	} // util
} // java