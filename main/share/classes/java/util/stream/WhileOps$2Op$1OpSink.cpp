#include <java/util/stream/WhileOps$2Op$1OpSink.h>

#include <java/util/function/Consumer.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/WhileOps$2Op.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $IntPredicate = ::java::util::function::IntPredicate;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;
using $WhileOps$2Op = ::java::util::stream::WhileOps$2Op;
using $WhileOps$DropWhileSink = ::java::util::stream::WhileOps$DropWhileSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$2Op$1OpSink_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/WhileOps$2Op;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$2Op$1OpSink, this$0)},
	{"val$retainAndCountDroppedElements", "Z", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$2Op$1OpSink, val$retainAndCountDroppedElements)},
	{"val$sink", "Ljava/util/stream/Sink;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$2Op$1OpSink, val$sink)},
	{"dropCount", "J", nullptr, 0, $field(WhileOps$2Op$1OpSink, dropCount)},
	{"take", "Z", nullptr, 0, $field(WhileOps$2Op$1OpSink, take)},
	{}
};

$MethodInfo _WhileOps$2Op$1OpSink_MethodInfo_[] = {
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/WhileOps$2Op;Ljava/util/stream/Sink;Z)V", "()V", 0, $method(static_cast<void(WhileOps$2Op$1OpSink::*)($WhileOps$2Op*,$Sink*,bool)>(&WhileOps$2Op$1OpSink::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"getDropCount", "()J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WhileOps$2Op$1OpSink_EnclosingMethodInfo_ = {
	"java.util.stream.WhileOps$2Op",
	"opWrapSink",
	"(Ljava/util/stream/Sink;Z)Ljava/util/stream/WhileOps$DropWhileSink;"
};

$InnerClassInfo _WhileOps$2Op$1OpSink_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$2Op", nullptr, "Op", 0},
	{"java.util.stream.WhileOps$2Op$1OpSink", nullptr, "OpSink", 0},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$DropWhileSink", "java.util.stream.WhileOps", "DropWhileSink", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WhileOps$2Op$1OpSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.WhileOps$2Op$1OpSink",
	"java.util.stream.Sink$ChainedInt",
	"java.util.stream.WhileOps$DropWhileSink",
	_WhileOps$2Op$1OpSink_FieldInfo_,
	_WhileOps$2Op$1OpSink_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Integer;>;Ljava/util/stream/WhileOps$DropWhileSink<Ljava/lang/Integer;>;",
	&_WhileOps$2Op$1OpSink_EnclosingMethodInfo_,
	_WhileOps$2Op$1OpSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$2Op$1OpSink($Class* clazz) {
	return $of($alloc(WhileOps$2Op$1OpSink));
}

void WhileOps$2Op$1OpSink::begin(int64_t size) {
	this->$Sink$ChainedInt::begin(size);
}

void WhileOps$2Op$1OpSink::end() {
	this->$Sink$ChainedInt::end();
}

bool WhileOps$2Op$1OpSink::cancellationRequested() {
	 return this->$Sink$ChainedInt::cancellationRequested();
}

void WhileOps$2Op$1OpSink::accept(Object$* i) {
	this->$Sink$ChainedInt::accept(i);
}

void WhileOps$2Op$1OpSink::accept(int64_t value) {
	this->$Sink$ChainedInt::accept(value);
}

void WhileOps$2Op$1OpSink::accept(double value) {
	this->$Sink$ChainedInt::accept(value);
}

$Consumer* WhileOps$2Op$1OpSink::andThen($Consumer* after) {
	 return this->$Sink$ChainedInt::andThen(after);
}

int32_t WhileOps$2Op$1OpSink::hashCode() {
	 return this->$Sink$ChainedInt::hashCode();
}

bool WhileOps$2Op$1OpSink::equals(Object$* obj) {
	 return this->$Sink$ChainedInt::equals(obj);
}

$Object* WhileOps$2Op$1OpSink::clone() {
	 return this->$Sink$ChainedInt::clone();
}

$String* WhileOps$2Op$1OpSink::toString() {
	 return this->$Sink$ChainedInt::toString();
}

void WhileOps$2Op$1OpSink::finalize() {
	this->$Sink$ChainedInt::finalize();
}

void WhileOps$2Op$1OpSink::init$($WhileOps$2Op* this$0, $Sink* val$sink, bool val$retainAndCountDroppedElements) {
	$set(this, this$0, this$0);
	$set(this, val$sink, val$sink);
	this->val$retainAndCountDroppedElements = val$retainAndCountDroppedElements;
	$Sink$ChainedInt::init$(val$sink);
}

void WhileOps$2Op$1OpSink::accept(int32_t t) {
	bool var$0 = this->take;
	bool takeElement = var$0 || (this->take = !$nc(this->this$0->val$predicate)->test(t));
	if (this->val$retainAndCountDroppedElements && !takeElement) {
		++this->dropCount;
	}
	if (this->val$retainAndCountDroppedElements || takeElement) {
		$nc(this->downstream)->accept(t);
	}
}

int64_t WhileOps$2Op$1OpSink::getDropCount() {
	return this->dropCount;
}

WhileOps$2Op$1OpSink::WhileOps$2Op$1OpSink() {
}

$Class* WhileOps$2Op$1OpSink::load$($String* name, bool initialize) {
	$loadClass(WhileOps$2Op$1OpSink, name, initialize, &_WhileOps$2Op$1OpSink_ClassInfo_, allocate$WhileOps$2Op$1OpSink);
	return class$;
}

$Class* WhileOps$2Op$1OpSink::class$ = nullptr;

		} // stream
	} // util
} // java