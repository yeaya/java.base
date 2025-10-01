#include <java/util/stream/Nodes$SizedCollectorTask$OfRef.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/Nodes$SizedCollectorTask.h>
#include <java/util/stream/PipelineHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Nodes$SizedCollectorTask = ::java::util::stream::Nodes$SizedCollectorTask;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$SizedCollectorTask$OfRef_FieldInfo_[] = {
	{"array", "[Ljava/lang/Object;", "[TP_OUT;", $PRIVATE | $FINAL, $field(Nodes$SizedCollectorTask$OfRef, array)},
	{}
};

$MethodInfo _Nodes$SizedCollectorTask$OfRef_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/PipelineHelper;[Ljava/lang/Object;)V", "(Ljava/util/Spliterator<TP_IN;>;Ljava/util/stream/PipelineHelper<TP_OUT;>;[TP_OUT;)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask$OfRef::*)($Spliterator*,$PipelineHelper*,$ObjectArray*)>(&Nodes$SizedCollectorTask$OfRef::init$))},
	{"<init>", "(Ljava/util/stream/Nodes$SizedCollectorTask$OfRef;Ljava/util/Spliterator;JJ)V", "(Ljava/util/stream/Nodes$SizedCollectorTask$OfRef<TP_IN;TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;JJ)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask$OfRef::*)(Nodes$SizedCollectorTask$OfRef*,$Spliterator*,int64_t,int64_t)>(&Nodes$SizedCollectorTask$OfRef::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC},
	{"makeChild", "(Ljava/util/Spliterator;JJ)Ljava/util/stream/Nodes$SizedCollectorTask$OfRef;", "(Ljava/util/Spliterator<TP_IN;>;JJ)Ljava/util/stream/Nodes$SizedCollectorTask$OfRef<TP_IN;TP_OUT;>;", 0},
	{}
};

$InnerClassInfo _Nodes$SizedCollectorTask$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$SizedCollectorTask", "java.util.stream.Nodes", "SizedCollectorTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$SizedCollectorTask$OfRef", "java.util.stream.Nodes$SizedCollectorTask", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _Nodes$SizedCollectorTask$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$SizedCollectorTask$OfRef",
	"java.util.stream.Nodes$SizedCollectorTask",
	nullptr,
	_Nodes$SizedCollectorTask$OfRef_FieldInfo_,
	_Nodes$SizedCollectorTask$OfRef_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;>Ljava/util/stream/Nodes$SizedCollectorTask<TP_IN;TP_OUT;Ljava/util/stream/Sink<TP_OUT;>;Ljava/util/stream/Nodes$SizedCollectorTask$OfRef<TP_IN;TP_OUT;>;>;Ljava/util/stream/Sink<TP_OUT;>;",
	nullptr,
	_Nodes$SizedCollectorTask$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$SizedCollectorTask$OfRef($Class* clazz) {
	return $of($alloc(Nodes$SizedCollectorTask$OfRef));
}

void Nodes$SizedCollectorTask$OfRef::init$($Spliterator* spliterator, $PipelineHelper* helper, $ObjectArray* array) {
	$Nodes$SizedCollectorTask::init$(spliterator, helper, $nc(array)->length);
	$set(this, array, array);
}

void Nodes$SizedCollectorTask$OfRef::init$(Nodes$SizedCollectorTask$OfRef* parent, $Spliterator* spliterator, int64_t offset, int64_t length) {
	$Nodes$SizedCollectorTask::init$(parent, spliterator, offset, length, $nc($nc(parent)->array)->length);
	$set(this, array, $nc(parent)->array);
}

Nodes$SizedCollectorTask$OfRef* Nodes$SizedCollectorTask$OfRef::makeChild($Spliterator* spliterator, int64_t offset, int64_t size) {
	return $new(Nodes$SizedCollectorTask$OfRef, this, spliterator, offset, size);
}

void Nodes$SizedCollectorTask$OfRef::accept(Object$* value) {
	if (this->index >= this->fence) {
		$throwNew($IndexOutOfBoundsException, $($Integer::toString(this->index)));
	}
	$nc(this->array)->set(this->index++, value);
}

Nodes$SizedCollectorTask$OfRef::Nodes$SizedCollectorTask$OfRef() {
}

$Class* Nodes$SizedCollectorTask$OfRef::load$($String* name, bool initialize) {
	$loadClass(Nodes$SizedCollectorTask$OfRef, name, initialize, &_Nodes$SizedCollectorTask$OfRef_ClassInfo_, allocate$Nodes$SizedCollectorTask$OfRef);
	return class$;
}

$Class* Nodes$SizedCollectorTask$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java