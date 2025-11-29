#include <java/lang/module/ModuleDescriptor$Opens$Modifier.h>

#include <java/lang/Enum.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <jcpp.h>

#undef MANDATED
#undef SYNTHETIC

using $ModuleDescriptor$Opens$ModifierArray = $Array<::java::lang::module::ModuleDescriptor$Opens$Modifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _ModuleDescriptor$Opens$Modifier_FieldInfo_[] = {
	{"SYNTHETIC", "Ljava/lang/module/ModuleDescriptor$Opens$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Opens$Modifier, SYNTHETIC)},
	{"MANDATED", "Ljava/lang/module/ModuleDescriptor$Opens$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Opens$Modifier, MANDATED)},
	{"$VALUES", "[Ljava/lang/module/ModuleDescriptor$Opens$Modifier;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleDescriptor$Opens$Modifier, $VALUES)},
	{}
};

$MethodInfo _ModuleDescriptor$Opens$Modifier_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/module/ModuleDescriptor$Opens$Modifier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ModuleDescriptor$Opens$ModifierArray*(*)()>(&ModuleDescriptor$Opens$Modifier::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ModuleDescriptor$Opens$Modifier::*)($String*,int32_t)>(&ModuleDescriptor$Opens$Modifier::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Opens$Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ModuleDescriptor$Opens$Modifier*(*)($String*)>(&ModuleDescriptor$Opens$Modifier::valueOf))},
	{"values", "()[Ljava/lang/module/ModuleDescriptor$Opens$Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ModuleDescriptor$Opens$ModifierArray*(*)()>(&ModuleDescriptor$Opens$Modifier::values))},
	{}
};

$InnerClassInfo _ModuleDescriptor$Opens$Modifier_InnerClassesInfo_[] = {
	{"java.lang.module.ModuleDescriptor$Opens", "java.lang.module.ModuleDescriptor", "Opens", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.module.ModuleDescriptor$Opens$Modifier", "java.lang.module.ModuleDescriptor$Opens", "Modifier", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleDescriptor$Opens$Modifier_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.module.ModuleDescriptor$Opens$Modifier",
	"java.lang.Enum",
	nullptr,
	_ModuleDescriptor$Opens$Modifier_FieldInfo_,
	_ModuleDescriptor$Opens$Modifier_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;",
	nullptr,
	_ModuleDescriptor$Opens$Modifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.module.ModuleDescriptor"
};

$Object* allocate$ModuleDescriptor$Opens$Modifier($Class* clazz) {
	return $of($alloc(ModuleDescriptor$Opens$Modifier));
}

ModuleDescriptor$Opens$Modifier* ModuleDescriptor$Opens$Modifier::SYNTHETIC = nullptr;
ModuleDescriptor$Opens$Modifier* ModuleDescriptor$Opens$Modifier::MANDATED = nullptr;
$ModuleDescriptor$Opens$ModifierArray* ModuleDescriptor$Opens$Modifier::$VALUES = nullptr;

$ModuleDescriptor$Opens$ModifierArray* ModuleDescriptor$Opens$Modifier::$values() {
	$init(ModuleDescriptor$Opens$Modifier);
	return $new($ModuleDescriptor$Opens$ModifierArray, {
		ModuleDescriptor$Opens$Modifier::SYNTHETIC,
		ModuleDescriptor$Opens$Modifier::MANDATED
	});
}

$ModuleDescriptor$Opens$ModifierArray* ModuleDescriptor$Opens$Modifier::values() {
	$init(ModuleDescriptor$Opens$Modifier);
	return $cast($ModuleDescriptor$Opens$ModifierArray, ModuleDescriptor$Opens$Modifier::$VALUES->clone());
}

ModuleDescriptor$Opens$Modifier* ModuleDescriptor$Opens$Modifier::valueOf($String* name) {
	$init(ModuleDescriptor$Opens$Modifier);
	return $cast(ModuleDescriptor$Opens$Modifier, $Enum::valueOf(ModuleDescriptor$Opens$Modifier::class$, name));
}

void ModuleDescriptor$Opens$Modifier::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ModuleDescriptor$Opens$Modifier($Class* class$) {
	$assignStatic(ModuleDescriptor$Opens$Modifier::SYNTHETIC, $new(ModuleDescriptor$Opens$Modifier, "SYNTHETIC"_s, 0));
	$assignStatic(ModuleDescriptor$Opens$Modifier::MANDATED, $new(ModuleDescriptor$Opens$Modifier, "MANDATED"_s, 1));
	$assignStatic(ModuleDescriptor$Opens$Modifier::$VALUES, ModuleDescriptor$Opens$Modifier::$values());
}

ModuleDescriptor$Opens$Modifier::ModuleDescriptor$Opens$Modifier() {
}

$Class* ModuleDescriptor$Opens$Modifier::load$($String* name, bool initialize) {
	$loadClass(ModuleDescriptor$Opens$Modifier, name, initialize, &_ModuleDescriptor$Opens$Modifier_ClassInfo_, clinit$ModuleDescriptor$Opens$Modifier, allocate$ModuleDescriptor$Opens$Modifier);
	return class$;
}

$Class* ModuleDescriptor$Opens$Modifier::class$ = nullptr;

		} // module
	} // lang
} // java