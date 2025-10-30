#include <java/util/concurrent/atomic/AtomicMarkableReference$Pair.h>

#include <java/util/concurrent/atomic/AtomicMarkableReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicMarkableReference = ::java::util::concurrent::atomic::AtomicMarkableReference;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _AtomicMarkableReference$Pair_FieldInfo_[] = {
	{"reference", "Ljava/lang/Object;", "TT;", $FINAL, $field(AtomicMarkableReference$Pair, reference)},
	{"mark", "Z", nullptr, $FINAL, $field(AtomicMarkableReference$Pair, mark)},
	{}
};

$MethodInfo _AtomicMarkableReference$Pair_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Z)V", "(TT;Z)V", $PRIVATE, $method(static_cast<void(AtomicMarkableReference$Pair::*)(Object$*,bool)>(&AtomicMarkableReference$Pair::init$))},
	{"of", "(Ljava/lang/Object;Z)Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair;", "<T:Ljava/lang/Object;>(TT;Z)Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair<TT;>;", $STATIC, $method(static_cast<AtomicMarkableReference$Pair*(*)(Object$*,bool)>(&AtomicMarkableReference$Pair::of))},
	{}
};

$InnerClassInfo _AtomicMarkableReference$Pair_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicMarkableReference$Pair", "java.util.concurrent.atomic.AtomicMarkableReference", "Pair", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AtomicMarkableReference$Pair_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.atomic.AtomicMarkableReference$Pair",
	"java.lang.Object",
	nullptr,
	_AtomicMarkableReference$Pair_FieldInfo_,
	_AtomicMarkableReference$Pair_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AtomicMarkableReference$Pair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicMarkableReference"
};

$Object* allocate$AtomicMarkableReference$Pair($Class* clazz) {
	return $of($alloc(AtomicMarkableReference$Pair));
}

void AtomicMarkableReference$Pair::init$(Object$* reference, bool mark) {
	$set(this, reference, reference);
	this->mark = mark;
}

AtomicMarkableReference$Pair* AtomicMarkableReference$Pair::of(Object$* reference, bool mark) {
	return $new(AtomicMarkableReference$Pair, reference, mark);
}

AtomicMarkableReference$Pair::AtomicMarkableReference$Pair() {
}

$Class* AtomicMarkableReference$Pair::load$($String* name, bool initialize) {
	$loadClass(AtomicMarkableReference$Pair, name, initialize, &_AtomicMarkableReference$Pair_ClassInfo_, allocate$AtomicMarkableReference$Pair);
	return class$;
}

$Class* AtomicMarkableReference$Pair::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java