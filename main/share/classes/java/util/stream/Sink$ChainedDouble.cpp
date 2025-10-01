#include <java/util/stream/Sink$ChainedDouble.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Sink = ::java::util::stream::Sink;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Sink$ChainedDouble_FieldInfo_[] = {
	{"downstream", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<-TE_OUT;>;", $PROTECTED | $FINAL, $field(Sink$ChainedDouble, downstream)},
	{}
};

$MethodInfo _Sink$ChainedDouble_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-TE_OUT;>;)V", $PUBLIC, $method(static_cast<void(Sink$ChainedDouble::*)($Sink*)>(&Sink$ChainedDouble::init$))},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Sink$ChainedDouble_InnerClassesInfo_[] = {
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Sink$ChainedDouble_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.stream.Sink$ChainedDouble",
	"java.lang.Object",
	"java.util.stream.Sink$OfDouble",
	_Sink$ChainedDouble_FieldInfo_,
	_Sink$ChainedDouble_MethodInfo_,
	"<E_OUT:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink$OfDouble;",
	nullptr,
	_Sink$ChainedDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Sink"
};

$Object* allocate$Sink$ChainedDouble($Class* clazz) {
	return $of($alloc(Sink$ChainedDouble));
}

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
	$loadClass(Sink$ChainedDouble, name, initialize, &_Sink$ChainedDouble_ClassInfo_, allocate$Sink$ChainedDouble);
	return class$;
}

$Class* Sink$ChainedDouble::class$ = nullptr;

		} // stream
	} // util
} // java