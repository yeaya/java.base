#include <java/nio/file/attribute/AclEntryPermission.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ADD_FILE
#undef ADD_SUBDIRECTORY
#undef APPEND_DATA
#undef DELETE
#undef DELETE_CHILD
#undef EXECUTE
#undef LIST_DIRECTORY
#undef READ_ACL
#undef READ_ATTRIBUTES
#undef READ_DATA
#undef READ_NAMED_ATTRS
#undef SYNCHRONIZE
#undef WRITE_ACL
#undef WRITE_ATTRIBUTES
#undef WRITE_DATA
#undef WRITE_NAMED_ATTRS
#undef WRITE_OWNER

using $AclEntryPermissionArray = $Array<::java::nio::file::attribute::AclEntryPermission>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$FieldInfo _AclEntryPermission_FieldInfo_[] = {
	{"READ_DATA", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, READ_DATA)},
	{"WRITE_DATA", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, WRITE_DATA)},
	{"APPEND_DATA", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, APPEND_DATA)},
	{"READ_NAMED_ATTRS", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, READ_NAMED_ATTRS)},
	{"WRITE_NAMED_ATTRS", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, WRITE_NAMED_ATTRS)},
	{"EXECUTE", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, EXECUTE)},
	{"DELETE_CHILD", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, DELETE_CHILD)},
	{"READ_ATTRIBUTES", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, READ_ATTRIBUTES)},
	{"WRITE_ATTRIBUTES", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, WRITE_ATTRIBUTES)},
	{"DELETE", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, DELETE)},
	{"READ_ACL", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, READ_ACL)},
	{"WRITE_ACL", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, WRITE_ACL)},
	{"WRITE_OWNER", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, WRITE_OWNER)},
	{"SYNCHRONIZE", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AclEntryPermission, SYNCHRONIZE)},
	{"$VALUES", "[Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AclEntryPermission, $VALUES)},
	{"LIST_DIRECTORY", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AclEntryPermission, LIST_DIRECTORY)},
	{"ADD_FILE", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AclEntryPermission, ADD_FILE)},
	{"ADD_SUBDIRECTORY", "Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AclEntryPermission, ADD_SUBDIRECTORY)},
	{}
};

$MethodInfo _AclEntryPermission_MethodInfo_[] = {
	{"$values", "()[Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AclEntryPermission, $values, $AclEntryPermissionArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AclEntryPermission, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC, $staticMethod(AclEntryPermission, valueOf, AclEntryPermission*, $String*)},
	{"values", "()[Ljava/nio/file/attribute/AclEntryPermission;", nullptr, $PUBLIC | $STATIC, $staticMethod(AclEntryPermission, values, $AclEntryPermissionArray*)},
	{}
};

$ClassInfo _AclEntryPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.nio.file.attribute.AclEntryPermission",
	"java.lang.Enum",
	nullptr,
	_AclEntryPermission_FieldInfo_,
	_AclEntryPermission_MethodInfo_,
	"Ljava/lang/Enum<Ljava/nio/file/attribute/AclEntryPermission;>;"
};

$Object* allocate$AclEntryPermission($Class* clazz) {
	return $of($alloc(AclEntryPermission));
}

AclEntryPermission* AclEntryPermission::READ_DATA = nullptr;
AclEntryPermission* AclEntryPermission::WRITE_DATA = nullptr;
AclEntryPermission* AclEntryPermission::APPEND_DATA = nullptr;
AclEntryPermission* AclEntryPermission::READ_NAMED_ATTRS = nullptr;
AclEntryPermission* AclEntryPermission::WRITE_NAMED_ATTRS = nullptr;
AclEntryPermission* AclEntryPermission::EXECUTE = nullptr;
AclEntryPermission* AclEntryPermission::DELETE_CHILD = nullptr;
AclEntryPermission* AclEntryPermission::READ_ATTRIBUTES = nullptr;
AclEntryPermission* AclEntryPermission::WRITE_ATTRIBUTES = nullptr;
AclEntryPermission* AclEntryPermission::DELETE = nullptr;
AclEntryPermission* AclEntryPermission::READ_ACL = nullptr;
AclEntryPermission* AclEntryPermission::WRITE_ACL = nullptr;
AclEntryPermission* AclEntryPermission::WRITE_OWNER = nullptr;
AclEntryPermission* AclEntryPermission::SYNCHRONIZE = nullptr;
$AclEntryPermissionArray* AclEntryPermission::$VALUES = nullptr;
AclEntryPermission* AclEntryPermission::LIST_DIRECTORY = nullptr;
AclEntryPermission* AclEntryPermission::ADD_FILE = nullptr;
AclEntryPermission* AclEntryPermission::ADD_SUBDIRECTORY = nullptr;

