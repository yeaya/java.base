#include <sun/util/resources/LocaleData$1.h>

#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/resources/Bundles$Strategy.h>
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
using $Bundles$Strategy = ::sun::util::resources::Bundles$Strategy;
using $LocaleData$LocaleDataStrategy = ::sun::util::resources::LocaleData$LocaleDataStrategy;

namespace sun {
	namespace util {
		namespace resources {

$FieldInfo _LocaleData$1_FieldInfo_[] = {
	{"val$locale", "Ljava/util/Locale;", nullptr, $FINAL | $SYNTHETIC, $field(LocaleData$1, val$locale)},
	{"val$baseName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(LocaleData$1, val$baseName)},
	{}
};

$MethodInfo _LocaleData$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, 0, $method(LocaleData$1, init$, void, $String*, $Locale*)},
	{"run", "()Ljava/util/ResourceBundle;", nullptr, $PUBLIC, $virtualMethod(LocaleData$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _LocaleData$1_EnclosingMethodInfo_ = {
	"sun.util.resources.LocaleData",
	"getBundle",
	"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;"
};

$InnerClassInfo _LocaleData$1_InnerClassesInfo_[] = {
	{"sun.util.resources.LocaleData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LocaleData$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.resources.LocaleData$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_LocaleData$1_FieldInfo_,
	_LocaleData$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/ResourceBundle;>;",
	&_LocaleData$1_EnclosingMethodInfo_,
	_LocaleData$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.LocaleData"
};

$Object* allocate$LocaleData$1($Class* clazz) {
	return $of($alloc(LocaleData$1));
}

void LocaleData$1::init$($String* val$baseName, $Locale* val$locale) {
	$set(this, val$baseName, val$baseName);
	$set(this, val$locale, val$locale);
}

$Object* LocaleData$1::run() {
	$init($LocaleData$LocaleDataStrategy);
	return $of($Bundles::of(this->val$baseName, this->val$locale, $LocaleData$LocaleDataStrategy::INSTANCE));
}

LocaleData$1::LocaleData$1() {
}

$Class* LocaleData$1::load$($String* name, bool initialize) {
	$loadClass(LocaleData$1, name, initialize, &_LocaleData$1_ClassInfo_, allocate$LocaleData$1);
	return class$;
}

$Class* LocaleData$1::class$ = nullptr;

		} // resources
	} // util
} // sun