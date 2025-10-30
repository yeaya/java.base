#include <java/util/concurrent/atomic/AtomicStampedReference$Pair.h>

#include <java/util/concurrent/atomic/AtomicStampedReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicStampedReference = ::java::util::concurrent::atomic::AtomicStampedReference;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _AtomicStampedReference$Pair_FieldInfo_[] = {
	{"reference", "Ljava/lang/Object;", "TT;", $FINAL, $field(AtomicStampedReference$Pair, reference)},
	{"stamp", "I", nullptr, $FINAL, $field(AtomicStampedReference$Pair, stamp)},
	{}
};

$MethodInfo _AtomicStampedReference$Pair_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;I)V", "(TT;I)V", $PRIVATE, $method(static_cast<void(AtomicStampedReference$Pair::*)(Object$*,int32_t)>(&AtomicStampedReference$Pair::init$))},
	{"of", "(Ljava/lang/Object;I)Ljava/util/concurrent/atomic/AtomicStampedReference$Pair;", "<T:Ljava/lang/Object;>(TT;I)Ljava/util/concurrent/atomic/AtomicStampedReference$Pair<TT;>;", $STATIC, $method(static_cast<AtomicStampedReference$Pair*(*)(Object$*,int32_t)>(&AtomicStampedReference$Pair::of))},
	{}
};

$InnerClassInfo _AtomicStampedReference$Pair_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicStampedReference$Pair", "java.util.concurrent.atomic.AtomicStampedReference", "Pair", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AtomicStampedReference$Pair_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.atomic.AtomicStampedReference$Pair",
	"java.lang.Object",
	nullptr,
	_AtomicStampedReference$Pair_FieldInfo_,
	_AtomicStampedReference$Pair_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AtomicStampedReference$Pair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicStampedReference"
};

$Object* allocate$AtomicStampedReference$Pair($Class* clazz) {
	return $of($alloc(AtomicStampedReference$Pair));
}

void AtomicStampedReference$Pair::init$(Object$* reference, int32_t stamp) {
	$set(this, reference, reference);
	this->stamp = stamp;
}

AtomicStampedReference$Pair* AtomicStampedReference$Pair::of(Object$* reference, int32_t stamp) {
	return $new(AtomicStampedReference$Pair, reference, stamp);
}

AtomicStampedReference$Pair::AtomicStampedReference$Pair() {
}

$Class* AtomicStampedReference$Pair::load$($String* name, bool initialize) {
	$loadClass(AtomicStampedReference$Pair, name, initialize, &_AtomicStampedReference$Pair_ClassInfo_, allocate$AtomicStampedReference$Pair);
	return class$;
}

$Class* AtomicStampedReference$Pair::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java