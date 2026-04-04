#include <java/lang/module/ModuleDescriptor$Exports$Modifier.h>
#include <java/lang/Enum.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <jcpp.h>

#undef MANDATED
#undef SYNTHETIC

using $ModuleDescriptor$Exports$ModifierArray = $Array<::java::lang::module::ModuleDescriptor$Exports$Modifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace module {

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

void ModuleDescriptor$Exports$Modifier::clinit$($Class* clazz) {
	$assignStatic(ModuleDescriptor$Exports$Modifier::SYNTHETIC, $new(ModuleDescriptor$Exports$Modifier, "SYNTHETIC"_s, 0));
	$assignStatic(ModuleDescriptor$Exports$Modifier::MANDATED, $new(ModuleDescriptor$Exports$Modifier, "MANDATED"_s, 1));
	$assignStatic(ModuleDescriptor$Exports$Modifier::$VALUES, ModuleDescriptor$Exports$Modifier::$values());
}

ModuleDescriptor$Exports$Modifier::ModuleDescriptor$Exports$Modifier() {
}

$Class* ModuleDescriptor$Exports$Modifier::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SYNTHETIC", "Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Exports$Modifier, SYNTHETIC)},
		{"MANDATED", "Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Exports$Modifier, MANDATED)},
		{"$VALUES", "[Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleDescriptor$Exports$Modifier, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleDescriptor$Exports$Modifier, $values, $ModuleDescriptor$Exports$ModifierArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ModuleDescriptor$Exports$Modifier, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleDescriptor$Exports$Modifier, valueOf, ModuleDescriptor$Exports$Modifier*, $String*)},
		{"values", "()[Ljava/lang/module/ModuleDescriptor$Exports$Modifier;", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleDescriptor$Exports$Modifier, values, $ModuleDescriptor$Exports$ModifierArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.module.ModuleDescriptor$Exports", "java.lang.module.ModuleDescriptor", "Exports", $PUBLIC | $STATIC | $FINAL},
		{"java.lang.module.ModuleDescriptor$Exports$Modifier", "java.lang.module.ModuleDescriptor$Exports", "Modifier", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.lang.module.ModuleDescriptor$Exports$Modifier",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.module.ModuleDescriptor"
	};
	$loadClass(ModuleDescriptor$Exports$Modifier, name, initialize, &classInfo$$, ModuleDescriptor$Exports$Modifier::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ModuleDescriptor$Exports$Modifier));
	});
	return class$;
}

$Class* ModuleDescriptor$Exports$Modifier::class$ = nullptr;

		} // module
	} // lang
} // java