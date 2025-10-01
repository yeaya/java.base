#include <java/lang/ProcessImpl$Platform.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ProcessImpl$LaunchMechanism.h>
#include <java/lang/ProcessImpl.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef AIX
#undef POSIX_SPAWN
#undef BSD
#undef FORK
#undef ENGLISH
#undef VFORK
#undef LINUX

using $ProcessImpl$LaunchMechanismArray = $Array<::java::lang::ProcessImpl$LaunchMechanism>;
using $ProcessImpl$PlatformArray = $Array<::java::lang::ProcessImpl$Platform>;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessImpl = ::java::lang::ProcessImpl;
using $ProcessImpl$LaunchMechanism = ::java::lang::ProcessImpl$LaunchMechanism;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace lang {

class ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0 : public $PrivilegedAction {
	$class(ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(ProcessImpl$Platform* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$launchMechanism$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0>());
	}
	ProcessImpl$Platform* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0, inst$)},
	{}
};
$MethodInfo ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ProcessImpl$Platform;)V", nullptr, $PUBLIC, $method(static_cast<void(ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0::*)(ProcessImpl$Platform*)>(&ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0::load$($String* name, bool initialize) {
	$loadClass(ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0::class$ = nullptr;

$FieldInfo _ProcessImpl$Platform_FieldInfo_[] = {
	{"LINUX", "Ljava/lang/ProcessImpl$Platform;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessImpl$Platform, LINUX)},
	{"BSD", "Ljava/lang/ProcessImpl$Platform;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessImpl$Platform, BSD)},
	{"AIX", "Ljava/lang/ProcessImpl$Platform;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProcessImpl$Platform, AIX)},
	{"$VALUES", "[Ljava/lang/ProcessImpl$Platform;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ProcessImpl$Platform, $VALUES)},
	{"defaultLaunchMechanism", "Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, $FINAL, $field(ProcessImpl$Platform, defaultLaunchMechanism)},
	{"validLaunchMechanisms", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/ProcessImpl$LaunchMechanism;>;", $FINAL, $field(ProcessImpl$Platform, validLaunchMechanisms)},
	{}
};

$MethodInfo _ProcessImpl$Platform_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/ProcessImpl$Platform;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ProcessImpl$PlatformArray*(*)()>(&ProcessImpl$Platform::$values))},
	{"<init>", "(Ljava/lang/String;I[Ljava/lang/ProcessImpl$LaunchMechanism;)V", "([Ljava/lang/ProcessImpl$LaunchMechanism;)V", $PRIVATE | $TRANSIENT, $method(static_cast<void(ProcessImpl$Platform::*)($String*,int32_t,$ProcessImpl$LaunchMechanismArray*)>(&ProcessImpl$Platform::init$))},
	{"get", "()Ljava/lang/ProcessImpl$Platform;", nullptr, $STATIC, $method(static_cast<ProcessImpl$Platform*(*)()>(&ProcessImpl$Platform::get))},
	{"lambda$launchMechanism$0", "()Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ProcessImpl$LaunchMechanism*(ProcessImpl$Platform::*)()>(&ProcessImpl$Platform::lambda$launchMechanism$0))},
	{"launchMechanism", "()Ljava/lang/ProcessImpl$LaunchMechanism;", nullptr, 0, $method(static_cast<$ProcessImpl$LaunchMechanism*(ProcessImpl$Platform::*)()>(&ProcessImpl$Platform::launchMechanism))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/ProcessImpl$Platform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessImpl$Platform*(*)($String*)>(&ProcessImpl$Platform::valueOf))},
	{"values", "()[Ljava/lang/ProcessImpl$Platform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ProcessImpl$PlatformArray*(*)()>(&ProcessImpl$Platform::values))},
	{}
};

$InnerClassInfo _ProcessImpl$Platform_InnerClassesInfo_[] = {
	{"java.lang.ProcessImpl$Platform", "java.lang.ProcessImpl", "Platform", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ProcessImpl$Platform_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.lang.ProcessImpl$Platform",
	"java.lang.Enum",
	nullptr,
	_ProcessImpl$Platform_FieldInfo_,
	_ProcessImpl$Platform_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/ProcessImpl$Platform;>;",
	nullptr,
	_ProcessImpl$Platform_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessImpl"
};

$Object* allocate$ProcessImpl$Platform($Class* clazz) {
	return $of($alloc(ProcessImpl$Platform));
}

ProcessImpl$Platform* ProcessImpl$Platform::LINUX = nullptr;
ProcessImpl$Platform* ProcessImpl$Platform::BSD = nullptr;
ProcessImpl$Platform* ProcessImpl$Platform::AIX = nullptr;
$ProcessImpl$PlatformArray* ProcessImpl$Platform::$VALUES = nullptr;

$ProcessImpl$PlatformArray* ProcessImpl$Platform::$values() {
	$init(ProcessImpl$Platform);
	return $new($ProcessImpl$PlatformArray, {
		ProcessImpl$Platform::LINUX,
		ProcessImpl$Platform::BSD,
		ProcessImpl$Platform::AIX
	});
}

$ProcessImpl$PlatformArray* ProcessImpl$Platform::values() {
	$init(ProcessImpl$Platform);
	return $cast($ProcessImpl$PlatformArray, ProcessImpl$Platform::$VALUES->clone());
}

ProcessImpl$Platform* ProcessImpl$Platform::valueOf($String* name) {
	$init(ProcessImpl$Platform);
	return $cast(ProcessImpl$Platform, $Enum::valueOf(ProcessImpl$Platform::class$, name));
}

void ProcessImpl$Platform::init$($String* $enum$name, int32_t $enum$ordinal, $ProcessImpl$LaunchMechanismArray* launchMechanisms) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, defaultLaunchMechanism, $nc(launchMechanisms)->get(0));
	$set(this, validLaunchMechanisms, $EnumSet::copyOf($(static_cast<$Collection*>($Arrays::asList(launchMechanisms)))));
}

$ProcessImpl$LaunchMechanism* ProcessImpl$Platform::launchMechanism() {
	$beforeCallerSensitive();
	return $cast($ProcessImpl$LaunchMechanism, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0, this))));
}

ProcessImpl$Platform* ProcessImpl$Platform::get() {
	$init(ProcessImpl$Platform);
	$var($String, osName, $GetPropertyAction::privilegedGetProperty("os.name"_s));
	if ($nc(osName)->equals("Linux"_s)) {
		return ProcessImpl$Platform::LINUX;
	}
	if ($nc(osName)->contains("OS X"_s)) {
		return ProcessImpl$Platform::BSD;
	}
	if ($nc(osName)->equals("AIX"_s)) {
		return ProcessImpl$Platform::AIX;
	}
	$throwNew($Error, $$str({osName, " is not a supported OS platform."_s}));
}

$ProcessImpl$LaunchMechanism* ProcessImpl$Platform::lambda$launchMechanism$0() {
	$var($String, s, $System::getProperty("jdk.lang.Process.launchMechanism"_s));
	$ProcessImpl$LaunchMechanism* lm = nullptr;
	if (s == nullptr) {
		lm = this->defaultLaunchMechanism;
		$init($Locale);
		$assign(s, $nc($($nc(lm)->name()))->toLowerCase($Locale::ENGLISH));
	} else {
		try {
			$init($Locale);
			lm = $ProcessImpl$LaunchMechanism::valueOf($($nc(s)->toUpperCase($Locale::ENGLISH)));
		} catch ($IllegalArgumentException&) {
			$var($IllegalArgumentException, e, $catch());
			lm = nullptr;
		}
	}
	if (lm == nullptr || !$nc(this->validLaunchMechanisms)->contains(lm)) {
		$throwNew($Error, $$str({s, " is not a supported process launch mechanism on this platform."_s}));
	}
	return lm;
}

void clinit$ProcessImpl$Platform($Class* class$) {
		$init($ProcessImpl$LaunchMechanism);
	$assignStatic(ProcessImpl$Platform::LINUX, $new(ProcessImpl$Platform, "LINUX"_s, 0, $$new($ProcessImpl$LaunchMechanismArray, {
		$ProcessImpl$LaunchMechanism::POSIX_SPAWN,
		$ProcessImpl$LaunchMechanism::VFORK,
		$ProcessImpl$LaunchMechanism::FORK
	})));
	$assignStatic(ProcessImpl$Platform::BSD, $new(ProcessImpl$Platform, "BSD"_s, 1, $$new($ProcessImpl$LaunchMechanismArray, {
		$ProcessImpl$LaunchMechanism::POSIX_SPAWN,
		$ProcessImpl$LaunchMechanism::FORK
	})));
	$assignStatic(ProcessImpl$Platform::AIX, $new(ProcessImpl$Platform, "AIX"_s, 2, $$new($ProcessImpl$LaunchMechanismArray, {
		$ProcessImpl$LaunchMechanism::POSIX_SPAWN,
		$ProcessImpl$LaunchMechanism::FORK
	})));
	$assignStatic(ProcessImpl$Platform::$VALUES, ProcessImpl$Platform::$values());
}

ProcessImpl$Platform::ProcessImpl$Platform() {
}

$Class* ProcessImpl$Platform::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0::classInfo$.name)) {
			return ProcessImpl$Platform$$Lambda$lambda$launchMechanism$0::load$(name, initialize);
		}
	}
	$loadClass(ProcessImpl$Platform, name, initialize, &_ProcessImpl$Platform_ClassInfo_, clinit$ProcessImpl$Platform, allocate$ProcessImpl$Platform);
	return class$;
}

$Class* ProcessImpl$Platform::class$ = nullptr;

	} // lang
} // java