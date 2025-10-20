#include <Exceptions.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/DirectoryIteratorException.h>
#include <java/nio/file/FileSystemException.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $DirectoryIteratorException = ::java::nio::file::DirectoryIteratorException;
using $FileSystemException = ::java::nio::file::FileSystemException;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Objects = ::java::util::Objects;

$MethodInfo _Exceptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Exceptions::*)()>(&Exceptions::init$))},
	{"deserialize", "([B)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($bytes*)>(&Exceptions::deserialize)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"hackCause", "(Ljava/lang/Throwable;Ljava/lang/Throwable;)V", nullptr, $STATIC, $method(static_cast<void(*)($Throwable*,$Throwable*)>(&Exceptions::hackCause)), "java.lang.NoSuchFieldException,java.lang.IllegalAccessException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Exceptions::main)), "java.lang.Exception"},
	{"serialize", "(Ljava/lang/Object;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)(Object$*)>(&Exceptions::serialize)), "java.io.IOException"},
	{"testDirectoryIteratorException", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Exceptions::testDirectoryIteratorException)), "java.lang.Exception"},
	{"testFileSystemException", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Exceptions::testFileSystemException)), "java.lang.Exception"},
	{"testFileSystemException", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,$String*)>(&Exceptions::testFileSystemException))},
	{}
};

$ClassInfo _Exceptions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Exceptions",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Exceptions_MethodInfo_
};

$Object* allocate$Exceptions($Class* clazz) {
	return $of($alloc(Exceptions));
}

void Exceptions::init$() {
}

void Exceptions::main($StringArray* args) {
	testFileSystemException();
	testDirectoryIteratorException();
}

void Exceptions::testFileSystemException() {
	$useLocalCurrentObjectStackCache();
	$var($String, thisFile, "source"_s);
	$var($String, otherFile, "target"_s);
	$var($String, reason, "Access denied"_s);
	testFileSystemException(thisFile, otherFile, reason);
	testFileSystemException(nullptr, otherFile, reason);
	testFileSystemException(thisFile, nullptr, reason);
	testFileSystemException(thisFile, otherFile, nullptr);
	$var($FileSystemException, exc, nullptr);
	$assign(exc, $new($FileSystemException, thisFile, otherFile, reason));
	$assign(exc, $cast($FileSystemException, deserialize($(serialize(exc)))));
	bool var$0 = !$nc($($nc(exc)->getFile()))->equals(thisFile);
	if (var$0 || !$nc($($nc(exc)->getOtherFile()))->equals(otherFile)) {
		$throwNew($RuntimeException, "Exception not reconstituted completely"_s);
	}
}

void Exceptions::testFileSystemException($String* thisFile, $String* otherFile, $String* reason) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystemException, exc, $new($FileSystemException, thisFile, otherFile, reason));
	if (!$Objects::equals(thisFile, $(exc->getFile()))) {
		$throwNew($RuntimeException, "getFile returned unexpected result"_s);
	}
	if (!$Objects::equals(otherFile, $(exc->getOtherFile()))) {
		$throwNew($RuntimeException, "getOtherFile returned unexpected result"_s);
	}
	if (!$Objects::equals(reason, $(exc->getReason()))) {
		$throwNew($RuntimeException, "getReason returned unexpected result"_s);
	}
}

void Exceptions::testDirectoryIteratorException() {
	$useLocalCurrentObjectStackCache();
	try {
		$new($DirectoryIteratorException, nullptr);
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	$var($DirectoryIteratorException, exc, nullptr);
	$assign(exc, $new($DirectoryIteratorException, $$new($IOException)));
	$assign(exc, $cast($DirectoryIteratorException, deserialize($(serialize(exc)))));
	$var($IOException, ioe, $cast($IOException, $nc(exc)->getCause()));
	if (ioe == nullptr) {
		$throwNew($RuntimeException, "Cause should not be null"_s);
	}
	hackCause(exc, nullptr);
	try {
		deserialize($(serialize(exc)));
		$throwNew($RuntimeException, "InvalidObjectException expected"_s);
	} catch ($InvalidObjectException&) {
		$catch();
	}
	hackCause(exc, $$new($RuntimeException));
	try {
		deserialize($(serialize(exc)));
		$throwNew($RuntimeException, "InvalidObjectException expected"_s);
	} catch ($InvalidObjectException&) {
		$catch();
	}
}

void Exceptions::hackCause($Throwable* t, $Throwable* cause) {
	$load(Exceptions);
	$beforeCallerSensitive();
	$load($Throwable);
	$var($Field, f, $Throwable::class$->getDeclaredField("cause"_s));
	$nc(f)->setAccessible(true);
	f->set(t, cause);
}

$bytes* Exceptions::serialize(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
	oos->writeObject(o);
	oos->close();
	return baos->toByteArray();
}

$Object* Exceptions::deserialize($bytes* bytes) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayInputStream, in, $new($ByteArrayInputStream, bytes));
	$var($ObjectInputStream, ois, $new($ObjectInputStream, in));
	$var($Object, result, ois->readObject());
	ois->close();
	return $of(result);
}

Exceptions::Exceptions() {
}

$Class* Exceptions::load$($String* name, bool initialize) {
	$loadClass(Exceptions, name, initialize, &_Exceptions_ClassInfo_, allocate$Exceptions);
	return class$;
}

$Class* Exceptions::class$ = nullptr;