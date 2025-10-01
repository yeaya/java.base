#include <jdk/internal/org/objectweb/asm/tree/analysis/SmallSet$IteratorImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/SmallSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $SmallSet = ::jdk::internal::org::objectweb::asm$::tree::analysis::SmallSet;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

$FieldInfo _SmallSet$IteratorImpl_FieldInfo_[] = {
	{"firstElement", "Ljava/lang/Object;", "TT;", $PRIVATE, $field(SmallSet$IteratorImpl, firstElement)},
	{"secondElement", "Ljava/lang/Object;", "TT;", $PRIVATE, $field(SmallSet$IteratorImpl, secondElement)},
	{}
};

$MethodInfo _SmallSet$IteratorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TT;)V", 0, $method(static_cast<void(SmallSet$IteratorImpl::*)(Object$*,Object$*)>(&SmallSet$IteratorImpl::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SmallSet$IteratorImpl_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.tree.analysis.SmallSet$IteratorImpl", "jdk.internal.org.objectweb.asm.tree.analysis.SmallSet", "IteratorImpl", $STATIC},
	{}
};

$ClassInfo _SmallSet$IteratorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.analysis.SmallSet$IteratorImpl",
	"java.lang.Object",
	"java.util.Iterator",
	_SmallSet$IteratorImpl_FieldInfo_,
	_SmallSet$IteratorImpl_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
	nullptr,
	_SmallSet$IteratorImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.tree.analysis.SmallSet"
};

$Object* allocate$SmallSet$IteratorImpl($Class* clazz) {
	return $of($alloc(SmallSet$IteratorImpl));
}

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
	return $of(element);
}

void SmallSet$IteratorImpl::remove() {
	$throwNew($UnsupportedOperationException);
}

SmallSet$IteratorImpl::SmallSet$IteratorImpl() {
}

$Class* SmallSet$IteratorImpl::load$($String* name, bool initialize) {
	$loadClass(SmallSet$IteratorImpl, name, initialize, &_SmallSet$IteratorImpl_ClassInfo_, allocate$SmallSet$IteratorImpl);
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