#include <java/util/Collections$CheckedCollection$1.h>
#include <java/util/Collections$CheckedCollection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections$CheckedCollection = ::java::util::Collections$CheckedCollection;
using $Iterator = ::java::util::Iterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

void Collections$CheckedCollection$1::init$($Collections$CheckedCollection* this$0, $Iterator* val$it) {
	$set(this, this$0, this$0);
	$set(this, val$it, val$it);
}

bool Collections$CheckedCollection$1::hasNext() {
	return $nc(this->val$it)->hasNext();
}

$Object* Collections$CheckedCollection$1::next() {
	return $nc(this->val$it)->next();
}

void Collections$CheckedCollection$1::remove() {
	$nc(this->val$it)->remove();
}

void Collections$CheckedCollection$1::forEachRemaining($Consumer* action) {
	$nc(this->val$it)->forEachRemaining(action);
}

Collections$CheckedCollection$1::Collections$CheckedCollection$1() {
}

$Class* Collections$CheckedCollection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/Collections$CheckedCollection;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$CheckedCollection$1, this$0)},
		{"val$it", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$CheckedCollection$1, val$it)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collections$CheckedCollection;Ljava/util/Iterator;)V", "()V", 0, $method(Collections$CheckedCollection$1, init$, void, $Collections$CheckedCollection*, $Iterator*)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Collections$CheckedCollection$1, forEachRemaining, void, $Consumer*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedCollection$1, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$CheckedCollection$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedCollection$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.Collections$CheckedCollection",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$CheckedCollection", "java.util.Collections", "CheckedCollection", $STATIC},
		{"java.util.Collections$CheckedCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$CheckedCollection$1",
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
	$loadClass(Collections$CheckedCollection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collections$CheckedCollection$1);
	});
	return class$;
}

$Class* Collections$CheckedCollection$1::class$ = nullptr;

	} // util
} // java