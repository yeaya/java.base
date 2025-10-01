#include <java/util/stream/MatchOps$1MatchSink.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $MatchOps = ::java::util::stream::MatchOps;
using $MatchOps$BooleanTerminalSink = ::java::util::stream::MatchOps$BooleanTerminalSink;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _MatchOps$1MatchSink_FieldInfo_[] = {
	{"val$predicate", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$1MatchSink, val$predicate)},
	{"val$matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $FINAL | $SYNTHETIC, $field(MatchOps$1MatchSink, val$matchKind)},
	{}
};

$MethodInfo _MatchOps$1MatchSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/Predicate;)V", "()V", 0, $method(static_cast<void(MatchOps$1MatchSink::*)($MatchOps$MatchKind*,$Predicate*)>(&MatchOps$1MatchSink::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _MatchOps$1MatchSink_EnclosingMethodInfo_ = {
	"java.util.stream.MatchOps",
	"makeRef",
	"(Ljava/util/function/Predicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _MatchOps$1MatchSink_InnerClassesInfo_[] = {
	{"java.util.stream.MatchOps$1MatchSink", nullptr, "MatchSink", 0},
	{"java.util.stream.MatchOps$BooleanTerminalSink", "java.util.stream.MatchOps", "BooleanTerminalSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.MatchOps$MatchKind", "java.util.stream.MatchOps", "MatchKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MatchOps$1MatchSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.MatchOps$1MatchSink",
	"java.util.stream.MatchOps$BooleanTerminalSink",
	nullptr,
	_MatchOps$1MatchSink_FieldInfo_,
	_MatchOps$1MatchSink_MethodInfo_,
	"Ljava/util/stream/MatchOps$BooleanTerminalSink<TT;>;",
	&_MatchOps$1MatchSink_EnclosingMethodInfo_,
	_MatchOps$1MatchSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.MatchOps"
};

$Object* allocate$MatchOps$1MatchSink($Class* clazz) {
	return $of($alloc(MatchOps$1MatchSink));
}

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
	$loadClass(MatchOps$1MatchSink, name, initialize, &_MatchOps$1MatchSink_ClassInfo_, allocate$MatchOps$1MatchSink);
	return class$;
}

$Class* MatchOps$1MatchSink::class$ = nullptr;

		} // stream
	} // util
} // java