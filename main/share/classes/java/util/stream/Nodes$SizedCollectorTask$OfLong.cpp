#include <java/util/stream/Nodes$SizedCollectorTask$OfLong.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Nodes$SizedCollectorTask.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink$OfLong.h>
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
using $Sink$OfLong = ::java::util::stream::Sink$OfLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$SizedCollectorTask$OfLong_FieldInfo_[] = {
	{"array", "[J", nullptr, $PRIVATE | $FINAL, $field(Nodes$SizedCollectorTask$OfLong, array)},
	{}
};

$MethodInfo _Nodes$SizedCollectorTask$OfLong_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
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
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/PipelineHelper;[J)V", "(Ljava/util/Spliterator<TP_IN;>;Ljava/util/stream/PipelineHelper<Ljava/lang/Long;>;[J)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask$OfLong::*)($Spliterator*,$PipelineHelper*,$longs*)>(&Nodes$SizedCollectorTask$OfLong::init$))},
	{"<init>", "(Ljava/util/stream/Nodes$SizedCollectorTask$OfLong;Ljava/util/Spliterator;JJ)V", "(Ljava/util/stream/Nodes$SizedCollectorTask$OfLong<TP_IN;>;Ljava/util/Spliterator<TP_IN;>;JJ)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask$OfLong::*)(Nodes$SizedCollectorTask$OfLong*,$Spliterator*,int64_t,int64_t)>(&Nodes$SizedCollectorTask$OfLong::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"makeChild", "(Ljava/util/Spliterator;JJ)Ljava/util/stream/Nodes$SizedCollectorTask$OfLong;", "(Ljava/util/Spliterator<TP_IN;>;JJ)Ljava/util/stream/Nodes$SizedCollectorTask$OfLong<TP_IN;>;", 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$SizedCollectorTask$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$SizedCollectorTask", "java.util.stream.Nodes", "SizedCollectorTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$SizedCollectorTask$OfLong", "java.util.stream.Nodes$SizedCollectorTask", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$SizedCollectorTask$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$SizedCollectorTask$OfLong",
	"java.util.stream.Nodes$SizedCollectorTask",
	"java.util.stream.Sink$OfLong",
	_Nodes$SizedCollectorTask$OfLong_FieldInfo_,
	_Nodes$SizedCollectorTask$OfLong_MethodInfo_,
	"<P_IN:Ljava/lang/Object;>Ljava/util/stream/Nodes$SizedCollectorTask<TP_IN;Ljava/lang/Long;Ljava/util/stream/Sink$OfLong;Ljava/util/stream/Nodes$SizedCollectorTask$OfLong<TP_IN;>;>;Ljava/util/stream/Sink$OfLong;",
	nullptr,
	_Nodes$SizedCollectorTask$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$SizedCollectorTask$OfLong($Class* clazz) {
	return $of($alloc(Nodes$SizedCollectorTask$OfLong));
}

void Nodes$SizedCollectorTask$OfLong::begin(int64_t size) {
	this->$Nodes$SizedCollectorTask::begin(size);
}

int32_t Nodes$SizedCollectorTask$OfLong::hashCode() {
	 return this->$Nodes$SizedCollectorTask::hashCode();
}

bool Nodes$SizedCollectorTask$OfLong::equals(Object$* obj) {
	 return this->$Nodes$SizedCollectorTask::equals(obj);
}

$Object* Nodes$SizedCollectorTask$OfLong::clone() {
	 return this->$Nodes$SizedCollectorTask::clone();
}

$String* Nodes$SizedCollectorTask$OfLong::toString() {
	 return this->$Nodes$SizedCollectorTask::toString();
}

void Nodes$SizedCollectorTask$OfLong::finalize() {
	this->$Nodes$SizedCollectorTask::finalize();
}

void Nodes$SizedCollectorTask$OfLong::end() {
	this->$Nodes$SizedCollectorTask::end();
}

bool Nodes$SizedCollectorTask$OfLong::cancellationRequested() {
	 return this->$Nodes$SizedCollectorTask::cancellationRequested();
}

void Nodes$SizedCollectorTask$OfLong::accept(int32_t value) {
	this->$Nodes$SizedCollectorTask::accept(value);
}

void Nodes$SizedCollectorTask$OfLong::accept(double value) {
	this->$Nodes$SizedCollectorTask::accept(value);
}

void Nodes$SizedCollectorTask$OfLong::accept(Object$* t) {
	this->$Sink$OfLong::accept(t);
}

$Consumer* Nodes$SizedCollectorTask$OfLong::andThen($Consumer* after) {
	 return this->$Nodes$SizedCollectorTask::andThen(after);
}

void Nodes$SizedCollectorTask$OfLong::init$($Spliterator* spliterator, $PipelineHelper* helper, $longs* array) {
	$Nodes$SizedCollectorTask::init$(spliterator, helper, $nc(array)->length);
	$set(this, array, array);
}

void Nodes$SizedCollectorTask$OfLong::init$(Nodes$SizedCollectorTask$OfLong* parent, $Spliterator* spliterator, int64_t offset, int64_t length) {
	$Nodes$SizedCollectorTask::init$(parent, spliterator, offset, length, $nc($nc(parent)->array)->length);
	$set(this, array, $nc(parent)->array);
}

Nodes$SizedCollectorTask$OfLong* Nodes$SizedCollectorTask$OfLong::makeChild($Spliterator* spliterator, int64_t offset, int64_t size) {
	return $new(Nodes$SizedCollectorTask$OfLong, this, spliterator, offset, size);
}

void Nodes$SizedCollectorTask$OfLong::accept(int64_t value) {
	if (this->index >= this->fence) {
		$throwNew($IndexOutOfBoundsException, $($Integer::toString(this->index)));
	}
	$nc(this->array)->set(this->index++, value);
}

Nodes$SizedCollectorTask$OfLong::Nodes$SizedCollectorTask$OfLong() {
}

$Class* Nodes$SizedCollectorTask$OfLong::load$($String* name, bool initialize) {
	$loadClass(Nodes$SizedCollectorTask$OfLong, name, initialize, &_Nodes$SizedCollectorTask$OfLong_ClassInfo_, allocate$Nodes$SizedCollectorTask$OfLong);
	return class$;
}

$Class* Nodes$SizedCollectorTask$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java