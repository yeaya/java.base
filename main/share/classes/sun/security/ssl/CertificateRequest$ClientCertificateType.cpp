#include <sun/security/ssl/CertificateRequest$ClientCertificateType.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/function/Consumer.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/JsseJce.h>
#include <jcpp.h>

#undef CERT_TYPES
#undef DSS_EPHEMERAL_DH
#undef DSS_FIXED_DH
#undef DSS_SIGN
#undef ECDSA_FIXED_ECDH
#undef ECDSA_SIGN
#undef FORTEZZA_DMS
#undef RSA_EPHEMERAL_DH
#undef RSA_FIXED_DH
#undef RSA_FIXED_ECDH
#undef RSA_SIGN

using $CertificateRequest$ClientCertificateTypeArray = $Array<::sun::security::ssl::CertificateRequest$ClientCertificateType>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Consumer = ::java::util::function::Consumer;
using $CertificateRequest = ::sun::security::ssl::CertificateRequest;
using $JsseJce = ::sun::security::ssl::JsseJce;

namespace sun {
	namespace security {
		namespace ssl {

class CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0 : public $Consumer {
	$class(CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ArrayList* keyTypes) {
		$set(this, keyTypes, keyTypes);
	}
	virtual void accept(Object$* key) override {
		CertificateRequest$ClientCertificateType::lambda$getKeyTypes$0(keyTypes, $cast($String, key));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0>());
	}
	$ArrayList* keyTypes = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0::fieldInfos[2] = {
	{"keyTypes", "Ljava/util/ArrayList;", nullptr, $PUBLIC, $field(CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0, keyTypes)},
	{}
};
$MethodInfo CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/ArrayList;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0::*)($ArrayList*)>(&CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.ssl.CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0::load$($String* name, bool initialize) {
	$loadClass(CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0::class$ = nullptr;

$FieldInfo _CertificateRequest$ClientCertificateType_FieldInfo_[] = {
	{"RSA_SIGN", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, RSA_SIGN)},
	{"DSS_SIGN", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, DSS_SIGN)},
	{"RSA_FIXED_DH", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, RSA_FIXED_DH)},
	{"DSS_FIXED_DH", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, DSS_FIXED_DH)},
	{"RSA_EPHEMERAL_DH", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, RSA_EPHEMERAL_DH)},
	{"DSS_EPHEMERAL_DH", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, DSS_EPHEMERAL_DH)},
	{"FORTEZZA_DMS", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, FORTEZZA_DMS)},
	{"ECDSA_SIGN", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, ECDSA_SIGN)},
	{"RSA_FIXED_ECDH", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, RSA_FIXED_ECDH)},
	{"ECDSA_FIXED_ECDH", "Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertificateRequest$ClientCertificateType, ECDSA_FIXED_ECDH)},
	{"$VALUES", "[Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CertificateRequest$ClientCertificateType, $VALUES)},
	{"CERT_TYPES", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CertificateRequest$ClientCertificateType, CERT_TYPES)},
	{"id", "B", nullptr, $FINAL, $field(CertificateRequest$ClientCertificateType, id)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(CertificateRequest$ClientCertificateType, name$)},
	{"keyAlgorithm", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $FINAL, $field(CertificateRequest$ClientCertificateType, keyAlgorithm)},
	{"isAvailable", "Z", nullptr, $FINAL, $field(CertificateRequest$ClientCertificateType, isAvailable)},
	{}
};

