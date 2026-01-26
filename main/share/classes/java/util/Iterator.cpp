#include <java/util/Iterator.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$MethodInfo _Iterator_MethodInfo_[] = {
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Iterator, forEachRemaining, void, $Consumer*)},
	{"hasNext", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Iterator, hasNext, bool)},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Iterator, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Iterator, remove, void)},
	{}
};

$ClassInfo _Iterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Iterator",
	nullptr,
	nullptr,
	nullptr,
	_Iterator_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$Iterator($Class* clazz) {
	return $of($alloc(Iterator));
}

void Iterator::remove() {
	$throwNew($UnsupportedOperationException, "remove"_s);
}

void Iterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	while (hasNext()) {
		action->accept($(next()));
	}
}

$Class* Iterator::load$($String* name, bool initialize) {
	$loadClass(Iterator, name, initialize, &_Iterator_ClassInfo_, allocate$Iterator);
	return class$;
}

$Class* Iterator::class$ = nullptr;

	} // util
} // java