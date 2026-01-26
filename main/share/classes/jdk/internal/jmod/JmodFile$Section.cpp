#include <jdk/internal/jmod/JmodFile$Section.h>

#include <java/lang/Enum.h>
#include <jdk/internal/jmod/JmodFile.h>
#include <jcpp.h>

#undef CLASSES
#undef CONFIG
#undef HEADER_FILES
#undef LEGAL_NOTICES
#undef MAN_PAGES
#undef NATIVE_CMDS
#undef NATIVE_LIBS

using $JmodFile$SectionArray = $Array<::jdk::internal::jmod::JmodFile$Section>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace jmod {

$FieldInfo _JmodFile$Section_FieldInfo_[] = {
	{"CLASSES", "Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JmodFile$Section, CLASSES)},
	{"CONFIG", "Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JmodFile$Section, CONFIG)},
	{"HEADER_FILES", "Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JmodFile$Section, HEADER_FILES)},
	{"LEGAL_NOTICES", "Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JmodFile$Section, LEGAL_NOTICES)},
	{"MAN_PAGES", "Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JmodFile$Section, MAN_PAGES)},
	{"NATIVE_LIBS", "Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JmodFile$Section, NATIVE_LIBS)},
	{"NATIVE_CMDS", "Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JmodFile$Section, NATIVE_CMDS)},
	{"$VALUES", "[Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JmodFile$Section, $VALUES)},
	{"jmodDir", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JmodFile$Section, jmodDir$)},
	{}
};

$MethodInfo _JmodFile$Section_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JmodFile$Section, $values, $JmodFile$SectionArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(JmodFile$Section, init$, void, $String*, int32_t, $String*)},
	{"jmodDir", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(JmodFile$Section, jmodDir, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC | $STATIC, $staticMethod(JmodFile$Section, valueOf, JmodFile$Section*, $String*)},
	{"values", "()[Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC | $STATIC, $staticMethod(JmodFile$Section, values, $JmodFile$SectionArray*)},
	{}
};

$InnerClassInfo _JmodFile$Section_InnerClassesInfo_[] = {
	{"jdk.internal.jmod.JmodFile$Section", "jdk.internal.jmod.JmodFile", "Section", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JmodFile$Section_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.jmod.JmodFile$Section",
	"java.lang.Enum",
	nullptr,
	_JmodFile$Section_FieldInfo_,
	_JmodFile$Section_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/jmod/JmodFile$Section;>;",
	nullptr,
	_JmodFile$Section_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jmod.JmodFile"
};

$Object* allocate$JmodFile$Section($Class* clazz) {
	return $of($alloc(JmodFile$Section));
}

JmodFile$Section* JmodFile$Section::CLASSES = nullptr;
JmodFile$Section* JmodFile$Section::CONFIG = nullptr;
JmodFile$Section* JmodFile$Section::HEADER_FILES = nullptr;
JmodFile$Section* JmodFile$Section::LEGAL_NOTICES = nullptr;
JmodFile$Section* JmodFile$Section::MAN_PAGES = nullptr;
JmodFile$Section* JmodFile$Section::NATIVE_LIBS = nullptr;
JmodFile$Section* JmodFile$Section::NATIVE_CMDS = nullptr;
$JmodFile$SectionArray* JmodFile$Section::$VALUES = nullptr;

$JmodFile$SectionArray* JmodFile$Section::$values() {
	$init(JmodFile$Section);
	return $new($JmodFile$SectionArray, {
		JmodFile$Section::CLASSES,
		JmodFile$Section::CONFIG,
		JmodFile$Section::HEADER_FILES,
		JmodFile$Section::LEGAL_NOTICES,
		JmodFile$Section::MAN_PAGES,
		JmodFile$Section::NATIVE_LIBS,
		JmodFile$Section::NATIVE_CMDS
	});
}

$JmodFile$SectionArray* JmodFile$Section::values() {
	$init(JmodFile$Section);
	return $cast($JmodFile$SectionArray, JmodFile$Section::$VALUES->clone());
}

JmodFile$Section* JmodFile$Section::valueOf($String* name) {
	$init(JmodFile$Section);
	return $cast(JmodFile$Section, $Enum::valueOf(JmodFile$Section::class$, name));
}

void JmodFile$Section::init$($String* $enum$name, int32_t $enum$ordinal, $String* jmodDir) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, jmodDir$, jmodDir);
}

$String* JmodFile$Section::jmodDir() {
	return this->jmodDir$;
}

void clinit$JmodFile$Section($Class* class$) {
	$assignStatic(JmodFile$Section::CLASSES, $new(JmodFile$Section, "CLASSES"_s, 0, "classes"_s));
	$assignStatic(JmodFile$Section::CONFIG, $new(JmodFile$Section, "CONFIG"_s, 1, "conf"_s));
	$assignStatic(JmodFile$Section::HEADER_FILES, $new(JmodFile$Section, "HEADER_FILES"_s, 2, "include"_s));
	$assignStatic(JmodFile$Section::LEGAL_NOTICES, $new(JmodFile$Section, "LEGAL_NOTICES"_s, 3, "legal"_s));
	$assignStatic(JmodFile$Section::MAN_PAGES, $new(JmodFile$Section, "MAN_PAGES"_s, 4, "man"_s));
	$assignStatic(JmodFile$Section::NATIVE_LIBS, $new(JmodFile$Section, "NATIVE_LIBS"_s, 5, "lib"_s));
	$assignStatic(JmodFile$Section::NATIVE_CMDS, $new(JmodFile$Section, "NATIVE_CMDS"_s, 6, "bin"_s));
	$assignStatic(JmodFile$Section::$VALUES, JmodFile$Section::$values());
}

JmodFile$Section::JmodFile$Section() {
}

$Class* JmodFile$Section::load$($String* name, bool initialize) {
	$loadClass(JmodFile$Section, name, initialize, &_JmodFile$Section_ClassInfo_, clinit$JmodFile$Section, allocate$JmodFile$Section);
	return class$;
}

$Class* JmodFile$Section::class$ = nullptr;

		} // jmod
	} // internal
} // jdk