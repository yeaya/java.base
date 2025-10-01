#include <java/io/IOException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _IOException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(IOException, serialVersionUID)},
	{}
};

$MethodInfo _IOException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IOException::*)()>(&IOException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IOException::*)($String*)>(&IOException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IOException::*)($String*,$Throwable*)>(&IOException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IOException::*)($Throwable*)>(&IOException::init$))},
	{}
};

$ClassInfo _IOException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.IOException",
	"java.lang.Exception",
	nullptr,
	_IOException_FieldInfo_,
	_IOException_MethodInfo_
};

$Object* allocate$IOException($Class* clazz) {
	return $of($alloc(IOException));
}

void IOException::init$() {
	$Exception::init$();
}

void IOException::init$($String* message) {
	$Exception::init$(message);
}

void IOException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void IOException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

IOException::IOException() {
}

IOException::IOException(const IOException& e) {
}

IOException IOException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IOException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IOException::load$($String* name, bool initialize) {
	$loadClass(IOException, name, initialize, &_IOException_ClassInfo_, allocate$IOException);
	return class$;
}

$Class* IOException::class$ = nullptr;

	} // io
} // java