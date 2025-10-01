#include <java/nio/file/DirectoryIteratorException.h>

#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Objects = ::java::util::Objects;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _DirectoryIteratorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DirectoryIteratorException, serialVersionUID)},
	{}
};

$MethodInfo _DirectoryIteratorException_MethodInfo_[] = {
	{"<init>", "(Ljava/io/IOException;)V", nullptr, $PUBLIC, $method(static_cast<void(DirectoryIteratorException::*)($IOException*)>(&DirectoryIteratorException::init$))},
	{"getCause", "()Ljava/io/IOException;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DirectoryIteratorException::*)($ObjectInputStream*)>(&DirectoryIteratorException::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _DirectoryIteratorException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.nio.file.DirectoryIteratorException",
	"java.util.ConcurrentModificationException",
	nullptr,
	_DirectoryIteratorException_FieldInfo_,
	_DirectoryIteratorException_MethodInfo_
};

$Object* allocate$DirectoryIteratorException($Class* clazz) {
	return $of($alloc(DirectoryIteratorException));
}

void DirectoryIteratorException::init$($IOException* cause) {
	$ConcurrentModificationException::init$($cast($Throwable, $Objects::requireNonNull(cause)));
}

$Throwable* DirectoryIteratorException::getCause() {
	return $cast($IOException, $ConcurrentModificationException::getCause());
}

void DirectoryIteratorException::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$var($Throwable, cause, $ConcurrentModificationException::getCause());
	if (!($instanceOf($IOException, cause))) {
		$throwNew($InvalidObjectException, "Cause must be an IOException"_s);
	}
}

DirectoryIteratorException::DirectoryIteratorException() {
}

DirectoryIteratorException::DirectoryIteratorException(const DirectoryIteratorException& e) {
}

DirectoryIteratorException DirectoryIteratorException::wrapper$() {
	$pendingException(this);
	return *this;
}

void DirectoryIteratorException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* DirectoryIteratorException::load$($String* name, bool initialize) {
	$loadClass(DirectoryIteratorException, name, initialize, &_DirectoryIteratorException_ClassInfo_, allocate$DirectoryIteratorException);
	return class$;
}

$Class* DirectoryIteratorException::class$ = nullptr;

		} // file
	} // nio
} // java