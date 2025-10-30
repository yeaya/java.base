#include <java/util/stream/DistinctOps$1$1.h>

#include <java/util/stream/DistinctOps$1.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $DistinctOps$1 = ::java::util::stream::DistinctOps$1;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DistinctOps$1$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/DistinctOps$1;", nullptr, $FINAL | $SYNTHETIC, $field(DistinctOps$1$1, this$0)},
	{"seenNull", "Z", nullptr, 0, $field(DistinctOps$1$1, seenNull)},
	{"lastSeen", "Ljava/lang/Object;", "TT;", 0, $field(DistinctOps$1$1, lastSeen)},
	{}
};

$MethodInfo _DistinctOps$1$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/DistinctOps$1;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(DistinctOps$1$1::*)($DistinctOps$1*,$Sink*)>(&DistinctOps$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DistinctOps$1$1_EnclosingMethodInfo_ = {
	"java.util.stream.DistinctOps$1",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _DistinctOps$1$1_InnerClassesInfo_[] = {
	{"java.util.stream.DistinctOps$1", nullptr, nullptr, 0},
	{"java.util.stream.DistinctOps$1$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DistinctOps$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DistinctOps$1$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_DistinctOps$1$1_FieldInfo_,
	_DistinctOps$1$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TT;TT;>;",
	&_DistinctOps$1$1_EnclosingMethodInfo_,
	_DistinctOps$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DistinctOps"
};

$Object* allocate$DistinctOps$1$1($Class* clazz) {
	return $of($alloc(DistinctOps$1$1));
}

void DistinctOps$1$1::init$($DistinctOps$1* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedReference::init$(downstream);
}

void DistinctOps$1$1::begin(int64_t size) {
	this->seenNull = false;
	$set(this, lastSeen, nullptr);
	$nc(this->downstream)->begin(-1);
}

void DistinctOps$1$1::end() {
	this->seenNull = false;
	$set(this, lastSeen, nullptr);
	$nc(this->downstream)->end();
}

void DistinctOps$1$1::accept(Object$* t) {
	if (t == nullptr) {
		if (!this->seenNull) {
			this->seenNull = true;
			$nc(this->downstream)->accept($set(this, lastSeen, nullptr));
		}
	} else if (this->lastSeen == nullptr || !$nc($of(t))->equals(this->lastSeen)) {
		$nc(this->downstream)->accept($set(this, lastSeen, t));
	}
}

DistinctOps$1$1::DistinctOps$1$1() {
}

$Class* DistinctOps$1$1::load$($String* name, bool initialize) {
	$loadClass(DistinctOps$1$1, name, initialize, &_DistinctOps$1$1_ClassInfo_, allocate$DistinctOps$1$1);
	return class$;
}

$Class* DistinctOps$1$1::class$ = nullptr;

		} // stream
	} // util
} // java