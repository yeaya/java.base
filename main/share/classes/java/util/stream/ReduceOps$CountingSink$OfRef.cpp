#include <java/util/stream/ReduceOps$CountingSink$OfRef.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$CountingSink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$CountingSink = ::java::util::stream::ReduceOps$CountingSink;

namespace java {
	namespace util {
		namespace stream {

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
	return $ReduceOps$CountingSink::get();
}

ReduceOps$CountingSink$OfRef::ReduceOps$CountingSink$OfRef() {
}

$Class* ReduceOps$CountingSink$OfRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReduceOps$CountingSink$OfRef, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(ReduceOps$CountingSink$OfRef, accept, void, Object$*)},
		{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$CountingSink$OfRef, combine, void, $ReduceOps$AccumulatingSink*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$CountingSink$OfRef, get, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$CountingSink", "java.util.stream.ReduceOps", "CountingSink", $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$CountingSink$OfRef", "java.util.stream.ReduceOps$CountingSink", "OfRef", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.ReduceOps$CountingSink$OfRef",
		"java.util.stream.ReduceOps$CountingSink",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/stream/ReduceOps$CountingSink<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$CountingSink$OfRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReduceOps$CountingSink$OfRef));
	});
	return class$;
}

$Class* ReduceOps$CountingSink$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java