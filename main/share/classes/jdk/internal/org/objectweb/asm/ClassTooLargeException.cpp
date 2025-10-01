#include <jdk/internal/org/objectweb/asm/ClassTooLargeException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ClassTooLargeException::*)($String*,int32_t)>(&ClassTooLargeException::init$))},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ClassTooLargeException::*)()>(&ClassTooLargeException::getClassName))},
	{"getConstantPoolCount", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ClassTooLargeException::*)()>(&ClassTooLargeException::getConstantPoolCount))},
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

ClassTooLargeException::ClassTooLargeException(const ClassTooLargeException& e) {
}

ClassTooLargeException ClassTooLargeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ClassTooLargeException::throwWrapper$() {
	$pendingException(this);
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