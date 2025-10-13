#include <java/lang/module/ModuleDescriptor$Modifier.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef AUTOMATIC
#undef MANDATED
#undef OPEN
#undef SYNTHETIC

using $ModuleDescriptor$ModifierArray = $Array<::java::lang::module::ModuleDescriptor$Modifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _ModuleDescriptor$Modifier_FieldInfo_[] = {
	{"OPEN", "Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Modifier, OPEN)},
	{"AUTOMATIC", "Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Modifier, AUTOMATIC)},
	{"SYNTHETIC", "Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Modifier, SYNTHETIC)},
	{"MANDATED", "Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Modifier, MANDATED)},
	{"$VALUES", "[Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleDescriptor$Modifier, $VALUES)},
	{}
};

$MethodInfo _ModuleDescriptor$Modifier_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ModuleDescriptor$ModifierArray*(*)()>(&ModuleDescriptor$Modifier::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ModuleDescriptor$Modifier::*)($String*,int32_t)>(&ModuleDescriptor$Modifier::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ModuleDescriptor$Modifier*(*)($String*)>(&ModuleDescriptor$Modifier::valueOf))},
	{"values", "()[Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ModuleDescriptor$ModifierArray*(*)()>(&ModuleDescriptor$Modifier::values))},
	{}
};

$InnerClassInfo _ModuleDescriptor$Modifier_InnerClassesInfo_[] = {
	{"java.lang.module.ModuleDescriptor$Modifier", "java.lang.module.ModuleDescriptor", "Modifier", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleDescriptor$Modifier_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.module.ModuleDescriptor$Modifier",
	"java.lang.Enum",
	nullptr,
	_ModuleDescriptor$Modifier_FieldInfo_,
	_ModuleDescriptor$Modifier_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/module/ModuleDescriptor$Modifier;>;",
	nullptr,
	_ModuleDescriptor$Modifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.module.ModuleDescriptor"
};

$Object* allocate$ModuleDescriptor$Modifier($Class* clazz) {
	return $of($alloc(ModuleDescriptor$Modifier));
}


ModuleDescriptor$Modifier* ModuleDescriptor$Modifier::OPEN = nullptr;

ModuleDescriptor$Modifier* ModuleDescriptor$Modifier::AUTOMATIC = nullptr;

ModuleDescriptor$Modifier* ModuleDescriptor$Modifier::SYNTHETIC = nullptr;

ModuleDescriptor$Modifier* ModuleDescriptor$Modifier::MANDATED = nullptr;
$ModuleDescriptor$ModifierArray* ModuleDescriptor$Modifier::$VALUES = nullptr;

$ModuleDescriptor$ModifierArray* ModuleDescriptor$Modifier::$values() {
	$init(ModuleDescriptor$Modifier);
	return $new($ModuleDescriptor$ModifierArray, {
		ModuleDescriptor$Modifier::OPEN,
		ModuleDescriptor$Modifier::AUTOMATIC,
		ModuleDescriptor$Modifier::SYNTHETIC,
		ModuleDescriptor$Modifier::MANDATED
	});
}

$ModuleDescriptor$ModifierArray* ModuleDescriptor$Modifier::values() {
	$init(ModuleDescriptor$Modifier);
	return $cast($ModuleDescriptor$ModifierArray, ModuleDescriptor$Modifier::$VALUES->clone());
}

ModuleDescriptor$Modifier* ModuleDescriptor$Modifier::valueOf($String* name) {
	$init(ModuleDescriptor$Modifier);
	return $cast(ModuleDescriptor$Modifier, $Enum::valueOf(ModuleDescriptor$Modifier::class$, name));
}

void ModuleDescriptor$Modifier::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ModuleDescriptor$Modifier($Class* class$) {
	$assignStatic(ModuleDescriptor$Modifier::OPEN, $new(ModuleDescriptor$Modifier, "OPEN"_s, 0));
	$assignStatic(ModuleDescriptor$Modifier::AUTOMATIC, $new(ModuleDescriptor$Modifier, "AUTOMATIC"_s, 1));
	$assignStatic(ModuleDescriptor$Modifier::SYNTHETIC, $new(ModuleDescriptor$Modifier, "SYNTHETIC"_s, 2));
	$assignStatic(ModuleDescriptor$Modifier::MANDATED, $new(ModuleDescriptor$Modifier, "MANDATED"_s, 3));
	$assignStatic(ModuleDescriptor$Modifier::$VALUES, ModuleDescriptor$Modifier::$values());
}

ModuleDescriptor$Modifier::ModuleDescriptor$Modifier() {
}

$Class* ModuleDescriptor$Modifier::load$($String* name, bool initialize) {
	$loadClass(ModuleDescriptor$Modifier, name, initialize, &_ModuleDescriptor$Modifier_ClassInfo_, clinit$ModuleDescriptor$Modifier, allocate$ModuleDescriptor$Modifier);
	return class$;
}

$Class* ModuleDescriptor$Modifier::class$ = nullptr;

		} // module
	} // lang
} // java