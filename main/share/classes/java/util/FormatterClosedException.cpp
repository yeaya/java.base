#include <java/util/FormatterClosedException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _FormatterClosedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FormatterClosedException, serialVersionUID)},
	{}
};

$MethodInfo _FormatterClosedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatterClosedException::*)()>(&FormatterClosedException::init$))},
	{}
};

$ClassInfo _FormatterClosedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.FormatterClosedException",
	"java.lang.IllegalStateException",
	nullptr,
	_FormatterClosedException_FieldInfo_,
	_FormatterClosedException_MethodInfo_
};

$Object* allocate$FormatterClosedException($Class* clazz) {
	return $of($alloc(FormatterClosedException));
}

void FormatterClosedException::init$() {
	$IllegalStateException::init$();
}

FormatterClosedException::FormatterClosedException() {
}

FormatterClosedException::FormatterClosedException(const FormatterClosedException& e) : $IllegalStateException(e) {
}

void FormatterClosedException::throw$() {
	throw *this;
}

$Class* FormatterClosedException::load$($String* name, bool initialize) {
	$loadClass(FormatterClosedException, name, initialize, &_FormatterClosedException_ClassInfo_, allocate$FormatterClosedException);
	return class$;
}

$Class* FormatterClosedException::class$ = nullptr;

	} // util
} // java