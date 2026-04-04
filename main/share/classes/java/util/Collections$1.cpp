#include <java/util/Collections$1.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collections.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

void Collections$1::init$(Object$* val$e) {
	$set(this, val$e, val$e);
	this->hasNext$ = true;
}

bool Collections$1::hasNext() {
	return this->hasNext$;
}

$Object* Collections$1::next() {
	if (this->hasNext$) {
		this->hasNext$ = false;
		return this->val$e;
	}
	$throwNew($NoSuchElementException);
}

void Collections$1::remove() {
	$throwNew($UnsupportedOperationException);
}

void Collections$1::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	if (this->hasNext$) {
		this->hasNext$ = false;
		action->accept(this->val$e);
	}
}

Collections$1::Collections$1() {
}

$Class* Collections$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$e", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$1, val$e)},
		{"hasNext", "Z", nullptr, $PRIVATE, $field(Collections$1, hasNext$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "()V", 0, $method(Collections$1, init$, void, Object$*)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Collections$1, forEachRemaining, void, $Consumer*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$1, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Collections$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.Collections",
		"singletonIterator",
		"(Ljava/lang/Object;)Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collections$1);
	});
	return class$;
}

$Class* Collections$1::class$ = nullptr;

	} // util
} // java