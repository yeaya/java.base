#include <java/lang/module/ModuleDescriptor$Exports$Modifier.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MANDATED
#undef SYNTHETIC

using $ModuleDescriptor$Exports$ModifierArray = $Array<::java::lang::module::ModuleDescriptor$Exports$Modifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _ModuleDescriptor$Exports$Modifier_FieldInfo_[] = {
	{"SYNTHETIC", "Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Exports$Modifier, SYNTHETIC)},
	{"MANDATED", "Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Exports$Modifier, MANDATED)},
	{"$VALUES", "[Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleDescriptor$Exports$Modifier, $VALUES)},
	{}
};

$MethodInfo _ModuleDescriptor$Exports$Modifier_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ModuleDescriptor$Exports$ModifierArray*(*)()>(&ModuleDescriptor$Exports$Modifier::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ModuleDescriptor$Exports$Modifier::*)($String*,int32_t)>(&ModuleDescriptor$Exports$Modifier::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ModuleDescriptor$Exports$Modifier*(*)($String*)>(&ModuleDescriptor$Exports$Modifier::valueOf))},
	{"values", "()[Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ModuleDescriptor$Exports$ModifierArray*(*)()>(&ModuleDescriptor$Exports$Modifier::values))},
	{}
};

$InnerClassInfo _ModuleDescriptor$Exports$Modifier_InnerClassesInfo_[] = {
	{"java.lang.module.ModuleDescriptor$Exports", "java.lang.module.ModuleDescriptor", "Exports", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.module.ModuleDescriptor$Exports$Modifier", "java.lang.module.ModuleDescriptor$Exports", "Modifier", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleDescriptor$Exports$Modifier_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.module.ModuleDescriptor$Exports$Modifier",
	"java.lang.Enum",
	nullptr,
	_ModuleDescriptor$Exports$Modifier_FieldInfo_,
	_ModuleDescriptor$Exports$Modifier_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;",
	nullptr,
	_ModuleDescriptor$Exports$Modifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.module.ModuleDescriptor"
};

$Object* allocate$ModuleDescriptor$Exports$Modifier($Class* clazz) {
	return $of($alloc(ModuleDescriptor$Exports$Modifier));
}


ModuleDescriptor$Exports$Modifier* ModuleDescriptor$Exports$Modifier::SYNTHETIC = nullptr;

ModuleDescriptor$Exports$Modifier* ModuleDescriptor$Exports$Modifier::MANDATED = nullptr;
$ModuleDescriptor$Exports$ModifierArray* ModuleDescriptor$Exports$Modifier::$VALUES = nullptr;

$ModuleDescriptor$Exports$ModifierArray* ModuleDescriptor$Exports$Modifier::$values() {
	$init(ModuleDescriptor$Exports$Modifier);
	return $new($ModuleDescriptor$Exports$ModifierArray, {
		ModuleDescriptor$Exports$Modifier::SYNTHETIC,
		ModuleDescriptor$Exports$Modifier::MANDATED
	});
}

$ModuleDescriptor$Exports$ModifierArray* ModuleDescriptor$Exports$Modifier::values() {
	$init(ModuleDescriptor$Exports$Modifier);
	return $cast($ModuleDescriptor$Exports$ModifierArray, ModuleDescriptor$Exports$Modifier::$VALUES->clone());
}

ModuleDescriptor$Exports$Modifier* ModuleDescriptor$Exports$Modifier::valueOf($String* name) {
	$init(ModuleDescriptor$Exports$Modifier);
	return $cast(ModuleDescriptor$Exports$Modifier, $Enum::valueOf(ModuleDescriptor$Exports$Modifier::class$, name));
}

void ModuleDescriptor$Exports$Modifier::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ModuleDescriptor$Exports$Modifier($Class* class$) {
	$assignStatic(ModuleDescriptor$Exports$Modifier::SYNTHETIC, $new(ModuleDescriptor$Exports$Modifier, "SYNTHETIC"_s, 0));
	$assignStatic(ModuleDescriptor$Exports$Modifier::MANDATED, $new(ModuleDescriptor$Exports$Modifier, "MANDATED"_s, 1));
	$assignStatic(ModuleDescriptor$Exports$Modifier::$VALUES, ModuleDescriptor$Exports$Modifier::$values());
}

ModuleDescriptor$Exports$Modifier::ModuleDescriptor$Exports$Modifier() {
}

$Class* ModuleDescriptor$Exports$Modifier::load$($String* name, bool initialize) {
	$loadClass(ModuleDescriptor$Exports$Modifier, name, initialize, &_ModuleDescriptor$Exports$Modifier_ClassInfo_, clinit$ModuleDescriptor$Exports$Modifier, allocate$ModuleDescriptor$Exports$Modifier);
	return class$;
}

$Class* ModuleDescriptor$Exports$Modifier::class$ = nullptr;

		} // module
	} // lang
} // java