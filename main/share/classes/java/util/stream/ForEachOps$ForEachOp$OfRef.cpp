#include <java/util/stream/ForEachOps$ForEachOp$OfRef.h>

#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/ForEachOps$ForEachOp.h>
#include <java/util/stream/PipelineHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $ForEachOps$ForEachOp = ::java::util::stream::ForEachOps$ForEachOp;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ForEachOps$ForEachOp$OfRef_FieldInfo_[] = {
	{"consumer", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<-TT;>;", $FINAL, $field(ForEachOps$ForEachOp$OfRef, consumer)},
	{}
};

$MethodInfo _ForEachOps$ForEachOp$OfRef_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Consumer;Z)V", "(Ljava/util/function/Consumer<-TT;>;Z)V", 0, $method(static_cast<void(ForEachOps$ForEachOp$OfRef::*)($Consumer*,bool)>(&ForEachOps$ForEachOp$OfRef::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _ForEachOps$ForEachOp$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.ForEachOps$ForEachOp", "java.util.stream.ForEachOps", "ForEachOp", $STATIC | $ABSTRACT},
	{"java.util.stream.ForEachOps$ForEachOp$OfRef", "java.util.stream.ForEachOps$ForEachOp", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _ForEachOps$ForEachOp$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ForEachOps$ForEachOp$OfRef",
	"java.util.stream.ForEachOps$ForEachOp",
	nullptr,
	_ForEachOps$ForEachOp$OfRef_FieldInfo_,
	_ForEachOps$ForEachOp$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/ForEachOps$ForEachOp<TT;>;",
	nullptr,
	_ForEachOps$ForEachOp$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ForEachOps"
};

$Object* allocate$ForEachOps$ForEachOp$OfRef($Class* clazz) {
	return $of($alloc(ForEachOps$ForEachOp$OfRef));
}

void ForEachOps$ForEachOp$OfRef::init$($Consumer* consumer, bool ordered) {
	$ForEachOps$ForEachOp::init$(ordered);
	$set(this, consumer, consumer);
}

void ForEachOps$ForEachOp$OfRef::accept(Object$* t) {
	$nc(this->consumer)->accept(t);
}

$Object* ForEachOps$ForEachOp$OfRef::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($ForEachOps$ForEachOp::evaluateSequential(helper, spliterator));
}

$Object* ForEachOps$ForEachOp$OfRef::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($ForEachOps$ForEachOp::evaluateParallel(helper, spliterator));
}

$Object* ForEachOps$ForEachOp$OfRef::get() {
	return $of($ForEachOps$ForEachOp::get());
}

ForEachOps$ForEachOp$OfRef::ForEachOps$ForEachOp$OfRef() {
}

$Class* ForEachOps$ForEachOp$OfRef::load$($String* name, bool initialize) {
	$loadClass(ForEachOps$ForEachOp$OfRef, name, initialize, &_ForEachOps$ForEachOp$OfRef_ClassInfo_, allocate$ForEachOps$ForEachOp$OfRef);
	return class$;
}

$Class* ForEachOps$ForEachOp$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java