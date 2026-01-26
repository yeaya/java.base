#include <java/util/zip/Checksum.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/zip/Checksum$1.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Checksum$1 = ::java::util::zip::Checksum$1;

namespace java {
	namespace util {
		namespace zip {

$MethodInfo _Checksum_MethodInfo_[] = {
	{"getValue", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Checksum, getValue, int64_t)},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Checksum, reset, void)},
	{"update", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Checksum, update, void, int32_t)},
	{"update", "([B)V", nullptr, $PUBLIC, $virtualMethod(Checksum, update, void, $bytes*)},
	{"update", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Checksum, update, void, $bytes*, int32_t, int32_t)},
	{"update", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(Checksum, update, void, $ByteBuffer*)},
	{}
};

$InnerClassInfo _Checksum_InnerClassesInfo_[] = {
	{"java.util.zip.Checksum$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Checksum_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.zip.Checksum",
	nullptr,
	nullptr,
	nullptr,
	_Checksum_MethodInfo_,
	nullptr,
	nullptr,
	_Checksum_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.zip.Checksum$1"
};

$Object* allocate$Checksum($Class* clazz) {
	return $of($alloc(Checksum));
}

void Checksum::update($bytes* b) {
	update(b, 0, $nc(b)->length);
}

void Checksum::update($ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(buffer)->position();
	int32_t limit = buffer->limit();
	$init($Checksum$1);
	if (!$Checksum$1::$assertionsDisabled && !(pos <= limit)) {
		$throwNew($AssertionError);
	}
	int32_t rem = limit - pos;
	if (rem <= 0) {
		return;
	}
	if (buffer->hasArray()) {
		$var($bytes, var$0, $cast($bytes, buffer->array()));
		update(var$0, pos + buffer->arrayOffset(), rem);
	} else {
		$var($bytes, b, $new($bytes, $Math::min(buffer->remaining(), 4096)));
		while (buffer->hasRemaining()) {
			int32_t length = $Math::min(buffer->remaining(), b->length);
			buffer->get(b, 0, length);
			update(b, 0, length);
		}
	}
	buffer->position(limit);
}

void clinit$Checksum($Class* class$) {
	{
		$init($Checksum$1);
		if ($Checksum$1::$assertionsDisabled) {
		}
	}
}

$Class* Checksum::load$($String* name, bool initialize) {
	$loadClass(Checksum, name, initialize, &_Checksum_ClassInfo_, clinit$Checksum, allocate$Checksum);
	return class$;
}

$Class* Checksum::class$ = nullptr;

		} // zip
	} // util
} // java