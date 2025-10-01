#include <java/nio/file/ProviderNotFoundException.h>

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
	namespace nio {
		namespace file {

$FieldInfo _ProviderNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ProviderNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _ProviderNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProviderNotFoundException::*)()>(&ProviderNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProviderNotFoundException::*)($String*)>(&ProviderNotFoundException::init$))},
	{}
};

$ClassInfo _ProviderNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.ProviderNotFoundException",
	"java.lang.RuntimeException",
	nullptr,
	_ProviderNotFoundException_FieldInfo_,
	_ProviderNotFoundException_MethodInfo_
};

$Object* allocate$ProviderNotFoundException($Class* clazz) {
	return $of($alloc(ProviderNotFoundException));
}

void ProviderNotFoundException::init$() {
	$RuntimeException::init$();
}

void ProviderNotFoundException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

ProviderNotFoundException::ProviderNotFoundException() {
}

ProviderNotFoundException::ProviderNotFoundException(const ProviderNotFoundException& e) {
}

ProviderNotFoundException ProviderNotFoundException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ProviderNotFoundException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ProviderNotFoundException::load$($String* name, bool initialize) {
	$loadClass(ProviderNotFoundException, name, initialize, &_ProviderNotFoundException_ClassInfo_, allocate$ProviderNotFoundException);
	return class$;
}

$Class* ProviderNotFoundException::class$ = nullptr;

		} // file
	} // nio
} // java