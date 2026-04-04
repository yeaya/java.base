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
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $ForEachOps$ForEachOp = ::java::util::stream::ForEachOps$ForEachOp;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

void ForEachOps$ForEachOp$OfRef::init$($Consumer* consumer, bool ordered) {
	$ForEachOps$ForEachOp::init$(ordered);
	$set(this, consumer, consumer);
}

void ForEachOps$ForEachOp$OfRef::accept(Object$* t) {
	$nc(this->consumer)->accept(t);
}

$Object* ForEachOps$ForEachOp$OfRef::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	return $ForEachOps$ForEachOp::evaluateSequential(helper, spliterator);
}

$Object* ForEachOps$ForEachOp$OfRef::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	return $ForEachOps$ForEachOp::evaluateParallel(helper, spliterator);
}

$Object* ForEachOps$ForEachOp$OfRef::get() {
	return $ForEachOps$ForEachOp::get();
}

ForEachOps$ForEachOp$OfRef::ForEachOps$ForEachOp$OfRef() {
}

$Class* ForEachOps$ForEachOp$OfRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"consumer", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<-TT;>;", $FINAL, $field(ForEachOps$ForEachOp$OfRef, consumer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Consumer;Z)V", "(Ljava/util/function/Consumer<-TT;>;Z)V", 0, $method(ForEachOps$ForEachOp$OfRef, init$, void, $Consumer*, bool)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(ForEachOps$ForEachOp$OfRef, accept, void, Object$*)},
		{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ForEachOps$ForEachOp$OfRef, evaluateParallel, $Object*, $PipelineHelper*, $Spliterator*)},
		{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ForEachOps$ForEachOp$OfRef, evaluateSequential, $Object*, $PipelineHelper*, $Spliterator*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ForEachOps$ForEachOp$OfRef, get, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ForEachOps$ForEachOp", "java.util.stream.ForEachOps", "ForEachOp", $STATIC | $ABSTRACT},
		{"java.util.stream.ForEachOps$ForEachOp$OfRef", "java.util.stream.ForEachOps$ForEachOp", "OfRef", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.ForEachOps$ForEachOp$OfRef",
		"java.util.stream.ForEachOps$ForEachOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/stream/ForEachOps$ForEachOp<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ForEachOps"
	};
	$loadClass(ForEachOps$ForEachOp$OfRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ForEachOps$ForEachOp$OfRef));
	});
	return class$;
}

$Class* ForEachOps$ForEachOp$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java