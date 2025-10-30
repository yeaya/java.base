#include <sun/security/ssl/MaxFragExtension$MaxFragLenEnum.h>

#include <java/lang/Enum.h>
#include <sun/security/ssl/MaxFragExtension.h>
#include <jcpp.h>

using $MaxFragExtension$MaxFragLenEnumArray = $Array<::sun::security::ssl::MaxFragExtension$MaxFragLenEnum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MaxFragExtension = ::sun::security::ssl::MaxFragExtension;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _MaxFragExtension$MaxFragLenEnum_FieldInfo_[] = {
	{"MFL_512", "Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MaxFragExtension$MaxFragLenEnum, MFL_512)},
	{"MFL_1024", "Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MaxFragExtension$MaxFragLenEnum, MFL_1024)},
	{"MFL_2048", "Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MaxFragExtension$MaxFragLenEnum, MFL_2048)},
	{"MFL_4096", "Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MaxFragExtension$MaxFragLenEnum, MFL_4096)},
	{"$VALUES", "[Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MaxFragExtension$MaxFragLenEnum, $VALUES)},
	{"id", "B", nullptr, $FINAL, $field(MaxFragExtension$MaxFragLenEnum, id)},
	{"fragmentSize", "I", nullptr, $FINAL, $field(MaxFragExtension$MaxFragLenEnum, fragmentSize)},
	{"description", "Ljava/lang/String;", nullptr, $FINAL, $field(MaxFragExtension$MaxFragLenEnum, description)},
	{}
};

$MethodInfo _MaxFragExtension$MaxFragLenEnum_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MaxFragExtension$MaxFragLenEnumArray*(*)()>(&MaxFragExtension$MaxFragLenEnum::$values))},
	{"<init>", "(Ljava/lang/String;IBILjava/lang/String;)V", "(BILjava/lang/String;)V", $PRIVATE, $method(static_cast<void(MaxFragExtension$MaxFragLenEnum::*)($String*,int32_t,int8_t,int32_t,$String*)>(&MaxFragExtension$MaxFragLenEnum::init$))},
	{"nameOf", "(B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int8_t)>(&MaxFragExtension$MaxFragLenEnum::nameOf))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MaxFragExtension$MaxFragLenEnum*(*)($String*)>(&MaxFragExtension$MaxFragLenEnum::valueOf))},
	{"valueOf", "(B)Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $PRIVATE | $STATIC, $method(static_cast<MaxFragExtension$MaxFragLenEnum*(*)(int8_t)>(&MaxFragExtension$MaxFragLenEnum::valueOf))},
	{"valueOf", "(I)Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $STATIC, $method(static_cast<MaxFragExtension$MaxFragLenEnum*(*)(int32_t)>(&MaxFragExtension$MaxFragLenEnum::valueOf))},
	{"values", "()[Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MaxFragExtension$MaxFragLenEnumArray*(*)()>(&MaxFragExtension$MaxFragLenEnum::values))},
	{}
};

$InnerClassInfo _MaxFragExtension$MaxFragLenEnum_InnerClassesInfo_[] = {
	{"sun.security.ssl.MaxFragExtension$MaxFragLenEnum", "sun.security.ssl.MaxFragExtension", "MaxFragLenEnum", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MaxFragExtension$MaxFragLenEnum_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.MaxFragExtension$MaxFragLenEnum",
	"java.lang.Enum",
	nullptr,
	_MaxFragExtension$MaxFragLenEnum_FieldInfo_,
	_MaxFragExtension$MaxFragLenEnum_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/MaxFragExtension$MaxFragLenEnum;>;",
	nullptr,
	_MaxFragExtension$MaxFragLenEnum_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.MaxFragExtension"
};

$Object* allocate$MaxFragExtension$MaxFragLenEnum($Class* clazz) {
	return $of($alloc(MaxFragExtension$MaxFragLenEnum));
}

MaxFragExtension$MaxFragLenEnum* MaxFragExtension$MaxFragLenEnum::MFL_512 = nullptr;
MaxFragExtension$MaxFragLenEnum* MaxFragExtension$MaxFragLenEnum::MFL_1024 = nullptr;
MaxFragExtension$MaxFragLenEnum* MaxFragExtension$MaxFragLenEnum::MFL_2048 = nullptr;
MaxFragExtension$MaxFragLenEnum* MaxFragExtension$MaxFragLenEnum::MFL_4096 = nullptr;
$MaxFragExtension$MaxFragLenEnumArray* MaxFragExtension$MaxFragLenEnum::$VALUES = nullptr;

$MaxFragExtension$MaxFragLenEnumArray* MaxFragExtension$MaxFragLenEnum::$values() {
	$init(MaxFragExtension$MaxFragLenEnum);
	return $new($MaxFragExtension$MaxFragLenEnumArray, {
		MaxFragExtension$MaxFragLenEnum::MFL_512,
		MaxFragExtension$MaxFragLenEnum::MFL_1024,
		MaxFragExtension$MaxFragLenEnum::MFL_2048,
		MaxFragExtension$MaxFragLenEnum::MFL_4096
	});
}

$MaxFragExtension$MaxFragLenEnumArray* MaxFragExtension$MaxFragLenEnum::values() {
	$init(MaxFragExtension$MaxFragLenEnum);
	return $cast($MaxFragExtension$MaxFragLenEnumArray, MaxFragExtension$MaxFragLenEnum::$VALUES->clone());
}

MaxFragExtension$MaxFragLenEnum* MaxFragExtension$MaxFragLenEnum::valueOf($String* name) {
	$init(MaxFragExtension$MaxFragLenEnum);
	return $cast(MaxFragExtension$MaxFragLenEnum, $Enum::valueOf(MaxFragExtension$MaxFragLenEnum::class$, name));
}

void MaxFragExtension$MaxFragLenEnum::init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, int32_t fragmentSize, $String* description) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	this->fragmentSize = fragmentSize;
	$set(this, description, description);
}

MaxFragExtension$MaxFragLenEnum* MaxFragExtension$MaxFragLenEnum::valueOf(int8_t id) {
	$init(MaxFragExtension$MaxFragLenEnum);
	{
		$var($MaxFragExtension$MaxFragLenEnumArray, arr$, MaxFragExtension$MaxFragLenEnum::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			MaxFragExtension$MaxFragLenEnum* mfl = arr$->get(i$);
			{
				if ($nc(mfl)->id == id) {
					return mfl;
				}
			}
		}
	}
	return nullptr;
}

$String* MaxFragExtension$MaxFragLenEnum::nameOf(int8_t id) {
	$init(MaxFragExtension$MaxFragLenEnum);
	$useLocalCurrentObjectStackCache();
	{
		$var($MaxFragExtension$MaxFragLenEnumArray, arr$, MaxFragExtension$MaxFragLenEnum::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			MaxFragExtension$MaxFragLenEnum* mfl = arr$->get(i$);
			{
				if ($nc(mfl)->id == id) {
					return mfl->description;
				}
			}
		}
	}
	return $str({"UNDEFINED-MAX-FRAGMENT-LENGTH("_s, $$str(id), ")"_s});
}

MaxFragExtension$MaxFragLenEnum* MaxFragExtension$MaxFragLenEnum::valueOf(int32_t fragmentSize) {
	$init(MaxFragExtension$MaxFragLenEnum);
	if (fragmentSize <= 0) {
		return nullptr;
	} else if (fragmentSize < 1024) {
		return MaxFragExtension$MaxFragLenEnum::MFL_512;
	} else if (fragmentSize < 2048) {
		return MaxFragExtension$MaxFragLenEnum::MFL_1024;
	} else if (fragmentSize < 4096) {
		return MaxFragExtension$MaxFragLenEnum::MFL_2048;
	} else if (fragmentSize == 4096) {
		return MaxFragExtension$MaxFragLenEnum::MFL_4096;
	}
	return nullptr;
}

void clinit$MaxFragExtension$MaxFragLenEnum($Class* class$) {
	$assignStatic(MaxFragExtension$MaxFragLenEnum::MFL_512, $new(MaxFragExtension$MaxFragLenEnum, "MFL_512"_s, 0, (int8_t)1, 512, "2^9"_s));
	$assignStatic(MaxFragExtension$MaxFragLenEnum::MFL_1024, $new(MaxFragExtension$MaxFragLenEnum, "MFL_1024"_s, 1, (int8_t)2, 1024, "2^10"_s));
	$assignStatic(MaxFragExtension$MaxFragLenEnum::MFL_2048, $new(MaxFragExtension$MaxFragLenEnum, "MFL_2048"_s, 2, (int8_t)3, 2048, "2^11"_s));
	$assignStatic(MaxFragExtension$MaxFragLenEnum::MFL_4096, $new(MaxFragExtension$MaxFragLenEnum, "MFL_4096"_s, 3, (int8_t)4, 4096, "2^12"_s));
	$assignStatic(MaxFragExtension$MaxFragLenEnum::$VALUES, MaxFragExtension$MaxFragLenEnum::$values());
}

MaxFragExtension$MaxFragLenEnum::MaxFragExtension$MaxFragLenEnum() {
}

$Class* MaxFragExtension$MaxFragLenEnum::load$($String* name, bool initialize) {
	$loadClass(MaxFragExtension$MaxFragLenEnum, name, initialize, &_MaxFragExtension$MaxFragLenEnum_ClassInfo_, clinit$MaxFragExtension$MaxFragLenEnum, allocate$MaxFragExtension$MaxFragLenEnum);
	return class$;
}

$Class* MaxFragExtension$MaxFragLenEnum::class$ = nullptr;

		} // ssl
	} // security
} // sun