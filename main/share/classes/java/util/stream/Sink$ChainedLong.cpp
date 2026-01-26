#include <java/util/stream/Sink$ChainedLong.h>

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

$FieldInfo _Sink$ChainedLong_FieldInfo_[] = {
	{"downstream", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<-TE_OUT;>;", $PROTECTED | $FINAL, $field(Sink$ChainedLong, downstream)},
	{}
};

$MethodInfo _Sink$ChainedLong_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-TE_OUT;>;)V", $PUBLIC, $method(Sink$ChainedLong, init$, void, $Sink*)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedLong, begin, void, int64_t)},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedLong, cancellationRequested, bool)},
	{"end", "()V", nullptr, $PUBLIC, $virtualMethod(Sink$ChainedLong, end, void)},
	{}
};

$InnerClassInfo _Sink$ChainedLong_InnerClassesInfo_[] = {
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Sink$ChainedLong_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.stream.Sink$ChainedLong",
	"java.lang.Object",
	"java.util.stream.Sink$OfLong",
	_Sink$ChainedLong_FieldInfo_,
	_Sink$ChainedLong_MethodInfo_,
	"<E_OUT:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink$OfLong;",
	nullptr,
	_Sink$ChainedLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Sink"
};

$Object* allocate$Sink$ChainedLong($Class* clazz) {
	return $of($alloc(Sink$ChainedLong));
}

void Sink$ChainedLong::init$($Sink* downstream) {
	$set(this, downstream, $cast($Sink, $Objects::requireNonNull(downstream)));
}

void Sink$ChainedLong::begin(int64_t size) {
	$nc(this->downstream)->begin(size);
}

void Sink$ChainedLong::end() {
	$nc(this->downstream)->end();
}

bool Sink$ChainedLong::cancellationRequested() {
	return $nc(this->downstream)->cancellationRequested();
}

Sink$ChainedLong::Sink$ChainedLong() {
}

$Class* Sink$ChainedLong::load$($String* name, bool initialize) {
	$loadClass(Sink$ChainedLong, name, initialize, &_Sink$ChainedLong_ClassInfo_, allocate$Sink$ChainedLong);
	return class$;
}

$Class* Sink$ChainedLong::class$ = nullptr;

		} // stream
	} // util
} // java