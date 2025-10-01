#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/function/DoublePredicate.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfDouble.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $DoublePredicate = ::java::util::function::DoublePredicate;
using $WhileOps$UnorderedWhileSpliterator = ::java::util::stream::WhileOps$UnorderedWhileSpliterator;
using $WhileOps$UnorderedWhileSpliterator$OfDouble = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfDouble;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Spliterator$OfDouble;ZLjava/util/function/DoublePredicate;)V", nullptr, 0, $method(static_cast<void(WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::*)($Spliterator$OfDouble*,bool,$DoublePredicate*)>(&WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::init$))},
	{"<init>", "(Ljava/util/Spliterator$OfDouble;Ljava/util/stream/WhileOps$UnorderedWhileSpliterator$OfDouble;)V", nullptr, 0, $method(static_cast<void(WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::*)($Spliterator$OfDouble*,$WhileOps$UnorderedWhileSpliterator$OfDouble*)>(&WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::init$))},
	{"makeSpliterator", "(Ljava/util/Spliterator$OfDouble;)Ljava/util/Spliterator$OfDouble;", nullptr, 0, $method(static_cast<$Spliterator$OfDouble*(WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::*)($Spliterator$OfDouble*)>(&WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::makeSpliterator))},
	{"makeSpliterator", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator", "java.util.stream.WhileOps", "UnorderedWhileSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfDouble", "java.util.stream.WhileOps$UnorderedWhileSpliterator", "OfDouble", $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping", "java.util.stream.WhileOps$UnorderedWhileSpliterator$OfDouble", "Dropping", $STATIC | $FINAL},
	{}
};

$ClassInfo _WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping",
	"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfDouble",
	nullptr,
	nullptr,
	_WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping_MethodInfo_,
	nullptr,
	nullptr,
	_WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping($Class* clazz) {
	return $of($alloc(WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping));
}

void WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::init$($Spliterator$OfDouble* s, bool noSplitting, $DoublePredicate* p) {
	$WhileOps$UnorderedWhileSpliterator$OfDouble::init$(s, noSplitting, p);
}

void WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::init$($Spliterator$OfDouble* s, $WhileOps$UnorderedWhileSpliterator$OfDouble* parent) {
	$WhileOps$UnorderedWhileSpliterator$OfDouble::init$(s, parent);
}

bool WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::tryAdvance($DoubleConsumer* action) {
	if (this->takeOrDrop) {
		this->takeOrDrop = false;
		bool adv = false;
		bool dropped = false;
		while (true) {
			bool var$1 = (adv = $nc(($cast($Spliterator$OfDouble, this->s)))->tryAdvance(static_cast<$DoubleConsumer*>(this)));
			bool var$0 = var$1 && checkCancelOnCount();
			if (!(var$0 && $nc(this->p)->test(this->t))) {
				break;
			}
			{
				dropped = true;
			}
		}
		if (adv) {
			if (dropped) {
				$nc(this->cancel)->set(true);
			}
			$nc(action)->accept(this->t);
		}
		return adv;
	} else {
		return $nc(($cast($Spliterator$OfDouble, this->s)))->tryAdvance(action);
	}
}

$Spliterator$OfDouble* WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::makeSpliterator($Spliterator$OfDouble* s) {
	return $as($Spliterator$OfDouble, $new(WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping, s, this));
}

$Spliterator* WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::trySplit() {
	return $cast($Spliterator$OfDouble, $WhileOps$UnorderedWhileSpliterator$OfDouble::trySplit());
}

bool WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($DoubleConsumer, action));
}

$Spliterator* WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::makeSpliterator($Spliterator* s) {
	return this->makeSpliterator($cast($Spliterator$OfDouble, s));
}

WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping() {
}

$Class* WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::load$($String* name, bool initialize) {
	$loadClass(WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping, name, initialize, &_WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping_ClassInfo_, allocate$WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping);
	return class$;
}

$Class* WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping::class$ = nullptr;

		} // stream
	} // util
} // java