$MethodInfo _CertificateRequest$ClientCertificateType_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CertificateRequest$ClientCertificateTypeArray*(*)()>(&CertificateRequest$ClientCertificateType::$values))},
	{"<init>", "(Ljava/lang/String;IBLjava/lang/String;)V", "(BLjava/lang/String;)V", $PRIVATE, $method(static_cast<void(CertificateRequest$ClientCertificateType::*)($String*,int32_t,int8_t,$String*)>(&CertificateRequest$ClientCertificateType::init$))},
	{"<init>", "(Ljava/lang/String;IBLjava/lang/String;Ljava/util/List;Z)V", "(BLjava/lang/String;Ljava/util/List<Ljava/lang/String;>;Z)V", $PRIVATE, $method(static_cast<void(CertificateRequest$ClientCertificateType::*)($String*,int32_t,int8_t,$String*,$List*,bool)>(&CertificateRequest$ClientCertificateType::init$))},
	{"getKeyTypes", "([B)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($bytes*)>(&CertificateRequest$ClientCertificateType::getKeyTypes))},
	{"lambda$getKeyTypes$0", "(Ljava/util/ArrayList;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ArrayList*,$String*)>(&CertificateRequest$ClientCertificateType::lambda$getKeyTypes$0))},
	{"nameOf", "(B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int8_t)>(&CertificateRequest$ClientCertificateType::nameOf))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertificateRequest$ClientCertificateType*(*)($String*)>(&CertificateRequest$ClientCertificateType::valueOf))},
	{"valueOf", "(B)Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<CertificateRequest$ClientCertificateType*(*)(int8_t)>(&CertificateRequest$ClientCertificateType::valueOf))},
	{"values", "()[Lsun/security/ssl/CertificateRequest$ClientCertificateType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CertificateRequest$ClientCertificateTypeArray*(*)()>(&CertificateRequest$ClientCertificateType::values))},
	{}
};

$InnerClassInfo _CertificateRequest$ClientCertificateType_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateRequest$ClientCertificateType", "sun.security.ssl.CertificateRequest", "ClientCertificateType", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CertificateRequest$ClientCertificateType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.CertificateRequest$ClientCertificateType",
	"java.lang.Enum",
	nullptr,
	_CertificateRequest$ClientCertificateType_FieldInfo_,
	_CertificateRequest$ClientCertificateType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/CertificateRequest$ClientCertificateType;>;",
	nullptr,
	_CertificateRequest$ClientCertificateType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateRequest"
};

$Object* allocate$CertificateRequest$ClientCertificateType($Class* clazz) {
	return $of($alloc(CertificateRequest$ClientCertificateType));
}

CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::RSA_SIGN = nullptr;
CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::DSS_SIGN = nullptr;
CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::RSA_FIXED_DH = nullptr;
CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::DSS_FIXED_DH = nullptr;
CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::RSA_EPHEMERAL_DH = nullptr;
CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::DSS_EPHEMERAL_DH = nullptr;
CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::FORTEZZA_DMS = nullptr;
CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::ECDSA_SIGN = nullptr;
CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::RSA_FIXED_ECDH = nullptr;
CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::ECDSA_FIXED_ECDH = nullptr;
$CertificateRequest$ClientCertificateTypeArray* CertificateRequest$ClientCertificateType::$VALUES = nullptr;
$bytes* CertificateRequest$ClientCertificateType::CERT_TYPES = nullptr;

$CertificateRequest$ClientCertificateTypeArray* CertificateRequest$ClientCertificateType::$values() {
	$init(CertificateRequest$ClientCertificateType);
	return $new($CertificateRequest$ClientCertificateTypeArray, {
		CertificateRequest$ClientCertificateType::RSA_SIGN,
		CertificateRequest$ClientCertificateType::DSS_SIGN,
		CertificateRequest$ClientCertificateType::RSA_FIXED_DH,
		CertificateRequest$ClientCertificateType::DSS_FIXED_DH,
		CertificateRequest$ClientCertificateType::RSA_EPHEMERAL_DH,
		CertificateRequest$ClientCertificateType::DSS_EPHEMERAL_DH,
		CertificateRequest$ClientCertificateType::FORTEZZA_DMS,
		CertificateRequest$ClientCertificateType::ECDSA_SIGN,
		CertificateRequest$ClientCertificateType::RSA_FIXED_ECDH,
		CertificateRequest$ClientCertificateType::ECDSA_FIXED_ECDH
	});
}

$CertificateRequest$ClientCertificateTypeArray* CertificateRequest$ClientCertificateType::values() {
	$init(CertificateRequest$ClientCertificateType);
	return $cast($CertificateRequest$ClientCertificateTypeArray, CertificateRequest$ClientCertificateType::$VALUES->clone());
}

CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::valueOf($String* name) {
	$init(CertificateRequest$ClientCertificateType);
	return $cast(CertificateRequest$ClientCertificateType, $Enum::valueOf(CertificateRequest$ClientCertificateType::class$, name));
}

void CertificateRequest$ClientCertificateType::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name) {
	CertificateRequest$ClientCertificateType::init$($enum$name, $enum$ordinal, id, name, nullptr, false);
}

void CertificateRequest$ClientCertificateType::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name, $List* keyAlgorithm, bool isAvailable) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, name$, name);
	$set(this, keyAlgorithm, keyAlgorithm);
	this->isAvailable = isAvailable;
}

$String* CertificateRequest$ClientCertificateType::nameOf(int8_t id) {
	$init(CertificateRequest$ClientCertificateType);
	{
		$var($CertificateRequest$ClientCertificateTypeArray, arr$, CertificateRequest$ClientCertificateType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			CertificateRequest$ClientCertificateType* cct = arr$->get(i$);
			{
				if ($nc(cct)->id == id) {
					return cct->name$;
				}
			}
		}
	}
	return $str({"UNDEFINED-CLIENT-CERTIFICATE-TYPE("_s, $$str((int32_t)id), ")"_s});
}

CertificateRequest$ClientCertificateType* CertificateRequest$ClientCertificateType::valueOf(int8_t id) {
	$init(CertificateRequest$ClientCertificateType);
	{
		$var($CertificateRequest$ClientCertificateTypeArray, arr$, CertificateRequest$ClientCertificateType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			CertificateRequest$ClientCertificateType* cct = arr$->get(i$);
			{
				if ($nc(cct)->id == id) {
					return cct;
				}
			}
		}
	}
	return nullptr;
}

