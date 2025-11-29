#include <java/util/stream/WhileOps$3Op$1OpSink.h>

#include <java/util/function/Consumer.h>
#include <java/util/function/LongPredicate.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/WhileOps$3Op.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $LongPredicate = ::java::util::function::LongPredicate;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;
using $WhileOps$3Op = ::java::util::stream::WhileOps$3Op;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$3Op$1OpSink_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/WhileOps$3Op;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$3Op$1OpSink, this$0)},
	{"val$retainAndCountDroppedElements", "Z", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$3Op$1OpSink, val$retainAndCountDroppedElements)},
	{"val$sink", "Ljava/util/stream/Sink;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$3Op$1OpSink, val$sink)},
	{"dropCount", "J", nullptr, 0, $field(WhileOps$3Op$1OpSink, dropCount)},
	{"take", "Z", nullptr, 0, $field(WhileOps$3Op$1OpSink, take)},
	{}
};

$MethodInfo _WhileOps$3Op$1OpSink_MethodInfo_[] = {
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/WhileOps$3Op;Ljava/util/stream/Sink;Z)V", "()V", 0, $method(static_cast<void(WhileOps$3Op$1OpSink::*)($WhileOps$3Op*,$Sink*,bool)>(&WhileOps$3Op$1OpSink::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"getDropCount", "()J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WhileOps$3Op$1OpSink_EnclosingMethodInfo_ = {
	"java.util.stream.WhileOps$3Op",
	"opWrapSink",
	"(Ljava/util/stream/Sink;Z)Ljava/util/stream/WhileOps$DropWhileSink;"
};

$InnerClassInfo _WhileOps$3Op$1OpSink_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$3Op", nullptr, "Op", 0},
	{"java.util.stream.WhileOps$3Op$1OpSink", nullptr, "OpSink", 0},
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$DropWhileSink", "java.util.stream.WhileOps", "DropWhileSink", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WhileOps$3Op$1OpSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.WhileOps$3Op$1OpSink",
	"java.util.stream.Sink$ChainedLong",
	"java.util.stream.WhileOps$DropWhileSink",
	_WhileOps$3Op$1OpSink_FieldInfo_,
	_WhileOps$3Op$1OpSink_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Long;>;Ljava/util/stream/WhileOps$DropWhileSink<Ljava/lang/Long;>;",
	&_WhileOps$3Op$1OpSink_EnclosingMethodInfo_,
	_WhileOps$3Op$1OpSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$3Op$1OpSink($Class* clazz) {
	return $of($alloc(WhileOps$3Op$1OpSink));
}

void WhileOps$3Op$1OpSink::begin(int64_t size) {
	this->$Sink$ChainedLong::begin(size);
}

void WhileOps$3Op$1OpSink::end() {
	this->$Sink$ChainedLong::end();
}

bool WhileOps$3Op$1OpSink::cancellationRequested() {
	 return this->$Sink$ChainedLong::cancellationRequested();
}

void WhileOps$3Op$1OpSink::accept(Object$* i) {
	this->$Sink$ChainedLong::accept(i);
}

void WhileOps$3Op$1OpSink::accept(int32_t value) {
	this->$Sink$ChainedLong::accept(value);
}

void WhileOps$3Op$1OpSink::accept(double value) {
	this->$Sink$ChainedLong::accept(value);
}

$Consumer* WhileOps$3Op$1OpSink::andThen($Consumer* after) {
	 return this->$Sink$ChainedLong::andThen(after);
}

int32_t WhileOps$3Op$1OpSink::hashCode() {
	 return this->$Sink$ChainedLong::hashCode();
}

bool WhileOps$3Op$1OpSink::equals(Object$* obj) {
	 return this->$Sink$ChainedLong::equals(obj);
}

$Object* WhileOps$3Op$1OpSink::clone() {
	 return this->$Sink$ChainedLong::clone();
}

$String* WhileOps$3Op$1OpSink::toString() {
	 return this->$Sink$ChainedLong::toString();
}

void WhileOps$3Op$1OpSink::finalize() {
	this->$Sink$ChainedLong::finalize();
}

void WhileOps$3Op$1OpSink::init$($WhileOps$3Op* this$0, $Sink* val$sink, bool val$retainAndCountDroppedElements) {
	$set(this, this$0, this$0);
	$set(this, val$sink, val$sink);
	this->val$retainAndCountDroppedElements = val$retainAndCountDroppedElements;
	$Sink$ChainedLong::init$(val$sink);
}

void WhileOps$3Op$1OpSink::accept(int64_t t) {
	bool var$0 = this->take;
	bool takeElement = var$0 || (this->take = !$nc(this->this$0->val$predicate)->test(t));
	if (this->val$retainAndCountDroppedElements && !takeElement) {
		++this->dropCount;
	}
	if (this->val$retainAndCountDroppedElements || takeElement) {
		$nc(this->downstream)->accept(t);
	}
}

int64_t WhileOps$3Op$1OpSink::getDropCount() {
	return this->dropCount;
}

WhileOps$3Op$1OpSink::WhileOps$3Op$1OpSink() {
}

$Class* WhileOps$3Op$1OpSink::load$($String* name, bool initialize) {
	$loadClass(WhileOps$3Op$1OpSink, name, initialize, &_WhileOps$3Op$1OpSink_ClassInfo_, allocate$WhileOps$3Op$1OpSink);
	return class$;
}

$Class* WhileOps$3Op$1OpSink::class$ = nullptr;

		} // stream
	} // util
} // java