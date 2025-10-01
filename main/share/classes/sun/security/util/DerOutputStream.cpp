#include <sun/security/util/DerOutputStream.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/ByteArrayLexOrder.h>
#include <sun/security/util/ByteArrayTagOrder.h>
#include <sun/security/util/DerEncoder.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

#undef US_ASCII
#undef UTF_16BE
#undef UTF_8
#undef ISO_8859_1
#undef US

using $DerEncoderArray = $Array<::sun::security::util::DerEncoder>;
using $DerOutputStreamArray = $Array<::sun::security::util::DerOutputStream>;
using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $byteArray2 = $Array<int8_t, 2>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $BitArray = ::sun::security::util::BitArray;
using $ByteArrayLexOrder = ::sun::security::util::ByteArrayLexOrder;
using $ByteArrayTagOrder = ::sun::security::util::ByteArrayTagOrder;
using $DerEncoder = ::sun::security::util::DerEncoder;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DerOutputStream_FieldInfo_[] = {
	{"lexOrder", "Lsun/security/util/ByteArrayLexOrder;", nullptr, $PRIVATE | $STATIC, $staticField(DerOutputStream, lexOrder)},
	{"tagOrder", "Lsun/security/util/ByteArrayTagOrder;", nullptr, $PRIVATE | $STATIC, $staticField(DerOutputStream, tagOrder)},
	{}
};

