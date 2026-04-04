#include <java/util/stream/ReduceOps$Box.h>
#include <java/util/stream/ReduceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

void ReduceOps$Box::init$() {
}

$Object* ReduceOps$Box::get() {
	return this->state;
}

ReduceOps$Box::ReduceOps$Box() {
}

$Class* ReduceOps$Box::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"state", "Ljava/lang/Object;", "TU;", 0, $field(ReduceOps$Box, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReduceOps$Box, init$, void)},
		{"get", "()Ljava/lang/Object;", "()TU;", $PUBLIC, $virtualMethod(ReduceOps$Box, get, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$Box", "java.util.stream.ReduceOps", "Box", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.ReduceOps$Box",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$Box, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReduceOps$Box);
	});
	return class$;
}

$Class* ReduceOps$Box::class$ = nullptr;

		} // stream
	} // util
} // java