$StringArray* CertificateRequest$ClientCertificateType::getKeyTypes($bytes* ids) {
	$init(CertificateRequest$ClientCertificateType);
	$var($ArrayList, keyTypes, $new($ArrayList, 3));
	{
		$var($bytes, arr$, ids);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t id = arr$->get(i$);
			{
				CertificateRequest$ClientCertificateType* cct = CertificateRequest$ClientCertificateType::valueOf(id);
				if ($nc(cct)->isAvailable) {
					$nc(cct->keyAlgorithm)->forEach(static_cast<$Consumer*>($$new(CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0, keyTypes)));
				}
			}
		}
	}
	return $fcast($StringArray, keyTypes->toArray($$new($StringArray, 0)));
}

void CertificateRequest$ClientCertificateType::lambda$getKeyTypes$0($ArrayList* keyTypes, $String* key) {
	$init(CertificateRequest$ClientCertificateType);
	if (!$nc(keyTypes)->contains(key)) {
		keyTypes->add(key);
	}
}

void clinit$CertificateRequest$ClientCertificateType($Class* class$) {
	$assignStatic(CertificateRequest$ClientCertificateType::RSA_SIGN, $new(CertificateRequest$ClientCertificateType, "RSA_SIGN"_s, 0, (int8_t)1, "rsa_sign"_s, $($List::of($of("RSA"_s))), true));
	$assignStatic(CertificateRequest$ClientCertificateType::DSS_SIGN, $new(CertificateRequest$ClientCertificateType, "DSS_SIGN"_s, 1, (int8_t)2, "dss_sign"_s, $($List::of($of("DSA"_s))), true));
	$assignStatic(CertificateRequest$ClientCertificateType::RSA_FIXED_DH, $new(CertificateRequest$ClientCertificateType, "RSA_FIXED_DH"_s, 2, (int8_t)3, "rsa_fixed_dh"_s));
	$assignStatic(CertificateRequest$ClientCertificateType::DSS_FIXED_DH, $new(CertificateRequest$ClientCertificateType, "DSS_FIXED_DH"_s, 3, (int8_t)4, "dss_fixed_dh"_s));
	$assignStatic(CertificateRequest$ClientCertificateType::RSA_EPHEMERAL_DH, $new(CertificateRequest$ClientCertificateType, "RSA_EPHEMERAL_DH"_s, 4, (int8_t)5, "rsa_ephemeral_dh"_s));
	$assignStatic(CertificateRequest$ClientCertificateType::DSS_EPHEMERAL_DH, $new(CertificateRequest$ClientCertificateType, "DSS_EPHEMERAL_DH"_s, 5, (int8_t)6, "dss_ephemeral_dh"_s));
	$assignStatic(CertificateRequest$ClientCertificateType::FORTEZZA_DMS, $new(CertificateRequest$ClientCertificateType, "FORTEZZA_DMS"_s, 6, (int8_t)20, "fortezza_dms"_s));
	$var($String, var$0, "ECDSA_SIGN"_s);
	int8_t var$1 = (int8_t)64;
	$var($String, var$2, "ecdsa_sign"_s);
	$var($List, var$3, $List::of("EC"_s, "EdDSA"_s));
	$assignStatic(CertificateRequest$ClientCertificateType::ECDSA_SIGN, $new(CertificateRequest$ClientCertificateType, var$0, 7, var$1, var$2, var$3, $JsseJce::isEcAvailable()));
	$assignStatic(CertificateRequest$ClientCertificateType::RSA_FIXED_ECDH, $new(CertificateRequest$ClientCertificateType, "RSA_FIXED_ECDH"_s, 8, (int8_t)65, "rsa_fixed_ecdh"_s));
	$assignStatic(CertificateRequest$ClientCertificateType::ECDSA_FIXED_ECDH, $new(CertificateRequest$ClientCertificateType, "ECDSA_FIXED_ECDH"_s, 9, (int8_t)66, "ecdsa_fixed_ecdh"_s));
	$assignStatic(CertificateRequest$ClientCertificateType::$VALUES, CertificateRequest$ClientCertificateType::$values());
	$assignStatic(CertificateRequest$ClientCertificateType::CERT_TYPES, $JsseJce::isEcAvailable() ? $new($bytes, {
		CertificateRequest$ClientCertificateType::ECDSA_SIGN->id,
		CertificateRequest$ClientCertificateType::RSA_SIGN->id,
		CertificateRequest$ClientCertificateType::DSS_SIGN->id
	}) : $new($bytes, {
		CertificateRequest$ClientCertificateType::RSA_SIGN->id,
		CertificateRequest$ClientCertificateType::DSS_SIGN->id
	}));
}

CertificateRequest$ClientCertificateType::CertificateRequest$ClientCertificateType() {
}

$Class* CertificateRequest$ClientCertificateType::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0::classInfo$.name)) {
			return CertificateRequest$ClientCertificateType$$Lambda$lambda$getKeyTypes$0::load$(name, initialize);
		}
	}
	$loadClass(CertificateRequest$ClientCertificateType, name, initialize, &_CertificateRequest$ClientCertificateType_ClassInfo_, clinit$CertificateRequest$ClientCertificateType, allocate$CertificateRequest$ClientCertificateType);
	return class$;
}

$Class* CertificateRequest$ClientCertificateType::class$ = nullptr;

		} // ssl
	} // security
} // sun