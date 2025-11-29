#include <java/nio/channels/Channels.h>

#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/Error.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/Channels$1.h>
#include <java/nio/channels/Channels$2.h>
#include <java/nio/channels/Channels$3.h>
#include <java/nio/channels/Channels$ReadableByteChannelImpl.h>
#include <java/nio/channels/Channels$WritableByteChannelImpl.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/IllegalBlockingModeException.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/util/Objects.h>
#include <sun/nio/ch/ChannelInputStream.h>
#include <sun/nio/cs/StreamDecoder.h>
#include <sun/nio/cs/StreamEncoder.h>
#include <jcpp.h>

using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousByteChannel = ::java::nio::channels::AsynchronousByteChannel;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $Channels$1 = ::java::nio::channels::Channels$1;
using $Channels$2 = ::java::nio::channels::Channels$2;
using $Channels$3 = ::java::nio::channels::Channels$3;
using $Channels$ReadableByteChannelImpl = ::java::nio::channels::Channels$ReadableByteChannelImpl;
using $Channels$WritableByteChannelImpl = ::java::nio::channels::Channels$WritableByteChannelImpl;
using $IllegalBlockingModeException = ::java::nio::channels::IllegalBlockingModeException;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $Objects = ::java::util::Objects;
using $ChannelInputStream = ::sun::nio::ch::ChannelInputStream;
using $StreamDecoder = ::sun::nio::cs::StreamDecoder;
using $StreamEncoder = ::sun::nio::cs::StreamEncoder;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _Channels_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Channels::*)()>(&Channels::init$))},
	{"newChannel", "(Ljava/io/InputStream;)Ljava/nio/channels/ReadableByteChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ReadableByteChannel*(*)($InputStream*)>(&Channels::newChannel))},
	{"newChannel", "(Ljava/io/OutputStream;)Ljava/nio/channels/WritableByteChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableByteChannel*(*)($OutputStream*)>(&Channels::newChannel))},
	{"newInputStream", "(Ljava/nio/channels/ReadableByteChannel;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InputStream*(*)($ReadableByteChannel*)>(&Channels::newInputStream))},
	{"newInputStream", "(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InputStream*(*)($AsynchronousByteChannel*)>(&Channels::newInputStream))},
	{"newOutputStream", "(Ljava/nio/channels/WritableByteChannel;)Ljava/io/OutputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OutputStream*(*)($WritableByteChannel*)>(&Channels::newOutputStream))},
	{"newOutputStream", "(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/OutputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OutputStream*(*)($AsynchronousByteChannel*)>(&Channels::newOutputStream))},
	{"newReader", "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/CharsetDecoder;I)Ljava/io/Reader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Reader*(*)($ReadableByteChannel*,$CharsetDecoder*,int32_t)>(&Channels::newReader))},
	{"newReader", "(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)Ljava/io/Reader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Reader*(*)($ReadableByteChannel*,$String*)>(&Channels::newReader))},
	{"newReader", "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Reader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Reader*(*)($ReadableByteChannel*,$Charset*)>(&Channels::newReader))},
	{"newWriter", "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/CharsetEncoder;I)Ljava/io/Writer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Writer*(*)($WritableByteChannel*,$CharsetEncoder*,int32_t)>(&Channels::newWriter))},
	{"newWriter", "(Ljava/nio/channels/WritableByteChannel;Ljava/lang/String;)Ljava/io/Writer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Writer*(*)($WritableByteChannel*,$String*)>(&Channels::newWriter))},
	{"newWriter", "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Writer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Writer*(*)($WritableByteChannel*,$Charset*)>(&Channels::newWriter))},
	{"writeFully", "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($WritableByteChannel*,$ByteBuffer*)>(&Channels::writeFully)), "java.io.IOException"},
	{"writeFullyImpl", "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($WritableByteChannel*,$ByteBuffer*)>(&Channels::writeFullyImpl)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Channels_InnerClassesInfo_[] = {
	{"java.nio.channels.Channels$WritableByteChannelImpl", "java.nio.channels.Channels", "WritableByteChannelImpl", $PRIVATE | $STATIC},
	{"java.nio.channels.Channels$ReadableByteChannelImpl", "java.nio.channels.Channels", "ReadableByteChannelImpl", $PRIVATE | $STATIC},
	{"java.nio.channels.Channels$3", nullptr, nullptr, 0},
	{"java.nio.channels.Channels$2", nullptr, nullptr, 0},
	{"java.nio.channels.Channels$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Channels_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.nio.channels.Channels",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Channels_MethodInfo_,
	nullptr,
	nullptr,
	_Channels_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.channels.Channels$WritableByteChannelImpl,java.nio.channels.Channels$ReadableByteChannelImpl,java.nio.channels.Channels$3,java.nio.channels.Channels$2,java.nio.channels.Channels$1"
};

$Object* allocate$Channels($Class* clazz) {
	return $of($alloc(Channels));
}

void Channels::init$() {
	$throwNew($Error, "no instances"_s);
}

void Channels::writeFullyImpl($WritableByteChannel* ch, $ByteBuffer* bb) {
	while ($nc(bb)->remaining() > 0) {
		int32_t n = $nc(ch)->write(bb);
		if (n <= 0) {
			$throwNew($RuntimeException, "no bytes written"_s);
		}
	}
}

void Channels::writeFully($WritableByteChannel* ch, $ByteBuffer* bb) {
	{
		$var($SelectableChannel, sc, nullptr);
		bool var$0 = $instanceOf($SelectableChannel, ch);
		if (var$0) {
			$assign(sc, $cast($SelectableChannel, ch));
			var$0 = true;
		}
		if (var$0) {
			$synchronized($nc(sc)->blockingLock()) {
				if (!sc->isBlocking()) {
					$throwNew($IllegalBlockingModeException);
				}
				writeFullyImpl(ch, bb);
			}
		} else {
			writeFullyImpl(ch, bb);
		}
	}
}

$InputStream* Channels::newInputStream($ReadableByteChannel* ch) {
	$Objects::requireNonNull($of(ch), "ch"_s);
	return $new($ChannelInputStream, ch);
}

$OutputStream* Channels::newOutputStream($WritableByteChannel* ch) {
	$Objects::requireNonNull($of(ch), "ch"_s);
	return $new($Channels$1, ch);
}

$InputStream* Channels::newInputStream($AsynchronousByteChannel* ch) {
	$Objects::requireNonNull($of(ch), "ch"_s);
	return $new($Channels$2, ch);
}

$OutputStream* Channels::newOutputStream($AsynchronousByteChannel* ch) {
	$Objects::requireNonNull($of(ch), "ch"_s);
	return $new($Channels$3, ch);
}

$ReadableByteChannel* Channels::newChannel($InputStream* in) {
	$Objects::requireNonNull($of(in), "in"_s);
	$load($FileInputStream);
	if ($nc($of(in))->getClass() == $FileInputStream::class$) {
		return static_cast<$ReadableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>($nc(($cast($FileInputStream, in)))->getChannel())));
	}
	return $new($Channels$ReadableByteChannelImpl, in);
}

$WritableByteChannel* Channels::newChannel($OutputStream* out) {
	$Objects::requireNonNull($of(out), "out"_s);
	$load($FileOutputStream);
	if ($nc($of(out))->getClass() == $FileOutputStream::class$) {
		return static_cast<$WritableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>($nc(($cast($FileOutputStream, out)))->getChannel())));
	}
	return $new($Channels$WritableByteChannelImpl, out);
}

$Reader* Channels::newReader($ReadableByteChannel* ch, $CharsetDecoder* dec, int32_t minBufferCap) {
	$Objects::requireNonNull($of(ch), "ch"_s);
	return $StreamDecoder::forDecoder(ch, $($nc(dec)->reset()), minBufferCap);
}

$Reader* Channels::newReader($ReadableByteChannel* ch, $String* csName) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(csName), "csName"_s);
	return newReader(ch, $($nc($($Charset::forName(csName)))->newDecoder()), -1);
}

$Reader* Channels::newReader($ReadableByteChannel* ch, $Charset* charset) {
	$Objects::requireNonNull($of(charset), "charset"_s);
	return newReader(ch, $($nc(charset)->newDecoder()), -1);
}

$Writer* Channels::newWriter($WritableByteChannel* ch, $CharsetEncoder* enc, int32_t minBufferCap) {
	$Objects::requireNonNull($of(ch), "ch"_s);
	return $StreamEncoder::forEncoder(ch, $($nc(enc)->reset()), minBufferCap);
}

$Writer* Channels::newWriter($WritableByteChannel* ch, $String* csName) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(csName), "csName"_s);
	return newWriter(ch, $($nc($($Charset::forName(csName)))->newEncoder()), -1);
}

$Writer* Channels::newWriter($WritableByteChannel* ch, $Charset* charset) {
	$Objects::requireNonNull($of(charset), "charset"_s);
	return newWriter(ch, $($nc(charset)->newEncoder()), -1);
}

Channels::Channels() {
}

$Class* Channels::load$($String* name, bool initialize) {
	$loadClass(Channels, name, initialize, &_Channels_ClassInfo_, allocate$Channels);
	return class$;
}

$Class* Channels::class$ = nullptr;

		} // channels
	} // nio
} // java