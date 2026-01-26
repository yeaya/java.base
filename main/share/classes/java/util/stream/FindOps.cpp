#include <java/util/stream/FindOps.h>

#include <java/util/stream/FindOps$FindSink$OfDouble.h>
#include <java/util/stream/FindOps$FindSink$OfInt.h>
#include <java/util/stream/FindOps$FindSink$OfLong.h>
#include <java/util/stream/FindOps$FindSink$OfRef.h>
#include <java/util/stream/TerminalOp.h>
#include <jcpp.h>

#undef OP_FIND_ANY
#undef OP_FIND_FIRST

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FindOps$FindSink$OfDouble = ::java::util::stream::FindOps$FindSink$OfDouble;
using $FindOps$FindSink$OfInt = ::java::util::stream::FindOps$FindSink$OfInt;
using $FindOps$FindSink$OfLong = ::java::util::stream::FindOps$FindSink$OfLong;
using $FindOps$FindSink$OfRef = ::java::util::stream::FindOps$FindSink$OfRef;
using $TerminalOp = ::java::util::stream::TerminalOp;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _FindOps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(FindOps, init$, void)},
	{"makeDouble", "(Z)Ljava/util/stream/TerminalOp;", "(Z)Ljava/util/stream/TerminalOp<Ljava/lang/Double;Ljava/util/OptionalDouble;>;", $PUBLIC | $STATIC, $staticMethod(FindOps, makeDouble, $TerminalOp*, bool)},
	{"makeInt", "(Z)Ljava/util/stream/TerminalOp;", "(Z)Ljava/util/stream/TerminalOp<Ljava/lang/Integer;Ljava/util/OptionalInt;>;", $PUBLIC | $STATIC, $staticMethod(FindOps, makeInt, $TerminalOp*, bool)},
	{"makeLong", "(Z)Ljava/util/stream/TerminalOp;", "(Z)Ljava/util/stream/TerminalOp<Ljava/lang/Long;Ljava/util/OptionalLong;>;", $PUBLIC | $STATIC, $staticMethod(FindOps, makeLong, $TerminalOp*, bool)},
	{"makeRef", "(Z)Ljava/util/stream/TerminalOp;", "<T:Ljava/lang/Object;>(Z)Ljava/util/stream/TerminalOp<TT;Ljava/util/Optional<TT;>;>;", $PUBLIC | $STATIC, $staticMethod(FindOps, makeRef, $TerminalOp*, bool)},
	{}
};

$InnerClassInfo _FindOps_InnerClassesInfo_[] = {
	{"java.util.stream.FindOps$FindTask", "java.util.stream.FindOps", "FindTask", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.FindOps$FindSink", "java.util.stream.FindOps", "FindSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.FindOps$FindOp", "java.util.stream.FindOps", "FindOp", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FindOps_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.FindOps",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FindOps_MethodInfo_,
	nullptr,
	nullptr,
	_FindOps_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.FindOps$FindTask,java.util.stream.FindOps$FindSink,java.util.stream.FindOps$FindSink$OfDouble,java.util.stream.FindOps$FindSink$OfLong,java.util.stream.FindOps$FindSink$OfInt,java.util.stream.FindOps$FindSink$OfRef,java.util.stream.FindOps$FindOp"
};

$Object* allocate$FindOps($Class* clazz) {
	return $of($alloc(FindOps));
}

void FindOps::init$() {
}

$TerminalOp* FindOps::makeRef(bool mustFindFirst) {
	$init($FindOps$FindSink$OfRef);
	return (mustFindFirst ? $FindOps$FindSink$OfRef::OP_FIND_FIRST : $FindOps$FindSink$OfRef::OP_FIND_ANY);
}

$TerminalOp* FindOps::makeInt(bool mustFindFirst) {
	$init($FindOps$FindSink$OfInt);
	return mustFindFirst ? $FindOps$FindSink$OfInt::OP_FIND_FIRST : $FindOps$FindSink$OfInt::OP_FIND_ANY;
}

$TerminalOp* FindOps::makeLong(bool mustFindFirst) {
	$init($FindOps$FindSink$OfLong);
	return mustFindFirst ? $FindOps$FindSink$OfLong::OP_FIND_FIRST : $FindOps$FindSink$OfLong::OP_FIND_ANY;
}

$TerminalOp* FindOps::makeDouble(bool mustFindFirst) {
	$init($FindOps$FindSink$OfDouble);
	return mustFindFirst ? $FindOps$FindSink$OfDouble::OP_FIND_FIRST : $FindOps$FindSink$OfDouble::OP_FIND_ANY;
}

FindOps::FindOps() {
}

$Class* FindOps::load$($String* name, bool initialize) {
	$loadClass(FindOps, name, initialize, &_FindOps_ClassInfo_, allocate$FindOps);
	return class$;
}

$Class* FindOps::class$ = nullptr;

		} // stream
	} // util
} // java