#include <java/nio/file/attribute/AclEntryFlag.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DIRECTORY_INHERIT
#undef FILE_INHERIT
#undef INHERIT_ONLY
#undef NO_PROPAGATE_INHERIT

using $AclEntryFlagArray = $Array<::java::nio::file::attribute::AclEntryFlag>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$FieldInfo _AclEntryFlag_FieldInfo_[] = {
	{"FILE_INHERIT", "Ljava/nio/file/attribute/AclEntryFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryFlag, FILE_INHERIT)},
	{"DIRECTORY_INHERIT", "Ljava/nio/file/attribute/AclEntryFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryFlag, DIRECTORY_INHERIT)},
	{"NO_PROPAGATE_INHERIT", "Ljava/nio/file/attribute/AclEntryFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryFlag, NO_PROPAGATE_INHERIT)},
	{"INHERIT_ONLY", "Ljava/nio/file/attribute/AclEntryFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryFlag, INHERIT_ONLY)},
	{"$VALUES", "[Ljava/nio/file/attribute/AclEntryFlag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AclEntryFlag, $VALUES)},
	{}
};

$MethodInfo _AclEntryFlag_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/attribute/AclEntryFlag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AclEntryFlag, $values, $AclEntryFlagArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AclEntryFlag, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryFlag;", nullptr, $PUBLIC | $STATIC, $staticMethod(AclEntryFlag, valueOf, AclEntryFlag*, $String*)},
	{"values", "()[Ljava/nio/file/attribute/AclEntryFlag;", nullptr, $PUBLIC | $STATIC, $staticMethod(AclEntryFlag, values, $AclEntryFlagArray*)},
	{}
};

$ClassInfo _AclEntryFlag_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.attribute.AclEntryFlag",
	"java.lang.Enum",
	nullptr,
	_AclEntryFlag_FieldInfo_,
	_AclEntryFlag_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/attribute/AclEntryFlag;>;"
};

$Object* allocate$AclEntryFlag($Class* clazz) {
	return $of($alloc(AclEntryFlag));
}

AclEntryFlag* AclEntryFlag::FILE_INHERIT = nullptr;
AclEntryFlag* AclEntryFlag::DIRECTORY_INHERIT = nullptr;
AclEntryFlag* AclEntryFlag::NO_PROPAGATE_INHERIT = nullptr;
AclEntryFlag* AclEntryFlag::INHERIT_ONLY = nullptr;
$AclEntryFlagArray* AclEntryFlag::$VALUES = nullptr;

$AclEntryFlagArray* AclEntryFlag::$values() {
	$init(AclEntryFlag);
	return $new($AclEntryFlagArray, {
		AclEntryFlag::FILE_INHERIT,
		AclEntryFlag::DIRECTORY_INHERIT,
		AclEntryFlag::NO_PROPAGATE_INHERIT,
		AclEntryFlag::INHERIT_ONLY
	});
}

$AclEntryFlagArray* AclEntryFlag::values() {
	$init(AclEntryFlag);
	return $cast($AclEntryFlagArray, AclEntryFlag::$VALUES->clone());
}

AclEntryFlag* AclEntryFlag::valueOf($String* name) {
	$init(AclEntryFlag);
	return $cast(AclEntryFlag, $Enum::valueOf(AclEntryFlag::class$, name));
}

void AclEntryFlag::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AclEntryFlag($Class* class$) {
	$assignStatic(AclEntryFlag::FILE_INHERIT, $new(AclEntryFlag, "FILE_INHERIT"_s, 0));
	$assignStatic(AclEntryFlag::DIRECTORY_INHERIT, $new(AclEntryFlag, "DIRECTORY_INHERIT"_s, 1));
	$assignStatic(AclEntryFlag::NO_PROPAGATE_INHERIT, $new(AclEntryFlag, "NO_PROPAGATE_INHERIT"_s, 2));
	$assignStatic(AclEntryFlag::INHERIT_ONLY, $new(AclEntryFlag, "INHERIT_ONLY"_s, 3));
	$assignStatic(AclEntryFlag::$VALUES, AclEntryFlag::$values());
}

AclEntryFlag::AclEntryFlag() {
}

$Class* AclEntryFlag::load$($String* name, bool initialize) {
	$loadClass(AclEntryFlag, name, initialize, &_AclEntryFlag_ClassInfo_, clinit$AclEntryFlag, allocate$AclEntryFlag);
	return class$;
}

$Class* AclEntryFlag::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java