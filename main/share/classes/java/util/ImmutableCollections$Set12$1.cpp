#include <java/util/ImmutableCollections$Set12$1.h>
#include <java/util/ImmutableCollections$Set12.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef EMPTY
#undef REVERSE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$Set12 = ::java::util::ImmutableCollections$Set12;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

void ImmutableCollections$Set12$1::init$($ImmutableCollections$Set12* this$0) {
	$set(this, this$0, this$0);
	$init($ImmutableCollections);
	this->idx = ($equals(this->this$0->e1, $ImmutableCollections::EMPTY)) ? 1 : 2;
}

bool ImmutableCollections$Set12$1::hasNext() {
	return this->idx > 0;
}

$Object* ImmutableCollections$Set12$1::next() {
	if (this->idx == 1) {
		this->idx = 0;
		$init($ImmutableCollections);
		return ($ImmutableCollections::REVERSE || $equals(this->this$0->e1, $ImmutableCollections::EMPTY)) ? this->this$0->e0 : this->this$0->e1;
	} else if (this->idx == 2) {
		this->idx = 1;
		$init($ImmutableCollections);
		return $ImmutableCollections::REVERSE ? this->this$0->e1 : this->this$0->e0;
	} else {
		$throwNew($NoSuchElementException);
	}
}

ImmutableCollections$Set12$1::ImmutableCollections$Set12$1() {
}

$Class* ImmutableCollections$Set12$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ImmutableCollections$Set12;", nullptr, $FINAL | $SYNTHETIC, $field(ImmutableCollections$Set12$1, this$0)},
		{"idx", "I", nullptr, $PRIVATE, $field(ImmutableCollections$Set12$1, idx)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ImmutableCollections$Set12;)V", nullptr, 0, $method(ImmutableCollections$Set12$1, init$, void, $ImmutableCollections$Set12*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$Set12$1, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(ImmutableCollections$Set12$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ImmutableCollections$Set12",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ImmutableCollections$Set12", "java.util.ImmutableCollections", "Set12", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$Set12$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ImmutableCollections$Set12$1",
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
		"java.util.ImmutableCollections"
	};
	$loadClass(ImmutableCollections$Set12$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableCollections$Set12$1);
	});
	return class$;
}

$Class* ImmutableCollections$Set12$1::class$ = nullptr;

	} // util
} // java