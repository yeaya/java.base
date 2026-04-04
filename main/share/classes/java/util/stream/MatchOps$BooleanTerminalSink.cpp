#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;

namespace java {
	namespace util {
		namespace stream {

void MatchOps$BooleanTerminalSink::init$($MatchOps$MatchKind* matchKind) {
	this->value = !$nc(matchKind)->shortCircuitResult;
}

bool MatchOps$BooleanTerminalSink::getAndClearState() {
	return this->value;
}

bool MatchOps$BooleanTerminalSink::cancellationRequested() {
	return this->stop;
}

MatchOps$BooleanTerminalSink::MatchOps$BooleanTerminalSink() {
}

$Class* MatchOps$BooleanTerminalSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stop", "Z", nullptr, 0, $field(MatchOps$BooleanTerminalSink, stop)},
		{"value", "Z", nullptr, 0, $field(MatchOps$BooleanTerminalSink, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;)V", nullptr, 0, $method(MatchOps$BooleanTerminalSink, init$, void, $MatchOps$MatchKind*)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(MatchOps$BooleanTerminalSink, cancellationRequested, bool)},
		{"getAndClearState", "()Z", nullptr, $PUBLIC, $virtualMethod(MatchOps$BooleanTerminalSink, getAndClearState, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.MatchOps$BooleanTerminalSink", "java.util.stream.MatchOps", "BooleanTerminalSink", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.MatchOps$BooleanTerminalSink",
		"java.lang.Object",
		"java.util.stream.Sink",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.MatchOps"
	};
	$loadClass(MatchOps$BooleanTerminalSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MatchOps$BooleanTerminalSink);
	});
	return class$;
}

$Class* MatchOps$BooleanTerminalSink::class$ = nullptr;

		} // stream
	} // util
} // java