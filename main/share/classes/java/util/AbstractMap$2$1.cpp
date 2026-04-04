#include <java/util/AbstractMap$2$1.h>
#include <java/util/AbstractMap$2.h>
#include <java/util/AbstractMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap$2 = ::java::util::AbstractMap$2;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace util {

void AbstractMap$2$1::init$($AbstractMap$2* this$1) {
	$set(this, this$1, this$1);
	$set(this, i, $$nc($nc(this->this$1->this$0)->entrySet())->iterator());
}

bool AbstractMap$2$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* AbstractMap$2$1::next() {
	return $$sure($Map$Entry, $nc(this->i)->next())->getValue();
}

void AbstractMap$2$1::remove() {
	$nc(this->i)->remove();
}

AbstractMap$2$1::AbstractMap$2$1() {
}

$Class* AbstractMap$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/AbstractMap$2;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractMap$2$1, this$1)},
		{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PRIVATE, $field(AbstractMap$2$1, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/AbstractMap$2;)V", nullptr, 0, $method(AbstractMap$2$1, init$, void, $AbstractMap$2*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractMap$2$1, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(AbstractMap$2$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractMap$2$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.AbstractMap$2",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.AbstractMap$2", nullptr, nullptr, 0},
		{"java.util.AbstractMap$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.AbstractMap$2$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TV;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.AbstractMap"
	};
	$loadClass(AbstractMap$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractMap$2$1);
	});
	return class$;
}

$Class* AbstractMap$2$1::class$ = nullptr;

	} // util
} // java