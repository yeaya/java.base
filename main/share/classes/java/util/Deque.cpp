#include <java/util/Deque.h>

#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$MethodInfo _Deque_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addFirst", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, addFirst, void, Object$*)},
	{"addLast", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, addLast, void, Object$*)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, descendingIterator, $Iterator*)},
	{"element", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, getFirst, $Object*)},
	{"getLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, getLast, $Object*)},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"offerFirst", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, offerFirst, bool, Object$*)},
	{"offerLast", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, offerLast, bool, Object$*)},
	{"peek", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"peekFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, peekFirst, $Object*)},
	{"peekLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, peekLast, $Object*)},
	{"poll", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, pollFirst, $Object*)},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, pollLast, $Object*)},
	{"pop", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, pop, $Object*)},
	{"push", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, push, void, Object$*)},
	{"remove", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, removeFirst, $Object*)},
	{"removeFirstOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Deque, removeFirstOccurrence, bool, Object$*)},
	{"removeLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Deque, removeLast, $Object*)},
	{"removeLastOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Deque, removeLastOccurrence, bool, Object$*)},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Deque_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Deque",
	nullptr,
	"java.util.Queue",
	nullptr,
	_Deque_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Queue<TE;>;"
};

$Object* allocate$Deque($Class* clazz) {
	return $of($alloc(Deque));
}

$Class* Deque::load$($String* name, bool initialize) {
	$loadClass(Deque, name, initialize, &_Deque_ClassInfo_, allocate$Deque);
	return class$;
}

$Class* Deque::class$ = nullptr;

	} // util
} // java