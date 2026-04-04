#include <sun/nio/ch/Util$2.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace sun {
	namespace nio {
		namespace ch {

void Util$2::init$($Set* val$s) {
	$set(this, val$s, val$s);
}

int32_t Util$2::size() {
	return $nc(this->val$s)->size();
}

bool Util$2::isEmpty() {
	return $nc(this->val$s)->isEmpty();
}

bool Util$2::contains(Object$* o) {
	return $nc(this->val$s)->contains(o);
}

$ObjectArray* Util$2::toArray() {
	return $nc(this->val$s)->toArray();
}

$ObjectArray* Util$2::toArray($ObjectArray* a) {
	return $nc(this->val$s)->toArray(a);
}

$String* Util$2::toString() {
	return $nc(this->val$s)->toString();
}

$Iterator* Util$2::iterator() {
	return $nc(this->val$s)->iterator();
}

bool Util$2::equals(Object$* o) {
	return $nc(this->val$s)->equals(o);
}

int32_t Util$2::hashCode() {
	return $nc(this->val$s)->hashCode();
}

void Util$2::clear() {
	$nc(this->val$s)->clear();
}

bool Util$2::remove(Object$* o) {
	return $nc(this->val$s)->remove(o);
}

bool Util$2::containsAll($Collection* coll) {
	return $nc(this->val$s)->containsAll(coll);
}

bool Util$2::removeAll($Collection* coll) {
	return $nc(this->val$s)->removeAll(coll);
}

bool Util$2::retainAll($Collection* coll) {
	return $nc(this->val$s)->retainAll(coll);
}

bool Util$2::add(Object$* o) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Util$2::addAll($Collection* coll) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

Util$2::Util$2() {
}

$Class* Util$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(Util$2, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;)V", "()V", 0, $method(Util$2, init$, void, $Set*)},
		{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(Util$2, add, bool, Object$*)},
		{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(Util$2, addAll, bool, $Collection*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Util$2, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Util$2, contains, bool, Object$*)},
		{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Util$2, containsAll, bool, $Collection*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Util$2, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Util$2, hashCode, int32_t)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Util$2, isEmpty, bool)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(Util$2, iterator, $Iterator*)},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Util$2, remove, bool, Object$*)},
		{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Util$2, removeAll, bool, $Collection*)},
		{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Util$2, retainAll, bool, $Collection*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Util$2, size, int32_t)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Util$2, toArray, $ObjectArray*)},
		{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(Util$2, toArray, $ObjectArray*, $ObjectArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Util$2, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.Util",
		"ungrowableSet",
		"(Ljava/util/Set;)Ljava/util/Set;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Util$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Util$2",
		"java.lang.Object",
		"java.util.Set",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Set<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Util"
	};
	$loadClass(Util$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Util$2);
	});
	return class$;
}

$Class* Util$2::class$ = nullptr;

		} // ch
	} // nio
} // sun