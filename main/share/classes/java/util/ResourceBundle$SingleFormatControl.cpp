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
using $ResourceBundle = ::java::util::ResourceBundle;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;

namespace java {
	namespace util {

$FieldInfo _ResourceBundle$SingleFormatControl_FieldInfo_[] = {
	{"PROPERTIES_ONLY", "Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$SingleFormatControl, PROPERTIES_ONLY)},
	{"CLASS_ONLY", "Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$SingleFormatControl, CLASS_ONLY)},
	{"formats", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ResourceBundle$SingleFormatControl, formats)},
	{}
};

$MethodInfo _ResourceBundle$SingleFormatControl_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PROTECTED, $method(static_cast<void(ResourceBundle$SingleFormatControl::*)($List*)>(&ResourceBundle$SingleFormatControl::init$))},
	{"getFormats", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ResourceBundle$SingleFormatControl_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$SingleFormatControl", "java.util.ResourceBundle", "SingleFormatControl", $PRIVATE | $STATIC},
	{"java.util.ResourceBundle$Control", "java.util.ResourceBundle", "Control", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ResourceBundle$SingleFormatControl_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$SingleFormatControl",
	"java.util.ResourceBundle$Control",
	nullptr,
	_ResourceBundle$SingleFormatControl_FieldInfo_,
	_ResourceBundle$SingleFormatControl_MethodInfo_,
	nullptr,
	nullptr,
	_ResourceBundle$SingleFormatControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$SingleFormatControl($Class* clazz) {
	return $of($alloc(ResourceBundle$SingleFormatControl));
}

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

void clinit$ResourceBundle$SingleFormatControl($Class* class$) {
	$init($ResourceBundle$Control);
	$assignStatic(ResourceBundle$SingleFormatControl::PROPERTIES_ONLY, $new(ResourceBundle$SingleFormatControl, $ResourceBundle$Control::FORMAT_PROPERTIES));
	$assignStatic(ResourceBundle$SingleFormatControl::CLASS_ONLY, $new(ResourceBundle$SingleFormatControl, $ResourceBundle$Control::FORMAT_CLASS));
}

ResourceBundle$SingleFormatControl::ResourceBundle$SingleFormatControl() {
}

$Class* ResourceBundle$SingleFormatControl::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$SingleFormatControl, name, initialize, &_ResourceBundle$SingleFormatControl_ClassInfo_, clinit$ResourceBundle$SingleFormatControl, allocate$ResourceBundle$SingleFormatControl);
	return class$;
}

$Class* ResourceBundle$SingleFormatControl::class$ = nullptr;

	} // util
} // java