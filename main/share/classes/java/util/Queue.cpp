#include <java/util/Queue.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;

namespace java {
	namespace util {

$MethodInfo _Queue_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"element", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"remove", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Queue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Queue",
	nullptr,
	"java.util.Collection",
	nullptr,
	_Queue_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Collection<TE;>;"
};

$Object* allocate$Queue($Class* clazz) {
	return $of($alloc(Queue));
}

$Class* Queue::load$($String* name, bool initialize) {
	$loadClass(Queue, name, initialize, &_Queue_ClassInfo_, allocate$Queue);
	return class$;
}

$Class* Queue::class$ = nullptr;

	} // util
} // java