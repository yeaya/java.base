#include <java/lang/module/ModuleReader.h>

#include <java/io/InputStream.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {
		namespace module {

$MethodInfo _ModuleReader_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"open", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/io/InputStream;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/nio/ByteBuffer;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"release", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModuleReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.module.ModuleReader",
	nullptr,
	"java.io.Closeable",
	nullptr,
	_ModuleReader_MethodInfo_
};

$Object* allocate$ModuleReader($Class* clazz) {
	return $of($alloc(ModuleReader));
}

$Optional* ModuleReader::open($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($Optional, ouri, find(name));
	if ($nc(ouri)->isPresent()) {
		return $Optional::of($($nc($($nc(($cast($URI, $(ouri->get()))))->toURL()))->openStream()));
	} else {
		return $Optional::empty();
	}
}

$Optional* ModuleReader::read($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($Optional, oin, open(name));
	if ($nc(oin)->isPresent()) {
		{
			$var($InputStream, in, $cast($InputStream, oin->get()));
			{
				$var($Throwable, var$0, nullptr);
				$var($Optional, var$2, nullptr);
				bool return$1 = false;
				try {
					try {
						$assign(var$2, $Optional::of($($ByteBuffer::wrap($($nc(in)->readAllBytes())))));
						return$1 = true;
						goto $finally;
					} catch ($Throwable& t$) {
						if (in != nullptr) {
							try {
								in->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} $finally: {
					if (in != nullptr) {
						in->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	} else {
		return $Optional::empty();
	}
}

void ModuleReader::release($ByteBuffer* bb) {
	$Objects::requireNonNull(bb);
}

$Class* ModuleReader::load$($String* name, bool initialize) {
	$loadClass(ModuleReader, name, initialize, &_ModuleReader_ClassInfo_, allocate$ModuleReader);
	return class$;
}

$Class* ModuleReader::class$ = nullptr;

		} // module
	} // lang
} // java