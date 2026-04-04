#include <sun/util/PreHashedMap$1$1.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <sun/util/PreHashedMap$1.h>
#include <sun/util/PreHashedMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $PreHashedMap$1 = ::sun::util::PreHashedMap$1;

namespace sun {
	namespace util {

void PreHashedMap$1$1::init$($PreHashedMap$1* this$1) {
	$set(this, this$1, this$1);
	this->i = -1;
	$set(this, a, nullptr);
	$set(this, cur, nullptr);
}

bool PreHashedMap$1$1::findNext() {
	if (this->a != nullptr) {
		if (this->a->length == 3) {
			$set(this, a, $cast($ObjectArray, this->a->get(2)));
			$set(this, cur, $cast($String, $nc(this->a)->get(0)));
			return true;
		}
		++this->i;
		$set(this, a, nullptr);
	}
	$set(this, cur, nullptr);
	if (this->i >= $nc(this->this$1->this$0)->rows) {
		return false;
	}
	if (this->i < 0 || $nc(this->this$1->this$0->ht)->get(this->i) == nullptr) {
		do {
			if (++this->i >= this->this$1->this$0->rows) {
				return false;
			}
		} while ($nc(this->this$1->this$0->ht)->get(this->i) == nullptr);
	}
	$set(this, a, $cast($ObjectArray, $nc(this->this$1->this$0->ht)->get(this->i)));
	$set(this, cur, $cast($String, $nc(this->a)->get(0)));
	return true;
}

bool PreHashedMap$1$1::hasNext() {
	if (this->cur != nullptr) {
		return true;
	}
	return findNext();
}

$Object* PreHashedMap$1$1::next() {
	if (this->cur == nullptr) {
		if (!findNext()) {
			$throwNew($NoSuchElementException);
		}
	}
	$var($String, s, this->cur);
	$set(this, cur, nullptr);
	return $of(s);
}

void PreHashedMap$1$1::remove() {
	$throwNew($UnsupportedOperationException);
}

PreHashedMap$1$1::PreHashedMap$1$1() {
}

$Class* PreHashedMap$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/util/PreHashedMap$1;", nullptr, $FINAL | $SYNTHETIC, $field(PreHashedMap$1$1, this$1)},
		{"i", "I", nullptr, $PRIVATE, $field(PreHashedMap$1$1, i)},
		{"a", "[Ljava/lang/Object;", nullptr, 0, $field(PreHashedMap$1$1, a)},
		{"cur", "Ljava/lang/String;", nullptr, 0, $field(PreHashedMap$1$1, cur)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/PreHashedMap$1;)V", nullptr, 0, $method(PreHashedMap$1$1, init$, void, $PreHashedMap$1*)},
		{"findNext", "()Z", nullptr, $PRIVATE, $method(PreHashedMap$1$1, findNext, bool)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(PreHashedMap$1$1, hasNext, bool)},
		{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PreHashedMap$1$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(PreHashedMap$1$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.PreHashedMap$1",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.PreHashedMap$1", nullptr, nullptr, 0},
		{"sun.util.PreHashedMap$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.PreHashedMap$1$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.PreHashedMap"
	};
	$loadClass(PreHashedMap$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreHashedMap$1$1);
	});
	return class$;
}

$Class* PreHashedMap$1$1::class$ = nullptr;

	} // util
} // sun