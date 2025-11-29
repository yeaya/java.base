#include <java/nio/file/DirectoryStream.h>

#include <java/io/Closeable.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _DirectoryStream_MethodInfo_[] = {
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$InnerClassInfo _DirectoryStream_InnerClassesInfo_[] = {
	{"java.nio.file.DirectoryStream$Filter", "java.nio.file.DirectoryStream", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DirectoryStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.DirectoryStream",
	nullptr,
	"java.io.Closeable,java.lang.Iterable",
	nullptr,
	_DirectoryStream_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/io/Closeable;Ljava/lang/Iterable<TT;>;",
	nullptr,
	_DirectoryStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.DirectoryStream$Filter"
};

$Object* allocate$DirectoryStream($Class* clazz) {
	return $of($alloc(DirectoryStream));
}

int32_t DirectoryStream::hashCode() {
	 return this->$Closeable::hashCode();
}

bool DirectoryStream::equals(Object$* obj) {
	 return this->$Closeable::equals(obj);
}

$Object* DirectoryStream::clone() {
	 return this->$Closeable::clone();
}

$String* DirectoryStream::toString() {
	 return this->$Closeable::toString();
}

void DirectoryStream::finalize() {
	this->$Closeable::finalize();
}

$Class* DirectoryStream::load$($String* name, bool initialize) {
	$loadClass(DirectoryStream, name, initialize, &_DirectoryStream_ClassInfo_, allocate$DirectoryStream);
	return class$;
}

$Class* DirectoryStream::class$ = nullptr;

		} // file
	} // nio
} // java