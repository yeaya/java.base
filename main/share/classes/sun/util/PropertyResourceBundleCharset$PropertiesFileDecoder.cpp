#include <sun/util/PropertyResourceBundleCharset$PropertiesFileDecoder.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <java/util/Objects.h>
#include <sun/nio/cs/ISO_8859_1.h>
#include <sun/nio/cs/UTF_8.h>
#include <sun/util/PropertyResourceBundleCharset.h>
#include <jcpp.h>

#undef INSTANCE
#undef REPORT

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $Objects = ::java::util::Objects;
using $ISO_8859_1 = ::sun::nio::cs::ISO_8859_1;
using $UTF_8 = ::sun::nio::cs::UTF_8;
using $PropertyResourceBundleCharset = ::sun::util::PropertyResourceBundleCharset;

namespace sun {
	namespace util {

bool PropertyResourceBundleCharset$PropertiesFileDecoder::$assertionsDisabled = false;

void PropertyResourceBundleCharset$PropertiesFileDecoder::init$($PropertyResourceBundleCharset* this$0, $Charset* cs, float averageCharsPerByte, float maxCharsPerByte) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$CharsetDecoder::init$(cs, averageCharsPerByte, maxCharsPerByte);
	$init($UTF_8);
	$init($CodingErrorAction);
	$set(this, cdUTF_8, $$nc($$nc($nc($UTF_8::INSTANCE)->newDecoder())->onMalformedInput($CodingErrorAction::REPORT))->onUnmappableCharacter($CodingErrorAction::REPORT));
	$set(this, cdISO_8859_1, nullptr);
}

$CoderResult* PropertyResourceBundleCharset$PropertiesFileDecoder::decodeLoop($ByteBuffer* in, $CharBuffer* out) {
	if ($Objects::nonNull(this->cdISO_8859_1)) {
		return $nc(this->cdISO_8859_1)->decode(in, out, false);
	}
	$nc(in)->mark();
	$nc(out)->mark();
	$var($CoderResult, cr, $nc(this->cdUTF_8)->decode(in, out, false));
	bool var$0 = $nc(cr)->isUnderflow();
	if (var$0 || cr->isOverflow() || this->this$0->strictUTF8) {
		return cr;
	}
	bool var$1 = !PropertyResourceBundleCharset$PropertiesFileDecoder::$assertionsDisabled;
	if (var$1) {
		bool var$2 = cr->isMalformed();
		var$1 = !(var$2 || cr->isUnmappable());
	}
	if (var$1) {
		$throwNew($AssertionError);
	}
	in->reset();
	out->reset();
	$init($ISO_8859_1);
	$set(this, cdISO_8859_1, $nc($ISO_8859_1::INSTANCE)->newDecoder());
	return $nc(this->cdISO_8859_1)->decode(in, out, false);
}

void PropertyResourceBundleCharset$PropertiesFileDecoder::clinit$($Class* clazz) {
	$load($PropertyResourceBundleCharset);
	PropertyResourceBundleCharset$PropertiesFileDecoder::$assertionsDisabled = !$PropertyResourceBundleCharset::class$->desiredAssertionStatus();
}

PropertyResourceBundleCharset$PropertiesFileDecoder::PropertyResourceBundleCharset$PropertiesFileDecoder() {
}

$Class* PropertyResourceBundleCharset$PropertiesFileDecoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/util/PropertyResourceBundleCharset;", nullptr, $FINAL | $SYNTHETIC, $field(PropertyResourceBundleCharset$PropertiesFileDecoder, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PropertyResourceBundleCharset$PropertiesFileDecoder, $assertionsDisabled)},
		{"cdUTF_8", "Ljava/nio/charset/CharsetDecoder;", nullptr, $PRIVATE, $field(PropertyResourceBundleCharset$PropertiesFileDecoder, cdUTF_8)},
		{"cdISO_8859_1", "Ljava/nio/charset/CharsetDecoder;", nullptr, $PRIVATE, $field(PropertyResourceBundleCharset$PropertiesFileDecoder, cdISO_8859_1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/PropertyResourceBundleCharset;Ljava/nio/charset/Charset;FF)V", nullptr, $PROTECTED, $method(PropertyResourceBundleCharset$PropertiesFileDecoder, init$, void, $PropertyResourceBundleCharset*, $Charset*, float, float)},
		{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(PropertyResourceBundleCharset$PropertiesFileDecoder, decodeLoop, $CoderResult*, $ByteBuffer*, $CharBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.PropertyResourceBundleCharset$PropertiesFileDecoder", "sun.util.PropertyResourceBundleCharset", "PropertiesFileDecoder", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.util.PropertyResourceBundleCharset$PropertiesFileDecoder",
		"java.nio.charset.CharsetDecoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.PropertyResourceBundleCharset"
	};
	$loadClass(PropertyResourceBundleCharset$PropertiesFileDecoder, name, initialize, &classInfo$$, PropertyResourceBundleCharset$PropertiesFileDecoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyResourceBundleCharset$PropertiesFileDecoder);
	});
	return class$;
}

$Class* PropertyResourceBundleCharset$PropertiesFileDecoder::class$ = nullptr;

	} // util
} // sun