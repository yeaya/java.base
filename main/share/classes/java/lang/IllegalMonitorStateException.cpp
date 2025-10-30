#include <java/lang/IllegalMonitorStateException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _IllegalMonitorStateException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalMonitorStateException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalMonitorStateException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalMonitorStateException::*)()>(&IllegalMonitorStateException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalMonitorStateException::*)($String*)>(&IllegalMonitorStateException::init$))},
	{}
};

$ClassInfo _IllegalMonitorStateException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.IllegalMonitorStateException",
	"java.lang.RuntimeException",
	nullptr,
	_IllegalMonitorStateException_FieldInfo_,
	_IllegalMonitorStateException_MethodInfo_
};

$Object* allocate$IllegalMonitorStateException($Class* clazz) {
	return $of($alloc(IllegalMonitorStateException));
}

void IllegalMonitorStateException::init$() {
	$RuntimeException::init$();
}

void IllegalMonitorStateException::init$($String* s) {
	$RuntimeException::init$(s);
}

IllegalMonitorStateException::IllegalMonitorStateException() {
}

IllegalMonitorStateException::IllegalMonitorStateException(const IllegalMonitorStateException& e) : $RuntimeException(e) {
}

void IllegalMonitorStateException::throw$() {
	throw *this;
}

$Class* IllegalMonitorStateException::load$($String* name, bool initialize) {
	$loadClass(IllegalMonitorStateException, name, initialize, &_IllegalMonitorStateException_ClassInfo_, allocate$IllegalMonitorStateException);
	return class$;
}

$Class* IllegalMonitorStateException::class$ = nullptr;

	} // lang
} // java