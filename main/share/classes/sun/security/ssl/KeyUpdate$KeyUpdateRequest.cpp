#include <sun/security/ssl/KeyUpdate$KeyUpdateRequest.h>

#include <java/lang/Enum.h>
#include <sun/security/ssl/KeyUpdate.h>
#include <jcpp.h>

#undef NOTREQUESTED
#undef REQUESTED

using $KeyUpdate$KeyUpdateRequestArray = $Array<::sun::security::ssl::KeyUpdate$KeyUpdateRequest>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _KeyUpdate$KeyUpdateRequest_FieldInfo_[] = {
	{"NOTREQUESTED", "Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(KeyUpdate$KeyUpdateRequest, NOTREQUESTED)},
	{"REQUESTED", "Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(KeyUpdate$KeyUpdateRequest, REQUESTED)},
	{"$VALUES", "[Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(KeyUpdate$KeyUpdateRequest, $VALUES)},
	{"id", "B", nullptr, $FINAL, $field(KeyUpdate$KeyUpdateRequest, id)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(KeyUpdate$KeyUpdateRequest, name$)},
	{}
};

$MethodInfo _KeyUpdate$KeyUpdateRequest_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(KeyUpdate$KeyUpdateRequest, $values, $KeyUpdate$KeyUpdateRequestArray*)},
	{"<init>", "(Ljava/lang/String;IBLjava/lang/String;)V", "(BLjava/lang/String;)V", $PRIVATE, $method(KeyUpdate$KeyUpdateRequest, init$, void, $String*, int32_t, int8_t, $String*)},
	{"nameOf", "(B)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(KeyUpdate$KeyUpdateRequest, nameOf, $String*, int8_t)},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;", nullptr, $PUBLIC | $STATIC, $staticMethod(KeyUpdate$KeyUpdateRequest, valueOf, KeyUpdate$KeyUpdateRequest*, $String*)},
	{"valueOf", "(B)Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;", nullptr, $STATIC, $staticMethod(KeyUpdate$KeyUpdateRequest, valueOf, KeyUpdate$KeyUpdateRequest*, int8_t)},
	{"values", "()[Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;", nullptr, $PUBLIC | $STATIC, $staticMethod(KeyUpdate$KeyUpdateRequest, values, $KeyUpdate$KeyUpdateRequestArray*)},
	{}
};

$InnerClassInfo _KeyUpdate$KeyUpdateRequest_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyUpdate$KeyUpdateRequest", "sun.security.ssl.KeyUpdate", "KeyUpdateRequest", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _KeyUpdate$KeyUpdateRequest_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.KeyUpdate$KeyUpdateRequest",
	"java.lang.Enum",
	nullptr,
	_KeyUpdate$KeyUpdateRequest_FieldInfo_,
	_KeyUpdate$KeyUpdateRequest_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/KeyUpdate$KeyUpdateRequest;>;",
	nullptr,
	_KeyUpdate$KeyUpdateRequest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyUpdate"
};

$Object* allocate$KeyUpdate$KeyUpdateRequest($Class* clazz) {
	return $of($alloc(KeyUpdate$KeyUpdateRequest));
}

KeyUpdate$KeyUpdateRequest* KeyUpdate$KeyUpdateRequest::NOTREQUESTED = nullptr;
KeyUpdate$KeyUpdateRequest* KeyUpdate$KeyUpdateRequest::REQUESTED = nullptr;
$KeyUpdate$KeyUpdateRequestArray* KeyUpdate$KeyUpdateRequest::$VALUES = nullptr;

$KeyUpdate$KeyUpdateRequestArray* KeyUpdate$KeyUpdateRequest::$values() {
	$init(KeyUpdate$KeyUpdateRequest);
	return $new($KeyUpdate$KeyUpdateRequestArray, {
		KeyUpdate$KeyUpdateRequest::NOTREQUESTED,
		KeyUpdate$KeyUpdateRequest::REQUESTED
	});
}

$KeyUpdate$KeyUpdateRequestArray* KeyUpdate$KeyUpdateRequest::values() {
	$init(KeyUpdate$KeyUpdateRequest);
	return $cast($KeyUpdate$KeyUpdateRequestArray, KeyUpdate$KeyUpdateRequest::$VALUES->clone());
}

KeyUpdate$KeyUpdateRequest* KeyUpdate$KeyUpdateRequest::valueOf($String* name) {
	$init(KeyUpdate$KeyUpdateRequest);
	return $cast(KeyUpdate$KeyUpdateRequest, $Enum::valueOf(KeyUpdate$KeyUpdateRequest::class$, name));
}

void KeyUpdate$KeyUpdateRequest::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, name$, name);
}

KeyUpdate$KeyUpdateRequest* KeyUpdate$KeyUpdateRequest::valueOf(int8_t id) {
	$init(KeyUpdate$KeyUpdateRequest);
	{
		$var($KeyUpdate$KeyUpdateRequestArray, arr$, KeyUpdate$KeyUpdateRequest::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			KeyUpdate$KeyUpdateRequest* kur = arr$->get(i$);
			{
				if ($nc(kur)->id == id) {
					return kur;
				}
			}
		}
	}
	return nullptr;
}

$String* KeyUpdate$KeyUpdateRequest::nameOf(int8_t id) {
	$init(KeyUpdate$KeyUpdateRequest);
	$useLocalCurrentObjectStackCache();
	{
		$var($KeyUpdate$KeyUpdateRequestArray, arr$, KeyUpdate$KeyUpdateRequest::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			KeyUpdate$KeyUpdateRequest* kur = arr$->get(i$);
			{
				if ($nc(kur)->id == id) {
					return kur->name$;
				}
			}
		}
	}
	return $str({"<UNKNOWN KeyUpdateRequest TYPE: "_s, $$str(((int32_t)(id & (uint32_t)255))), ">"_s});
}

void clinit$KeyUpdate$KeyUpdateRequest($Class* class$) {
	$assignStatic(KeyUpdate$KeyUpdateRequest::NOTREQUESTED, $new(KeyUpdate$KeyUpdateRequest, "NOTREQUESTED"_s, 0, (int8_t)0, "update_not_requested"_s));
	$assignStatic(KeyUpdate$KeyUpdateRequest::REQUESTED, $new(KeyUpdate$KeyUpdateRequest, "REQUESTED"_s, 1, (int8_t)1, "update_requested"_s));
	$assignStatic(KeyUpdate$KeyUpdateRequest::$VALUES, KeyUpdate$KeyUpdateRequest::$values());
}

KeyUpdate$KeyUpdateRequest::KeyUpdate$KeyUpdateRequest() {
}

$Class* KeyUpdate$KeyUpdateRequest::load$($String* name, bool initialize) {
	$loadClass(KeyUpdate$KeyUpdateRequest, name, initialize, &_KeyUpdate$KeyUpdateRequest_ClassInfo_, clinit$KeyUpdate$KeyUpdateRequest, allocate$KeyUpdate$KeyUpdateRequest);
	return class$;
}

$Class* KeyUpdate$KeyUpdateRequest::class$ = nullptr;

		} // ssl
	} // security
} // sun