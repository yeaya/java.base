#include <java/util/stream/Sink$ChainedInt.h>
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

void Sink$ChainedInt::init$($Sink* downstream) {
	$set(this, downstream, $cast($Sink, $Objects::requireNonNull(downstream)));
}

void Sink$ChainedInt::begin(int64_t size) {
	$nc(this->downstream)->begin(size);
}

void Sink$ChainedInt::end() {
	$nc(this->downstream)->end();
}

bool Sink$ChainedInt::cancellationRequested() {
	return $nc(this->downstream)->cancellationRequested();
}

Sink$ChainedInt::Sink$ChainedInt() {
}

$Class* Sink$ChainedInt::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstream", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<-TE_OUT;>;", $PROTECTED | $FINAL, $field(Sink$ChainedInt, downstream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-TE_OUT;>;)V", $PUBLIC, $method(Sink$ChainedInt, init$, void, $Sink*)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedInt, begin, void, int64_t)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedInt, cancellationRequested, bool)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedInt, end, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.stream.Sink$ChainedInt",
		"java.lang.Object",
		"java.util.stream.Sink$OfInt",
		fieldInfos$$,
		methodInfos$$,
		"<E_OUT:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink$OfInt;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Sink"
	};
	$loadClass(Sink$ChainedInt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Sink$ChainedInt));
	});
	return class$;
}

$Class* Sink$ChainedInt::class$ = nullptr;

		} // stream
	} // util
} // java