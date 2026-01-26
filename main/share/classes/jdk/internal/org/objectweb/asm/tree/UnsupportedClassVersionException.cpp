#include <jdk/internal/org/objectweb/asm/tree/UnsupportedClassVersionException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _UnsupportedClassVersionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedClassVersionException, serialVersionUID)},
	{}
};

$MethodInfo _UnsupportedClassVersionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnsupportedClassVersionException, init$, void)},
	{}
};

$ClassInfo _UnsupportedClassVersionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.UnsupportedClassVersionException",
	"java.lang.RuntimeException",
	nullptr,
	_UnsupportedClassVersionException_FieldInfo_,
	_UnsupportedClassVersionException_MethodInfo_
};

$Object* allocate$UnsupportedClassVersionException($Class* clazz) {
	return $of($alloc(UnsupportedClassVersionException));
}

void UnsupportedClassVersionException::init$() {
	$RuntimeException::init$();
}

UnsupportedClassVersionException::UnsupportedClassVersionException() {
}

UnsupportedClassVersionException::UnsupportedClassVersionException(const UnsupportedClassVersionException& e) : $RuntimeException(e) {
}

void UnsupportedClassVersionException::throw$() {
	throw *this;
}

$Class* UnsupportedClassVersionException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedClassVersionException, name, initialize, &_UnsupportedClassVersionException_ClassInfo_, allocate$UnsupportedClassVersionException);
	return class$;
}

$Class* UnsupportedClassVersionException::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk