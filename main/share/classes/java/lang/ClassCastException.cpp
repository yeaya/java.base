#include <java/lang/ClassCastException.h>

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
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClassCastException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassCastException, init$, void, $String*)},
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

ClassCastException::ClassCastException(const ClassCastException& e) : $RuntimeException(e) {
}

void ClassCastException::throw$() {
	throw *this;
}

$Class* ClassCastException::load$($String* name, bool initialize) {
	$loadClass(ClassCastException, name, initialize, &_ClassCastException_ClassInfo_, allocate$ClassCastException);
	return class$;
}

$Class* ClassCastException::class$ = nullptr;

	} // lang
} // java