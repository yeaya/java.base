#include <jdk/internal/icu/text/BidiBase$TextAttributeConstants.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <jdk/internal/access/JavaAWTFontAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/icu/text/BidiBase$TextAttributeConstants$1.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

#undef BIDI_EMBEDDING
#undef FALSE
#undef NUMERIC_SHAPING
#undef RUN_DIRECTION
#undef RUN_DIRECTION_LTR

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $JavaAWTFontAccess = ::jdk::internal::access::JavaAWTFontAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $BidiBase = ::jdk::internal::icu::text::BidiBase;
using $BidiBase$TextAttributeConstants$1 = ::jdk::internal::icu::text::BidiBase$TextAttributeConstants$1;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiBase$TextAttributeConstants_FieldInfo_[] = {
	{"jafa", "Ljdk/internal/access/JavaAWTFontAccess;", nullptr, $STATIC | $FINAL, $staticField(BidiBase$TextAttributeConstants, jafa)},
	{"RUN_DIRECTION", "Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $STATIC | $FINAL, $staticField(BidiBase$TextAttributeConstants, RUN_DIRECTION)},
	{"NUMERIC_SHAPING", "Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $STATIC | $FINAL, $staticField(BidiBase$TextAttributeConstants, NUMERIC_SHAPING)},
	{"BIDI_EMBEDDING", "Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $STATIC | $FINAL, $staticField(BidiBase$TextAttributeConstants, BIDI_EMBEDDING)},
	{"RUN_DIRECTION_LTR", "Ljava/lang/Boolean;", nullptr, $STATIC | $FINAL, $staticField(BidiBase$TextAttributeConstants, RUN_DIRECTION_LTR)},
	{}
};

$MethodInfo _BidiBase$TextAttributeConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase$TextAttributeConstants::*)()>(&BidiBase$TextAttributeConstants::init$))},
	{"getTextAttribute", "(Ljava/lang/String;)Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AttributedCharacterIterator$Attribute*(*)($String*)>(&BidiBase$TextAttributeConstants::getTextAttribute))},
	{}
};

$InnerClassInfo _BidiBase$TextAttributeConstants_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$TextAttributeConstants", "jdk.internal.icu.text.BidiBase", "TextAttributeConstants", $PRIVATE | $STATIC},
	{"jdk.internal.icu.text.BidiBase$TextAttributeConstants$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BidiBase$TextAttributeConstants_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.text.BidiBase$TextAttributeConstants",
	"java.lang.Object",
	nullptr,
	_BidiBase$TextAttributeConstants_FieldInfo_,
	_BidiBase$TextAttributeConstants_MethodInfo_,
	nullptr,
	nullptr,
	_BidiBase$TextAttributeConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase"
};

$Object* allocate$BidiBase$TextAttributeConstants($Class* clazz) {
	return $of($alloc(BidiBase$TextAttributeConstants));
}

$JavaAWTFontAccess* BidiBase$TextAttributeConstants::jafa = nullptr;

$AttributedCharacterIterator$Attribute* BidiBase$TextAttributeConstants::RUN_DIRECTION = nullptr;
$AttributedCharacterIterator$Attribute* BidiBase$TextAttributeConstants::NUMERIC_SHAPING = nullptr;
$AttributedCharacterIterator$Attribute* BidiBase$TextAttributeConstants::BIDI_EMBEDDING = nullptr;

$Boolean* BidiBase$TextAttributeConstants::RUN_DIRECTION_LTR = nullptr;

void BidiBase$TextAttributeConstants::init$() {
}

$AttributedCharacterIterator$Attribute* BidiBase$TextAttributeConstants::getTextAttribute($String* name) {
	$init(BidiBase$TextAttributeConstants);
	if (BidiBase$TextAttributeConstants::jafa == nullptr) {
		return $new($BidiBase$TextAttributeConstants$1, name);
	} else {
		return $cast($AttributedCharacterIterator$Attribute, $nc(BidiBase$TextAttributeConstants::jafa)->getTextAttributeConstant(name));
	}
}

void clinit$BidiBase$TextAttributeConstants($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$Class::forName("java.awt.font.TextAttribute"_s, true, nullptr);
		} catch ($ClassNotFoundException&) {
			$catch();
		}
	}
	$assignStatic(BidiBase$TextAttributeConstants::jafa, $SharedSecrets::getJavaAWTFontAccess());
	$assignStatic(BidiBase$TextAttributeConstants::RUN_DIRECTION, BidiBase$TextAttributeConstants::getTextAttribute("RUN_DIRECTION"_s));
	$assignStatic(BidiBase$TextAttributeConstants::NUMERIC_SHAPING, BidiBase$TextAttributeConstants::getTextAttribute("NUMERIC_SHAPING"_s));
	$assignStatic(BidiBase$TextAttributeConstants::BIDI_EMBEDDING, BidiBase$TextAttributeConstants::getTextAttribute("BIDI_EMBEDDING"_s));
	$init($Boolean);
	$assignStatic(BidiBase$TextAttributeConstants::RUN_DIRECTION_LTR, (BidiBase$TextAttributeConstants::jafa == nullptr) ? $Boolean::FALSE : $cast($Boolean, $nc(BidiBase$TextAttributeConstants::jafa)->getTextAttributeConstant("RUN_DIRECTION_LTR"_s)));
}

BidiBase$TextAttributeConstants::BidiBase$TextAttributeConstants() {
}

$Class* BidiBase$TextAttributeConstants::load$($String* name, bool initialize) {
	$loadClass(BidiBase$TextAttributeConstants, name, initialize, &_BidiBase$TextAttributeConstants_ClassInfo_, clinit$BidiBase$TextAttributeConstants, allocate$BidiBase$TextAttributeConstants);
	return class$;
}

$Class* BidiBase$TextAttributeConstants::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk