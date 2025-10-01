#include <java/lang/ClassCastException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _ClassCastException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassCastException, serialVersionUID)},
	{}
};

$MethodInfo _ClassCastException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassCastException::*)()>(&ClassCastException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassCastException::*)($String*)>(&ClassCastException::init$))},
	{}
};

$ClassInfo _ClassCastException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ClassCastException",
	"java.lang.RuntimeException",
	nullptr,
	_ClassCastException_FieldInfo_,
	_ClassCastException_MethodInfo_
};

$Object* allocate$ClassCastException($Class* clazz) {
	return $of($alloc(ClassCastException));
}

void ClassCastException::init$() {
	$RuntimeException::init$();
}

void ClassCastException::init$($String* s) {
	$RuntimeException::init$(s);
}

ClassCastException::ClassCastException() {
}

ClassCastException::ClassCastException(const ClassCastException& e) {
}

ClassCastException ClassCastException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ClassCastException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ClassCastException::load$($String* name, bool initialize) {
	$loadClass(ClassCastException, name, initialize, &_ClassCastException_ClassInfo_, allocate$ClassCastException);
	return class$;
}

$Class* ClassCastException::class$ = nullptr;

	} // lang
} // java