$MethodInfo _DerOutputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DerOutputStream::*)(int32_t)>(&DerOutputStream::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DerOutputStream::*)()>(&DerOutputStream::init$))},
	{"buf", "()[B", nullptr, 0},
	{"derEncode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putBMPString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putBitString", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putBoolean", "(Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putDerValue", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putEnumerated", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putGeneralString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putGeneralizedTime", "(Ljava/util/Date;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putIA5String", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putInteger", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putInteger", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putInteger", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putInteger", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putIntegerContents", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(DerOutputStream::*)(int32_t)>(&DerOutputStream::putIntegerContents)), "java.io.IOException"},
	{"putLength", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putNull", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putOID", "(Lsun/security/util/ObjectIdentifier;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putOctetString", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putOrderedSet", "(B[Lsun/security/util/DerEncoder;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putOrderedSet", "(B[Lsun/security/util/DerEncoder;Ljava/util/Comparator;)V", "(B[Lsun/security/util/DerEncoder;Ljava/util/Comparator<[B>;)V", $PRIVATE, $method(static_cast<void(DerOutputStream::*)(int8_t,$DerEncoderArray*,$Comparator*)>(&DerOutputStream::putOrderedSet)), "java.io.IOException"},
	{"putOrderedSetOf", "(B[Lsun/security/util/DerEncoder;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putPrintableString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putSequence", "([Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putSet", "([Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putT61String", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putTag", "(BZB)V", nullptr, $PUBLIC},
	{"putTime", "(Ljava/util/Date;B)V", nullptr, $PRIVATE, $method(static_cast<void(DerOutputStream::*)($Date*,int8_t)>(&DerOutputStream::putTime)), "java.io.IOException"},
	{"putTruncatedUnalignedBitString", "(Lsun/security/util/BitArray;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putUTCTime", "(Ljava/util/Date;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putUTF8String", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putUnalignedBitString", "(Lsun/security/util/BitArray;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"write", "(B[B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(BLsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeImplicit", "(BLsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeString", "(Ljava/lang/String;BLjava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(DerOutputStream::*)($String*,int8_t,$Charset*)>(&DerOutputStream::writeString)), "java.io.IOException"},
	{}
};

$ClassInfo _DerOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.DerOutputStream",
	"java.io.ByteArrayOutputStream",
	"sun.security.util.DerEncoder",
	_DerOutputStream_FieldInfo_,
	_DerOutputStream_MethodInfo_
};

$Object* allocate$DerOutputStream($Class* clazz) {
	return $of($alloc(DerOutputStream));
}

$String* DerOutputStream::toString() {
	 return this->$ByteArrayOutputStream::toString();
}

int32_t DerOutputStream::hashCode() {
	 return this->$ByteArrayOutputStream::hashCode();
}

bool DerOutputStream::equals(Object$* obj) {
	 return this->$ByteArrayOutputStream::equals(obj);
}

$Object* DerOutputStream::clone() {
	 return this->$ByteArrayOutputStream::clone();
}

void DerOutputStream::finalize() {
	this->$ByteArrayOutputStream::finalize();
}


$ByteArrayLexOrder* DerOutputStream::lexOrder = nullptr;

$ByteArrayTagOrder* DerOutputStream::tagOrder = nullptr;

void DerOutputStream::init$(int32_t size) {
	$ByteArrayOutputStream::init$(size);
}

void DerOutputStream::init$() {
	$ByteArrayOutputStream::init$();
}

void DerOutputStream::write(int8_t tag, $bytes* buf) {
	write((int32_t)tag);
	putLength($nc(buf)->length);
	write(buf, 0, $nc(buf)->length);
}

void DerOutputStream::write(int8_t tag, DerOutputStream* out) {
	write((int32_t)tag);
	putLength($nc(out)->count);
	write($nc(out)->$ByteArrayOutputStream::buf, 0, out->count);
}

void DerOutputStream::writeImplicit(int8_t tag, DerOutputStream* value) {
	write((int32_t)tag);
	write($nc(value)->$ByteArrayOutputStream::buf, 1, value->count - 1);
}

void DerOutputStream::putDerValue($DerValue* val) {
	$nc(val)->encode(this);
}

void DerOutputStream::putBoolean(bool val) {
	write((int32_t)$DerValue::tag_Boolean);
	putLength(1);
	if (val) {
		write(255);
	} else {
		write(0);
	}
}

void DerOutputStream::putEnumerated(int32_t i) {
	write((int32_t)$DerValue::tag_Enumerated);
	putIntegerContents(i);
}

void DerOutputStream::putInteger($BigInteger* i) {
	write((int32_t)$DerValue::tag_Integer);
	$var($bytes, buf, $nc(i)->toByteArray());
	putLength($nc(buf)->length);
	write(buf, 0, $nc(buf)->length);
}

void DerOutputStream::putInteger($bytes* buf) {
	write((int32_t)$DerValue::tag_Integer);
	putLength($nc(buf)->length);
	write(buf, 0, $nc(buf)->length);
}

void DerOutputStream::putInteger($Integer* i) {
	putInteger($nc(i)->intValue());
}

void DerOutputStream::putInteger(int32_t i) {
	write((int32_t)$DerValue::tag_Integer);
	putIntegerContents(i);
}

void DerOutputStream::putIntegerContents(int32_t i) {
	$var($bytes, bytes, $new($bytes, 4));
	int32_t start = 0;
	bytes->set(3, (int8_t)((int32_t)(i & (uint32_t)255)));
	bytes->set(2, (int8_t)((int32_t)((uint32_t)((int32_t)(i & (uint32_t)0x0000FF00)) >> 8)));
	bytes->set(1, (int8_t)((int32_t)((uint32_t)((int32_t)(i & (uint32_t)0x00FF0000)) >> 16)));
	bytes->set(0, (int8_t)((int32_t)((uint32_t)((int32_t)(i & (uint32_t)(int32_t)0xFF000000)) >> 24)));
	if (bytes->get(0) == (int8_t)255) {
		for (int32_t j = 0; j < 3; ++j) {
			if ((bytes->get(j) == (int8_t)255) && (((int32_t)(bytes->get(j + 1) & (uint32_t)128)) == 128)) {
				++start;
			} else {
				break;
			}
		}
	} else if ($nc(bytes)->get(0) == 0) {
		for (int32_t j = 0; j < 3; ++j) {
			if ((bytes->get(j) == 0) && (((int32_t)(bytes->get(j + 1) & (uint32_t)128)) == 0)) {
				++start;
			} else {
				break;
			}
		}
	}
	putLength(4 - start);
	for (int32_t k = start; k < 4; ++k) {
		write((int32_t)bytes->get(k));
	}
}

void DerOutputStream::putBitString($bytes* bits) {
	write((int32_t)$DerValue::tag_BitString);
	putLength($nc(bits)->length + 1);
	write(0);
	write(bits);
}

void DerOutputStream::putUnalignedBitString($BitArray* ba) {
	$var($bytes, bits, $nc(ba)->toByteArray());
	write((int32_t)$DerValue::tag_BitString);
	putLength($nc(bits)->length + 1);
	write($nc(bits)->length * 8 - ba->length());
	write(bits);
}

void DerOutputStream::putTruncatedUnalignedBitString($BitArray* ba) {
	putUnalignedBitString($($nc(ba)->truncate()));
}

void DerOutputStream::putOctetString($bytes* octets) {
	write($DerValue::tag_OctetString, octets);
}

void DerOutputStream::putNull() {
	write((int32_t)$DerValue::tag_Null);
	putLength(0);
}

void DerOutputStream::putOID($ObjectIdentifier* oid) {
	$nc(oid)->encode(this);
}

void DerOutputStream::putSequence($DerValueArray* seq) {
	$var(DerOutputStream, bytes, $new(DerOutputStream));
	int32_t i = 0;
	for (i = 0; i < $nc(seq)->length; ++i) {
		$nc(seq->get(i))->encode(bytes);
	}
	write($DerValue::tag_Sequence, bytes);
}

void DerOutputStream::putSet($DerValueArray* set) {
	$var(DerOutputStream, bytes, $new(DerOutputStream));
	int32_t i = 0;
	for (i = 0; i < $nc(set)->length; ++i) {
		$nc(set->get(i))->encode(bytes);
	}
	write($DerValue::tag_Set, bytes);
}

void DerOutputStream::putOrderedSetOf(int8_t tag, $DerEncoderArray* set) {
	putOrderedSet(tag, set, DerOutputStream::lexOrder);
}

void DerOutputStream::putOrderedSet(int8_t tag, $DerEncoderArray* set) {
	putOrderedSet(tag, set, DerOutputStream::tagOrder);
}

void DerOutputStream::putOrderedSet(int8_t tag, $DerEncoderArray* set, $Comparator* order) {
	$var($DerOutputStreamArray, streams, $new($DerOutputStreamArray, $nc(set)->length));
	for (int32_t i = 0; i < set->length; ++i) {
		streams->set(i, $$new(DerOutputStream));
		$nc(set->get(i))->derEncode(streams->get(i));
	}
	$var($byteArray2, bufs, $new($byteArray2, streams->length));
	for (int32_t i = 0; i < streams->length; ++i) {
		bufs->set(i, $($nc(streams->get(i))->toByteArray()));
	}
	$Arrays::sort(static_cast<$ObjectArray*>(static_cast<$Object*>(static_cast<$byteArray2*>(bufs))), order);
	$var(DerOutputStream, bytes, $new(DerOutputStream));
	for (int32_t i = 0; i < streams->length; ++i) {
		bytes->write(bufs->get(i));
	}
	write(tag, bytes);
}

void DerOutputStream::putUTF8String($String* s) {
	$init($StandardCharsets);
	writeString(s, $DerValue::tag_UTF8String, $StandardCharsets::UTF_8);
}

void DerOutputStream::putPrintableString($String* s) {
	$init($StandardCharsets);
	writeString(s, $DerValue::tag_PrintableString, $StandardCharsets::US_ASCII);
}

void DerOutputStream::putT61String($String* s) {
	$init($StandardCharsets);
	writeString(s, $DerValue::tag_T61String, $StandardCharsets::ISO_8859_1);
}

void DerOutputStream::putIA5String($String* s) {
	$init($StandardCharsets);
	writeString(s, $DerValue::tag_IA5String, $StandardCharsets::US_ASCII);
}

void DerOutputStream::putBMPString($String* s) {
	$init($StandardCharsets);
	writeString(s, $DerValue::tag_BMPString, $StandardCharsets::UTF_16BE);
}

void DerOutputStream::putGeneralString($String* s) {
	$init($StandardCharsets);
	writeString(s, $DerValue::tag_GeneralString, $StandardCharsets::US_ASCII);
}

void DerOutputStream::writeString($String* s, int8_t stringTag, $Charset* charset) {
	$var($bytes, data, $nc(s)->getBytes(charset));
	write((int32_t)stringTag);
	putLength(data->length);
	write(data);
}

void DerOutputStream::putUTCTime($Date* d) {
	putTime(d, $DerValue::tag_UtcTime);
}

void DerOutputStream::putGeneralizedTime($Date* d) {
	putTime(d, $DerValue::tag_GeneralizedTime);
}

void DerOutputStream::putTime($Date* d, int8_t tag) {
	$var($TimeZone, tz, $TimeZone::getTimeZone("GMT"_s));
	$var($String, pattern, nullptr);
	if (tag == $DerValue::tag_UtcTime) {
		$assign(pattern, "yyMMddHHmmss\'Z\'"_s);
	} else {
		tag = $DerValue::tag_GeneralizedTime;
		$assign(pattern, "yyyyMMddHHmmss\'Z\'"_s);
	}
	$init($Locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern, $Locale::US));
	sdf->setTimeZone(tz);
	$init($StandardCharsets);
	$var($bytes, time, $nc(($(sdf->format(d))))->getBytes($StandardCharsets::ISO_8859_1));
	write((int32_t)tag);
	putLength(time->length);
	write(time);
}

void DerOutputStream::putLength(int32_t len) {
	if (len < 128) {
		write((int32_t)(int8_t)len);
	} else if (len < (1 << 8)) {
		write((int32_t)(int8_t)129);
		write((int32_t)(int8_t)len);
	} else if (len < (1 << 16)) {
		write((int32_t)(int8_t)130);
		write((int32_t)(int8_t)(len >> 8));
		write((int32_t)(int8_t)len);
	} else if (len < (1 << 24)) {
		write((int32_t)(int8_t)131);
		write((int32_t)(int8_t)(len >> 16));
		write((int32_t)(int8_t)(len >> 8));
		write((int32_t)(int8_t)len);
	} else {
		write((int32_t)(int8_t)132);
		write((int32_t)(int8_t)(len >> 24));
		write((int32_t)(int8_t)(len >> 16));
		write((int32_t)(int8_t)(len >> 8));
		write((int32_t)(int8_t)len);
	}
}

void DerOutputStream::putTag(int8_t tagClass, bool form, int8_t val) {
	int8_t tag = (int8_t)(tagClass | val);
	if (form) {
		tag |= (int8_t)32;
	}
	write((int32_t)tag);
}

void DerOutputStream::derEncode($OutputStream* out) {
	$nc(out)->write($(toByteArray()));
}

$bytes* DerOutputStream::buf() {
	return this->$ByteArrayOutputStream::buf;
}

void clinit$DerOutputStream($Class* class$) {
	$assignStatic(DerOutputStream::lexOrder, $new($ByteArrayLexOrder));
	$assignStatic(DerOutputStream::tagOrder, $new($ByteArrayTagOrder));
}

DerOutputStream::DerOutputStream() {
}

$Class* DerOutputStream::load$($String* name, bool initialize) {
	$loadClass(DerOutputStream, name, initialize, &_DerOutputStream_ClassInfo_, clinit$DerOutputStream, allocate$DerOutputStream);
	return class$;
}

$Class* DerOutputStream::class$ = nullptr;

		} // util
	} // security
} // sun