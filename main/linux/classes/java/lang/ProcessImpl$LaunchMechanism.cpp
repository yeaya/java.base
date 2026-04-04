#include <java/lang/ProcessImpl$LaunchMechanism.h>
#include <java/lang/Enum.h>
#include <java/lang/ProcessImpl.h>
#include <jcpp.h>

#undef FORK
#undef POSIX_SPAWN
#undef VFORK

using $ProcessImpl$LaunchMechanismArray = $Array<::java::lang::ProcessImpl$LaunchMechanism>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

ProcessImpl$LaunchMechanism* ProcessImpl$LaunchMechanism::FORK = nullptr;
ProcessImpl$LaunchMechanism* ProcessImpl$LaunchMechanism::POSIX_SPAWN = nullptr;
ProcessImpl$LaunchMechanism* ProcessImpl$LaunchMechanism::VFORK = nullptr;
$ProcessImpl$LaunchMechanismArray* ProcessImpl$LaunchMechanism::$VALUES = nullptr;

$ProcessImpl$LaunchMechanismArray* ProcessImpl$LaunchMechanism::$values() {
	$init(ProcessImpl$LaunchMechanism);
	return $new($ProcessImpl$LaunchMechanismArray, {
		ProcessImpl$LaunchMechanism::FORK,
		ProcessImpl$LaunchMechanism::POSIX_SPAWN,
		ProcessImpl$LaunchMechanism::VFORK
	});
}

$ProcessImpl$LaunchMechanismArray* ProcessImpl$LaunchMechanism::values() {
	$init(ProcessImpl$LaunchMechanism);
	return $cast($ProcessImpl$LaunchMechanismArray, ProcessImpl$LaunchMechanism::$VALUES->clone());
}

ProcessImpl$LaunchMechanism* ProcessImpl$LaunchMechanism::valueOf($String* name) {
	$init(ProcessImpl$LaunchMechanism);
	return $cast(ProcessImpl$LaunchMechanism, $Enum::valueOf(ProcessImpl$LaunchMechanism::class$, name));
}

void ProcessImpl$LaunchMechanism::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void ProcessImpl$LaunchMechanism::clinit$($Class* clazz) {
	$assignStatic(ProcessImpl$LaunchMechanism::FORK, $new(ProcessImpl$LaunchMechanism, "FORK"_s, 0));
	$assignStatic(ProcessImpl$LaunchMechanism::POSIX_SPAWN, $new(ProcessImpl$LaunchMechanism, "POSIX_SPAWN"_s, 1));
	$assignStatic(ProcessImpl$LaunchMechanism::VFORK, $new(ProcessImpl$LaunchMechanism, "VFORK"_s, 2));
	$assignStatic(ProcessImpl$LaunchMechanism::$VALUES, ProcessImpl$LaunchMechanism::$values());
}

ProcessImpl$LaunchMechanism::ProcessImpl$LaunchMechanism() {
}

$Class* ProcessImpl$LaunchMechanism::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORK", "Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessImpl$LaunchMechanism, FORK)},
		{"POSIX_SPAWN", "Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessImpl$LaunchMechanism, POSIX_SPAWN)},
		{"VFORK", "Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessImpl$LaunchMechanism, VFORK)},
		{"$VALUES", "[Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ProcessImpl$LaunchMechanism, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ProcessImpl$LaunchMechanism, $values, $ProcessImpl$LaunchMechanismArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ProcessImpl$LaunchMechanism, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessImpl$LaunchMechanism, valueOf, ProcessImpl$LaunchMechanism*, $String*)},
		{"values", "()[Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessImpl$LaunchMechanism, values, $ProcessImpl$LaunchMechanismArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessImpl$LaunchMechanism", "java.lang.ProcessImpl", "LaunchMechanism", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"java.lang.ProcessImpl$LaunchMechanism",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/lang/ProcessImpl$LaunchMechanism;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessImpl"
	};
	$loadClass(ProcessImpl$LaunchMechanism, name, initialize, &classInfo$$, ProcessImpl$LaunchMechanism::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ProcessImpl$LaunchMechanism));
	});
	return class$;
}

$Class* ProcessImpl$LaunchMechanism::class$ = nullptr;

	} // lang
} // java