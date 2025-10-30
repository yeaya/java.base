#include <jdk/internal/module/ClassFileConstants.h>

#include <jcpp.h>

#undef ACC_MANDATED
#undef ACC_MODULE
#undef ACC_OPEN
#undef ACC_STATIC_PHASE
#undef ACC_SYNTHETIC
#undef ACC_TRANSITIVE
#undef DO_NOT_RESOLVE_BY_DEFAULT
#undef MODULE
#undef MODULE_HASHES
#undef MODULE_MAIN_CLASS
#undef MODULE_PACKAGES
#undef MODULE_RESOLUTION
#undef MODULE_TARGET
#undef SDE
#undef SOURCE_FILE
#undef WARN_DEPRECATED
#undef WARN_DEPRECATED_FOR_REMOVAL
#undef WARN_INCUBATING

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ClassFileConstants_FieldInfo_[] = {
	{"MODULE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ClassFileConstants, MODULE)},
	{"SOURCE_FILE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ClassFileConstants, SOURCE_FILE)},
	{"SDE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ClassFileConstants, SDE)},
	{"MODULE_PACKAGES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ClassFileConstants, MODULE_PACKAGES)},
	{"MODULE_MAIN_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ClassFileConstants, MODULE_MAIN_CLASS)},
	{"MODULE_TARGET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ClassFileConstants, MODULE_TARGET)},
	{"MODULE_HASHES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ClassFileConstants, MODULE_HASHES)},
	{"MODULE_RESOLUTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ClassFileConstants, MODULE_RESOLUTION)},
	{"ACC_MODULE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, ACC_MODULE)},
	{"ACC_OPEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, ACC_OPEN)},
	{"ACC_TRANSITIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, ACC_TRANSITIVE)},
	{"ACC_STATIC_PHASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, ACC_STATIC_PHASE)},
	{"ACC_SYNTHETIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, ACC_SYNTHETIC)},
	{"ACC_MANDATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, ACC_MANDATED)},
	{"DO_NOT_RESOLVE_BY_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, DO_NOT_RESOLVE_BY_DEFAULT)},
	{"WARN_DEPRECATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, WARN_DEPRECATED)},
	{"WARN_DEPRECATED_FOR_REMOVAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, WARN_DEPRECATED_FOR_REMOVAL)},
	{"WARN_INCUBATING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, WARN_INCUBATING)},
	{}
};

$MethodInfo _ClassFileConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassFileConstants::*)()>(&ClassFileConstants::init$))},
	{}
};

$ClassInfo _ClassFileConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.module.ClassFileConstants",
	"java.lang.Object",
	nullptr,
	_ClassFileConstants_FieldInfo_,
	_ClassFileConstants_MethodInfo_
};

$Object* allocate$ClassFileConstants($Class* clazz) {
	return $of($alloc(ClassFileConstants));
}

$String* ClassFileConstants::MODULE = nullptr;
$String* ClassFileConstants::SOURCE_FILE = nullptr;
$String* ClassFileConstants::SDE = nullptr;
$String* ClassFileConstants::MODULE_PACKAGES = nullptr;
$String* ClassFileConstants::MODULE_MAIN_CLASS = nullptr;
$String* ClassFileConstants::MODULE_TARGET = nullptr;
$String* ClassFileConstants::MODULE_HASHES = nullptr;
$String* ClassFileConstants::MODULE_RESOLUTION = nullptr;

void ClassFileConstants::init$() {
}

ClassFileConstants::ClassFileConstants() {
}

void clinit$ClassFileConstants($Class* class$) {
	$assignStatic(ClassFileConstants::MODULE, "Module"_s);
	$assignStatic(ClassFileConstants::SOURCE_FILE, "SourceFile"_s);
	$assignStatic(ClassFileConstants::SDE, "SourceDebugExtension"_s);
	$assignStatic(ClassFileConstants::MODULE_PACKAGES, "ModulePackages"_s);
	$assignStatic(ClassFileConstants::MODULE_MAIN_CLASS, "ModuleMainClass"_s);
	$assignStatic(ClassFileConstants::MODULE_TARGET, "ModuleTarget"_s);
	$assignStatic(ClassFileConstants::MODULE_HASHES, "ModuleHashes"_s);
	$assignStatic(ClassFileConstants::MODULE_RESOLUTION, "ModuleResolution"_s);
}

$Class* ClassFileConstants::load$($String* name, bool initialize) {
	$loadClass(ClassFileConstants, name, initialize, &_ClassFileConstants_ClassInfo_, clinit$ClassFileConstants, allocate$ClassFileConstants);
	return class$;
}

$Class* ClassFileConstants::class$ = nullptr;

		} // module
	} // internal
} // jdk