#include <java/lang/ref/FinalizerHistogram$Entry.h>
#include <java/lang/ref/FinalizerHistogram.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace ref {

int32_t FinalizerHistogram$Entry::getInstanceCount() {
	return this->instanceCount;
}

void FinalizerHistogram$Entry::increment() {
	this->instanceCount += 1;
}

void FinalizerHistogram$Entry::init$($String* className) {
	$set(this, className, className);
}

FinalizerHistogram$Entry::FinalizerHistogram$Entry() {
}

$Class* FinalizerHistogram$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instanceCount", "I", nullptr, $PRIVATE, $field(FinalizerHistogram$Entry, instanceCount)},
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FinalizerHistogram$Entry, className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(FinalizerHistogram$Entry, init$, void, $String*)},
		{"getInstanceCount", "()I", nullptr, 0, $method(FinalizerHistogram$Entry, getInstanceCount, int32_t)},
		{"increment", "()V", nullptr, 0, $method(FinalizerHistogram$Entry, increment, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.FinalizerHistogram$Entry", "java.lang.ref.FinalizerHistogram", "Entry", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.ref.FinalizerHistogram$Entry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ref.FinalizerHistogram"
	};
	$loadClass(FinalizerHistogram$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizerHistogram$Entry);
	});
	return class$;
}

$Class* FinalizerHistogram$Entry::class$ = nullptr;

		} // ref
	} // lang
} // java