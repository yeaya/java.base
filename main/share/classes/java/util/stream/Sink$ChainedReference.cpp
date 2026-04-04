#include <java/util/stream/Sink$ChainedReference.h>
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

void Sink$ChainedReference::init$($Sink* downstream) {
	$set(this, downstream, $cast($Sink, $Objects::requireNonNull(downstream)));
}

void Sink$ChainedReference::begin(int64_t size) {
	$nc(this->downstream)->begin(size);
}

void Sink$ChainedReference::end() {
	$nc(this->downstream)->end();
}

bool Sink$ChainedReference::cancellationRequested() {
	return $nc(this->downstream)->cancellationRequested();
}

Sink$ChainedReference::Sink$ChainedReference() {
}

$Class* Sink$ChainedReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstream", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<-TE_OUT;>;", $PROTECTED | $FINAL, $field(Sink$ChainedReference, downstream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-TE_OUT;>;)V", $PUBLIC, $method(Sink$ChainedReference, init$, void, $Sink*)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedReference, begin, void, int64_t)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedReference, cancellationRequested, bool)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedReference, end, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.stream.Sink$ChainedReference",
		"java.lang.Object",
		"java.util.stream.Sink",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;E_OUT:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Sink"
	};
	$loadClass(Sink$ChainedReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sink$ChainedReference);
	});
	return class$;
}

$Class* Sink$ChainedReference::class$ = nullptr;

		} // stream
	} // util
} // java