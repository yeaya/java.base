#include <CheckPermission$FileOperation.h>
#include <CheckPermission.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DELETE
#undef EXEC
#undef READ
#undef WRITE

using $CheckPermission$FileOperationArray = $Array<CheckPermission$FileOperation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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

void CheckPermission$FileOperation::clinit$($Class* clazz) {
	$assignStatic(CheckPermission$FileOperation::READ, $new(CheckPermission$FileOperation, "READ"_s, 0));
	$assignStatic(CheckPermission$FileOperation::WRITE, $new(CheckPermission$FileOperation, "WRITE"_s, 1));
	$assignStatic(CheckPermission$FileOperation::DELETE, $new(CheckPermission$FileOperation, "DELETE"_s, 2));
	$assignStatic(CheckPermission$FileOperation::EXEC, $new(CheckPermission$FileOperation, "EXEC"_s, 3));
	$assignStatic(CheckPermission$FileOperation::$VALUES, CheckPermission$FileOperation::$values());
}

CheckPermission$FileOperation::CheckPermission$FileOperation() {
}

$Class* CheckPermission$FileOperation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"READ", "LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckPermission$FileOperation, READ)},
		{"WRITE", "LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckPermission$FileOperation, WRITE)},
		{"DELETE", "LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckPermission$FileOperation, DELETE)},
		{"EXEC", "LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckPermission$FileOperation, EXEC)},
		{"$VALUES", "[LCheckPermission$FileOperation;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CheckPermission$FileOperation, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LCheckPermission$FileOperation;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CheckPermission$FileOperation, $values, $CheckPermission$FileOperationArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(CheckPermission$FileOperation, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC, $staticMethod(CheckPermission$FileOperation, valueOf, CheckPermission$FileOperation*, $String*)},
		{"values", "()[LCheckPermission$FileOperation;", nullptr, $PUBLIC | $STATIC, $staticMethod(CheckPermission$FileOperation, values, $CheckPermission$FileOperationArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckPermission$FileOperation", "CheckPermission", "FileOperation", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"CheckPermission$FileOperation",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LCheckPermission$FileOperation;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CheckPermission"
	};
	$loadClass(CheckPermission$FileOperation, name, initialize, &classInfo$$, CheckPermission$FileOperation::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CheckPermission$FileOperation));
	});
	return class$;
}

$Class* CheckPermission$FileOperation::class$ = nullptr;