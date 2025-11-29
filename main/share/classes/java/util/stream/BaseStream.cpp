#include <java/util/stream/BaseStream.h>

#include <java/lang/Runnable.h>
#include <java/util/Iterator.h>
#include <java/util/Spliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _BaseStream_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isParallel", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC | $ABSTRACT},
	{"onClose", "(Ljava/lang/Runnable;)Ljava/util/stream/BaseStream;", "(Ljava/lang/Runnable;)TS;", $PUBLIC | $ABSTRACT},
	{"parallel", "()Ljava/util/stream/BaseStream;", "()TS;", $PUBLIC | $ABSTRACT},
	{"sequential", "()Ljava/util/stream/BaseStream;", "()TS;", $PUBLIC | $ABSTRACT},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC | $ABSTRACT},
	{"unordered", "()Ljava/util/stream/BaseStream;", "()TS;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BaseStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.BaseStream",
	nullptr,
	"java.lang.AutoCloseable",
	nullptr,
	_BaseStream_MethodInfo_,
	"<T:Ljava/lang/Object;S::Ljava/util/stream/BaseStream<TT;TS;>;>Ljava/lang/Object;Ljava/lang/AutoCloseable;"
};

$Object* allocate$BaseStream($Class* clazz) {
	return $of($alloc(BaseStream));
}

$Class* BaseStream::load$($String* name, bool initialize) {
	$loadClass(BaseStream, name, initialize, &_BaseStream_ClassInfo_, allocate$BaseStream);
	return class$;
}

$Class* BaseStream::class$ = nullptr;

		} // stream
	} // util
} // java