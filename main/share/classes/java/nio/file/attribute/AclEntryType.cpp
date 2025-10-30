#include <java/nio/file/attribute/AclEntryType.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ALARM
#undef ALLOW
#undef AUDIT
#undef DENY

using $AclEntryTypeArray = $Array<::java::nio::file::attribute::AclEntryType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$FieldInfo _AclEntryType_FieldInfo_[] = {
	{"ALLOW", "Ljava/nio/file/attribute/AclEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryType, ALLOW)},
	{"DENY", "Ljava/nio/file/attribute/AclEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryType, DENY)},
	{"AUDIT", "Ljava/nio/file/attribute/AclEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryType, AUDIT)},
	{"ALARM", "Ljava/nio/file/attribute/AclEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryType, ALARM)},
	{"$VALUES", "[Ljava/nio/file/attribute/AclEntryType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AclEntryType, $VALUES)},
	{}
};

$MethodInfo _AclEntryType_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/attribute/AclEntryType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$AclEntryTypeArray*(*)()>(&AclEntryType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(AclEntryType::*)($String*,int32_t)>(&AclEntryType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AclEntryType*(*)($String*)>(&AclEntryType::valueOf))},
	{"values", "()[Ljava/nio/file/attribute/AclEntryType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AclEntryTypeArray*(*)()>(&AclEntryType::values))},
	{}
};

$ClassInfo _AclEntryType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.attribute.AclEntryType",
	"java.lang.Enum",
	nullptr,
	_AclEntryType_FieldInfo_,
	_AclEntryType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/attribute/AclEntryType;>;"
};

$Object* allocate$AclEntryType($Class* clazz) {
	return $of($alloc(AclEntryType));
}

AclEntryType* AclEntryType::ALLOW = nullptr;
AclEntryType* AclEntryType::DENY = nullptr;
AclEntryType* AclEntryType::AUDIT = nullptr;
AclEntryType* AclEntryType::ALARM = nullptr;
$AclEntryTypeArray* AclEntryType::$VALUES = nullptr;

$AclEntryTypeArray* AclEntryType::$values() {
	$init(AclEntryType);
	return $new($AclEntryTypeArray, {
		AclEntryType::ALLOW,
		AclEntryType::DENY,
		AclEntryType::AUDIT,
		AclEntryType::ALARM
	});
}

$AclEntryTypeArray* AclEntryType::values() {
	$init(AclEntryType);
	return $cast($AclEntryTypeArray, AclEntryType::$VALUES->clone());
}

AclEntryType* AclEntryType::valueOf($String* name) {
	$init(AclEntryType);
	return $cast(AclEntryType, $Enum::valueOf(AclEntryType::class$, name));
}

void AclEntryType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AclEntryType($Class* class$) {
	$assignStatic(AclEntryType::ALLOW, $new(AclEntryType, "ALLOW"_s, 0));
	$assignStatic(AclEntryType::DENY, $new(AclEntryType, "DENY"_s, 1));
	$assignStatic(AclEntryType::AUDIT, $new(AclEntryType, "AUDIT"_s, 2));
	$assignStatic(AclEntryType::ALARM, $new(AclEntryType, "ALARM"_s, 3));
	$assignStatic(AclEntryType::$VALUES, AclEntryType::$values());
}

AclEntryType::AclEntryType() {
}

$Class* AclEntryType::load$($String* name, bool initialize) {
	$loadClass(AclEntryType, name, initialize, &_AclEntryType_ClassInfo_, clinit$AclEntryType, allocate$AclEntryType);
	return class$;
}

$Class* AclEntryType::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java