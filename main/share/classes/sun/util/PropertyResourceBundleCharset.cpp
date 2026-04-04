#include <sun/util/PropertyResourceBundleCharset.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/util/PropertyResourceBundleCharset$PropertiesFileDecoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $PropertyResourceBundleCharset$PropertiesFileDecoder = ::sun::util::PropertyResourceBundleCharset$PropertiesFileDecoder;

namespace sun {
	namespace util {

void PropertyResourceBundleCharset::init$(bool strictUTF8) {
	PropertyResourceBundleCharset::init$($(PropertyResourceBundleCharset::class$->getCanonicalName()), nullptr);
	this->strictUTF8 = strictUTF8;
}

void PropertyResourceBundleCharset::init$($String* canonicalName, $StringArray* aliases) {
	$Charset::init$(canonicalName, aliases);
	this->strictUTF8 = false;
}

bool PropertyResourceBundleCharset::contains($Charset* cs) {
	return false;
}

$CharsetDecoder* PropertyResourceBundleCharset::newDecoder() {
	return $new($PropertyResourceBundleCharset$PropertiesFileDecoder, this, this, 1.0f, 1.0f);
}

$CharsetEncoder* PropertyResourceBundleCharset::newEncoder() {
	$throwNew($UnsupportedOperationException, "Encoding is not supported"_s);
	$shouldNotReachHere();
}

PropertyResourceBundleCharset::PropertyResourceBundleCharset() {
}

$Class* PropertyResourceBundleCharset::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"strictUTF8", "Z", nullptr, $PRIVATE, $field(PropertyResourceBundleCharset, strictUTF8)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(PropertyResourceBundleCharset, init$, void, bool)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PropertyResourceBundleCharset, init$, void, $String*, $StringArray*)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(PropertyResourceBundleCharset, contains, bool, $Charset*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(PropertyResourceBundleCharset, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(PropertyResourceBundleCharset, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.PropertyResourceBundleCharset$PropertiesFileDecoder", "sun.util.PropertyResourceBundleCharset", "PropertiesFileDecoder", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.PropertyResourceBundleCharset",
		"java.nio.charset.Charset",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.util.PropertyResourceBundleCharset$PropertiesFileDecoder"
	};
	$loadClass(PropertyResourceBundleCharset, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyResourceBundleCharset);
	});
	return class$;
}

$Class* PropertyResourceBundleCharset::class$ = nullptr;

	} // util
} // sun