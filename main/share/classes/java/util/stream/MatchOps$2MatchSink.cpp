#include <java/util/stream/MatchOps$2MatchSink.h>

#include <java/util/function/Consumer.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps.h>
#include <java/util/stream/Sink$OfInt.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $IntPredicate = ::java::util::function::IntPredicate;
using $MatchOps$BooleanTerminalSink = ::java::util::stream::MatchOps$BooleanTerminalSink;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _MatchOps$2MatchSink_FieldInfo_[] = {
	{"val$predicate", "Ljava/util/function/IntPredicate;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$2MatchSink, val$predicate)},
	{"val$matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$2MatchSink, val$matchKind)},
	{}
};

$MethodInfo _MatchOps$2MatchSink_MethodInfo_[] = {
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/IntPredicate;)V", "()V", 0, $method(MatchOps$2MatchSink, init$, void, $MatchOps$MatchKind*, $IntPredicate*)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(MatchOps$2MatchSink, accept, void, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MatchOps$2MatchSink_EnclosingMethodInfo_ = {
	"java.util.stream.MatchOps",
	"makeInt",
	"(Ljava/util/function/IntPredicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _MatchOps$2MatchSink_InnerClassesInfo_[] = {
	{"java.util.stream.MatchOps$2MatchSink", nullptr, "MatchSink", 0},
	{"java.util.stream.MatchOps$BooleanTerminalSink", "java.util.stream.MatchOps", "BooleanTerminalSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.MatchOps$MatchKind", "java.util.stream.MatchOps", "MatchKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MatchOps$2MatchSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.MatchOps$2MatchSink",
	"java.util.stream.MatchOps$BooleanTerminalSink",
	"java.util.stream.Sink$OfInt",
	_MatchOps$2MatchSink_FieldInfo_,
	_MatchOps$2MatchSink_MethodInfo_,
	"Ljava/util/stream/MatchOps$BooleanTerminalSink<Ljava/lang/Integer;>;Ljava/util/stream/Sink$OfInt;",
	&_MatchOps$2MatchSink_EnclosingMethodInfo_,
	_MatchOps$2MatchSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.MatchOps"
};

$Object* allocate$MatchOps$2MatchSink($Class* clazz) {
	return $of($alloc(MatchOps$2MatchSink));
}

bool MatchOps$2MatchSink::cancellationRequested() {
	 return this->$MatchOps$BooleanTerminalSink::cancellationRequested();
}

void MatchOps$2MatchSink::begin(int64_t size) {
	this->$MatchOps$BooleanTerminalSink::begin(size);
}

void MatchOps$2MatchSink::end() {
	this->$MatchOps$BooleanTerminalSink::end();
}

void MatchOps$2MatchSink::accept(int64_t value) {
	this->$MatchOps$BooleanTerminalSink::accept(value);
}

void MatchOps$2MatchSink::accept(double value) {
	this->$MatchOps$BooleanTerminalSink::accept(value);
}

void MatchOps$2MatchSink::accept(Object$* t) {
	this->$Sink$OfInt::accept(t);
}

$Consumer* MatchOps$2MatchSink::andThen($Consumer* after) {
	 return this->$MatchOps$BooleanTerminalSink::andThen(after);
}

int32_t MatchOps$2MatchSink::hashCode() {
	 return this->$MatchOps$BooleanTerminalSink::hashCode();
}

bool MatchOps$2MatchSink::equals(Object$* obj) {
	 return this->$MatchOps$BooleanTerminalSink::equals(obj);
}

$Object* MatchOps$2MatchSink::clone() {
	 return this->$MatchOps$BooleanTerminalSink::clone();
}

$String* MatchOps$2MatchSink::toString() {
	 return this->$MatchOps$BooleanTerminalSink::toString();
}

void MatchOps$2MatchSink::finalize() {
	this->$MatchOps$BooleanTerminalSink::finalize();
}

void MatchOps$2MatchSink::init$($MatchOps$MatchKind* val$matchKind, $IntPredicate* val$predicate) {
	$set(this, val$matchKind, val$matchKind);
	$set(this, val$predicate, val$predicate);
	$MatchOps$BooleanTerminalSink::init$(val$matchKind);
}

void MatchOps$2MatchSink::accept(int32_t t) {
	if (!this->stop && $nc(this->val$predicate)->test(t) == this->val$matchKind->stopOnPredicateMatches) {
		this->stop = true;
		this->value = this->val$matchKind->shortCircuitResult;
	}
}

MatchOps$2MatchSink::MatchOps$2MatchSink() {
}

$Class* MatchOps$2MatchSink::load$($String* name, bool initialize) {
	$loadClass(MatchOps$2MatchSink, name, initialize, &_MatchOps$2MatchSink_ClassInfo_, allocate$MatchOps$2MatchSink);
	return class$;
}

$Class* MatchOps$2MatchSink::class$ = nullptr;

		} // stream
	} // util
} // java