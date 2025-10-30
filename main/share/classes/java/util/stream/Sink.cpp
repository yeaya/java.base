#include <java/util/stream/Sink.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Sink_MethodInfo_[] = {
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Sink_InnerClassesInfo_[] = {
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Sink_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.stream.Sink",
	nullptr,
	"java.util.function.Consumer",
	nullptr,
	_Sink_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Consumer<TT;>;",
	nullptr,
	_Sink_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.Sink$ChainedDouble,java.util.stream.Sink$ChainedLong,java.util.stream.Sink$ChainedInt,java.util.stream.Sink$ChainedReference,java.util.stream.Sink$OfDouble,java.util.stream.Sink$OfLong,java.util.stream.Sink$OfInt"
};

$Object* allocate$Sink($Class* clazz) {
	return $of($alloc(Sink));
}

void Sink::begin(int64_t size) {
}

void Sink::end() {
}

bool Sink::cancellationRequested() {
	return false;
}

void Sink::accept(int32_t value) {
	$throwNew($IllegalStateException, "called wrong accept method"_s);
}

void Sink::accept(int64_t value) {
	$throwNew($IllegalStateException, "called wrong accept method"_s);
}

void Sink::accept(double value) {
	$throwNew($IllegalStateException, "called wrong accept method"_s);
}

$Class* Sink::load$($String* name, bool initialize) {
	$loadClass(Sink, name, initialize, &_Sink_ClassInfo_, allocate$Sink);
	return class$;
}

$Class* Sink::class$ = nullptr;

		} // stream
	} // util
} // java