#include <CheckPermission$FileOperation.h>

#include <CheckPermission.h>
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
#include <jcpp.h>

#undef DELETE
#undef EXEC
#undef READ
#undef WRITE

using $CheckPermission = ::CheckPermission;
using $CheckPermission$FileOperationArray = $Array<CheckPermission$FileOperation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _CheckPermission$FileOperation_FieldInfo_[] = {
	{"READ", "LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckPermission$FileOperation, READ)},
	{"WRITE", "LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckPermission$FileOperation, WRITE)},
	{"DELETE", "LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckPermission$FileOperation, DELETE)},
	{"EXEC", "LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckPermission$FileOperation, EXEC)},
	{"$VALUES", "[LCheckPermission$FileOperation;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CheckPermission$FileOperation, $VALUES)},
	{}
};

$MethodInfo _CheckPermission$FileOperation_MethodInfo_[] = {
	{"$values", "()[LCheckPermission$FileOperation;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CheckPermission$FileOperationArray*(*)()>(&CheckPermission$FileOperation::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CheckPermission$FileOperation::*)($String*,int32_t)>(&CheckPermission$FileOperation::init$))},
	{"valueOf", "(Ljava/lang/String;)LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CheckPermission$FileOperation*(*)($String*)>(&CheckPermission$FileOperation::valueOf))},
	{"values", "()[LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CheckPermission$FileOperationArray*(*)()>(&CheckPermission$FileOperation::values))},
	{}
};

$InnerClassInfo _CheckPermission$FileOperation_InnerClassesInfo_[] = {
	{"CheckPermission$FileOperation", "CheckPermission", "FileOperation", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CheckPermission$FileOperation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"CheckPermission$FileOperation",
	"java.lang.Enum",
	nullptr,
	_CheckPermission$FileOperation_FieldInfo_,
	_CheckPermission$FileOperation_MethodInfo_,
	"Ljava/lang/Enum<LCheckPermission$FileOperation;>;",
	nullptr,
	_CheckPermission$FileOperation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CheckPermission"
};

$Object* allocate$CheckPermission$FileOperation($Class* clazz) {
	return $of($alloc(CheckPermission$FileOperation));
}

CheckPermission$FileOperation* CheckPermission$FileOperation::READ = nullptr;
CheckPermission$FileOperation* CheckPermission$FileOperation::WRITE = nullptr;
CheckPermission$FileOperation* CheckPermission$FileOperation::DELETE = nullptr;
CheckPermission$FileOperation* CheckPermission$FileOperation::EXEC = nullptr;
$CheckPermission$FileOperationArray* CheckPermission$FileOperation::$VALUES = nullptr;

$CheckPermission$FileOperationArray* CheckPermission$FileOperation::$values() {
	$init(CheckPermission$FileOperation);
	return $new($CheckPermission$FileOperationArray, {
		CheckPermission$FileOperation::READ,
		CheckPermission$FileOperation::WRITE,
		CheckPermission$FileOperation::DELETE,
		CheckPermission$FileOperation::EXEC
	});
}

$CheckPermission$FileOperationArray* CheckPermission$FileOperation::values() {
	$init(CheckPermission$FileOperation);
	return $cast($CheckPermission$FileOperationArray, CheckPermission$FileOperation::$VALUES->clone());
}

CheckPermission$FileOperation* CheckPermission$FileOperation::valueOf($String* name) {
	$init(CheckPermission$FileOperation);
	return $cast(CheckPermission$FileOperation, $Enum::valueOf(CheckPermission$FileOperation::class$, name));
}

void CheckPermission$FileOperation::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CheckPermission$FileOperation($Class* class$) {
	$assignStatic(CheckPermission$FileOperation::READ, $new(CheckPermission$FileOperation, "READ"_s, 0));
	$assignStatic(CheckPermission$FileOperation::WRITE, $new(CheckPermission$FileOperation, "WRITE"_s, 1));
	$assignStatic(CheckPermission$FileOperation::DELETE, $new(CheckPermission$FileOperation, "DELETE"_s, 2));
	$assignStatic(CheckPermission$FileOperation::EXEC, $new(CheckPermission$FileOperation, "EXEC"_s, 3));
	$assignStatic(CheckPermission$FileOperation::$VALUES, CheckPermission$FileOperation::$values());
}

CheckPermission$FileOperation::CheckPermission$FileOperation() {
}

$Class* CheckPermission$FileOperation::load$($String* name, bool initialize) {
	$loadClass(CheckPermission$FileOperation, name, initialize, &_CheckPermission$FileOperation_ClassInfo_, clinit$CheckPermission$FileOperation, allocate$CheckPermission$FileOperation);
	return class$;
}

$Class* CheckPermission$FileOperation::class$ = nullptr;