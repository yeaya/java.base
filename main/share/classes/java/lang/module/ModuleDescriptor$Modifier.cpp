#include <java/lang/module/ModuleDescriptor$Modifier.h>
#include <java/lang/Enum.h>
#include <java/lang/module/ModuleDescriptor.h>
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

namespace java {
	namespace lang {
		namespace module {

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

void ModuleDescriptor$Modifier::clinit$($Class* clazz) {
	$assignStatic(ModuleDescriptor$Modifier::OPEN, $new(ModuleDescriptor$Modifier, "OPEN"_s, 0));
	$assignStatic(ModuleDescriptor$Modifier::AUTOMATIC, $new(ModuleDescriptor$Modifier, "AUTOMATIC"_s, 1));
	$assignStatic(ModuleDescriptor$Modifier::SYNTHETIC, $new(ModuleDescriptor$Modifier, "SYNTHETIC"_s, 2));
	$assignStatic(ModuleDescriptor$Modifier::MANDATED, $new(ModuleDescriptor$Modifier, "MANDATED"_s, 3));
	$assignStatic(ModuleDescriptor$Modifier::$VALUES, ModuleDescriptor$Modifier::$values());
}

ModuleDescriptor$Modifier::ModuleDescriptor$Modifier() {
}

$Class* ModuleDescriptor$Modifier::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OPEN", "Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Modifier, OPEN)},
		{"AUTOMATIC", "Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Modifier, AUTOMATIC)},
		{"SYNTHETIC", "Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Modifier, SYNTHETIC)},
		{"MANDATED", "Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleDescriptor$Modifier, MANDATED)},
		{"$VALUES", "[Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleDescriptor$Modifier, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleDescriptor$Modifier, $values, $ModuleDescriptor$ModifierArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ModuleDescriptor$Modifier, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleDescriptor$Modifier, valueOf, ModuleDescriptor$Modifier*, $String*)},
		{"values", "()[Ljava/lang/module/ModuleDescriptor$Modifier;", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleDescriptor$Modifier, values, $ModuleDescriptor$ModifierArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.module.ModuleDescriptor$Modifier", "java.lang.module.ModuleDescriptor", "Modifier", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.lang.module.ModuleDescriptor$Modifier",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/lang/module/ModuleDescriptor$Modifier;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.module.ModuleDescriptor"
	};
	$loadClass(ModuleDescriptor$Modifier, name, initialize, &classInfo$$, ModuleDescriptor$Modifier::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ModuleDescriptor$Modifier));
	});
	return class$;
}

$Class* ModuleDescriptor$Modifier::class$ = nullptr;

		} // module
	} // lang
} // java