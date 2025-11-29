#include <java/util/ListIterator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _ListIterator_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT},
	{"hasNext", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hasPrevious", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"nextIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"previousIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT},
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