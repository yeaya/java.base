#include <jdk/internal/org/objectweb/asm/ClassTooLargeException.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _ClassTooLargeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassTooLargeException, serialVersionUID)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClassTooLargeException, className)},
	{"constantPoolCount", "I", nullptr, $PRIVATE | $FINAL, $field(ClassTooLargeException, constantPoolCount)},
	{}
};

$MethodInfo _ClassTooLargeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ClassTooLargeException, init$, void, $String*, int32_t)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ClassTooLargeException, getClassName, $String*)},
	{"getConstantPoolCount", "()I", nullptr, $PUBLIC, $method(ClassTooLargeException, getConstantPoolCount, int32_t)},
	{}
};

$ClassInfo _ClassTooLargeException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.ClassTooLargeException",
	"java.lang.IndexOutOfBoundsException",
	nullptr,
	_ClassTooLargeException_FieldInfo_,
	_ClassTooLargeException_MethodInfo_
};

$Object* allocate$ClassTooLargeException($Class* clazz) {
	return $of($alloc(ClassTooLargeException));
}

void ClassTooLargeException::init$($String* className, int32_t constantPoolCount) {
	$IndexOutOfBoundsException::init$($$str({"Class too large: "_s, className}));
	$set(this, className, className);
	this->constantPoolCount = constantPoolCount;
}

$String* ClassTooLargeException::getClassName() {
	return this->className;
}

int32_t ClassTooLargeException::getConstantPoolCount() {
	return this->constantPoolCount;
}

ClassTooLargeException::ClassTooLargeException() {
}

ClassTooLargeException::ClassTooLargeException(const ClassTooLargeException& e) : $IndexOutOfBoundsException(e) {
}

void ClassTooLargeException::throw$() {
	throw *this;
}

$Class* ClassTooLargeException::load$($String* name, bool initialize) {
	$loadClass(ClassTooLargeException, name, initialize, &_ClassTooLargeException_ClassInfo_, allocate$ClassTooLargeException);
	return class$;
}

$Class* ClassTooLargeException::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk