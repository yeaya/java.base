#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/Objects.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

void Sink$ChainedDouble::init$($Sink* downstream) {
	$set(this, downstream, $cast($Sink, $Objects::requireNonNull(downstream)));
}

void Sink$ChainedDouble::begin(int64_t size) {
	$nc(this->downstream)->begin(size);
}

void Sink$ChainedDouble::end() {
	$nc(this->downstream)->end();
}

bool Sink$ChainedDouble::cancellationRequested() {
	return $nc(this->downstream)->cancellationRequested();
}

Sink$ChainedDouble::Sink$ChainedDouble() {
}

$Class* Sink$ChainedDouble::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstream", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<-TE_OUT;>;", $PROTECTED | $FINAL, $field(Sink$ChainedDouble, downstream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-TE_OUT;>;)V", $PUBLIC, $method(Sink$ChainedDouble, init$, void, $Sink*)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedDouble, begin, void, int64_t)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedDouble, cancellationRequested, bool)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedDouble, end, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.stream.Sink$ChainedDouble",
		"java.lang.Object",
		"java.util.stream.Sink$OfDouble",
		fieldInfos$$,
		methodInfos$$,
		"<E_OUT:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink$OfDouble;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Sink"
	};
	$loadClass(Sink$ChainedDouble, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Sink$ChainedDouble));
	});
	return class$;
}

$Class* Sink$ChainedDouble::class$ = nullptr;

		} // stream
	} // util
} // java