#include <java/util/stream/Nodes$SizedCollectorTask$OfInt.h>

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
#include <java/util/function/Consumer.h>
#include <java/util/stream/Nodes$SizedCollectorTask.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink$OfInt.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Nodes$SizedCollectorTask = ::java::util::stream::Nodes$SizedCollectorTask;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$SizedCollectorTask$OfInt_FieldInfo_[] = {
	{"array", "[I", nullptr, $PRIVATE | $FINAL, $field(Nodes$SizedCollectorTask$OfInt, array)},
	{}
};

$MethodInfo _Nodes$SizedCollectorTask$OfInt_MethodInfo_[] = {
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/PipelineHelper;[I)V", "(Ljava/util/Spliterator<TP_IN;>;Ljava/util/stream/PipelineHelper<Ljava/lang/Integer;>;[I)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask$OfInt::*)($Spliterator*,$PipelineHelper*,$ints*)>(&Nodes$SizedCollectorTask$OfInt::init$))},
	{"<init>", "(Ljava/util/stream/Nodes$SizedCollectorTask$OfInt;Ljava/util/Spliterator;JJ)V", "(Ljava/util/stream/Nodes$SizedCollectorTask$OfInt<TP_IN;>;Ljava/util/Spliterator<TP_IN;>;JJ)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask$OfInt::*)(Nodes$SizedCollectorTask$OfInt*,$Spliterator*,int64_t,int64_t)>(&Nodes$SizedCollectorTask$OfInt::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"makeChild", "(Ljava/util/Spliterator;JJ)Ljava/util/stream/Nodes$SizedCollectorTask$OfInt;", "(Ljava/util/Spliterator<TP_IN;>;JJ)Ljava/util/stream/Nodes$SizedCollectorTask$OfInt<TP_IN;>;", 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$SizedCollectorTask$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$SizedCollectorTask", "java.util.stream.Nodes", "SizedCollectorTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$SizedCollectorTask$OfInt", "java.util.stream.Nodes$SizedCollectorTask", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$SizedCollectorTask$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$SizedCollectorTask$OfInt",
	"java.util.stream.Nodes$SizedCollectorTask",
	"java.util.stream.Sink$OfInt",
	_Nodes$SizedCollectorTask$OfInt_FieldInfo_,
	_Nodes$SizedCollectorTask$OfInt_MethodInfo_,
	"<P_IN:Ljava/lang/Object;>Ljava/util/stream/Nodes$SizedCollectorTask<TP_IN;Ljava/lang/Integer;Ljava/util/stream/Sink$OfInt;Ljava/util/stream/Nodes$SizedCollectorTask$OfInt<TP_IN;>;>;Ljava/util/stream/Sink$OfInt;",
	nullptr,
	_Nodes$SizedCollectorTask$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$SizedCollectorTask$OfInt($Class* clazz) {
	return $of($alloc(Nodes$SizedCollectorTask$OfInt));
}

void Nodes$SizedCollectorTask$OfInt::begin(int64_t size) {
	this->$Nodes$SizedCollectorTask::begin(size);
}

int32_t Nodes$SizedCollectorTask$OfInt::hashCode() {
	 return this->$Nodes$SizedCollectorTask::hashCode();
}

bool Nodes$SizedCollectorTask$OfInt::equals(Object$* obj) {
	 return this->$Nodes$SizedCollectorTask::equals(obj);
}

$Object* Nodes$SizedCollectorTask$OfInt::clone() {
	 return this->$Nodes$SizedCollectorTask::clone();
}

$String* Nodes$SizedCollectorTask$OfInt::toString() {
	 return this->$Nodes$SizedCollectorTask::toString();
}

void Nodes$SizedCollectorTask$OfInt::finalize() {
	this->$Nodes$SizedCollectorTask::finalize();
}

void Nodes$SizedCollectorTask$OfInt::end() {
	this->$Nodes$SizedCollectorTask::end();
}

bool Nodes$SizedCollectorTask$OfInt::cancellationRequested() {
	 return this->$Nodes$SizedCollectorTask::cancellationRequested();
}

void Nodes$SizedCollectorTask$OfInt::accept(int64_t value) {
	this->$Nodes$SizedCollectorTask::accept(value);
}

void Nodes$SizedCollectorTask$OfInt::accept(double value) {
	this->$Nodes$SizedCollectorTask::accept(value);
}

void Nodes$SizedCollectorTask$OfInt::accept(Object$* t) {
	this->$Sink$OfInt::accept(t);
}

$Consumer* Nodes$SizedCollectorTask$OfInt::andThen($Consumer* after) {
	 return this->$Nodes$SizedCollectorTask::andThen(after);
}

void Nodes$SizedCollectorTask$OfInt::init$($Spliterator* spliterator, $PipelineHelper* helper, $ints* array) {
	$Nodes$SizedCollectorTask::init$(spliterator, helper, $nc(array)->length);
	$set(this, array, array);
}

void Nodes$SizedCollectorTask$OfInt::init$(Nodes$SizedCollectorTask$OfInt* parent, $Spliterator* spliterator, int64_t offset, int64_t length) {
	$Nodes$SizedCollectorTask::init$(parent, spliterator, offset, length, $nc($nc(parent)->array)->length);
	$set(this, array, $nc(parent)->array);
}

Nodes$SizedCollectorTask$OfInt* Nodes$SizedCollectorTask$OfInt::makeChild($Spliterator* spliterator, int64_t offset, int64_t size) {
	return $new(Nodes$SizedCollectorTask$OfInt, this, spliterator, offset, size);
}

void Nodes$SizedCollectorTask$OfInt::accept(int32_t value) {
	if (this->index >= this->fence) {
		$throwNew($IndexOutOfBoundsException, $($Integer::toString(this->index)));
	}
	$nc(this->array)->set(this->index++, value);
}

Nodes$SizedCollectorTask$OfInt::Nodes$SizedCollectorTask$OfInt() {
}

$Class* Nodes$SizedCollectorTask$OfInt::load$($String* name, bool initialize) {
	$loadClass(Nodes$SizedCollectorTask$OfInt, name, initialize, &_Nodes$SizedCollectorTask$OfInt_ClassInfo_, allocate$Nodes$SizedCollectorTask$OfInt);
	return class$;
}

$Class* Nodes$SizedCollectorTask$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java