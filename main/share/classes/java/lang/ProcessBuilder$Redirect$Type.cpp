#include <java/lang/ProcessBuilder$Redirect$Type.h>

#include <java/lang/Enum.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <java/lang/ProcessBuilder.h>
#include <jcpp.h>

#undef APPEND
#undef INHERIT
#undef PIPE
#undef READ
#undef WRITE

using $ProcessBuilder$Redirect$TypeArray = $Array<::java::lang::ProcessBuilder$Redirect$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _ProcessBuilder$Redirect$Type_FieldInfo_[] = {
	{"PIPE", "Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessBuilder$Redirect$Type, PIPE)},
	{"INHERIT", "Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessBuilder$Redirect$Type, INHERIT)},
	{"READ", "Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessBuilder$Redirect$Type, READ)},
	{"WRITE", "Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessBuilder$Redirect$Type, WRITE)},
	{"APPEND", "Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessBuilder$Redirect$Type, APPEND)},
	{"$VALUES", "[Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ProcessBuilder$Redirect$Type, $VALUES)},
	{}
};

$MethodInfo _ProcessBuilder$Redirect$Type_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ProcessBuilder$Redirect$TypeArray*(*)()>(&ProcessBuilder$Redirect$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ProcessBuilder$Redirect$Type::*)($String*,int32_t)>(&ProcessBuilder$Redirect$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessBuilder$Redirect$Type*(*)($String*)>(&ProcessBuilder$Redirect$Type::valueOf))},
	{"values", "()[Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ProcessBuilder$Redirect$TypeArray*(*)()>(&ProcessBuilder$Redirect$Type::values))},
	{}
};

$InnerClassInfo _ProcessBuilder$Redirect$Type_InnerClassesInfo_[] = {
	{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.lang.ProcessBuilder$Redirect$Type", "java.lang.ProcessBuilder$Redirect", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ProcessBuilder$Redirect$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.ProcessBuilder$Redirect$Type",
	"java.lang.Enum",
	nullptr,
	_ProcessBuilder$Redirect$Type_FieldInfo_,
	_ProcessBuilder$Redirect$Type_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/ProcessBuilder$Redirect$Type;>;",
	nullptr,
	_ProcessBuilder$Redirect$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessBuilder"
};

$Object* allocate$ProcessBuilder$Redirect$Type($Class* clazz) {
	return $of($alloc(ProcessBuilder$Redirect$Type));
}

ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$Type::PIPE = nullptr;
ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$Type::INHERIT = nullptr;
ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$Type::READ = nullptr;
ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$Type::WRITE = nullptr;
ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$Type::APPEND = nullptr;
$ProcessBuilder$Redirect$TypeArray* ProcessBuilder$Redirect$Type::$VALUES = nullptr;

$ProcessBuilder$Redirect$TypeArray* ProcessBuilder$Redirect$Type::$values() {
	$init(ProcessBuilder$Redirect$Type);
	return $new($ProcessBuilder$Redirect$TypeArray, {
		ProcessBuilder$Redirect$Type::PIPE,
		ProcessBuilder$Redirect$Type::INHERIT,
		ProcessBuilder$Redirect$Type::READ,
		ProcessBuilder$Redirect$Type::WRITE,
		ProcessBuilder$Redirect$Type::APPEND
	});
}

$ProcessBuilder$Redirect$TypeArray* ProcessBuilder$Redirect$Type::values() {
	$init(ProcessBuilder$Redirect$Type);
	return $cast($ProcessBuilder$Redirect$TypeArray, ProcessBuilder$Redirect$Type::$VALUES->clone());
}

ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$Type::valueOf($String* name) {
	$init(ProcessBuilder$Redirect$Type);
	return $cast(ProcessBuilder$Redirect$Type, $Enum::valueOf(ProcessBuilder$Redirect$Type::class$, name));
}

void ProcessBuilder$Redirect$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ProcessBuilder$Redirect$Type($Class* class$) {
	$assignStatic(ProcessBuilder$Redirect$Type::PIPE, $new(ProcessBuilder$Redirect$Type, "PIPE"_s, 0));
	$assignStatic(ProcessBuilder$Redirect$Type::INHERIT, $new(ProcessBuilder$Redirect$Type, "INHERIT"_s, 1));
	$assignStatic(ProcessBuilder$Redirect$Type::READ, $new(ProcessBuilder$Redirect$Type, "READ"_s, 2));
	$assignStatic(ProcessBuilder$Redirect$Type::WRITE, $new(ProcessBuilder$Redirect$Type, "WRITE"_s, 3));
	$assignStatic(ProcessBuilder$Redirect$Type::APPEND, $new(ProcessBuilder$Redirect$Type, "APPEND"_s, 4));
	$assignStatic(ProcessBuilder$Redirect$Type::$VALUES, ProcessBuilder$Redirect$Type::$values());
}

ProcessBuilder$Redirect$Type::ProcessBuilder$Redirect$Type() {
}

$Class* ProcessBuilder$Redirect$Type::load$($String* name, bool initialize) {
	$loadClass(ProcessBuilder$Redirect$Type, name, initialize, &_ProcessBuilder$Redirect$Type_ClassInfo_, clinit$ProcessBuilder$Redirect$Type, allocate$ProcessBuilder$Redirect$Type);
	return class$;
}

$Class* ProcessBuilder$Redirect$Type::class$ = nullptr;

	} // lang
} // java