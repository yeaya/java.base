#include <jdk/internal/loader/Resource.h>

#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InterruptedIOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/CodeSigner.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Arrays.h>
#include <java/util/jar/Manifest.h>
#include <sun/nio/ByteBuffered.h>
#include <jcpp.h>

#undef MAX_VALUE

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;
using $Manifest = ::java::util::jar::Manifest;
using $ByteBuffered = ::sun::nio::ByteBuffered;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _Resource_FieldInfo_[] = {
	{"cis", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(Resource, cis)},
	{}
};

$MethodInfo _Resource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resource::*)()>(&Resource::init$))},
	{"cachedInputStream", "()Ljava/io/InputStream;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$InputStream*(Resource::*)()>(&Resource::cachedInputStream)), "java.io.IOException"},
	{"getByteBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBytes", "()[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC},
	{"getCodeSigners", "()[Ljava/security/CodeSigner;", nullptr, $PUBLIC},
	{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT},
	{"getContentLength", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getManifest", "()Ljava/util/jar/Manifest;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Resource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.loader.Resource",
	"java.lang.Object",
	nullptr,
	_Resource_FieldInfo_,
	_Resource_MethodInfo_
};

$Object* allocate$Resource($Class* clazz) {
	return $of($alloc(Resource));
}

void Resource::init$() {
}

$InputStream* Resource::cachedInputStream() {
	$synchronized(this) {
		if (this->cis == nullptr) {
			$set(this, cis, getInputStream());
		}
		return this->cis;
	}
}

$bytes* Resource::getBytes() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, b, nullptr);
	$var($InputStream, in, cachedInputStream());
	bool isInterrupted = $Thread::interrupted();
	int32_t len = 0;
	for (;;) {
		try {
			len = getContentLength();
			break;
		} catch ($InterruptedIOException&) {
			$var($InterruptedIOException, iioe, $catch());
			$Thread::interrupted();
			isInterrupted = true;
		}
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(b, $new($bytes, 0));
			if (len == -1) {
				len = $Integer::MAX_VALUE;
			}
			int32_t pos = 0;
			while (pos < len) {
				int32_t bytesToRead = 0;
				if (pos >= b->length) {
					bytesToRead = $Math::min(len - pos, b->length + 1024);
					if (bytesToRead < 0) {
						bytesToRead = len - pos;
					}
					$assign(b, $Arrays::copyOf(b, pos + bytesToRead));
				} else {
					bytesToRead = b->length - pos;
				}
				int32_t cc = 0;
				try {
					cc = $nc(in)->read(b, pos, bytesToRead);
				} catch ($InterruptedIOException&) {
					$var($InterruptedIOException, iioe, $catch());
					$Thread::interrupted();
					isInterrupted = true;
				}
				if (cc < 0) {
					if (len != $Integer::MAX_VALUE) {
						$throwNew($EOFException, "Detect premature EOF"_s);
					} else {
						if (b->length != pos) {
							$assign(b, $Arrays::copyOf(b, pos));
						}
						break;
					}
				}
				pos += cc;
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			try {
				$nc(in)->close();
			} catch ($InterruptedIOException&) {
				$var($InterruptedIOException, iioe, $catch());
				isInterrupted = true;
			} catch ($IOException&) {
				$catch();
			}
			if (isInterrupted) {
				$($Thread::currentThread())->interrupt();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return b;
}

$ByteBuffer* Resource::getByteBuffer() {
	$var($InputStream, in, cachedInputStream());
	if ($instanceOf($ByteBuffered, in)) {
		return $nc(($cast($ByteBuffered, in)))->getByteBuffer();
	}
	return nullptr;
}

$Manifest* Resource::getManifest() {
	return nullptr;
}

$CertificateArray* Resource::getCertificates() {
	return nullptr;
}

$CodeSignerArray* Resource::getCodeSigners() {
	return nullptr;
}

Resource::Resource() {
}

$Class* Resource::load$($String* name, bool initialize) {
	$loadClass(Resource, name, initialize, &_Resource_ClassInfo_, allocate$Resource);
	return class$;
}

$Class* Resource::class$ = nullptr;

		} // loader
	} // internal
} // jdk