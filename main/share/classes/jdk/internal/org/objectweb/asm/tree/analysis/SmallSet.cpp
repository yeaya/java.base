#include <jdk/internal/org/objectweb/asm/tree/analysis/SmallSet.h>

#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/SmallSet$IteratorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $SmallSet$IteratorImpl = ::jdk::internal::org::objectweb::asm$::tree::analysis::SmallSet$IteratorImpl;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

$FieldInfo _SmallSet_FieldInfo_[] = {
	{"element1", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(SmallSet, element1)},
	{"element2", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(SmallSet, element2)},
	{}
};

$MethodInfo _SmallSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SmallSet, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", 0, $method(SmallSet, init$, void, Object$*)},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TT;)V", $PRIVATE, $method(SmallSet, init$, void, Object$*, Object$*)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC, $virtualMethod(SmallSet, iterator, $Iterator*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(SmallSet, size, int32_t)},
	{"union", "(Ljdk/internal/org/objectweb/asm/tree/analysis/SmallSet;)Ljava/util/Set;", "(Ljdk/internal/org/objectweb/asm/tree/analysis/SmallSet<TT;>;)Ljava/util/Set<TT;>;", 0, $method(SmallSet, union$, $Set*, SmallSet*)},
	{}
};

$InnerClassInfo _SmallSet_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.tree.analysis.SmallSet$IteratorImpl", "jdk.internal.org.objectweb.asm.tree.analysis.SmallSet", "IteratorImpl", $STATIC},
	{}
};

$ClassInfo _SmallSet_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.analysis.SmallSet",
	"java.util.AbstractSet",
	nullptr,
	_SmallSet_FieldInfo_,
	_SmallSet_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/AbstractSet<TT;>;",
	nullptr,
	_SmallSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.tree.analysis.SmallSet$IteratorImpl"
};

$Object* allocate$SmallSet($Class* clazz) {
	return $of($alloc(SmallSet));
}

void SmallSet::init$() {
	$AbstractSet::init$();
	$set(this, element1, nullptr);
	$set(this, element2, nullptr);
}

void SmallSet::init$(Object$* element) {
	$AbstractSet::init$();
	$set(this, element1, element);
	$set(this, element2, nullptr);
}

void SmallSet::init$(Object$* element1, Object$* element2) {
	$AbstractSet::init$();
	$set(this, element1, element1);
	$set(this, element2, element2);
}

$Iterator* SmallSet::iterator() {
	return $new($SmallSet$IteratorImpl, this->element1, this->element2);
}

int32_t SmallSet::size() {
	if (this->element1 == nullptr) {
		return 0;
	} else if (this->element2 == nullptr) {
		return 1;
	} else {
		return 2;
	}
}

$Set* SmallSet::union$(SmallSet* otherSet) {
	if (($equals($nc(otherSet)->element1, this->element1) && $equals(otherSet->element2, this->element2)) || ($equals($nc(otherSet)->element1, this->element2) && $equals(otherSet->element2, this->element1))) {
		return this;
	}
	if ($nc(otherSet)->element1 == nullptr) {
		return this;
	}
	if (this->element1 == nullptr) {
		return otherSet;
	}
	if ($nc(otherSet)->element2 == nullptr) {
		if (this->element2 == nullptr) {
			return $new(SmallSet, this->element1, otherSet->element1);
		}
		if ($equals(otherSet->element1, this->element1) || $equals(otherSet->element1, this->element2)) {
			return this;
		}
	}
	if (this->element2 == nullptr && ($equals(this->element1, $nc(otherSet)->element1) || $equals(this->element1, $nc(otherSet)->element2))) {
		return otherSet;
	}
	$var($HashSet, result, $new($HashSet, 4));
	result->add(this->element1);
	if (this->element2 != nullptr) {
		result->add(this->element2);
	}
	result->add($nc(otherSet)->element1);
	if ($nc(otherSet)->element2 != nullptr) {
		result->add(otherSet->element2);
	}
	return result;
}

SmallSet::SmallSet() {
}

$Class* SmallSet::load$($String* name, bool initialize) {
	$loadClass(SmallSet, name, initialize, &_SmallSet_ClassInfo_, allocate$SmallSet);
	return class$;
}

$Class* SmallSet::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk