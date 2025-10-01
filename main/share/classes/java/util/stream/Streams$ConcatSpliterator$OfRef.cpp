#include <java/util/stream/Streams$ConcatSpliterator$OfRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _Streams$ConcatSpliterator$OfRef_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/Spliterator;)V", "(Ljava/util/Spliterator<TT;>;Ljava/util/Spliterator<TT;>;)V", 0, $method(static_cast<void(Streams$ConcatSpliterator$OfRef::*)($Spliterator*,$Spliterator*)>(&Streams$ConcatSpliterator$OfRef::init$))},
	{}
};

$InnerClassInfo _Streams$ConcatSpliterator$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$ConcatSpliterator", "java.util.stream.Streams", "ConcatSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.Streams$ConcatSpliterator$OfRef", "java.util.stream.Streams$ConcatSpliterator", "OfRef", $STATIC},
	{}
};

$ClassInfo _Streams$ConcatSpliterator$OfRef_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Streams$ConcatSpliterator$OfRef",
	"java.util.stream.Streams$ConcatSpliterator",
	nullptr,
	nullptr,
	_Streams$ConcatSpliterator$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/Streams$ConcatSpliterator<TT;Ljava/util/Spliterator<TT;>;>;",
	nullptr,
	_Streams$ConcatSpliterator$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$ConcatSpliterator$OfRef($Class* clazz) {
	return $of($alloc(Streams$ConcatSpliterator$OfRef));
}

void Streams$ConcatSpliterator$OfRef::init$($Spliterator* aSpliterator, $Spliterator* bSpliterator) {
	$Streams$ConcatSpliterator::init$(aSpliterator, bSpliterator);
}

Streams$ConcatSpliterator$OfRef::Streams$ConcatSpliterator$OfRef() {
}

$Class* Streams$ConcatSpliterator$OfRef::load$($String* name, bool initialize) {
	$loadClass(Streams$ConcatSpliterator$OfRef, name, initialize, &_Streams$ConcatSpliterator$OfRef_ClassInfo_, allocate$Streams$ConcatSpliterator$OfRef);
	return class$;
}

$Class* Streams$ConcatSpliterator$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java