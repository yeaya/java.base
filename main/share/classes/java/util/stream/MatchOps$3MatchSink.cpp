#include <java/util/stream/MatchOps$3MatchSink.h>

#include <java/util/function/Consumer.h>
#include <java/util/function/LongPredicate.h>
#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps.h>
#include <java/util/stream/Sink$OfLong.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $LongPredicate = ::java::util::function::LongPredicate;
using $MatchOps$BooleanTerminalSink = ::java::util::stream::MatchOps$BooleanTerminalSink;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;
using $Sink$OfLong = ::java::util::stream::Sink$OfLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _MatchOps$3MatchSink_FieldInfo_[] = {
	{"val$predicate", "Ljava/util/function/LongPredicate;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$3MatchSink, val$predicate)},
	{"val$matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$3MatchSink, val$matchKind)},
	{}
};

$MethodInfo _MatchOps$3MatchSink_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
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
	{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/LongPredicate;)V", "()V", 0, $method(static_cast<void(MatchOps$3MatchSink::*)($MatchOps$MatchKind*,$LongPredicate*)>(&MatchOps$3MatchSink::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MatchOps$3MatchSink_EnclosingMethodInfo_ = {
	"java.util.stream.MatchOps",
	"makeLong",
	"(Ljava/util/function/LongPredicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _MatchOps$3MatchSink_InnerClassesInfo_[] = {
	{"java.util.stream.MatchOps$3MatchSink", nullptr, "MatchSink", 0},
	{"java.util.stream.MatchOps$BooleanTerminalSink", "java.util.stream.MatchOps", "BooleanTerminalSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.MatchOps$MatchKind", "java.util.stream.MatchOps", "MatchKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MatchOps$3MatchSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.MatchOps$3MatchSink",
	"java.util.stream.MatchOps$BooleanTerminalSink",
	"java.util.stream.Sink$OfLong",
	_MatchOps$3MatchSink_FieldInfo_,
	_MatchOps$3MatchSink_MethodInfo_,
	"Ljava/util/stream/MatchOps$BooleanTerminalSink<Ljava/lang/Long;>;Ljava/util/stream/Sink$OfLong;",
	&_MatchOps$3MatchSink_EnclosingMethodInfo_,
	_MatchOps$3MatchSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.MatchOps"
};

$Object* allocate$MatchOps$3MatchSink($Class* clazz) {
	return $of($alloc(MatchOps$3MatchSink));
}

bool MatchOps$3MatchSink::cancellationRequested() {
	 return this->$MatchOps$BooleanTerminalSink::cancellationRequested();
}

void MatchOps$3MatchSink::begin(int64_t size) {
	this->$MatchOps$BooleanTerminalSink::begin(size);
}

void MatchOps$3MatchSink::end() {
	this->$MatchOps$BooleanTerminalSink::end();
}

void MatchOps$3MatchSink::accept(int32_t value) {
	this->$MatchOps$BooleanTerminalSink::accept(value);
}

void MatchOps$3MatchSink::accept(double value) {
	this->$MatchOps$BooleanTerminalSink::accept(value);
}

void MatchOps$3MatchSink::accept(Object$* t) {
	this->$Sink$OfLong::accept(t);
}

$Consumer* MatchOps$3MatchSink::andThen($Consumer* after) {
	 return this->$MatchOps$BooleanTerminalSink::andThen(after);
}

int32_t MatchOps$3MatchSink::hashCode() {
	 return this->$MatchOps$BooleanTerminalSink::hashCode();
}

bool MatchOps$3MatchSink::equals(Object$* obj) {
	 return this->$MatchOps$BooleanTerminalSink::equals(obj);
}

$Object* MatchOps$3MatchSink::clone() {
	 return this->$MatchOps$BooleanTerminalSink::clone();
}

$String* MatchOps$3MatchSink::toString() {
	 return this->$MatchOps$BooleanTerminalSink::toString();
}

void MatchOps$3MatchSink::finalize() {
	this->$MatchOps$BooleanTerminalSink::finalize();
}

void MatchOps$3MatchSink::init$($MatchOps$MatchKind* val$matchKind, $LongPredicate* val$predicate) {
	$set(this, val$matchKind, val$matchKind);
	$set(this, val$predicate, val$predicate);
	$MatchOps$BooleanTerminalSink::init$(val$matchKind);
}

void MatchOps$3MatchSink::accept(int64_t t) {
	if (!this->stop && $nc(this->val$predicate)->test(t) == this->val$matchKind->stopOnPredicateMatches) {
		this->stop = true;
		this->value = this->val$matchKind->shortCircuitResult;
	}
}

MatchOps$3MatchSink::MatchOps$3MatchSink() {
}

$Class* MatchOps$3MatchSink::load$($String* name, bool initialize) {
	$loadClass(MatchOps$3MatchSink, name, initialize, &_MatchOps$3MatchSink_ClassInfo_, allocate$MatchOps$3MatchSink);
	return class$;
}

$Class* MatchOps$3MatchSink::class$ = nullptr;

		} // stream
	} // util
} // java