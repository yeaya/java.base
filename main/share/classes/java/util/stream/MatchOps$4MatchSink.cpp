#include <java/util/stream/MatchOps$4MatchSink.h>

#include <java/util/function/Consumer.h>
#include <java/util/function/DoublePredicate.h>
#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $DoublePredicate = ::java::util::function::DoublePredicate;
using $MatchOps = ::java::util::stream::MatchOps;
using $MatchOps$BooleanTerminalSink = ::java::util::stream::MatchOps$BooleanTerminalSink;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _MatchOps$4MatchSink_FieldInfo_[] = {
	{"val$predicate", "Ljava/util/function/DoublePredicate;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$4MatchSink, val$predicate)},
	{"val$matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$4MatchSink, val$matchKind)},
	{}
};

$MethodInfo _MatchOps$4MatchSink_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/DoublePredicate;)V", "()V", 0, $method(static_cast<void(MatchOps$4MatchSink::*)($MatchOps$MatchKind*,$DoublePredicate*)>(&MatchOps$4MatchSink::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MatchOps$4MatchSink_EnclosingMethodInfo_ = {
	"java.util.stream.MatchOps",
	"makeDouble",
	"(Ljava/util/function/DoublePredicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _MatchOps$4MatchSink_InnerClassesInfo_[] = {
	{"java.util.stream.MatchOps$4MatchSink", nullptr, "MatchSink", 0},
	{"java.util.stream.MatchOps$BooleanTerminalSink", "java.util.stream.MatchOps", "BooleanTerminalSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.MatchOps$MatchKind", "java.util.stream.MatchOps", "MatchKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MatchOps$4MatchSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.MatchOps$4MatchSink",
	"java.util.stream.MatchOps$BooleanTerminalSink",
	"java.util.stream.Sink$OfDouble",
	_MatchOps$4MatchSink_FieldInfo_,
	_MatchOps$4MatchSink_MethodInfo_,
	"Ljava/util/stream/MatchOps$BooleanTerminalSink<Ljava/lang/Double;>;Ljava/util/stream/Sink$OfDouble;",
	&_MatchOps$4MatchSink_EnclosingMethodInfo_,
	_MatchOps$4MatchSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.MatchOps"
};

$Object* allocate$MatchOps$4MatchSink($Class* clazz) {
	return $of($alloc(MatchOps$4MatchSink));
}

bool MatchOps$4MatchSink::cancellationRequested() {
	 return this->$MatchOps$BooleanTerminalSink::cancellationRequested();
}

void MatchOps$4MatchSink::begin(int64_t size) {
	this->$MatchOps$BooleanTerminalSink::begin(size);
}

void MatchOps$4MatchSink::end() {
	this->$MatchOps$BooleanTerminalSink::end();
}

void MatchOps$4MatchSink::accept(int32_t value) {
	this->$MatchOps$BooleanTerminalSink::accept(value);
}

void MatchOps$4MatchSink::accept(int64_t value) {
	this->$MatchOps$BooleanTerminalSink::accept(value);
}

void MatchOps$4MatchSink::accept(Object$* t) {
	this->$Sink$OfDouble::accept(t);
}

$Consumer* MatchOps$4MatchSink::andThen($Consumer* after) {
	 return this->$MatchOps$BooleanTerminalSink::andThen(after);
}

int32_t MatchOps$4MatchSink::hashCode() {
	 return this->$MatchOps$BooleanTerminalSink::hashCode();
}

bool MatchOps$4MatchSink::equals(Object$* obj) {
	 return this->$MatchOps$BooleanTerminalSink::equals(obj);
}

$Object* MatchOps$4MatchSink::clone() {
	 return this->$MatchOps$BooleanTerminalSink::clone();
}

$String* MatchOps$4MatchSink::toString() {
	 return this->$MatchOps$BooleanTerminalSink::toString();
}

void MatchOps$4MatchSink::finalize() {
	this->$MatchOps$BooleanTerminalSink::finalize();
}

void MatchOps$4MatchSink::init$($MatchOps$MatchKind* val$matchKind, $DoublePredicate* val$predicate) {
	$set(this, val$matchKind, val$matchKind);
	$set(this, val$predicate, val$predicate);
	$MatchOps$BooleanTerminalSink::init$(val$matchKind);
}

void MatchOps$4MatchSink::accept(double t) {
	if (!this->stop && $nc(this->val$predicate)->test(t) == this->val$matchKind->stopOnPredicateMatches) {
		this->stop = true;
		this->value = this->val$matchKind->shortCircuitResult;
	}
}

MatchOps$4MatchSink::MatchOps$4MatchSink() {
}

$Class* MatchOps$4MatchSink::load$($String* name, bool initialize) {
	$loadClass(MatchOps$4MatchSink, name, initialize, &_MatchOps$4MatchSink_ClassInfo_, allocate$MatchOps$4MatchSink);
	return class$;
}

$Class* MatchOps$4MatchSink::class$ = nullptr;

		} // stream
	} // util
} // java