#include <sun/security/ssl/PreSharedKeyExtension$PskIdentity.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Record = ::sun::security::ssl::Record;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

void PreSharedKeyExtension$PskIdentity::init$($bytes* identity, int32_t obfuscatedAge) {
	$set(this, identity, identity);
	this->obfuscatedAge = obfuscatedAge;
}

int32_t PreSharedKeyExtension$PskIdentity::getEncodedLength() {
	return 2 + $nc(this->identity)->length + 4;
}

void PreSharedKeyExtension$PskIdentity::writeEncoded($ByteBuffer* m) {
	$Record::putBytes16(m, this->identity);
	$Record::putInt32(m, this->obfuscatedAge);
}

$String* PreSharedKeyExtension$PskIdentity::toString() {
	$useLocalObjectStack();
	return $str({"{"_s, $($Utilities::toHexString(this->identity)), ", "_s, $$str(this->obfuscatedAge), "}"_s});
}

PreSharedKeyExtension$PskIdentity::PreSharedKeyExtension$PskIdentity() {
}

$Class* PreSharedKeyExtension$PskIdentity::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"identity", "[B", nullptr, $FINAL, $field(PreSharedKeyExtension$PskIdentity, identity)},
		{"obfuscatedAge", "I", nullptr, $FINAL, $field(PreSharedKeyExtension$PskIdentity, obfuscatedAge)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BI)V", nullptr, 0, $method(PreSharedKeyExtension$PskIdentity, init$, void, $bytes*, int32_t)},
		{"getEncodedLength", "()I", nullptr, 0, $method(PreSharedKeyExtension$PskIdentity, getEncodedLength, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PreSharedKeyExtension$PskIdentity, toString, $String*)},
		{"writeEncoded", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(PreSharedKeyExtension$PskIdentity, writeEncoded, void, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$PskIdentity", "sun.security.ssl.PreSharedKeyExtension", "PskIdentity", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$PskIdentity",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.PreSharedKeyExtension"
	};
	$loadClass(PreSharedKeyExtension$PskIdentity, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$PskIdentity);
	});
	return class$;
}

$Class* PreSharedKeyExtension$PskIdentity::class$ = nullptr;

		} // ssl
	} // security
} // sun