#include <java/util/Vector$1.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Vector = ::java::util::Vector;

namespace java {
	namespace util {

void Vector$1::init$($Vector* this$0) {
	$set(this, this$0, this$0);
	this->count = 0;
}

bool Vector$1::hasMoreElements() {
	return this->count < this->this$0->elementCount;
}

$Object* Vector$1::nextElement() {
	$synchronized(this->this$0) {
		if (this->count < this->this$0->elementCount) {
			return this->this$0->elementData(this->count++);
		}
	}
	$throwNew($NoSuchElementException, "Vector Enumeration"_s);
}

Vector$1::Vector$1() {
}

$Class* Vector$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(Vector$1, this$0)},
		{"count", "I", nullptr, 0, $field(Vector$1, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Vector;)V", nullptr, 0, $method(Vector$1, init$, void, $Vector*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Vector$1, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Vector$1, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.Vector",
		"elements",
		"()Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Vector$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Vector$1",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Vector"
	};
	$loadClass(Vector$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Vector$1);
	});
	return class$;
}

$Class* Vector$1::class$ = nullptr;

	} // util
} // java