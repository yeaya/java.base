#include <java/util/stream/ReduceOps$CountingSink$OfRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$CountingSink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$CountingSink = ::java::util::stream::ReduceOps$CountingSink;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _ReduceOps$CountingSink$OfRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReduceOps$CountingSink$OfRef::*)()>(&ReduceOps$CountingSink$OfRef::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _ReduceOps$CountingSink$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$CountingSink", "java.util.stream.ReduceOps", "CountingSink", $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$CountingSink$OfRef", "java.util.stream.ReduceOps$CountingSink", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _ReduceOps$CountingSink$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ReduceOps$CountingSink$OfRef",
	"java.util.stream.ReduceOps$CountingSink",
	nullptr,
	nullptr,
	_ReduceOps$CountingSink$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/ReduceOps$CountingSink<TT;>;",
	nullptr,
	_ReduceOps$CountingSink$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$CountingSink$OfRef($Class* clazz) {
	return $of($alloc(ReduceOps$CountingSink$OfRef));
}

void ReduceOps$CountingSink$OfRef::init$() {
	$ReduceOps$CountingSink::init$();
}

void ReduceOps$CountingSink$OfRef::accept(Object$* t) {
	++this->count;
}

void ReduceOps$CountingSink$OfRef::combine($ReduceOps$AccumulatingSink* other) {
	$ReduceOps$CountingSink::combine($cast($ReduceOps$CountingSink, other));
}

$Object* ReduceOps$CountingSink$OfRef::get() {
	return $of($ReduceOps$CountingSink::get());
}

ReduceOps$CountingSink$OfRef::ReduceOps$CountingSink$OfRef() {
}

$Class* ReduceOps$CountingSink$OfRef::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$CountingSink$OfRef, name, initialize, &_ReduceOps$CountingSink$OfRef_ClassInfo_, allocate$ReduceOps$CountingSink$OfRef);
	return class$;
}

$Class* ReduceOps$CountingSink$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java