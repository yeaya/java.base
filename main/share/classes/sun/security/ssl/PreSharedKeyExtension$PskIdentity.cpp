#include <sun/security/ssl/PreSharedKeyExtension$PskIdentity.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $Record = ::sun::security::ssl::Record;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _PreSharedKeyExtension$PskIdentity_FieldInfo_[] = {
	{"identity", "[B", nullptr, $FINAL, $field(PreSharedKeyExtension$PskIdentity, identity)},
	{"obfuscatedAge", "I", nullptr, $FINAL, $field(PreSharedKeyExtension$PskIdentity, obfuscatedAge)},
	{}
};

$MethodInfo _PreSharedKeyExtension$PskIdentity_MethodInfo_[] = {
	{"<init>", "([BI)V", nullptr, 0, $method(static_cast<void(PreSharedKeyExtension$PskIdentity::*)($bytes*,int32_t)>(&PreSharedKeyExtension$PskIdentity::init$))},
	{"getEncodedLength", "()I", nullptr, 0, $method(static_cast<int32_t(PreSharedKeyExtension$PskIdentity::*)()>(&PreSharedKeyExtension$PskIdentity::getEncodedLength))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeEncoded", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(PreSharedKeyExtension$PskIdentity::*)($ByteBuffer*)>(&PreSharedKeyExtension$PskIdentity::writeEncoded)), "java.io.IOException"},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$PskIdentity_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$PskIdentity", "sun.security.ssl.PreSharedKeyExtension", "PskIdentity", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PreSharedKeyExtension$PskIdentity_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$PskIdentity",
	"java.lang.Object",
	nullptr,
	_PreSharedKeyExtension$PskIdentity_FieldInfo_,
	_PreSharedKeyExtension$PskIdentity_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$PskIdentity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$PskIdentity($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$PskIdentity));
}

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
	$useLocalCurrentObjectStackCache();
	return $str({"{"_s, $($Utilities::toHexString(this->identity)), ", "_s, $$str(this->obfuscatedAge), "}"_s});
}

PreSharedKeyExtension$PskIdentity::PreSharedKeyExtension$PskIdentity() {
}

$Class* PreSharedKeyExtension$PskIdentity::load$($String* name, bool initialize) {
	$loadClass(PreSharedKeyExtension$PskIdentity, name, initialize, &_PreSharedKeyExtension$PskIdentity_ClassInfo_, allocate$PreSharedKeyExtension$PskIdentity);
	return class$;
}

$Class* PreSharedKeyExtension$PskIdentity::class$ = nullptr;

		} // ssl
	} // security
} // sun