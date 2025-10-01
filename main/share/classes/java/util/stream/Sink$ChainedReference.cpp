#include <java/util/stream/Sink$ChainedReference.h>

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

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Sink$ChainedReference_FieldInfo_[] = {
	{"downstream", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<-TE_OUT;>;", $PROTECTED | $FINAL, $field(Sink$ChainedReference, downstream)},
	{}
};

$MethodInfo _Sink$ChainedReference_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-TE_OUT;>;)V", $PUBLIC, $method(static_cast<void(Sink$ChainedReference::*)($Sink*)>(&Sink$ChainedReference::init$))},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Sink$ChainedReference_InnerClassesInfo_[] = {
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Sink$ChainedReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.stream.Sink$ChainedReference",
	"java.lang.Object",
	"java.util.stream.Sink",
	_Sink$ChainedReference_FieldInfo_,
	_Sink$ChainedReference_MethodInfo_,
	"<T:Ljava/lang/Object;E_OUT:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink<TT;>;",
	nullptr,
	_Sink$ChainedReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Sink"
};

$Object* allocate$Sink$ChainedReference($Class* clazz) {
	return $of($alloc(Sink$ChainedReference));
}

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
	$loadClass(Sink$ChainedReference, name, initialize, &_Sink$ChainedReference_ClassInfo_, allocate$Sink$ChainedReference);
	return class$;
}

$Class* Sink$ChainedReference::class$ = nullptr;

		} // stream
	} // util
} // java