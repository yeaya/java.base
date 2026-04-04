#include <sun/nio/fs/AbstractWatchKey$State.h>
#include <java/lang/Enum.h>
#include <sun/nio/fs/AbstractWatchKey.h>
#include <jcpp.h>

#undef READY
#undef SIGNALLED

using $AbstractWatchKey$StateArray = $Array<::sun::nio::fs::AbstractWatchKey$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

AbstractWatchKey$State* AbstractWatchKey$State::READY = nullptr;
AbstractWatchKey$State* AbstractWatchKey$State::SIGNALLED = nullptr;
$AbstractWatchKey$StateArray* AbstractWatchKey$State::$VALUES = nullptr;

$AbstractWatchKey$StateArray* AbstractWatchKey$State::$values() {
	$init(AbstractWatchKey$State);
	return $new($AbstractWatchKey$StateArray, {
		AbstractWatchKey$State::READY,
		AbstractWatchKey$State::SIGNALLED
	});
}

$AbstractWatchKey$StateArray* AbstractWatchKey$State::values() {
	$init(AbstractWatchKey$State);
	return $cast($AbstractWatchKey$StateArray, AbstractWatchKey$State::$VALUES->clone());
}

AbstractWatchKey$State* AbstractWatchKey$State::valueOf($String* name) {
	$init(AbstractWatchKey$State);
	return $cast(AbstractWatchKey$State, $Enum::valueOf(AbstractWatchKey$State::class$, name));
}

void AbstractWatchKey$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void AbstractWatchKey$State::clinit$($Class* clazz) {
	$assignStatic(AbstractWatchKey$State::READY, $new(AbstractWatchKey$State, "READY"_s, 0));
	$assignStatic(AbstractWatchKey$State::SIGNALLED, $new(AbstractWatchKey$State, "SIGNALLED"_s, 1));
	$assignStatic(AbstractWatchKey$State::$VALUES, AbstractWatchKey$State::$values());
}

AbstractWatchKey$State::AbstractWatchKey$State() {
}

$Class* AbstractWatchKey$State::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"READY", "Lsun/nio/fs/AbstractWatchKey$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractWatchKey$State, READY)},
		{"SIGNALLED", "Lsun/nio/fs/AbstractWatchKey$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractWatchKey$State, SIGNALLED)},
		{"$VALUES", "[Lsun/nio/fs/AbstractWatchKey$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractWatchKey$State, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/nio/fs/AbstractWatchKey$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AbstractWatchKey$State, $values, $AbstractWatchKey$StateArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AbstractWatchKey$State, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/nio/fs/AbstractWatchKey$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(AbstractWatchKey$State, valueOf, AbstractWatchKey$State*, $String*)},
		{"values", "()[Lsun/nio/fs/AbstractWatchKey$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(AbstractWatchKey$State, values, $AbstractWatchKey$StateArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.AbstractWatchKey$State", "sun.nio.fs.AbstractWatchKey", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.nio.fs.AbstractWatchKey$State",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/nio/fs/AbstractWatchKey$State;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.AbstractWatchKey"
	};
	$loadClass(AbstractWatchKey$State, name, initialize, &classInfo$$, AbstractWatchKey$State::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractWatchKey$State));
	});
	return class$;
}

$Class* AbstractWatchKey$State::class$ = nullptr;

		} // fs
	} // nio
} // sun