#include <java/util/Deque.h>

#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _Deque_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addFirst", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT},
	{"addLast", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC | $ABSTRACT},
	{"element", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"getLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"offerFirst", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC | $ABSTRACT},
	{"offerLast", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"peekFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"peekLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"poll", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"pop", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"push", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT},
	{"remove", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"removeFirstOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"removeLastOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
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