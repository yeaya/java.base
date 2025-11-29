#include <java/util/stream/WhileOps$4Op$1OpSink.h>

#include <java/util/function/Consumer.h>
#include <java/util/function/DoublePredicate.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/WhileOps$4Op.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $DoublePredicate = ::java::util::function::DoublePredicate;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;
using $WhileOps$4Op = ::java::util::stream::WhileOps$4Op;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$4Op$1OpSink_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/WhileOps$4Op;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$4Op$1OpSink, this$0)},
	{"val$retainAndCountDroppedElements", "Z", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$4Op$1OpSink, val$retainAndCountDroppedElements)},
	{"val$sink", "Ljava/util/stream/Sink;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$4Op$1OpSink, val$sink)},
	{"dropCount", "J", nullptr, 0, $field(WhileOps$4Op$1OpSink, dropCount)},
	{"take", "Z", nullptr, 0, $field(WhileOps$4Op$1OpSink, take)},
	{}
};

$MethodInfo _WhileOps$4Op$1OpSink_MethodInfo_[] = {
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/WhileOps$4Op;Ljava/util/stream/Sink;Z)V", "()V", 0, $method(static_cast<void(WhileOps$4Op$1OpSink::*)($WhileOps$4Op*,$Sink*,bool)>(&WhileOps$4Op$1OpSink::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"getDropCount", "()J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WhileOps$4Op$1OpSink_EnclosingMethodInfo_ = {
	"java.util.stream.WhileOps$4Op",
	"opWrapSink",
	"(Ljava/util/stream/Sink;Z)Ljava/util/stream/WhileOps$DropWhileSink;"
};

$InnerClassInfo _WhileOps$4Op$1OpSink_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$4Op", nullptr, "Op", 0},
	{"java.util.stream.WhileOps$4Op$1OpSink", nullptr, "OpSink", 0},
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$DropWhileSink", "java.util.stream.WhileOps", "DropWhileSink", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WhileOps$4Op$1OpSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.WhileOps$4Op$1OpSink",
	"java.util.stream.Sink$ChainedDouble",
	"java.util.stream.WhileOps$DropWhileSink",
	_WhileOps$4Op$1OpSink_FieldInfo_,
	_WhileOps$4Op$1OpSink_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;Ljava/util/stream/WhileOps$DropWhileSink<Ljava/lang/Double;>;",
	&_WhileOps$4Op$1OpSink_EnclosingMethodInfo_,
	_WhileOps$4Op$1OpSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$4Op$1OpSink($Class* clazz) {
	return $of($alloc(WhileOps$4Op$1OpSink));
}

void WhileOps$4Op$1OpSink::begin(int64_t size) {
	this->$Sink$ChainedDouble::begin(size);
}

void WhileOps$4Op$1OpSink::end() {
	this->$Sink$ChainedDouble::end();
}

bool WhileOps$4Op$1OpSink::cancellationRequested() {
	 return this->$Sink$ChainedDouble::cancellationRequested();
}

void WhileOps$4Op$1OpSink::accept(Object$* i) {
	this->$Sink$ChainedDouble::accept(i);
}

void WhileOps$4Op$1OpSink::accept(int32_t value) {
	this->$Sink$ChainedDouble::accept(value);
}

void WhileOps$4Op$1OpSink::accept(int64_t value) {
	this->$Sink$ChainedDouble::accept(value);
}

$Consumer* WhileOps$4Op$1OpSink::andThen($Consumer* after) {
	 return this->$Sink$ChainedDouble::andThen(after);
}

int32_t WhileOps$4Op$1OpSink::hashCode() {
	 return this->$Sink$ChainedDouble::hashCode();
}

bool WhileOps$4Op$1OpSink::equals(Object$* obj) {
	 return this->$Sink$ChainedDouble::equals(obj);
}

$Object* WhileOps$4Op$1OpSink::clone() {
	 return this->$Sink$ChainedDouble::clone();
}

$String* WhileOps$4Op$1OpSink::toString() {
	 return this->$Sink$ChainedDouble::toString();
}

void WhileOps$4Op$1OpSink::finalize() {
	this->$Sink$ChainedDouble::finalize();
}

void WhileOps$4Op$1OpSink::init$($WhileOps$4Op* this$0, $Sink* val$sink, bool val$retainAndCountDroppedElements) {
	$set(this, this$0, this$0);
	$set(this, val$sink, val$sink);
	this->val$retainAndCountDroppedElements = val$retainAndCountDroppedElements;
	$Sink$ChainedDouble::init$(val$sink);
}

void WhileOps$4Op$1OpSink::accept(double t) {
	bool var$0 = this->take;
	bool takeElement = var$0 || (this->take = !$nc(this->this$0->val$predicate)->test(t));
	if (this->val$retainAndCountDroppedElements && !takeElement) {
		++this->dropCount;
	}
	if (this->val$retainAndCountDroppedElements || takeElement) {
		$nc(this->downstream)->accept(t);
	}
}

int64_t WhileOps$4Op$1OpSink::getDropCount() {
	return this->dropCount;
}

WhileOps$4Op$1OpSink::WhileOps$4Op$1OpSink() {
}

$Class* WhileOps$4Op$1OpSink::load$($String* name, bool initialize) {
	$loadClass(WhileOps$4Op$1OpSink, name, initialize, &_WhileOps$4Op$1OpSink_ClassInfo_, allocate$WhileOps$4Op$1OpSink);
	return class$;
}

$Class* WhileOps$4Op$1OpSink::class$ = nullptr;

		} // stream
	} // util
} // java