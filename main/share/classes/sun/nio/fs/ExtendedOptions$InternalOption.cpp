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
using $Map = ::java::util::Map;
using $ExtendedOptions = ::sun::nio::fs::ExtendedOptions;
using $ExtendedOptions$Wrapper = ::sun::nio::fs::ExtendedOptions$Wrapper;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _ExtendedOptions$InternalOption_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ExtendedOptions$InternalOption::*)()>(&ExtendedOptions$InternalOption::init$))},
	{"matches", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $method(static_cast<bool(ExtendedOptions$InternalOption::*)(Object$*)>(&ExtendedOptions$InternalOption::matches))},
	{"parameter", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $method(static_cast<$Object*(ExtendedOptions$InternalOption::*)()>(&ExtendedOptions$InternalOption::parameter))},
	{"register", "(Ljava/nio/file/OpenOption;)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedOptions$InternalOption::*)($OpenOption*)>(&ExtendedOptions$InternalOption::register$))},
	{"register", "(Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedOptions$InternalOption::*)($CopyOption*)>(&ExtendedOptions$InternalOption::register$))},
	{"register", "(Ljava/nio/file/WatchEvent$Modifier;)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedOptions$InternalOption::*)($WatchEvent$Modifier*)>(&ExtendedOptions$InternalOption::register$))},
	{"register", "(Ljava/nio/file/WatchEvent$Modifier;Ljava/lang/Object;)V", "(Ljava/nio/file/WatchEvent$Modifier;TT;)V", $PUBLIC, $method(static_cast<void(ExtendedOptions$InternalOption::*)($WatchEvent$Modifier*,Object$*)>(&ExtendedOptions$InternalOption::register$))},
	{"registerInternal", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/Object;TT;)V", $PRIVATE, $method(static_cast<void(ExtendedOptions$InternalOption::*)(Object$*,Object$*)>(&ExtendedOptions$InternalOption::registerInternal))},
	{}
};

$InnerClassInfo _ExtendedOptions$InternalOption_InnerClassesInfo_[] = {
	{"sun.nio.fs.ExtendedOptions$InternalOption", "sun.nio.fs.ExtendedOptions", "InternalOption", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ExtendedOptions$InternalOption_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.nio.fs.ExtendedOptions$InternalOption",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExtendedOptions$InternalOption_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ExtendedOptions$InternalOption_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.ExtendedOptions"
};

$Object* allocate$ExtendedOptions$InternalOption($Class* clazz) {
	return $of($alloc(ExtendedOptions$InternalOption));
}

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
		return $equals(option, $nc(wrapper)->option);
	}
}

$Object* ExtendedOptions$InternalOption::parameter() {
	$init($ExtendedOptions);
	$var($ExtendedOptions$Wrapper, wrapper, $cast($ExtendedOptions$Wrapper, $nc($ExtendedOptions::internalToExternal)->get(this)));
	if (wrapper == nullptr) {
		return $of(nullptr);
	} else {
		return $of($nc(wrapper)->parameter());
	}
}

ExtendedOptions$InternalOption::ExtendedOptions$InternalOption() {
}

$Class* ExtendedOptions$InternalOption::load$($String* name, bool initialize) {
	$loadClass(ExtendedOptions$InternalOption, name, initialize, &_ExtendedOptions$InternalOption_ClassInfo_, allocate$ExtendedOptions$InternalOption);
	return class$;
}

$Class* ExtendedOptions$InternalOption::class$ = nullptr;

		} // fs
	} // nio
} // sun