$AclEntryPermissionArray* AclEntryPermission::$values() {
	$init(AclEntryPermission);
	return $new($AclEntryPermissionArray, {
		AclEntryPermission::READ_DATA,
		AclEntryPermission::WRITE_DATA,
		AclEntryPermission::APPEND_DATA,
		AclEntryPermission::READ_NAMED_ATTRS,
		AclEntryPermission::WRITE_NAMED_ATTRS,
		AclEntryPermission::EXECUTE,
		AclEntryPermission::DELETE_CHILD,
		AclEntryPermission::READ_ATTRIBUTES,
		AclEntryPermission::WRITE_ATTRIBUTES,
		AclEntryPermission::DELETE,
		AclEntryPermission::READ_ACL,
		AclEntryPermission::WRITE_ACL,
		AclEntryPermission::WRITE_OWNER,
		AclEntryPermission::SYNCHRONIZE
	});
}

$AclEntryPermissionArray* AclEntryPermission::values() {
	$init(AclEntryPermission);
	return $cast($AclEntryPermissionArray, AclEntryPermission::$VALUES->clone());
}

AclEntryPermission* AclEntryPermission::valueOf($String* name) {
	$init(AclEntryPermission);
	return $cast(AclEntryPermission, $Enum::valueOf(AclEntryPermission::class$, name));
}

void AclEntryPermission::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AclEntryPermission($Class* class$) {
	$assignStatic(AclEntryPermission::READ_DATA, $new(AclEntryPermission, "READ_DATA"_s, 0));
	$assignStatic(AclEntryPermission::WRITE_DATA, $new(AclEntryPermission, "WRITE_DATA"_s, 1));
	$assignStatic(AclEntryPermission::APPEND_DATA, $new(AclEntryPermission, "APPEND_DATA"_s, 2));
	$assignStatic(AclEntryPermission::READ_NAMED_ATTRS, $new(AclEntryPermission, "READ_NAMED_ATTRS"_s, 3));
	$assignStatic(AclEntryPermission::WRITE_NAMED_ATTRS, $new(AclEntryPermission, "WRITE_NAMED_ATTRS"_s, 4));
	$assignStatic(AclEntryPermission::EXECUTE, $new(AclEntryPermission, "EXECUTE"_s, 5));
	$assignStatic(AclEntryPermission::DELETE_CHILD, $new(AclEntryPermission, "DELETE_CHILD"_s, 6));
	$assignStatic(AclEntryPermission::READ_ATTRIBUTES, $new(AclEntryPermission, "READ_ATTRIBUTES"_s, 7));
	$assignStatic(AclEntryPermission::WRITE_ATTRIBUTES, $new(AclEntryPermission, "WRITE_ATTRIBUTES"_s, 8));
	$assignStatic(AclEntryPermission::DELETE, $new(AclEntryPermission, "DELETE"_s, 9));
	$assignStatic(AclEntryPermission::READ_ACL, $new(AclEntryPermission, "READ_ACL"_s, 10));
	$assignStatic(AclEntryPermission::WRITE_ACL, $new(AclEntryPermission, "WRITE_ACL"_s, 11));
	$assignStatic(AclEntryPermission::WRITE_OWNER, $new(AclEntryPermission, "WRITE_OWNER"_s, 12));
	$assignStatic(AclEntryPermission::SYNCHRONIZE, $new(AclEntryPermission, "SYNCHRONIZE"_s, 13));
	$assignStatic(AclEntryPermission::$VALUES, AclEntryPermission::$values());
	$assignStatic(AclEntryPermission::LIST_DIRECTORY, AclEntryPermission::READ_DATA);
	$assignStatic(AclEntryPermission::ADD_FILE, AclEntryPermission::WRITE_DATA);
	$assignStatic(AclEntryPermission::ADD_SUBDIRECTORY, AclEntryPermission::APPEND_DATA);
}

AclEntryPermission::AclEntryPermission() {
}

$Class* AclEntryPermission::load$($String* name, bool initialize) {
	$loadClass(AclEntryPermission, name, initialize, &_AclEntryPermission_ClassInfo_, clinit$AclEntryPermission, allocate$AclEntryPermission);
	return class$;
}

$Class* AclEntryPermission::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java