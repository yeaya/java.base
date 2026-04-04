#include <sun/util/resources/LocaleData$1.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/resources/Bundles.h>
#include <sun/util/resources/LocaleData$LocaleDataStrategy.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Bundles = ::sun::util::resources::Bundles;
using $LocaleData$LocaleDataStrategy = ::sun::util::resources::LocaleData$LocaleDataStrategy;

namespace sun {
	namespace util {
		namespace resources {

void LocaleData$1::init$($String* val$baseName, $Locale* val$locale) {
	$set(this, val$baseName, val$baseName);
	$set(this, val$locale, val$locale);
}

$Object* LocaleData$1::run() {
	$init($LocaleData$LocaleDataStrategy);
	return $Bundles::of(this->val$baseName, this->val$locale, $LocaleData$LocaleDataStrategy::INSTANCE);
}

LocaleData$1::LocaleData$1() {
}

$Class* LocaleData$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$locale", "Ljava/util/Locale;", nullptr, $FINAL | $SYNTHETIC, $field(LocaleData$1, val$locale)},
		{"val$baseName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(LocaleData$1, val$baseName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, 0, $method(LocaleData$1, init$, void, $String*, $Locale*)},
		{"run", "()Ljava/util/ResourceBundle;", nullptr, $PUBLIC, $virtualMethod(LocaleData$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.resources.LocaleData",
		"getBundle",
		"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.resources.LocaleData$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.resources.LocaleData$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/ResourceBundle;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.resources.LocaleData"
	};
	$loadClass(LocaleData$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleData$1);
	});
	return class$;
}

$Class* LocaleData$1::class$ = nullptr;

		} // resources
	} // util
} // sun