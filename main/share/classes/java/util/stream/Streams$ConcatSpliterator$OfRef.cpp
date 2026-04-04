#include <java/util/stream/Streams$ConcatSpliterator$OfRef.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/Streams$ConcatSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Streams$ConcatSpliterator = ::java::util::stream::Streams$ConcatSpliterator;

namespace java {
	namespace util {
		namespace stream {

void Streams$ConcatSpliterator$OfRef::init$($Spliterator* aSpliterator, $Spliterator* bSpliterator) {
	$Streams$ConcatSpliterator::init$(aSpliterator, bSpliterator);
}

Streams$ConcatSpliterator$OfRef::Streams$ConcatSpliterator$OfRef() {
}

$Class* Streams$ConcatSpliterator$OfRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Spliterator;Ljava/util/Spliterator;)V", "(Ljava/util/Spliterator<TT;>;Ljava/util/Spliterator<TT;>;)V", 0, $method(Streams$ConcatSpliterator$OfRef, init$, void, $Spliterator*, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Streams$ConcatSpliterator", "java.util.stream.Streams", "ConcatSpliterator", $STATIC | $ABSTRACT},
		{"java.util.stream.Streams$ConcatSpliterator$OfRef", "java.util.stream.Streams$ConcatSpliterator", "OfRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.Streams$ConcatSpliterator$OfRef",
		"java.util.stream.Streams$ConcatSpliterator",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/stream/Streams$ConcatSpliterator<TT;Ljava/util/Spliterator<TT;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Streams"
	};
	$loadClass(Streams$ConcatSpliterator$OfRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Streams$ConcatSpliterator$OfRef);
	});
	return class$;
}

$Class* Streams$ConcatSpliterator$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java