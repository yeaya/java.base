#include <sun/util/PropertyResourceBundleCharset.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _PropertyResourceBundleCharset_FieldInfo_[] = {
	{"strictUTF8", "Z", nullptr, $PRIVATE, $field(PropertyResourceBundleCharset, strictUTF8)},
	{}
};

$MethodInfo _PropertyResourceBundleCharset_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(PropertyResourceBundleCharset::*)(bool)>(&PropertyResourceBundleCharset::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PropertyResourceBundleCharset::*)($String*,$StringArray*)>(&PropertyResourceBundleCharset::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PropertyResourceBundleCharset_InnerClassesInfo_[] = {
	{"sun.util.PropertyResourceBundleCharset$PropertiesFileDecoder", "sun.util.PropertyResourceBundleCharset", "PropertiesFileDecoder", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _PropertyResourceBundleCharset_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.PropertyResourceBundleCharset",
	"java.nio.charset.Charset",
	nullptr,
	_PropertyResourceBundleCharset_FieldInfo_,
	_PropertyResourceBundleCharset_MethodInfo_,
	nullptr,
	nullptr,
	_PropertyResourceBundleCharset_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.PropertyResourceBundleCharset$PropertiesFileDecoder"
};

$Object* allocate$PropertyResourceBundleCharset($Class* clazz) {
	return $of($alloc(PropertyResourceBundleCharset));
}

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
	$loadClass(PropertyResourceBundleCharset, name, initialize, &_PropertyResourceBundleCharset_ClassInfo_, allocate$PropertyResourceBundleCharset);
	return class$;
}

$Class* PropertyResourceBundleCharset::class$ = nullptr;

	} // util
} // sun