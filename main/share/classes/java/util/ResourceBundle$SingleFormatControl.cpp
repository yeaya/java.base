#include <java/util/ResourceBundle$SingleFormatControl.h>
#include <java/util/List.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

#undef CLASS_ONLY
#undef FORMAT_CLASS
#undef FORMAT_PROPERTIES
#undef PROPERTIES_ONLY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;

namespace java {
	namespace util {

$ResourceBundle$Control* ResourceBundle$SingleFormatControl::PROPERTIES_ONLY = nullptr;
$ResourceBundle$Control* ResourceBundle$SingleFormatControl::CLASS_ONLY = nullptr;

void ResourceBundle$SingleFormatControl::init$($List* formats) {
	$ResourceBundle$Control::init$();
	$set(this, formats, formats);
}

$List* ResourceBundle$SingleFormatControl::getFormats($String* baseName) {
	if (baseName == nullptr) {
		$throwNew($NullPointerException);
	}
	return this->formats;
}

void ResourceBundle$SingleFormatControl::clinit$($Class* clazz) {
	$init($ResourceBundle$Control);
	$assignStatic(ResourceBundle$SingleFormatControl::PROPERTIES_ONLY, $new(ResourceBundle$SingleFormatControl, $ResourceBundle$Control::FORMAT_PROPERTIES));
	$assignStatic(ResourceBundle$SingleFormatControl::CLASS_ONLY, $new(ResourceBundle$SingleFormatControl, $ResourceBundle$Control::FORMAT_CLASS));
}

ResourceBundle$SingleFormatControl::ResourceBundle$SingleFormatControl() {
}

$Class* ResourceBundle$SingleFormatControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PROPERTIES_ONLY", "Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$SingleFormatControl, PROPERTIES_ONLY)},
		{"CLASS_ONLY", "Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$SingleFormatControl, CLASS_ONLY)},
		{"formats", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ResourceBundle$SingleFormatControl, formats)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PROTECTED, $method(ResourceBundle$SingleFormatControl, init$, void, $List*)},
		{"getFormats", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ResourceBundle$SingleFormatControl, getFormats, $List*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$SingleFormatControl", "java.util.ResourceBundle", "SingleFormatControl", $PRIVATE | $STATIC},
		{"java.util.ResourceBundle$Control", "java.util.ResourceBundle", "Control", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ResourceBundle$SingleFormatControl",
		"java.util.ResourceBundle$Control",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$SingleFormatControl, name, initialize, &classInfo$$, ResourceBundle$SingleFormatControl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$SingleFormatControl);
	});
	return class$;
}

$Class* ResourceBundle$SingleFormatControl::class$ = nullptr;

	} // util
} // java