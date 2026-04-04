#include <jdk/internal/org/objectweb/asm/tree/analysis/SmallSet$IteratorImpl.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/SmallSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

void SmallSet$IteratorImpl::init$(Object$* firstElement, Object$* secondElement) {
	$set(this, firstElement, firstElement);
	$set(this, secondElement, secondElement);
}

bool SmallSet$IteratorImpl::hasNext() {
	return this->firstElement != nullptr;
}

$Object* SmallSet$IteratorImpl::next() {
	if (this->firstElement == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, element, this->firstElement);
	$set(this, firstElement, this->secondElement);
	$set(this, secondElement, nullptr);
	return element;
}

void SmallSet$IteratorImpl::remove() {
	$throwNew($UnsupportedOperationException);
}

SmallSet$IteratorImpl::SmallSet$IteratorImpl() {
}

$Class* SmallSet$IteratorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"firstElement", "Ljava/lang/Object;", "TT;", $PRIVATE, $field(SmallSet$IteratorImpl, firstElement)},
		{"secondElement", "Ljava/lang/Object;", "TT;", $PRIVATE, $field(SmallSet$IteratorImpl, secondElement)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TT;)V", 0, $method(SmallSet$IteratorImpl, init$, void, Object$*, Object$*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(SmallSet$IteratorImpl, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(SmallSet$IteratorImpl, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(SmallSet$IteratorImpl, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.tree.analysis.SmallSet$IteratorImpl", "jdk.internal.org.objectweb.asm.tree.analysis.SmallSet", "IteratorImpl", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.analysis.SmallSet$IteratorImpl",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.tree.analysis.SmallSet"
	};
	$loadClass(SmallSet$IteratorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SmallSet$IteratorImpl);
	});
	return class$;
}

$Class* SmallSet$IteratorImpl::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk