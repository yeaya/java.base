#include <java/net/UnixDomainSocketAddress.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Module.h>
#include <java/net/SocketAddress.h>
#include <java/net/UnixDomainSocketAddress$Ser.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;
using $UnixDomainSocketAddress$Ser = ::java::net::UnixDomainSocketAddress$Ser;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Path = ::java::nio::file::Path;

namespace java {
	namespace net {

$FieldInfo _UnixDomainSocketAddress_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnixDomainSocketAddress, serialVersionUID)},
	{"path", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(UnixDomainSocketAddress, path)},
	{}
};

$MethodInfo _UnixDomainSocketAddress_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE, $method(UnixDomainSocketAddress, init$, void, $Path*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UnixDomainSocketAddress, equals, bool, Object$*)},
	{"getPath", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $method(UnixDomainSocketAddress, getPath, $Path*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(UnixDomainSocketAddress, hashCode, int32_t)},
	{"of", "(Ljava/lang/String;)Ljava/net/UnixDomainSocketAddress;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnixDomainSocketAddress, of, UnixDomainSocketAddress*, $String*)},
	{"of", "(Ljava/nio/file/Path;)Ljava/net/UnixDomainSocketAddress;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnixDomainSocketAddress, of, UnixDomainSocketAddress*, $Path*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(UnixDomainSocketAddress, readObject, void, $ObjectInputStream*), "java.io.InvalidObjectException"},
	{"readObjectNoData", "()V", nullptr, $PRIVATE, $method(UnixDomainSocketAddress, readObjectNoData, void), "java.io.InvalidObjectException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixDomainSocketAddress, toString, $String*)},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(UnixDomainSocketAddress, writeReplace, $Object*), "java.io.ObjectStreamException"},
	{}
};

$InnerClassInfo _UnixDomainSocketAddress_InnerClassesInfo_[] = {
	{"java.net.UnixDomainSocketAddress$Ser", "java.net.UnixDomainSocketAddress", "Ser", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _UnixDomainSocketAddress_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.UnixDomainSocketAddress",
	"java.net.SocketAddress",
	nullptr,
	_UnixDomainSocketAddress_FieldInfo_,
	_UnixDomainSocketAddress_MethodInfo_,
	nullptr,
	nullptr,
	_UnixDomainSocketAddress_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.UnixDomainSocketAddress$Ser"
};

$Object* allocate$UnixDomainSocketAddress($Class* clazz) {
	return $of($alloc(UnixDomainSocketAddress));
}

$Object* UnixDomainSocketAddress::writeReplace() {
	return $of($new($UnixDomainSocketAddress$Ser, $($nc(this->path)->toString())));
}

void UnixDomainSocketAddress::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

void UnixDomainSocketAddress::readObjectNoData() {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

void UnixDomainSocketAddress::init$($Path* path) {
	$SocketAddress::init$();
	$set(this, path, path);
}

UnixDomainSocketAddress* UnixDomainSocketAddress::of($String* pathname) {
	$init(UnixDomainSocketAddress);
	$useLocalCurrentObjectStackCache();
	return of($($Path::of(pathname, $$new($StringArray, 0))));
}

UnixDomainSocketAddress* UnixDomainSocketAddress::of($Path* path) {
	$init(UnixDomainSocketAddress);
	$var($FileSystem, fs, $nc(path)->getFileSystem());
	if (fs != $FileSystems::getDefault()) {
		$throwNew($IllegalArgumentException);
	}
	if ($nc($of(fs))->getClass()->getModule() != $Object::class$->getModule()) {
		$throwNew($IllegalArgumentException);
	}
	return $new(UnixDomainSocketAddress, path);
}

$Path* UnixDomainSocketAddress::getPath() {
	return this->path;
}

int32_t UnixDomainSocketAddress::hashCode() {
	return $nc(this->path)->hashCode();
}

bool UnixDomainSocketAddress::equals(Object$* o) {
	$var(UnixDomainSocketAddress, that, nullptr);
	bool var$0 = $instanceOf(UnixDomainSocketAddress, o);
	if (var$0) {
		$assign(that, $cast(UnixDomainSocketAddress, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	return $nc(this->path)->equals($nc(that)->path);
}

$String* UnixDomainSocketAddress::toString() {
	return $nc(this->path)->toString();
}

UnixDomainSocketAddress::UnixDomainSocketAddress() {
}

$Class* UnixDomainSocketAddress::load$($String* name, bool initialize) {
	$loadClass(UnixDomainSocketAddress, name, initialize, &_UnixDomainSocketAddress_ClassInfo_, allocate$UnixDomainSocketAddress);
	return class$;
}

$Class* UnixDomainSocketAddress::class$ = nullptr;

	} // net
} // java