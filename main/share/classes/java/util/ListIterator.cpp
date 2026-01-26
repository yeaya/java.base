#include <java/util/ListIterator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _ListIterator_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, $virtualMethod(ListIterator, add, void, Object$*)},
	{"hasNext", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hasPrevious", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListIterator, hasPrevious, bool)},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"nextIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListIterator, nextIndex, int32_t)},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(ListIterator, previous, $Object*)},
	{"previousIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListIterator, previousIndex, int32_t)},
	{"remove", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListIterator, remove, void)},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, $virtualMethod(ListIterator, set, void, Object$*)},
	{}
};

$ClassInfo _ListIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.ListIterator",
	nullptr,
	"java.util.Iterator",
	nullptr,
	_ListIterator_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;"
};

$Object* allocate$ListIterator($Class* clazz) {
	return $of($alloc(ListIterator));
}

$Class* ListIterator::load$($String* name, bool initialize) {
	$loadClass(ListIterator, name, initialize, &_ListIterator_ClassInfo_, allocate$ListIterator);
	return class$;
}

$Class* ListIterator::class$ = nullptr;

	} // util
} // java