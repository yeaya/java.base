#include <java/io/SyncFailedException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _SyncFailedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SyncFailedException, serialVersionUID)},
	{}
};

$MethodInfo _SyncFailedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SyncFailedException::*)($String*)>(&SyncFailedException::init$))},
	{}
};

$ClassInfo _SyncFailedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.SyncFailedException",
	"java.io.IOException",
	nullptr,
	_SyncFailedException_FieldInfo_,
	_SyncFailedException_MethodInfo_
};

$Object* allocate$SyncFailedException($Class* clazz) {
	return $of($alloc(SyncFailedException));
}

void SyncFailedException::init$($String* desc) {
	$IOException::init$(desc);
}

SyncFailedException::SyncFailedException() {
}

SyncFailedException::SyncFailedException(const SyncFailedException& e) : $IOException(e) {
}

void SyncFailedException::throw$() {
	throw *this;
}

$Class* SyncFailedException::load$($String* name, bool initialize) {
	$loadClass(SyncFailedException, name, initialize, &_SyncFailedException_ClassInfo_, allocate$SyncFailedException);
	return class$;
}

$Class* SyncFailedException::class$ = nullptr;

	} // io
} // java