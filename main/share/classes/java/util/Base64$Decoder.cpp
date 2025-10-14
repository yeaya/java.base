#include <java/util/Base64$Decoder.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Arrays.h>
#include <java/util/Base64$DecInputStream.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/Objects.h>
#include <sun/nio/cs/ISO_8859_1.h>
#include <jcpp.h>

#undef INSTANCE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Charset = ::java::nio::charset::Charset;
using $Arrays = ::java::util::Arrays;
using $Base64 = ::java::util::Base64;
using $Base64$DecInputStream = ::java::util::Base64$DecInputStream;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $Objects = ::java::util::Objects;
using $ISO_8859_1 = ::sun::nio::cs::ISO_8859_1;

namespace java {
	namespace util {

$CompoundAttribute _Base64$Decoder_MethodAnnotations_decodeBlock6[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _Base64$Decoder_FieldInfo_[] = {
	{"isURL", "Z", nullptr, $PRIVATE | $FINAL, $field(Base64$Decoder, isURL)},
	{"isMIME", "Z", nullptr, $PRIVATE | $FINAL, $field(Base64$Decoder, isMIME)},
	{"fromBase64", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64$Decoder, fromBase64)},
	{"fromBase64URL", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64$Decoder, fromBase64URL)},
	{"RFC4648", "Ljava/util/Base64$Decoder;", nullptr, $STATIC | $FINAL, $staticField(Base64$Decoder, RFC4648)},
	{"RFC4648_URLSAFE", "Ljava/util/Base64$Decoder;", nullptr, $STATIC | $FINAL, $staticField(Base64$Decoder, RFC4648_URLSAFE)},
	{"RFC2045", "Ljava/util/Base64$Decoder;", nullptr, $STATIC | $FINAL, $staticField(Base64$Decoder, RFC2045)},
	{}
};

$MethodInfo _Base64$Decoder_MethodInfo_[] = {
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(Base64$Decoder::*)(bool,bool)>(&Base64$Decoder::init$))},
	{"decode", "([B)[B", nullptr, $PUBLIC},
	{"decode", "(Ljava/lang/String;)[B", nullptr, $PUBLIC},
	{"decode", "([B[B)I", nullptr, $PUBLIC},
	{"decode", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"decode0", "([BII[B)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Base64$Decoder::*)($bytes*,int32_t,int32_t,$bytes*)>(&Base64$Decoder::decode0))},
	{"decodeBlock", "([BII[BIZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Base64$Decoder::*)($bytes*,int32_t,int32_t,$bytes*,int32_t,bool)>(&Base64$Decoder::decodeBlock)), nullptr, nullptr, _Base64$Decoder_MethodAnnotations_decodeBlock6},
	{"decodedOutLength", "([BII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Base64$Decoder::*)($bytes*,int32_t,int32_t)>(&Base64$Decoder::decodedOutLength))},
	{"wrap", "(Ljava/io/InputStream;)Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Base64$Decoder_InnerClassesInfo_[] = {
	{"java.util.Base64$Decoder", "java.util.Base64", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Base64$Decoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.Base64$Decoder",
	"java.lang.Object",
	nullptr,
	_Base64$Decoder_FieldInfo_,
	_Base64$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_Base64$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Base64"
};

$Object* allocate$Base64$Decoder($Class* clazz) {
	return $of($alloc(Base64$Decoder));
}


$ints* Base64$Decoder::fromBase64 = nullptr;

$ints* Base64$Decoder::fromBase64URL = nullptr;
Base64$Decoder* Base64$Decoder::RFC4648 = nullptr;
Base64$Decoder* Base64$Decoder::RFC4648_URLSAFE = nullptr;
Base64$Decoder* Base64$Decoder::RFC2045 = nullptr;

void Base64$Decoder::init$(bool isURL, bool isMIME) {
	this->isURL = isURL;
	this->isMIME = isMIME;
}

$bytes* Base64$Decoder::decode($bytes* src) {
	$var($bytes, dst, $new($bytes, decodedOutLength(src, 0, $nc(src)->length)));
	int32_t ret = decode0(src, 0, $nc(src)->length, dst);
	if (ret != dst->length) {
		$assign(dst, $Arrays::copyOf(dst, ret));
	}
	return dst;
}

$bytes* Base64$Decoder::decode($String* src) {
	$init($ISO_8859_1);
	return decode($($nc(src)->getBytes(static_cast<$Charset*>($ISO_8859_1::INSTANCE))));
}

int32_t Base64$Decoder::decode($bytes* src, $bytes* dst) {
	int32_t len = decodedOutLength(src, 0, $nc(src)->length);
	if ($nc(dst)->length < len || len == -1) {
		$throwNew($IllegalArgumentException, "Output byte array is too small for decoding all input bytes"_s);
	}
	return decode0(src, 0, $nc(src)->length, dst);
}

$ByteBuffer* Base64$Decoder::decode($ByteBuffer* buffer) {
	int32_t pos0 = $nc(buffer)->position();
	try {
		$var($bytes, src, nullptr);
		int32_t sp = 0;
		int32_t sl = 0;
		if (buffer->hasArray()) {
			$assign(src, $cast($bytes, buffer->array()));
			int32_t var$0 = buffer->arrayOffset();
			sp = var$0 + buffer->position();
			int32_t var$1 = buffer->arrayOffset();
			sl = var$1 + buffer->limit();
			buffer->position(buffer->limit());
		} else {
			$assign(src, $new($bytes, buffer->remaining()));
			buffer->get(src);
			sp = 0;
			sl = src->length;
		}
		$var($bytes, dst, $new($bytes, decodedOutLength(src, sp, sl)));
		return $ByteBuffer::wrap(dst, 0, decode0(src, sp, sl, dst));
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		buffer->position(pos0);
		$throw(iae);
	}
	$shouldNotReachHere();
}

$InputStream* Base64$Decoder::wrap($InputStream* is) {
	$Objects::requireNonNull(is);
	return $new($Base64$DecInputStream, is, this->isURL ? Base64$Decoder::fromBase64URL : Base64$Decoder::fromBase64, this->isMIME);
}

int32_t Base64$Decoder::decodedOutLength($bytes* src, int32_t sp, int32_t sl) {
	$var($ints, base64, this->isURL ? Base64$Decoder::fromBase64URL : Base64$Decoder::fromBase64);
	int32_t paddings = 0;
	int32_t len = sl - sp;
	if (len == 0) {
		return 0;
	}
	if (len < 2) {
		if (this->isMIME && $nc(base64)->get(0) == -1) {
			return 0;
		}
		$throwNew($IllegalArgumentException, "Input byte[] should at least have 2 bytes for base64 bytes"_s);
	}
	if (this->isMIME) {
		int32_t n = 0;
		while (sp < sl) {
			int32_t b = (int32_t)($nc(src)->get(sp++) & (uint32_t)255);
			if (b == u'=') {
				len -= (sl - sp + 1);
				break;
			}
			if ((b = $nc(base64)->get(b)) == -1) {
				++n;
			}
		}
		len -= n;
	} else if ($nc(src)->get(sl - 1) == u'=') {
		++paddings;
		if (src->get(sl - 2) == u'=') {
			++paddings;
		}
	}
	if (paddings == 0 && ((int32_t)(len & (uint32_t)3)) != 0) {
		paddings = 4 - ((int32_t)(len & (uint32_t)3));
	}
	return 3 * (int32_t)((len + (int64_t)3) / 4) - paddings;
}

int32_t Base64$Decoder::decodeBlock($bytes* src, int32_t sp, int32_t sl, $bytes* dst, int32_t dp, bool isURL) {
	$var($ints, base64, isURL ? Base64$Decoder::fromBase64URL : Base64$Decoder::fromBase64);
	int32_t sl0 = sp + ((int32_t)((sl - sp) & (uint32_t)~3));
	int32_t new_dp = dp;
	while (sp < sl0) {
		int32_t b1 = $nc(base64)->get((int32_t)($nc(src)->get(sp++) & (uint32_t)255));
		int32_t b2 = base64->get((int32_t)(src->get(sp++) & (uint32_t)255));
		int32_t b3 = base64->get((int32_t)(src->get(sp++) & (uint32_t)255));
		int32_t b4 = base64->get((int32_t)(src->get(sp++) & (uint32_t)255));
		if ((((b1 | b2) | b3) | b4) < 0) {
			return new_dp - dp;
		}
		int32_t bits0 = (((b1 << 18) | (b2 << 12)) | (b3 << 6)) | b4;
		$nc(dst)->set(new_dp++, (int8_t)(bits0 >> 16));
		dst->set(new_dp++, (int8_t)(bits0 >> 8));
		dst->set(new_dp++, (int8_t)(bits0));
	}
	return new_dp - dp;
}

int32_t Base64$Decoder::decode0($bytes* src, int32_t sp, int32_t sl, $bytes* dst) {
	$var($ints, base64, this->isURL ? Base64$Decoder::fromBase64URL : Base64$Decoder::fromBase64);
	int32_t dp = 0;
	int32_t bits = 0;
	int32_t shiftto = 18;
	while (sp < sl) {
		if (shiftto == 18 && sp < sl - 4) {
			int32_t dl = decodeBlock(src, sp, sl, dst, dp, this->isURL);
			int32_t chars_decoded = (dl / 3) * 4;
			sp += chars_decoded;
			dp += dl;
		}
		if (sp >= sl) {
			break;
		}
		int32_t b = (int32_t)($nc(src)->get(sp++) & (uint32_t)255);
		if ((b = $nc(base64)->get(b)) < 0) {
			if (b == -2) {
				bool var$0 = shiftto == 6;
				if (var$0) {
					bool var$1 = sp == sl;
					var$0 = (var$1 || src->get(sp++) != u'=');
				}
				if (var$0 || shiftto == 18) {
					$throwNew($IllegalArgumentException, "Input byte array has wrong 4-byte ending unit"_s);
				}
				break;
			}
			if (this->isMIME) {
				continue;
			} else {
				$throwNew($IllegalArgumentException, $$str({"Illegal base64 character "_s, $($Integer::toString(src->get(sp - 1), 16))}));
			}
		}
		bits |= ($sl(b, shiftto));
		shiftto -= 6;
		if (shiftto < 0) {
			$nc(dst)->set(dp++, (int8_t)(bits >> 16));
			dst->set(dp++, (int8_t)(bits >> 8));
			dst->set(dp++, (int8_t)(bits));
			shiftto = 18;
			bits = 0;
		}
	}
	if (shiftto == 6) {
		$nc(dst)->set(dp++, (int8_t)(bits >> 16));
	} else if (shiftto == 0) {
		$nc(dst)->set(dp++, (int8_t)(bits >> 16));
		dst->set(dp++, (int8_t)(bits >> 8));
	} else if (shiftto == 12) {
		$throwNew($IllegalArgumentException, "Last unit does not have enough valid bits"_s);
	}
	while (sp < sl) {
		if (this->isMIME && $nc(base64)->get((int32_t)($nc(src)->get(sp++) & (uint32_t)255)) < 0) {
			continue;
		}
		$throwNew($IllegalArgumentException, $$str({"Input byte array has incorrect ending byte at "_s, $$str(sp)}));
	}
	return dp;
}

void clinit$Base64$Decoder($Class* class$) {
	$assignStatic(Base64$Decoder::fromBase64, $new($ints, 256));
	{
		$Arrays::fill(Base64$Decoder::fromBase64, -1);
		$init($Base64$Encoder);
		for (int32_t i = 0; i < $nc($Base64$Encoder::toBase64)->length; ++i) {
			$nc(Base64$Decoder::fromBase64)->set($nc($Base64$Encoder::toBase64)->get(i), i);
		}
		$nc(Base64$Decoder::fromBase64)->set(u'=', -2);
	}
	$assignStatic(Base64$Decoder::fromBase64URL, $new($ints, 256));
	{
		$Arrays::fill(Base64$Decoder::fromBase64URL, -1);
		$init($Base64$Encoder);
		for (int32_t i = 0; i < $nc($Base64$Encoder::toBase64URL)->length; ++i) {
			$nc(Base64$Decoder::fromBase64URL)->set($nc($Base64$Encoder::toBase64URL)->get(i), i);
		}
		$nc(Base64$Decoder::fromBase64URL)->set(u'=', -2);
	}
	$assignStatic(Base64$Decoder::RFC4648, $new(Base64$Decoder, false, false));
	$assignStatic(Base64$Decoder::RFC4648_URLSAFE, $new(Base64$Decoder, true, false));
	$assignStatic(Base64$Decoder::RFC2045, $new(Base64$Decoder, false, true));
}

Base64$Decoder::Base64$Decoder() {
}

$Class* Base64$Decoder::load$($String* name, bool initialize) {
	$loadClass(Base64$Decoder, name, initialize, &_Base64$Decoder_ClassInfo_, clinit$Base64$Decoder, allocate$Base64$Decoder);
	return class$;
}

$Class* Base64$Decoder::class$ = nullptr;

	} // util
} // java