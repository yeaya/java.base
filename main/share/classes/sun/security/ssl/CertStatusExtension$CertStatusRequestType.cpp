#include <sun/security/ssl/CertStatusExtension$CertStatusRequestType.h>

#include <java/lang/Enum.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <jcpp.h>

#undef OCSP
#undef OCSP_MULTI

using $CertStatusExtension$CertStatusRequestTypeArray = $Array<::sun::security::ssl::CertStatusExtension$CertStatusRequestType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertStatusExtension$CertStatusRequestType_FieldInfo_[] = {
	{"OCSP", "Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertStatusExtension$CertStatusRequestType, OCSP)},
	{"OCSP_MULTI", "Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CertStatusExtension$CertStatusRequestType, OCSP_MULTI)},
	{"$VALUES", "[Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CertStatusExtension$CertStatusRequestType, $VALUES)},
	{"id", "B", nullptr, $FINAL, $field(CertStatusExtension$CertStatusRequestType, id)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(CertStatusExtension$CertStatusRequestType, name$)},
	{}
};

$MethodInfo _CertStatusExtension$CertStatusRequestType_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CertStatusExtension$CertStatusRequestTypeArray*(*)()>(&CertStatusExtension$CertStatusRequestType::$values))},
	{"<init>", "(Ljava/lang/String;IBLjava/lang/String;)V", "(BLjava/lang/String;)V", $PRIVATE, $method(static_cast<void(CertStatusExtension$CertStatusRequestType::*)($String*,int32_t,int8_t,$String*)>(&CertStatusExtension$CertStatusRequestType::init$))},
	{"nameOf", "(B)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int8_t)>(&CertStatusExtension$CertStatusRequestType::nameOf))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertStatusExtension$CertStatusRequestType*(*)($String*)>(&CertStatusExtension$CertStatusRequestType::valueOf))},
	{"valueOf", "(B)Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;", nullptr, $STATIC, $method(static_cast<CertStatusExtension$CertStatusRequestType*(*)(int8_t)>(&CertStatusExtension$CertStatusRequestType::valueOf))},
	{"values", "()[Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CertStatusExtension$CertStatusRequestTypeArray*(*)()>(&CertStatusExtension$CertStatusRequestType::values))},
	{}
};

$InnerClassInfo _CertStatusExtension$CertStatusRequestType_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$CertStatusRequestType", "sun.security.ssl.CertStatusExtension", "CertStatusRequestType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CertStatusExtension$CertStatusRequestType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.CertStatusExtension$CertStatusRequestType",
	"java.lang.Enum",
	nullptr,
	_CertStatusExtension$CertStatusRequestType_FieldInfo_,
	_CertStatusExtension$CertStatusRequestType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/CertStatusExtension$CertStatusRequestType;>;",
	nullptr,
	_CertStatusExtension$CertStatusRequestType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$CertStatusRequestType($Class* clazz) {
	return $of($alloc(CertStatusExtension$CertStatusRequestType));
}

CertStatusExtension$CertStatusRequestType* CertStatusExtension$CertStatusRequestType::OCSP = nullptr;
CertStatusExtension$CertStatusRequestType* CertStatusExtension$CertStatusRequestType::OCSP_MULTI = nullptr;
$CertStatusExtension$CertStatusRequestTypeArray* CertStatusExtension$CertStatusRequestType::$VALUES = nullptr;

$CertStatusExtension$CertStatusRequestTypeArray* CertStatusExtension$CertStatusRequestType::$values() {
	$init(CertStatusExtension$CertStatusRequestType);
	return $new($CertStatusExtension$CertStatusRequestTypeArray, {
		CertStatusExtension$CertStatusRequestType::OCSP,
		CertStatusExtension$CertStatusRequestType::OCSP_MULTI
	});
}

$CertStatusExtension$CertStatusRequestTypeArray* CertStatusExtension$CertStatusRequestType::values() {
	$init(CertStatusExtension$CertStatusRequestType);
	return $cast($CertStatusExtension$CertStatusRequestTypeArray, CertStatusExtension$CertStatusRequestType::$VALUES->clone());
}

CertStatusExtension$CertStatusRequestType* CertStatusExtension$CertStatusRequestType::valueOf($String* name) {
	$init(CertStatusExtension$CertStatusRequestType);
	return $cast(CertStatusExtension$CertStatusRequestType, $Enum::valueOf(CertStatusExtension$CertStatusRequestType::class$, name));
}

void CertStatusExtension$CertStatusRequestType::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, name$, name);
}

CertStatusExtension$CertStatusRequestType* CertStatusExtension$CertStatusRequestType::valueOf(int8_t id) {
	$init(CertStatusExtension$CertStatusRequestType);
	{
		$var($CertStatusExtension$CertStatusRequestTypeArray, arr$, CertStatusExtension$CertStatusRequestType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			CertStatusExtension$CertStatusRequestType* srt = arr$->get(i$);
			{
				if ($nc(srt)->id == id) {
					return srt;
				}
			}
		}
	}
	return nullptr;
}

$String* CertStatusExtension$CertStatusRequestType::nameOf(int8_t id) {
	$init(CertStatusExtension$CertStatusRequestType);
	$useLocalCurrentObjectStackCache();
	{
		$var($CertStatusExtension$CertStatusRequestTypeArray, arr$, CertStatusExtension$CertStatusRequestType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			CertStatusExtension$CertStatusRequestType* srt = arr$->get(i$);
			{
				if ($nc(srt)->id == id) {
					return srt->name$;
				}
			}
		}
	}
	return $str({"UNDEFINED-CERT-STATUS-TYPE("_s, $$str(id), ")"_s});
}

void clinit$CertStatusExtension$CertStatusRequestType($Class* class$) {
	$assignStatic(CertStatusExtension$CertStatusRequestType::OCSP, $new(CertStatusExtension$CertStatusRequestType, "OCSP"_s, 0, (int8_t)1, "ocsp"_s));
	$assignStatic(CertStatusExtension$CertStatusRequestType::OCSP_MULTI, $new(CertStatusExtension$CertStatusRequestType, "OCSP_MULTI"_s, 1, (int8_t)2, "ocsp_multi"_s));
	$assignStatic(CertStatusExtension$CertStatusRequestType::$VALUES, CertStatusExtension$CertStatusRequestType::$values());
}

CertStatusExtension$CertStatusRequestType::CertStatusExtension$CertStatusRequestType() {
}

$Class* CertStatusExtension$CertStatusRequestType::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$CertStatusRequestType, name, initialize, &_CertStatusExtension$CertStatusRequestType_ClassInfo_, clinit$CertStatusExtension$CertStatusRequestType, allocate$CertStatusExtension$CertStatusRequestType);
	return class$;
}

$Class* CertStatusExtension$CertStatusRequestType::class$ = nullptr;

		} // ssl
	} // security
} // sun