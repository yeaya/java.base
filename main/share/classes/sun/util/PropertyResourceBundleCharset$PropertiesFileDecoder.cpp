#include <sun/util/PropertyResourceBundleCharset$PropertiesFileDecoder.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _PropertyResourceBundleCharset$PropertiesFileDecoder_FieldInfo_[] = {
	{"this$0", "Lsun/util/PropertyResourceBundleCharset;", nullptr, $FINAL | $SYNTHETIC, $field(PropertyResourceBundleCharset$PropertiesFileDecoder, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PropertyResourceBundleCharset$PropertiesFileDecoder, $assertionsDisabled)},
	{"cdUTF_8", "Ljava/nio/charset/CharsetDecoder;", nullptr, $PRIVATE, $field(PropertyResourceBundleCharset$PropertiesFileDecoder, cdUTF_8)},
	{"cdISO_8859_1", "Ljava/nio/charset/CharsetDecoder;", nullptr, $PRIVATE, $field(PropertyResourceBundleCharset$PropertiesFileDecoder, cdISO_8859_1)},
	{}
};

$MethodInfo _PropertyResourceBundleCharset$PropertiesFileDecoder_MethodInfo_[] = {
	{"<init>", "(Lsun/util/PropertyResourceBundleCharset;Ljava/nio/charset/Charset;FF)V", nullptr, $PROTECTED, $method(static_cast<void(PropertyResourceBundleCharset$PropertiesFileDecoder::*)($PropertyResourceBundleCharset*,$Charset*,float,float)>(&PropertyResourceBundleCharset$PropertiesFileDecoder::init$))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _PropertyResourceBundleCharset$PropertiesFileDecoder_InnerClassesInfo_[] = {
	{"sun.util.PropertyResourceBundleCharset$PropertiesFileDecoder", "sun.util.PropertyResourceBundleCharset", "PropertiesFileDecoder", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _PropertyResourceBundleCharset$PropertiesFileDecoder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.util.PropertyResourceBundleCharset$PropertiesFileDecoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_PropertyResourceBundleCharset$PropertiesFileDecoder_FieldInfo_,
	_PropertyResourceBundleCharset$PropertiesFileDecoder_MethodInfo_,
	nullptr,
	nullptr,
	_PropertyResourceBundleCharset$PropertiesFileDecoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.PropertyResourceBundleCharset"
};

$Object* allocate$PropertyResourceBundleCharset$PropertiesFileDecoder($Class* clazz) {
	return $of($alloc(PropertyResourceBundleCharset$PropertiesFileDecoder));
}

bool PropertyResourceBundleCharset$PropertiesFileDecoder::$assertionsDisabled = false;

void PropertyResourceBundleCharset$PropertiesFileDecoder::init$($PropertyResourceBundleCharset* this$0, $Charset* cs, float averageCharsPerByte, float maxCharsPerByte) {
	$set(this, this$0, this$0);
	$CharsetDecoder::init$(cs, averageCharsPerByte, maxCharsPerByte);
	$init($UTF_8);
	$init($CodingErrorAction);
	$set(this, cdUTF_8, $nc($($nc($($nc($UTF_8::INSTANCE)->newDecoder()))->onMalformedInput($CodingErrorAction::REPORT)))->onUnmappableCharacter($CodingErrorAction::REPORT));
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
	if (var$0 || $nc(cr)->isOverflow() || this->this$0->strictUTF8) {
		return cr;
	}
	bool var$1 = !PropertyResourceBundleCharset$PropertiesFileDecoder::$assertionsDisabled;
	if (var$1) {
		bool var$2 = $nc(cr)->isMalformed();
		var$1 = !(var$2 || $nc(cr)->isUnmappable());
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

void clinit$PropertyResourceBundleCharset$PropertiesFileDecoder($Class* class$) {
	$load($PropertyResourceBundleCharset);
	PropertyResourceBundleCharset$PropertiesFileDecoder::$assertionsDisabled = !$PropertyResourceBundleCharset::class$->desiredAssertionStatus();
}

PropertyResourceBundleCharset$PropertiesFileDecoder::PropertyResourceBundleCharset$PropertiesFileDecoder() {
}

$Class* PropertyResourceBundleCharset$PropertiesFileDecoder::load$($String* name, bool initialize) {
	$loadClass(PropertyResourceBundleCharset$PropertiesFileDecoder, name, initialize, &_PropertyResourceBundleCharset$PropertiesFileDecoder_ClassInfo_, clinit$PropertyResourceBundleCharset$PropertiesFileDecoder, allocate$PropertyResourceBundleCharset$PropertiesFileDecoder);
	return class$;
}

$Class* PropertyResourceBundleCharset$PropertiesFileDecoder::class$ = nullptr;

	} // util
} // sun