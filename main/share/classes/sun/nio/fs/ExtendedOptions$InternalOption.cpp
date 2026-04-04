#include <sun/nio/fs/ExtendedOptions$InternalOption.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/util/Map.h>
#include <sun/nio/fs/ExtendedOptions$Wrapper.h>
#include <sun/nio/fs/ExtendedOptions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CopyOption = ::java::nio::file::CopyOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $WatchEvent$Modifier = ::java::nio::file::WatchEvent$Modifier;
using $ExtendedOptions = ::sun::nio::fs::ExtendedOptions;
using $ExtendedOptions$Wrapper = ::sun::nio::fs::ExtendedOptions$Wrapper;

namespace sun {
	namespace nio {
		namespace fs {

void ExtendedOptions$InternalOption::init$() {
}

void ExtendedOptions$InternalOption::registerInternal(Object$* option, Object$* param) {
	$var($ExtendedOptions$Wrapper, wrapper, $new($ExtendedOptions$Wrapper, option, param));
	$init($ExtendedOptions);
	$nc($ExtendedOptions::internalToExternal)->put(this, wrapper);
}

void ExtendedOptions$InternalOption::register$($OpenOption* option) {
	registerInternal(option, nullptr);
}

void ExtendedOptions$InternalOption::register$($CopyOption* option) {
	registerInternal(option, nullptr);
}

void ExtendedOptions$InternalOption::register$($WatchEvent$Modifier* option) {
	registerInternal(option, nullptr);
}

void ExtendedOptions$InternalOption::register$($WatchEvent$Modifier* option, Object$* param) {
	registerInternal(option, param);
}

bool ExtendedOptions$InternalOption::matches(Object$* option) {
	$init($ExtendedOptions);
	$var($ExtendedOptions$Wrapper, wrapper, $cast($ExtendedOptions$Wrapper, $nc($ExtendedOptions::internalToExternal)->get(this)));
	if (wrapper == nullptr) {
		return false;
	} else {
		return $equals(option, wrapper->option);
	}
}

$Object* ExtendedOptions$InternalOption::parameter() {
	$init($ExtendedOptions);
	$var($ExtendedOptions$Wrapper, wrapper, $cast($ExtendedOptions$Wrapper, $nc($ExtendedOptions::internalToExternal)->get(this)));
	if (wrapper == nullptr) {
		return nullptr;
	} else {
		return wrapper->parameter();
	}
}

ExtendedOptions$InternalOption::ExtendedOptions$InternalOption() {
}

$Class* ExtendedOptions$InternalOption::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ExtendedOptions$InternalOption, init$, void)},
		{"matches", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $method(ExtendedOptions$InternalOption, matches, bool, Object$*)},
		{"parameter", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $method(ExtendedOptions$InternalOption, parameter, $Object*)},
		{"register", "(Ljava/nio/file/OpenOption;)V", nullptr, $PUBLIC, $method(ExtendedOptions$InternalOption, register$, void, $OpenOption*)},
		{"register", "(Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC, $method(ExtendedOptions$InternalOption, register$, void, $CopyOption*)},
		{"register", "(Ljava/nio/file/WatchEvent$Modifier;)V", nullptr, $PUBLIC, $method(ExtendedOptions$InternalOption, register$, void, $WatchEvent$Modifier*)},
		{"register", "(Ljava/nio/file/WatchEvent$Modifier;Ljava/lang/Object;)V", "(Ljava/nio/file/WatchEvent$Modifier;TT;)V", $PUBLIC, $method(ExtendedOptions$InternalOption, register$, void, $WatchEvent$Modifier*, Object$*)},
		{"registerInternal", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/Object;TT;)V", $PRIVATE, $method(ExtendedOptions$InternalOption, registerInternal, void, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.ExtendedOptions$InternalOption", "sun.nio.fs.ExtendedOptions", "InternalOption", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.nio.fs.ExtendedOptions$InternalOption",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.ExtendedOptions"
	};
	$loadClass(ExtendedOptions$InternalOption, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedOptions$InternalOption);
	});
	return class$;
}

$Class* ExtendedOptions$InternalOption::class$ = nullptr;

		} // fs
	} // nio
} // sun