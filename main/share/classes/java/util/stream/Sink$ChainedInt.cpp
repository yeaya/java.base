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
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Sink$ChainedInt_FieldInfo_[] = {
	{"downstream", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<-TE_OUT;>;", $PROTECTED | $FINAL, $field(Sink$ChainedInt, downstream)},
	{}
};

$MethodInfo _Sink$ChainedInt_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-TE_OUT;>;)V", $PUBLIC, $method(static_cast<void(Sink$ChainedInt::*)($Sink*)>(&Sink$ChainedInt::init$))},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Sink$ChainedInt_InnerClassesInfo_[] = {
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Sink$ChainedInt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.stream.Sink$ChainedInt",
	"java.lang.Object",
	"java.util.stream.Sink$OfInt",
	_Sink$ChainedInt_FieldInfo_,
	_Sink$ChainedInt_MethodInfo_,
	"<E_OUT:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink$OfInt;",
	nullptr,
	_Sink$ChainedInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Sink"
};

$Object* allocate$Sink$ChainedInt($Class* clazz) {
	return $of($alloc(Sink$ChainedInt));
}

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
	$loadClass(Sink$ChainedInt, name, initialize, &_Sink$ChainedInt_ClassInfo_, allocate$Sink$ChainedInt);
	return class$;
}

$Class* Sink$ChainedInt::class$ = nullptr;

		} // stream
	} // util
} // java