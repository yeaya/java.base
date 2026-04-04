#include <java/util/UUID.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/util/Arrays.h>
#include <java/util/UUID$Holder.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef NIBBLES
#undef UUID

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SecureRandom = ::java::security::SecureRandom;
using $Arrays = ::java::util::Arrays;
using $UUID$Holder = ::java::util::UUID$Holder;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {

$Object* UUID::clone() {
	 return this->$Serializable::clone();
}

void UUID::finalize() {
	this->$Serializable::finalize();
}

bool UUID::$assertionsDisabled = false;
$JavaLangAccess* UUID::jla = nullptr;
$bytes* UUID::NIBBLES = nullptr;

void UUID::init$($bytes* data) {
	int64_t msb = 0;
	int64_t lsb = 0;
	if (!UUID::$assertionsDisabled && !($nc(data)->length == 16)) {
		$throwNew($AssertionError, $of("data must be 16 bytes in length"_s));
	}
	for (int32_t i = 0; i < 8; ++i) {
		msb = (msb << 8) | ($nc(data)->get(i) & 0xff);
	}
	for (int32_t i = 8; i < 16; ++i) {
		lsb = (lsb << 8) | ($nc(data)->get(i) & 0xff);
	}
	this->mostSigBits = msb;
	this->leastSigBits = lsb;
}

void UUID::init$(int64_t mostSigBits, int64_t leastSigBits) {
	this->mostSigBits = mostSigBits;
	this->leastSigBits = leastSigBits;
}

UUID* UUID::randomUUID() {
	$init(UUID);
	$useLocalObjectStack();
	$init($UUID$Holder);
	$var($SecureRandom, ng, $UUID$Holder::numberGenerator);
	$var($bytes, randomBytes, $new($bytes, 16));
	$nc(ng)->nextBytes(randomBytes);
	(*randomBytes)[6] &= (uint8_t)15;
	(*randomBytes)[6] |= 64;
	(*randomBytes)[8] &= (uint8_t)63;
	(*randomBytes)[8] |= 128;
	return $new(UUID, randomBytes);
}

UUID* UUID::nameUUIDFromBytes($bytes* name) {
	$init(UUID);
	$useLocalObjectStack();
	$var($MessageDigest, md, nullptr);
	try {
		$assign(md, $MessageDigest::getInstance("MD5"_s));
	} catch ($NoSuchAlgorithmException& nsae) {
		$throwNew($InternalError, "MD5 not supported"_s, nsae);
	}
	$var($bytes, md5Bytes, $nc(md)->digest(name));
	(*$nc(md5Bytes))[6] &= (uint8_t)15;
	(*md5Bytes)[6] |= 48;
	(*md5Bytes)[8] &= (uint8_t)63;
	(*md5Bytes)[8] |= 128;
	return $new(UUID, md5Bytes);
}

int64_t UUID::parse4Nibbles($String* name, int32_t pos) {
	$init(UUID);
	$var($bytes, ns, UUID::NIBBLES);
	char16_t ch1 = $nc(name)->charAt(pos);
	char16_t ch2 = name->charAt(pos + 1);
	char16_t ch3 = name->charAt(pos + 2);
	char16_t ch4 = name->charAt(pos + 3);
	return (((ch1 | ch2) | ch3) | ch4) > 0xff ? -1 : ((($nc(ns)->get(ch1) << 12) | ($nc(ns)->get(ch2) << 8)) | ($nc(ns)->get(ch3) << 4)) | $nc(ns)->get(ch4);
}

UUID* UUID::fromString($String* name) {
	$init(UUID);
	if ($nc(name)->length() == 36) {
		char16_t ch1 = name->charAt(8);
		char16_t ch2 = name->charAt(13);
		char16_t ch3 = name->charAt(18);
		char16_t ch4 = name->charAt(23);
		if (ch1 == u'-' && ch2 == u'-' && ch3 == u'-' && ch4 == u'-') {
			int64_t msb1 = parse4Nibbles(name, 0);
			int64_t msb2 = parse4Nibbles(name, 4);
			int64_t msb3 = parse4Nibbles(name, 9);
			int64_t msb4 = parse4Nibbles(name, 14);
			int64_t lsb1 = parse4Nibbles(name, 19);
			int64_t lsb2 = parse4Nibbles(name, 24);
			int64_t lsb3 = parse4Nibbles(name, 28);
			int64_t lsb4 = parse4Nibbles(name, 32);
			if ((((((((msb1 | msb2) | msb3) | msb4) | lsb1) | lsb2) | lsb3) | lsb4) >= 0) {
				return $new(UUID, (((msb1 << 48) | (msb2 << 32)) | (msb3 << 16)) | msb4, (((lsb1 << 48) | (lsb2 << 32)) | (lsb3 << 16)) | lsb4);
			}
		}
	}
	return fromString1(name);
}

UUID* UUID::fromString1($String* name) {
	$init(UUID);
	int32_t len = $nc(name)->length();
	if (len > 36) {
		$throwNew($IllegalArgumentException, "UUID string too large"_s);
	}
	int32_t dash1 = name->indexOf(u'-', 0);
	int32_t dash2 = name->indexOf(u'-', dash1 + 1);
	int32_t dash3 = name->indexOf(u'-', dash2 + 1);
	int32_t dash4 = name->indexOf(u'-', dash3 + 1);
	int32_t dash5 = name->indexOf(u'-', dash4 + 1);
	if (dash4 < 0 || dash5 >= 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid UUID string: "_s, name}));
	}
	int64_t mostSigBits = $Long::parseLong(name, 0, dash1, 16) & (int64_t)0xffffffff;
	mostSigBits <<= 16;
	mostSigBits |= $Long::parseLong(name, dash1 + 1, dash2, 16) & (int64_t)0xffff;
	mostSigBits <<= 16;
	mostSigBits |= $Long::parseLong(name, dash2 + 1, dash3, 16) & (int64_t)0xffff;
	int64_t leastSigBits = $Long::parseLong(name, dash3 + 1, dash4, 16) & (int64_t)0xffff;
	leastSigBits <<= 48;
	leastSigBits |= $Long::parseLong(name, dash4 + 1, len, 16) & (int64_t)0x0000ffffffffffff;
	return $new(UUID, mostSigBits, leastSigBits);
}

int64_t UUID::getLeastSignificantBits() {
	return this->leastSigBits;
}

int64_t UUID::getMostSignificantBits() {
	return this->mostSigBits;
}

int32_t UUID::version() {
	return (int32_t)((this->mostSigBits >> 12) & 0x0f);
}

int32_t UUID::variant() {
	return (int32_t)(($usr(this->leastSigBits, 64 - ((int64_t)((uint64_t)this->leastSigBits >> 62)))) & (this->leastSigBits >> 63));
}

int64_t UUID::timestamp() {
	if (version() != 1) {
		$throwNew($UnsupportedOperationException, "Not a time-based UUID"_s);
	}
	return (((this->mostSigBits & (int64_t)0x0fff) << 48) | (((this->mostSigBits >> 16) & (int64_t)0xffff) << 32)) | (int64_t)((uint64_t)this->mostSigBits >> 32);
}

int32_t UUID::clockSequence() {
	if (version() != 1) {
		$throwNew($UnsupportedOperationException, "Not a time-based UUID"_s);
	}
	return (int32_t)((int64_t)((uint64_t)(this->leastSigBits & (int64_t)0x3fff000000000000) >> 48));
}

int64_t UUID::node() {
	if (version() != 1) {
		$throwNew($UnsupportedOperationException, "Not a time-based UUID"_s);
	}
	return this->leastSigBits & (int64_t)0x0000ffffffffffff;
}

$String* UUID::toString() {
	return $nc(UUID::jla)->fastUUID(this->leastSigBits, this->mostSigBits);
}

int32_t UUID::hashCode() {
	int64_t hilo = this->mostSigBits ^ this->leastSigBits;
	return ((int32_t)(hilo >> 32)) ^ (int32_t)hilo;
}

bool UUID::equals(Object$* obj) {
	if ((nullptr == obj) || ($of(obj)->getClass() != UUID::class$)) {
		return false;
	}
	$var(UUID, id, $cast(UUID, obj));
	return (this->mostSigBits == $nc(id)->mostSigBits && this->leastSigBits == id->leastSigBits);
}

int32_t UUID::compareTo(UUID* val) {
	return (this->mostSigBits < $nc(val)->mostSigBits ? -1 : (this->mostSigBits > val->mostSigBits ? 1 : (this->leastSigBits < val->leastSigBits ? -1 : (this->leastSigBits > val->leastSigBits ? 1 : 0))));
}

int32_t UUID::compareTo(Object$* val) {
	return this->compareTo($cast(UUID, val));
}

void UUID::clinit$($Class* clazz) {
	UUID::$assertionsDisabled = !UUID::class$->desiredAssertionStatus();
	$assignStatic(UUID::jla, $SharedSecrets::getJavaLangAccess());
	{
		$var($bytes, ns, $new($bytes, 256));
		$Arrays::fill(ns, (int8_t)-1);
		ns->set(u'0', 0);
		ns->set(u'1', 1);
		ns->set(u'2', 2);
		ns->set(u'3', 3);
		ns->set(u'4', 4);
		ns->set(u'5', 5);
		ns->set(u'6', 6);
		ns->set(u'7', 7);
		ns->set(u'8', 8);
		ns->set(u'9', 9);
		ns->set(u'A', 10);
		ns->set(u'B', 11);
		ns->set(u'C', 12);
		ns->set(u'D', 13);
		ns->set(u'E', 14);
		ns->set(u'F', 15);
		ns->set(u'a', 10);
		ns->set(u'b', 11);
		ns->set(u'c', 12);
		ns->set(u'd', 13);
		ns->set(u'e', 14);
		ns->set(u'f', 15);
		$assignStatic(UUID::NIBBLES, ns);
	}
}

UUID::UUID() {
}

$Class* UUID::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UUID, $assertionsDisabled)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UUID, serialVersionUID)},
		{"mostSigBits", "J", nullptr, $PRIVATE | $FINAL, $field(UUID, mostSigBits)},
		{"leastSigBits", "J", nullptr, $PRIVATE | $FINAL, $field(UUID, leastSigBits)},
		{"jla", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UUID, jla)},
		{"NIBBLES", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UUID, NIBBLES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "([B)V", nullptr, $PRIVATE, $method(UUID, init$, void, $bytes*)},
		{"<init>", "(JJ)V", nullptr, $PUBLIC, $method(UUID, init$, void, int64_t, int64_t)},
		{"clockSequence", "()I", nullptr, $PUBLIC, $method(UUID, clockSequence, int32_t)},
		{"compareTo", "(Ljava/util/UUID;)I", nullptr, $PUBLIC, $method(UUID, compareTo, int32_t, UUID*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(UUID, compareTo, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(UUID, equals, bool, Object$*)},
		{"fromString", "(Ljava/lang/String;)Ljava/util/UUID;", nullptr, $PUBLIC | $STATIC, $staticMethod(UUID, fromString, UUID*, $String*)},
		{"fromString1", "(Ljava/lang/String;)Ljava/util/UUID;", nullptr, $PRIVATE | $STATIC, $staticMethod(UUID, fromString1, UUID*, $String*)},
		{"getLeastSignificantBits", "()J", nullptr, $PUBLIC, $method(UUID, getLeastSignificantBits, int64_t)},
		{"getMostSignificantBits", "()J", nullptr, $PUBLIC, $method(UUID, getMostSignificantBits, int64_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(UUID, hashCode, int32_t)},
		{"nameUUIDFromBytes", "([B)Ljava/util/UUID;", nullptr, $PUBLIC | $STATIC, $staticMethod(UUID, nameUUIDFromBytes, UUID*, $bytes*)},
		{"node", "()J", nullptr, $PUBLIC, $method(UUID, node, int64_t)},
		{"parse4Nibbles", "(Ljava/lang/String;I)J", nullptr, $PRIVATE | $STATIC, $staticMethod(UUID, parse4Nibbles, int64_t, $String*, int32_t)},
		{"randomUUID", "()Ljava/util/UUID;", nullptr, $PUBLIC | $STATIC, $staticMethod(UUID, randomUUID, UUID*)},
		{"timestamp", "()J", nullptr, $PUBLIC, $method(UUID, timestamp, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UUID, toString, $String*)},
		{"variant", "()I", nullptr, $PUBLIC, $method(UUID, variant, int32_t)},
		{"version", "()I", nullptr, $PUBLIC, $method(UUID, version, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.UUID$Holder", "java.util.UUID", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.util.UUID",
		"java.lang.Object",
		"java.io.Serializable,java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/io/Serializable;Ljava/lang/Comparable<Ljava/util/UUID;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.UUID$Holder"
	};
	$loadClass(UUID, name, initialize, &classInfo$$, UUID::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UUID));
	});
	return class$;
}

$Class* UUID::class$ = nullptr;

	} // util
} // java