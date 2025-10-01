#include <jdk/internal/org/objectweb/asm/MethodTooLargeException.h>

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

$FieldInfo _MethodTooLargeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodTooLargeException, serialVersionUID)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodTooLargeException, className)},
	{"methodName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodTooLargeException, methodName)},
	{"descriptor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodTooLargeException, descriptor)},
	{"codeSize", "I", nullptr, $PRIVATE | $FINAL, $field(MethodTooLargeException, codeSize)},
	{}
};

$MethodInfo _MethodTooLargeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(MethodTooLargeException::*)($String*,$String*,$String*,int32_t)>(&MethodTooLargeException::init$))},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(MethodTooLargeException::*)()>(&MethodTooLargeException::getClassName))},
	{"getCodeSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(MethodTooLargeException::*)()>(&MethodTooLargeException::getCodeSize))},
	{"getDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(MethodTooLargeException::*)()>(&MethodTooLargeException::getDescriptor))},
	{"getMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(MethodTooLargeException::*)()>(&MethodTooLargeException::getMethodName))},
	{}
};

$ClassInfo _MethodTooLargeException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.MethodTooLargeException",
	"java.lang.IndexOutOfBoundsException",
	nullptr,
	_MethodTooLargeException_FieldInfo_,
	_MethodTooLargeException_MethodInfo_
};

$Object* allocate$MethodTooLargeException($Class* clazz) {
	return $of($alloc(MethodTooLargeException));
}

void MethodTooLargeException::init$($String* className, $String* methodName, $String* descriptor, int32_t codeSize) {
	$IndexOutOfBoundsException::init$($$str({"Method too large: "_s, className, "."_s, methodName, " "_s, descriptor}));
	$set(this, className, className);
	$set(this, methodName, methodName);
	$set(this, descriptor, descriptor);
	this->codeSize = codeSize;
}

$String* MethodTooLargeException::getClassName() {
	return this->className;
}

$String* MethodTooLargeException::getMethodName() {
	return this->methodName;
}

$String* MethodTooLargeException::getDescriptor() {
	return this->descriptor;
}

int32_t MethodTooLargeException::getCodeSize() {
	return this->codeSize;
}

MethodTooLargeException::MethodTooLargeException() {
}

MethodTooLargeException::MethodTooLargeException(const MethodTooLargeException& e) {
}

MethodTooLargeException MethodTooLargeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MethodTooLargeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MethodTooLargeException::load$($String* name, bool initialize) {
	$loadClass(MethodTooLargeException, name, initialize, &_MethodTooLargeException_ClassInfo_, allocate$MethodTooLargeException);
	return class$;
}

$Class* MethodTooLargeException::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk