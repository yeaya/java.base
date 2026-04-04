#include <java/util/stream/MatchOps$1MatchSink.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;
using $MatchOps$BooleanTerminalSink = ::java::util::stream::MatchOps$BooleanTerminalSink;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;

namespace java {
	namespace util {
		namespace stream {

void MatchOps$1MatchSink::init$($MatchOps$MatchKind* val$matchKind, $Predicate* val$predicate) {
	$set(this, val$matchKind, val$matchKind);
	$set(this, val$predicate, val$predicate);
	$MatchOps$BooleanTerminalSink::init$(val$matchKind);
}

void MatchOps$1MatchSink::accept(Object$* t) {
	if (!this->stop && $nc(this->val$predicate)->test(t) == this->val$matchKind->stopOnPredicateMatches) {
		this->stop = true;
		this->value = this->val$matchKind->shortCircuitResult;
	}
}

MatchOps$1MatchSink::MatchOps$1MatchSink() {
}

$Class* MatchOps$1MatchSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$predicate", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$1MatchSink, val$predicate)},
		{"val$matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$1MatchSink, val$matchKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/Predicate;)V", "()V", 0, $method(MatchOps$1MatchSink, init$, void, $MatchOps$MatchKind*, $Predicate*)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(MatchOps$1MatchSink, accept, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.MatchOps",
		"makeRef",
		"(Ljava/util/function/Predicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.MatchOps$1MatchSink", nullptr, "MatchSink", 0},
		{"java.util.stream.MatchOps$BooleanTerminalSink", "java.util.stream.MatchOps", "BooleanTerminalSink", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.MatchOps$MatchKind", "java.util.stream.MatchOps", "MatchKind", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.MatchOps$1MatchSink",
		"java.util.stream.MatchOps$BooleanTerminalSink",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/MatchOps$BooleanTerminalSink<TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.MatchOps"
	};
	$loadClass(MatchOps$1MatchSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MatchOps$1MatchSink);
	});
	return class$;
}

$Class* MatchOps$1MatchSink::class$ = nullptr;

		} // stream
	} // util
} // java