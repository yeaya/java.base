#include <java/util/stream/BaseStream.h>
#include <java/lang/Runnable.h>
#include <java/util/Iterator.h>
#include <java/util/Spliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;

namespace java {
	namespace util {
		namespace stream {

$Class* BaseStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"isParallel", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BaseStream, isParallel, bool)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(BaseStream, iterator, $Iterator*)},
		{"onClose", "(Ljava/lang/Runnable;)Ljava/util/stream/BaseStream;", "(Ljava/lang/Runnable;)TS;", $PUBLIC | $ABSTRACT, $virtualMethod(BaseStream, onClose, BaseStream*, $Runnable*)},
		{"parallel", "()Ljava/util/stream/BaseStream;", "()TS;", $PUBLIC | $ABSTRACT, $virtualMethod(BaseStream, parallel, BaseStream*)},
		{"sequential", "()Ljava/util/stream/BaseStream;", "()TS;", $PUBLIC | $ABSTRACT, $virtualMethod(BaseStream, sequential, BaseStream*)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(BaseStream, spliterator, $Spliterator*)},
		{"unordered", "()Ljava/util/stream/BaseStream;", "()TS;", $PUBLIC | $ABSTRACT, $virtualMethod(BaseStream, unordered, BaseStream*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.BaseStream",
		nullptr,
		"java.lang.AutoCloseable",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;S::Ljava/util/stream/BaseStream<TT;TS;>;>Ljava/lang/Object;Ljava/lang/AutoCloseable;"
	};
	$loadClass(BaseStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaseStream);
	});
	return class$;
}

$Class* BaseStream::class$ = nullptr;

		} // stream
	} // util
} // java