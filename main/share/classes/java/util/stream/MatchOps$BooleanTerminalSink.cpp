#include <java/util/stream/MatchOps$BooleanTerminalSink.h>

#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MatchOps = ::java::util::stream::MatchOps;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _MatchOps$BooleanTerminalSink_FieldInfo_[] = {
	{"stop", "Z", nullptr, 0, $field(MatchOps$BooleanTerminalSink, stop)},
	{"value", "Z", nullptr, 0, $field(MatchOps$BooleanTerminalSink, value)},
	{}
};

$MethodInfo _MatchOps$BooleanTerminalSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;)V", nullptr, 0, $method(static_cast<void(MatchOps$BooleanTerminalSink::*)($MatchOps$MatchKind*)>(&MatchOps$BooleanTerminalSink::init$))},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"getAndClearState", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MatchOps$BooleanTerminalSink_InnerClassesInfo_[] = {
	{"java.util.stream.MatchOps$BooleanTerminalSink", "java.util.stream.MatchOps", "BooleanTerminalSink", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MatchOps$BooleanTerminalSink_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.MatchOps$BooleanTerminalSink",
	"java.lang.Object",
	"java.util.stream.Sink",
	_MatchOps$BooleanTerminalSink_FieldInfo_,
	_MatchOps$BooleanTerminalSink_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink<TT;>;",
	nullptr,
	_MatchOps$BooleanTerminalSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.MatchOps"
};

$Object* allocate$MatchOps$BooleanTerminalSink($Class* clazz) {
	return $of($alloc(MatchOps$BooleanTerminalSink));
}

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
	$loadClass(MatchOps$BooleanTerminalSink, name, initialize, &_MatchOps$BooleanTerminalSink_ClassInfo_, allocate$MatchOps$BooleanTerminalSink);
	return class$;
}

$Class* MatchOps$BooleanTerminalSink::class$ = nullptr;

		} // stream
	} // util
} // java