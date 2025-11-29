#include <java/util/ResourceBundle$NoFallbackControl.h>

#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/ResourceBundle$SingleFormatControl.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

#undef CLASS_ONLY_NO_FALLBACK
#undef FORMAT_CLASS
#undef FORMAT_DEFAULT
#undef FORMAT_PROPERTIES
#undef NO_FALLBACK
#undef PROPERTIES_ONLY_NO_FALLBACK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $ResourceBundle$SingleFormatControl = ::java::util::ResourceBundle$SingleFormatControl;

namespace java {
	namespace util {

$FieldInfo _ResourceBundle$NoFallbackControl_FieldInfo_[] = {
	{"NO_FALLBACK", "Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$NoFallbackControl, NO_FALLBACK)},
	{"PROPERTIES_ONLY_NO_FALLBACK", "Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$NoFallbackControl, PROPERTIES_ONLY_NO_FALLBACK)},
	{"CLASS_ONLY_NO_FALLBACK", "Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$NoFallbackControl, CLASS_ONLY_NO_FALLBACK)},
	{}
};

$MethodInfo _ResourceBundle$NoFallbackControl_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PROTECTED, $method(static_cast<void(ResourceBundle$NoFallbackControl::*)($List*)>(&ResourceBundle$NoFallbackControl::init$))},
	{"getFallbackLocale", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ResourceBundle$NoFallbackControl_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$NoFallbackControl", "java.util.ResourceBundle", "NoFallbackControl", $PRIVATE | $STATIC | $FINAL},
	{"java.util.ResourceBundle$SingleFormatControl", "java.util.ResourceBundle", "SingleFormatControl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ResourceBundle$NoFallbackControl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ResourceBundle$NoFallbackControl",
	"java.util.ResourceBundle$SingleFormatControl",
	nullptr,
	_ResourceBundle$NoFallbackControl_FieldInfo_,
	_ResourceBundle$NoFallbackControl_MethodInfo_,
	nullptr,
	nullptr,
	_ResourceBundle$NoFallbackControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$NoFallbackControl($Class* clazz) {
	return $of($alloc(ResourceBundle$NoFallbackControl));
}

$ResourceBundle$Control* ResourceBundle$NoFallbackControl::NO_FALLBACK = nullptr;
$ResourceBundle$Control* ResourceBundle$NoFallbackControl::PROPERTIES_ONLY_NO_FALLBACK = nullptr;
$ResourceBundle$Control* ResourceBundle$NoFallbackControl::CLASS_ONLY_NO_FALLBACK = nullptr;

void ResourceBundle$NoFallbackControl::init$($List* formats) {
	$ResourceBundle$SingleFormatControl::init$(formats);
}

$Locale* ResourceBundle$NoFallbackControl::getFallbackLocale($String* baseName, $Locale* locale) {
	if (baseName == nullptr || locale == nullptr) {
		$throwNew($NullPointerException);
	}
	return nullptr;
}

void clinit$ResourceBundle$NoFallbackControl($Class* class$) {
	$init($ResourceBundle$Control);
	$assignStatic(ResourceBundle$NoFallbackControl::NO_FALLBACK, $new(ResourceBundle$NoFallbackControl, $ResourceBundle$Control::FORMAT_DEFAULT));
	$assignStatic(ResourceBundle$NoFallbackControl::PROPERTIES_ONLY_NO_FALLBACK, $new(ResourceBundle$NoFallbackControl, $ResourceBundle$Control::FORMAT_PROPERTIES));
	$assignStatic(ResourceBundle$NoFallbackControl::CLASS_ONLY_NO_FALLBACK, $new(ResourceBundle$NoFallbackControl, $ResourceBundle$Control::FORMAT_CLASS));
}

ResourceBundle$NoFallbackControl::ResourceBundle$NoFallbackControl() {
}

$Class* ResourceBundle$NoFallbackControl::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$NoFallbackControl, name, initialize, &_ResourceBundle$NoFallbackControl_ClassInfo_, clinit$ResourceBundle$NoFallbackControl, allocate$ResourceBundle$NoFallbackControl);
	return class$;
}

$Class* ResourceBundle$NoFallbackControl::class$ = nullptr;

	} // util
} // java