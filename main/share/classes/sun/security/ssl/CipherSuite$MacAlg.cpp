#include <sun/security/ssl/CipherSuite$MacAlg.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/CipherSuite.h>
#include <jcpp.h>

#undef M_MD5
#undef M_NULL
#undef M_SHA
#undef M_SHA256
#undef M_SHA384

using $CipherSuite$MacAlgArray = $Array<::sun::security::ssl::CipherSuite$MacAlg>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CipherSuite = ::sun::security::ssl::CipherSuite;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CipherSuite$MacAlg_FieldInfo_[] = {
	{"M_NULL", "Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$MacAlg, M_NULL)},
	{"M_MD5", "Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$MacAlg, M_MD5)},
	{"M_SHA", "Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$MacAlg, M_SHA)},
	{"M_SHA256", "Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$MacAlg, M_SHA256)},
	{"M_SHA384", "Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite$MacAlg, M_SHA384)},
	{"$VALUES", "[Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CipherSuite$MacAlg, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(CipherSuite$MacAlg, name$)},
	{"size", "I", nullptr, $FINAL, $field(CipherSuite$MacAlg, size)},
	{"hashBlockSize", "I", nullptr, $FINAL, $field(CipherSuite$MacAlg, hashBlockSize)},
	{"minimalPaddingSize", "I", nullptr, $FINAL, $field(CipherSuite$MacAlg, minimalPaddingSize)},
	{}
};

$MethodInfo _CipherSuite$MacAlg_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CipherSuite$MacAlgArray*(*)()>(&CipherSuite$MacAlg::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;III)V", "(Ljava/lang/String;III)V", $PRIVATE, $method(static_cast<void(CipherSuite$MacAlg::*)($String*,int32_t,$String*,int32_t,int32_t,int32_t)>(&CipherSuite$MacAlg::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CipherSuite$MacAlg*(*)($String*)>(&CipherSuite$MacAlg::valueOf))},
	{"values", "()[Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CipherSuite$MacAlgArray*(*)()>(&CipherSuite$MacAlg::values))},
	{}
};

$InnerClassInfo _CipherSuite$MacAlg_InnerClassesInfo_[] = {
	{"sun.security.ssl.CipherSuite$MacAlg", "sun.security.ssl.CipherSuite", "MacAlg", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CipherSuite$MacAlg_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.CipherSuite$MacAlg",
	"java.lang.Enum",
	nullptr,
	_CipherSuite$MacAlg_FieldInfo_,
	_CipherSuite$MacAlg_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/CipherSuite$MacAlg;>;",
	nullptr,
	_CipherSuite$MacAlg_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CipherSuite"
};

$Object* allocate$CipherSuite$MacAlg($Class* clazz) {
	return $of($alloc(CipherSuite$MacAlg));
}

CipherSuite$MacAlg* CipherSuite$MacAlg::M_NULL = nullptr;
CipherSuite$MacAlg* CipherSuite$MacAlg::M_MD5 = nullptr;
CipherSuite$MacAlg* CipherSuite$MacAlg::M_SHA = nullptr;
CipherSuite$MacAlg* CipherSuite$MacAlg::M_SHA256 = nullptr;
CipherSuite$MacAlg* CipherSuite$MacAlg::M_SHA384 = nullptr;
$CipherSuite$MacAlgArray* CipherSuite$MacAlg::$VALUES = nullptr;

$CipherSuite$MacAlgArray* CipherSuite$MacAlg::$values() {
	$init(CipherSuite$MacAlg);
	return $new($CipherSuite$MacAlgArray, {
		CipherSuite$MacAlg::M_NULL,
		CipherSuite$MacAlg::M_MD5,
		CipherSuite$MacAlg::M_SHA,
		CipherSuite$MacAlg::M_SHA256,
		CipherSuite$MacAlg::M_SHA384
	});
}

$CipherSuite$MacAlgArray* CipherSuite$MacAlg::values() {
	$init(CipherSuite$MacAlg);
	return $cast($CipherSuite$MacAlgArray, CipherSuite$MacAlg::$VALUES->clone());
}

CipherSuite$MacAlg* CipherSuite$MacAlg::valueOf($String* name) {
	$init(CipherSuite$MacAlg);
	return $cast(CipherSuite$MacAlg, $Enum::valueOf(CipherSuite$MacAlg::class$, name));
}

void CipherSuite$MacAlg::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, int32_t size, int32_t hashBlockSize, int32_t minimalPaddingSize) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	this->size = size;
	this->hashBlockSize = hashBlockSize;
	this->minimalPaddingSize = minimalPaddingSize;
}

$String* CipherSuite$MacAlg::toString() {
	return this->name$;
}

void clinit$CipherSuite$MacAlg($Class* class$) {
	$assignStatic(CipherSuite$MacAlg::M_NULL, $new(CipherSuite$MacAlg, "M_NULL"_s, 0, "NULL"_s, 0, 0, 0));
	$assignStatic(CipherSuite$MacAlg::M_MD5, $new(CipherSuite$MacAlg, "M_MD5"_s, 1, "MD5"_s, 16, 64, 9));
	$assignStatic(CipherSuite$MacAlg::M_SHA, $new(CipherSuite$MacAlg, "M_SHA"_s, 2, "SHA"_s, 20, 64, 9));
	$assignStatic(CipherSuite$MacAlg::M_SHA256, $new(CipherSuite$MacAlg, "M_SHA256"_s, 3, "SHA256"_s, 32, 64, 9));
	$assignStatic(CipherSuite$MacAlg::M_SHA384, $new(CipherSuite$MacAlg, "M_SHA384"_s, 4, "SHA384"_s, 48, 128, 17));
	$assignStatic(CipherSuite$MacAlg::$VALUES, CipherSuite$MacAlg::$values());
}

CipherSuite$MacAlg::CipherSuite$MacAlg() {
}

$Class* CipherSuite$MacAlg::load$($String* name, bool initialize) {
	$loadClass(CipherSuite$MacAlg, name, initialize, &_CipherSuite$MacAlg_ClassInfo_, clinit$CipherSuite$MacAlg, allocate$CipherSuite$MacAlg);
	return class$;
}

$Class* CipherSuite$MacAlg::class$ = nullptr;

		} // ssl
	} // security
} // sun