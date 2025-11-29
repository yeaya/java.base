#include <java/lang/module/ModuleDescriptor$Requires$Modifier.h>

#include <java/lang/Enum.h>
#include <java/lang/module/ModuleDescriptor$Requires.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <jcpp.h>

#undef MANDATED
#undef STATIC
#undef SYNTHETIC
#undef TRANSITIVE

using $ModuleDescriptor$Requires$ModifierArray = $Array<::java::lang::module::ModuleDescriptor$Requires$Modifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _ModuleDescriptor$Requires$Modifier_FieldInfo_[] = {
	{"TRANSITIVE", "Ljava/lang/module/ModuleDescriptor$Requires$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Requires$Modifier, TRANSITIVE)},
	{"STATIC", "Ljava/lang/module/ModuleDescriptor$Requires$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Requires$Modifier, STATIC)},
	{"SYNTHETIC", "Ljava/lang/module/ModuleDescriptor$Requires$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Requires$Modifier, SYNTHETIC)},
	{"MANDATED", "Ljava/lang/module/ModuleDescriptor$Requires$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Requires$Modifier, MANDATED)},
	{"$VALUES", "[Ljava/lang/module/ModuleDescriptor$Requires$Modifier;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleDescriptor$Requires$Modifier, $VALUES)},
	{}
};

$MethodInfo _ModuleDescriptor$Requires$Modifier_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/module/ModuleDescriptor$Requires$Modifier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ModuleDescriptor$Requires$ModifierArray*(*)()>(&ModuleDescriptor$Requires$Modifier::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ModuleDescriptor$Requires$Modifier::*)($String*,int32_t)>(&ModuleDescriptor$Requires$Modifier::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Requires$Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ModuleDescriptor$Requires$Modifier*(*)($String*)>(&ModuleDescriptor$Requires$Modifier::valueOf))},
	{"values", "()[Ljava/lang/module/ModuleDescriptor$Requires$Modifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ModuleDescriptor$Requires$ModifierArray*(*)()>(&ModuleDescriptor$Requires$Modifier::values))},
	{}
};

$InnerClassInfo _ModuleDescriptor$Requires$Modifier_InnerClassesInfo_[] = {
	{"java.lang.module.ModuleDescriptor$Requires", "java.lang.module.ModuleDescriptor", "Requires", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.module.ModuleDescriptor$Requires$Modifier", "java.lang.module.ModuleDescriptor$Requires", "Modifier", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleDescriptor$Requires$Modifier_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.module.ModuleDescriptor$Requires$Modifier",
	"java.lang.Enum",
	nullptr,
	_ModuleDescriptor$Requires$Modifier_FieldInfo_,
	_ModuleDescriptor$Requires$Modifier_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;",
	nullptr,
	_ModuleDescriptor$Requires$Modifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.module.ModuleDescriptor"
};

$Object* allocate$ModuleDescriptor$Requires$Modifier($Class* clazz) {
	return $of($alloc(ModuleDescriptor$Requires$Modifier));
}

ModuleDescriptor$Requires$Modifier* ModuleDescriptor$Requires$Modifier::TRANSITIVE = nullptr;
ModuleDescriptor$Requires$Modifier* ModuleDescriptor$Requires$Modifier::STATIC = nullptr;
ModuleDescriptor$Requires$Modifier* ModuleDescriptor$Requires$Modifier::SYNTHETIC = nullptr;
ModuleDescriptor$Requires$Modifier* ModuleDescriptor$Requires$Modifier::MANDATED = nullptr;
$ModuleDescriptor$Requires$ModifierArray* ModuleDescriptor$Requires$Modifier::$VALUES = nullptr;

$ModuleDescriptor$Requires$ModifierArray* ModuleDescriptor$Requires$Modifier::$values() {
	$init(ModuleDescriptor$Requires$Modifier);
	return $new($ModuleDescriptor$Requires$ModifierArray, {
		ModuleDescriptor$Requires$Modifier::TRANSITIVE,
		ModuleDescriptor$Requires$Modifier::STATIC,
		ModuleDescriptor$Requires$Modifier::SYNTHETIC,
		ModuleDescriptor$Requires$Modifier::MANDATED
	});
}

$ModuleDescriptor$Requires$ModifierArray* ModuleDescriptor$Requires$Modifier::values() {
	$init(ModuleDescriptor$Requires$Modifier);
	return $cast($ModuleDescriptor$Requires$ModifierArray, ModuleDescriptor$Requires$Modifier::$VALUES->clone());
}

ModuleDescriptor$Requires$Modifier* ModuleDescriptor$Requires$Modifier::valueOf($String* name) {
	$init(ModuleDescriptor$Requires$Modifier);
	return $cast(ModuleDescriptor$Requires$Modifier, $Enum::valueOf(ModuleDescriptor$Requires$Modifier::class$, name));
}

void ModuleDescriptor$Requires$Modifier::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ModuleDescriptor$Requires$Modifier($Class* class$) {
	$assignStatic(ModuleDescriptor$Requires$Modifier::TRANSITIVE, $new(ModuleDescriptor$Requires$Modifier, "TRANSITIVE"_s, 0));
	$assignStatic(ModuleDescriptor$Requires$Modifier::STATIC, $new(ModuleDescriptor$Requires$Modifier, "STATIC"_s, 1));
	$assignStatic(ModuleDescriptor$Requires$Modifier::SYNTHETIC, $new(ModuleDescriptor$Requires$Modifier, "SYNTHETIC"_s, 2));
	$assignStatic(ModuleDescriptor$Requires$Modifier::MANDATED, $new(ModuleDescriptor$Requires$Modifier, "MANDATED"_s, 3));
	$assignStatic(ModuleDescriptor$Requires$Modifier::$VALUES, ModuleDescriptor$Requires$Modifier::$values());
}

ModuleDescriptor$Requires$Modifier::ModuleDescriptor$Requires$Modifier() {
}

$Class* ModuleDescriptor$Requires$Modifier::load$($String* name, bool initialize) {
	$loadClass(ModuleDescriptor$Requires$Modifier, name, initialize, &_ModuleDescriptor$Requires$Modifier_ClassInfo_, clinit$ModuleDescriptor$Requires$Modifier, allocate$ModuleDescriptor$Requires$Modifier);
	return class$;
}

$Class* ModuleDescriptor$Requires$Modifier::class$ = nullptr;

		} // module
	} // lang
} // java